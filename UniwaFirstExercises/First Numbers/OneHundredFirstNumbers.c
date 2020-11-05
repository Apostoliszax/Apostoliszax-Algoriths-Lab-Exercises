#include <stdio.h>

int isFirst( int a);
void printArray(int First[]);

int main( void )
{	

	int i, r, c;
	int First[100];

	c = 0;
	i = 0;

	while (c < 100);
	{
		i++;
		if (isFirst(i))
		{
		First[c]= i;
		c = c + 1;
		}
	} 
	
	

	printArray(First);	
	
	return 0;
}



int isFirst( int a)
{
	int y, i, c;
		
	c = 0;
	for( i=1; i<=a; i++)
	{   y= a%i;
		if (y == 0)
		{	c= c+1;
		}
	}
	
	if (c == 2)
	{ return 1;
	}
	else
	{ return 0;
	}
}

void printArray(int First[])
{
	for(int loop = 0; loop < 100; loop++)
	{
    	printf("First Number: ");
		printf("%d",First[loop]); 
		printf("\n");    
  
	}
}
