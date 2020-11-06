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
    
    int helpArray[size];
    
    for(int i = 0; i < 9 ; i++)
    {
       helpArray[i] = 0;
    }
    
    
    
    
    
    
    while (helpArray[9] == 0)
    {
        random = rand() % 9 + 1;
        printf("The random number is: %d \n",random);

        for(int i = 0; i < 9 ; i++)
        {
            Numbers[i] = random;
            helpArray[i] = 1;
        }

        
        

    }
    

    
    
    printf("New Array:\n");

    printArray(Numbers);
                      

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
