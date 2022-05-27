#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <pthread.h>

pthread_mutex_t mutexFuel;
pthread_cond_t condFuel;

int fuel = 0;

void *fuel_filling()
{

    for (int i = 0; i < 5; i++)
    {

        pthread_mutex_lock(&mutexFuel);
        fuel += 60;

        printf("Filling fuel %d .....\n", fuel);

        pthread_mutex_unlock(&mutexFuel);
        pthread_cond_broadcast(&condFuel);
        // Multiple thread then using broadcast 
        // Broadcast to share all thread  

        sleep(1);
    }
}

void *car()
{

    pthread_mutex_lock(&mutexFuel);

    while (fuel < 40)
    {
        printf("No fuel, waiting...\n");
        pthread_cond_wait(&condFuel, &mutexFuel);
        
    }

    fuel -= 40;

    printf("Got fuel,  Now left %d...\n", fuel);

    pthread_mutex_unlock(&mutexFuel);
}

int main()
{

    pthread_t t[5];

    pthread_cond_init(&condFuel, NULL);
    pthread_mutex_init(&mutexFuel, NULL);

    for (int i = 0; i < 5; i++)
    {
        if (i == 4)
        {
            pthread_create(&t[i], NULL, &fuel_filling, NULL);
        }
        else
        {
            pthread_create(&t[i], NULL, &car, NULL);
        }
    }

    for (int i = 0; i < 5; i++)
    {
            pthread_join(t[i], NULL);
    }

    pthread_cond_destroy(&condFuel);
    pthread_mutex_unlock(&mutexFuel);

    return 0;
}