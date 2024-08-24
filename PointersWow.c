#include <stdio.h>

void doWork(int a, int b, int *sum, int *prod, int *avg);

int main () {

int a =3, b=5;
int sum, prod, avg ;
doWork(a,b, &sum, &prod, &avg);    //pointers use kia tha isliye address use kr rhe idhar
printf("sum = %d, prod = %d, avg = %d", sum, prod, avg);
return 0;
}

void doWork(int a, int b, int *sum, int *prod, int *avg){              //a, b ka paas by value kia h, bakiyo ka pass by reference
    *sum = a+b;
    *prod = a*b;
    *avg = (a+b)/2;
}