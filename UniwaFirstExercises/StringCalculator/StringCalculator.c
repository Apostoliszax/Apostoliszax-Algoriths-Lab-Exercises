#include <stdio.h>
#include <stdlib.h>
char *input;

int charToDigit(int i1, int i2) 
{
    int  number = 0;
    int i;
   
    for(i=i1; i<=i2; i++)
    {
       number = ( number + (input[i] - '0'))*10;
    }

    number =  number/10;

    return  number;
}

int Recuression(int start, int end) 
{
    
    int i,rightParenthesis1,leftParenthesis1,rightParenthesis,leftParenthesis;
    int temporary=0;
    i=start;

    if(input[start] == '(' && input[end] == ')')
    {
        rightParenthesis = 1;
        leftParenthesis = 0;
        i++;
        while(!rightParenthesis == leftParenthesis)
        {
            if (input[i] == '(')
                rightParenthesis++;
            if (input[i] == ')')
                leftParenthesis++;
            i++;
        }
        i--;
        if(i==end)
        {
            return Recuression(start+1,end-1);
        }
    }


    for(i=start; i<=end; i++)
    {
        //   printf("tralala: %d %d \n", start, end);
        switch(input[i])
        {
            case '+':
                return Recuression(start,(i-1))+Recuression((i+1),end);
            case '-':
                if(i>temporary)
                    temporary = i;
                break;
            case '*':
                if(temporary == 0)
                    temporary = i;
                break;
            case '/':
                if(temporary==0 || input[temporary]=='/')
                    temporary = i;
                break;
            case '(':
                rightParenthesis1 = 1;
                leftParenthesis1 = 0;
                i++;
                while(!rightParenthesis1 == leftParenthesis1) {
                if (input[i] == '(')
                    rightParenthesis1++;
                if (input[i] == ')')
                    leftParenthesis1++;
                i++;
                }
                i--;
                break;
        }

    }

    if(temporary>0)
    {
        switch(input[temporary]) 
        {
        case '-': return Recuression(start, temporary -1)-Recuression(temporary +1, end);
        case '*': return Recuression(start, temporary -1)*Recuression(temporary +1, end);
        case '/': return Recuression(start, temporary -1)/Recuression(temporary +1, end);
        }
    }

    return charToDigit(start,end);
}

int main()
{
    printf("Tell me an operation: ");

    input = malloc(sizeof(char) * 9000);

    char r;
    int z = 0;
    int l;
    
    scanf("%c", &r);
    while(r != '\n')
    {
        if(r != ' ')
        {
            input[z] = r;
            z++;
        }
        scanf("%c", &r);
    }
    int result = Recuression(0,z-1);
    printf("%d\n", result);
    return 0;
}