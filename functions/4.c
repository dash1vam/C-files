#include<stdio.h>
void swap(int *a, int *b, int *c);
void swap(int *a, int *b, int *c){
    int temp;
    temp = *a; // c ki value safe rakh li
    *a = *b;   // b ki value c me daal di
    *b = *c;   // a ki value b me daal di
    *c= temp;
}
    int main(){
    int l, m , n;
    printf("enter the numbers:");
    scanf("%d %d %d", &l, &m, &n);
    swap(&l, &m, &n);
    printf("the value of a is %d \nthe value of b is %d \nthe value of c is %d", l, m, n);

return 0;
}