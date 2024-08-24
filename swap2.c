//Swapping a and b 
#include <stdio.h>

void swap(int a, int b);
void _swap(int *a, int *b);

int main (){
    int x =3;
    int y = 8;
    _swap(&x, &y);
    printf("x is %d & y is %d  \n", x, y);
    return 0;
}

// call by reference 
void _swap(int *a, int *b) {
int t =*a;
*a = *b;
*b = t;
}