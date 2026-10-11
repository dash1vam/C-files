
#include <stdio.h>

int main() {
    int otp;
    int attempts = 0;
    int maxattempts = 3;

    do {
        printf("enter otp: ");
        scanf("%d", &otp);

        
        if (otp < 1000 || otp > 9999) {
            attempts++;
            printf("invalid digits educate yourself mf!\n");
            if (attempts < maxattempts) {
                printf("try again!\n");
            }
            continue;
        }

        
        if (otp == 1234) {
            printf("correct otp blud..gng forever\n");
            break;
        }

        
        attempts++;
        if (attempts < maxattempts) {
            printf("looks like you're not da one try again!\n");
        }

    } while (otp != 1234 && attempts < maxattempts);

    
    if (attempts == maxattempts && otp != 1234) {
        printf("too much ATTEMPTS nga...imma spank yo fine ahh account rq!\n");
    }

    return 0;
}