#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>
#define size 9
void printArray(int Array[]);
int isOne(int Array[]);


int main(int argc, char const *argv[])
{
    
    int Numbers[size];
    int i;
    srand(time(NULL));

    for(int i = 0; i < 9 ; i++)
    {
       Numbers[i] = i + 1;
    }

    printArray(Numbers);
    
    int random;
    
    
    
    
    
    while (isOne(Numbers))
    {
        random = rand() % 9 + 1;
        printf("The random number is: %d \n",random);

        int index;

        for(i = 1; i < 10 ; i++)
        {
            if (Numbers[i] == random)
            {
                index = i;
                Numbers[i] = -1;
                break;
            }        
        }
    
        printf("New Array:\n");

        printArray(Numbers);
    }                    

    
    
    return 0;
}


void printArray(int Array[])
{
	for(int loop = 0; loop < 9; loop++)
	{    
        if (Array[loop] != -1 )
        {
            printf("%d",Array[loop]); 
		    printf("\n");   
        }
        	
		 
  	}
}

int lastOne(int Array[])
{
    
    for (int i = 0; i < 9; i++)
    {
        if (Array[i] == -1)
        {
            return 0;
        }
        else
        {
            return 1;
        }              
    }        
}
