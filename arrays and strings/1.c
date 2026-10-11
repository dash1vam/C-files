#include<stdio.h>
int main(){
    int a[5];
    for(int i=0; i<5; i++){
    printf("enter the marks:");
    scanf("%d",&a[i]);
    }
    for(int i=0; i<5; i++){
        printf("the marks at the index %d is:%d\n",i,a[i]);
    }
    return 0;
}
