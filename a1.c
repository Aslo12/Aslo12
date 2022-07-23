#include<stdio.h>
void main()
{
    int age,amt,time;
    float si;
    printf("enter age and amount to invest:\n");
    scanf("%d%d",&age,&amt);
    if(age>=18&&age<=55 && amt>=10000&&amt<=100000)
    {
        if(age<=25)
        time=30;
        else if(age>=40)
        time=10;
        else
        time=20;
        si=amt*5*time/100.0;
        printf("your maturity amount will be %f",amt+si);

    }
    else{
        printf("\n you are not eligible for investment");
    }
}