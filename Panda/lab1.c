#include <stdio.h>


int main(int argc, char const *argv[])
{
    char StockName , at;
    double StockPrice;


    printf("Stock: ");
    scanf("%c %lf",&StockName, &StockPrice);
    
    printf("\n");
    
    int number;
    printf("Number: ");
    scanf("%d",&number);
    printf("%d",number);




    return 0;
}
