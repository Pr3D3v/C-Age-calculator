#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <input.h>

void result()
{
    //variables 
    int birthyear;
    int birthmonth;
    int birthday;
    int currentyear;
    int currentmonth;
    int currentday;
    /////////////////
    int ageYear = currentyear-birthyear;
    int ageMonth = birthmonth-currentmonth;
    int ageday = birthday-currentday;

    printf("you are %d year old\n" , ageYear);
    printf("you are %d month early\n" , ageMonth);
    printf("you are %d day early\n" , ageday);

}