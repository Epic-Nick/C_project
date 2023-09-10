#include<stdio.h>
#include<stdlib.h>

int calc(float a,float b,char operator)
{
    float answer;
    switch(operator)
    {
        case '+' : answer = a+b;
        break;
        case '-' : answer = a-b;
        break;
        case '*' : answer = a*b;
        break;
        case '/' : answer = a/b;
        break;
        default : printf("\n\t\t\t\t\t\t\tInvalid Operator");
        answer=0;
        break;
    }
    return answer;
}

int main()
{
    char operator,conti='y';
    float a,b,solution;
    while(conti=='y')
    {
        printf("\n\n\t\t\t\t\t\tEnter any one Operator (+ - * /) : \n\n\t\t\t\t\t\t\t\t");
        fflush(stdin);
        scanf("%c",&operator);
        printf("\n\n\t\t\t\t\t\t\tEnter 2 operands :\n\n\t\t\t\t\t\t\t\t");
        fflush(stdin);
        scanf("%f %f",&a,&b);
        solution = calc(a,b,operator);
        printf("\n\n\t\t\t\t\t\t%f %c %f = %f",a,operator,b,solution);
        printf("\n\n\n\t\t\t\t\t\tTo continue press y otherwise n : ");
        fflush(stdin);
        scanf("%c",&conti);
    }
    return 0;
}