#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void input()
{
    int birthyear;
    int birthmonth;
    int birthday;
    int currentyear;
    int currentmonth;
    int currentday;
    //variables 
    int birthyear;
    int birthmonth;
    int birthday;
    int currentyear;
    int currentmonth;
    int currentday;
    //////////////
    printf("please enter your DOB (Date Of Birth)\n In order of \n Year\n Month\n Day\n");
    scanf("%d" , &birthyear);
    scanf("%d" , &birthmonth);
    scanf("%d" , &birthday);
    /////////////////////////////////////////////////
    printf("please enter current date\n In order of \n Year\n Month\n Day\n");
    scanf("%d" , &currentyear);
    scanf("%d" , &currentmonth);
    scanf("%d" , &currentday);

    result();
}