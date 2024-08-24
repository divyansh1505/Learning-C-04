#include<stdio.h>

int main (){

float price [3];

printf("1st product : \n");
scanf("%f", &price[0]);
printf("2nd product :  \n");
scanf("%f", &price[1]);
printf("3rd product :  \n");
scanf("%f", &price[2]);

printf("1st prouct - %f, 2nd product - %f, 3rd product - %f", price[0]+(0.18*price[0]), price[1]+(0.18*price[1]), price[2]+(0.18*price[2]));
return 0;
}