#include<stdio.h>
int main(){
int a,b,c;
printf("enter subject A marks:",a );
scanf("%d", &a);
printf("enter subject B marks:",b );
scanf("%d", &b);
printf("enter subject C marks:",c);
scanf("%d", &c);

if(a<=33 && b<=33 && c<=33 ){

    printf("youre fail nga keep dreaming\n");
}
else if((a+b+c)/3<40){

    printf("lol...try hard lil nga or yo daddy gonna spank yo ass\n");
}
else{
    printf("yo gng youre passed keep it up blud..gng forever\n");
}

printf("your total marks are: %f", (float)(a+b+c)/3);
    return 0;

}