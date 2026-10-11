#include<stdio.h>
//i=0-->1
//i=1>>1
//i=2>>2
int main(){
    int n;
    printf("enter the number of stars you want:");
    scanf("%d", &n);
for(int i=0; i<n ;i++)  
{
for(int j=0; j<i+1 ;j++){
printf("*");
}
printf("\n");
}
return 0;
}

