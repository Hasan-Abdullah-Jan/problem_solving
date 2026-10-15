#include <stdio.h>

int main()
{
    int years = 0;
    double balance, goal;

    printf("Enter the Balance: ");
    scanf("%lf", &balance);

    printf("Enter the Goal: ");
    scanf("%lf", &goal);

    while (balance<=goal){
        balance = balance*1.1;
        years++;
    }
    printf("With the interest rate of 10%%, It will take %d years to reach the goal of %.2f.", years, goal);
}