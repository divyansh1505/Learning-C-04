#include <stdio.h>
int square(int n);

int main (){
    int nn;
printf("Enter number :");
scanf("%d", &nn);
square (nn);
    return 0;
}

int square (int n){
n = n*n;
printf("Sqaure is : %d", n );
}