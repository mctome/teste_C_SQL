#include <stdio.h>

void main() {
    char c;
    int len = 0;
    int go = 1;

    printf("\nDigite uma string: ");

    while (go){
        c = getchar();
        if (c != '\n') {
            len++;
        }
        else {
            go = 0;
        }
    }
    
    printf("Length: %d", len);
}
