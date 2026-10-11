#include<stdio.h>
int count(int arr[], int n);
int no_of_pos;
int count(int arr[], int n){
    for(int i=0; i<n; i++){
        if(arr[i]>0){
        no_of_pos++;
        }
    }
    return no_of_pos;
}
int main(){
    int a[10];
    printf("enter the numbers:");
    scanf("%d", a[10]);
    printf("no of positive numbers are:%d", count(a,10));
}