//Swapping a and b 
#include <stdio.h>

void swap(int a, int b);

int main (){
    int x =3;
    int y = 8;
    swap (x, y);
    printf("x is %d & y is %d  \n", x, y);
    return 0;
}

// call by value 
void swap(int a, int b) {
int t =a;
a =b;
b =t;
printf("a is %d & b is %d  \n", a, b);
}