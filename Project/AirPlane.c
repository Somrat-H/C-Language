#include <stdio.h>
#include <stdlib.h>

int main()
{   
    int size;

    printf("How many Plane Number: \n");
    scanf("%d", &size);

    int *Air_Speed = malloc(size * sizeof(int));
    int *Fuel_Type = malloc(size * sizeof(int));
    int *Num_Passengers = malloc(size * sizeof(int));
    int *Ticket_Price = malloc(size * sizeof(int)); 

    float *Efficiency = malloc(size * sizeof(float));
    float *Drag = malloc(size * sizeof(float));
    float *Overall_Profit = malloc(size * sizeof(float));
    
   
    for(int i = 0; i < size; i++){

        printf("Enter your %d plane of speed, feul, passenger and price of ticket\n", i+1);
        scanf("%d %d %d %d", &Air_Speed[i], &Fuel_Type[i], &Num_Passengers[i], &Ticket_Price[i]);

    }

    for(int i = 0; i < size; i++)
    {
        Efficiency[i] = 100 / (200 - 80 * Fuel_Type[i]);
        Drag[i] = 0.758 * Air_Speed[i]; 
    }

    for(int i = 0; i < size ; i++)
    {
        if(Air_Speed[i] < 10 && Efficiency[i] < 0.10 && Efficiency[i] > 0.20)
        {
            Overall_Profit[i] = 0.15 - 0.05 * Drag[i];
        }
        else if(Air_Speed[i] >= 100 && Air_Speed[i] < 200 && Efficiency[i] > 0.20 && Efficiency[i] < 0.20)
        {
            Overall_Profit[i] = 0.25 - 0.05 * Drag[i];
        }
        else if(Air_Speed[i] >= 200 && Air_Speed[i] < 300 && Efficiency[i] > 0.30 && Efficiency[i] < 0.50)
        {
            Overall_Profit[i] = 0.35 - 0.05 * Drag[i];
        }
        else if(Air_Speed[i] >= 300 && Air_Speed[i] < 450 && Efficiency[i] > 0.50 && Efficiency[i] < 0.70)
        {
            Overall_Profit[i] = 0.50 - 0.05 * Drag[i];
        }
        else
        {
            Overall_Profit[i] = 0.45 - 0.05 * Drag[i];
        }
    }

    for (int i = 0; i < size; i++)
    {
        printf("Over All Profit %d of Plane is %d%%\n", i+1, abs(Overall_Profit[i]));
    }

    printf("\n");

    free(Air_Speed);
    free(Fuel_Type);
    free(Num_Passengers);
    free(Ticket_Price);
    free(Efficiency);
    free(Drag);
    free(Overall_Profit);

    return 0;
}