#include <stdio.h>
#include <stdlib.h> 
#include <time.h>   

int main() {
    srand(time(0)); 

    int randomNumber = (rand() % 100) + 1, number,guesses=0;
   do
   {
    printf("enter the number:");
    scanf("%d",&number);
    if(number==randomNumber){
        printf("correct!\n");
    }
    else if (number>randomNumber)
    {
        printf("the number is smaller than your guessed number\n");
    }
    else if (number<randomNumber)
    {
        printf("the number is greater than your guessed number\n");
    
    }
    guesses++;
    
   } while (number!=randomNumber);

    printf("you guessed the number in %d guesses", guesses);

    return 0;
}