#include <conio.h>
#include <stdio.h>

int main() {
    char mess[80];

    printf("Enter message (up to 80 characters): ");
    for (int i = 0; i < 80; i++) {
        mess[i] = getche();
        if (mess[i] == '\r')  // Check for Enter key press
            break;
    }

    printf("\nEcoded message: ");
    for (int i = 0; mess[i] != '\0'; i++)
        printf("%c", mess[i] + 1);

    printf("\nDecoded message: ");
    for (int i = 0; mess[i] != '\0'; i++)
        printf("%c", mess[i]);

    return 0;
}


/*ch = getchar(); waits to press enter, ch = getche();//doesnt wait to press enter */