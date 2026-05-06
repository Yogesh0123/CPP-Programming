#include<stdio.h>

int Addition(int no1, int no2)
{
    int Ans= 0;
    Ans = no1+no2;
    return Ans;
}

int Subtraction(int no1, int no2)
{
    int Ans= 0;
    Ans = no1-no2;
    return Ans;
}

int main()
{
    int A=11, B=10;
    int result=0;

    result=Addition(A,B);
    printf("Addition is :%d \n",result);

    result=Subtraction(A,B);
    printf("Subtraction is :%d \n",result);

    return 0;
}
//POP.c