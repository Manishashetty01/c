#include <stdio.h>
#include<math.h>
void main()
{
    float principle, time, rate,amt, CI;
    printf("Enter principle (amount): ");
    scanf("%f", &principle);

    printf("Enter time: ");
    scanf("%f", &time);

    printf("Enter rate: ");
    scanf("%f", &rate);

    amt =  principle * ((pow((1 + rate / 100), time)));
    CI = amt - principle;
    printf("Compound Interest = %f", CI);


}