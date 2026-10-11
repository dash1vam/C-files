#include<stdio.h>
int fibbonacci(int n);

int fibbonacci(int n){
    if(n==1 || n==0){
        return 1;
    }

return fibbonacci(n-1)+fibbonacci(n-2);
}
int main(){
    int a;
    printf("enter any number:");
    scanf("%d",&a);
    printf("at %d position the number is:%d", a,fibbonacci(a));

}
