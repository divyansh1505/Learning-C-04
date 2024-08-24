#include <stdio.h>

int countNumbers(int arr[], int n);

int main (){
int arr []= {1,2,3,4,5};
printf("%d  \n", *(arr+2));  // the pointer will point to 0th array and usse 2 aage jaoge to 3 vala milega 
printf("%d \n", *(arr+5));   // isme output nhi aayega as 0th array se 5 aage kuch nhi h  

return 0;
}