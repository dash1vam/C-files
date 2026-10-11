#include<stdio.h> 
int factorial(int a);

int factorial(int a){
    if(a==0 || a==1) {
return 1;
    }
    return factorial(a-1)*a;
}
int main(){
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    printf("the factorial of the number is:%d",factorial(n));
    return 0;
    
}