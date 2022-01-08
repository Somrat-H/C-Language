#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <string.h>
#include <time.h>

#define NUM_THREADS	5

int alive = 1;

char input[100];
int sender_thread_id;
int active_threads;

// Thread function
void *thread_work(void *threadid)
{
    int tid = *((int *)threadid);
    while(alive)
    {
        if (active_threads == tid)
        {
            if (strcmp(input, "") != 0)
            {
                printf("Thread %d: Data received from thread %d: %s\n", tid, sender_thread_id, input);
            }
            printf("Thread %d: Enter message: ", tid);
            fgets(input, 100, stdin);
            if(strcmp(input, "exit\n") == 0)
            {
                printf("Exiting\n", tid);
                alive = 0;
            }
            else
            {
                int random_thread = rand() % NUM_THREADS;
                printf("Thread %d: Sending message to thread %d\n", tid, random_thread);
                sender_thread_id = tid;
                active_threads = random_thread;
            }
        }
    }
    pthread_exit(NULL);
}

// Main function
int main(int argc, char *argv[])
{
    srand(time(NULL));
    pthread_t threads[NUM_THREADS];
    int thread_ids[NUM_THREADS];
    // Initialize threads
    for(int i = 0; i < NUM_THREADS; i++)
    {
        thread_ids[i] = i;
        pthread_create(&threads[i], NULL, thread_work, (void *)&thread_ids[i]);
    }

    // Wait for threads to finish
    for(int i = 0; i < NUM_THREADS; i++)
    {
        pthread_join(threads[i], NULL);
    }

    pthread_exit(NULL);
}