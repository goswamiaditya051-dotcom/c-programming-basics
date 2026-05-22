#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if (ch == 'a') {
        printf("You entered 'a'\n");
    } else if (ch == 'b') {
        printf("You entered 'b'\n");
    } else {
        printf("You entered something else\n");
    }

    return 0;
}
