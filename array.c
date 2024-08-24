#include<stdio.h>

int main (){

int marks [3];

printf("Physics marks : \n");
scanf("%d", &marks[0]);
printf("Chemistry marks :  \n");
scanf("%d", &marks[1]);
printf("Mathematics marks :  \n");
scanf("%d", &marks[2]);

printf("P - %d, C - %d, M - %d", marks[0], marks[1], marks[2]);
return 0;
}