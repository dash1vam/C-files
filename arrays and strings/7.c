#include<stdio.h>
#include<string.h>
int main(){
char st[20];
printf("enter the chars:");
scanf("%19s", st);
printf("the character is:");
for(int i = 0; st[i] != '\0'; i++){
    printf("%c", st[i]);
}
printf("\n");
puts(st);
printf("the string has %d chars", strlen(st));
fgets(st, sizeof(st), stdin);
}
