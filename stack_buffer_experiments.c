#include <stdio.h>
#include <string.h>

void valid_access(void) {
    char buffer[5] = "Hi";
    printf("Valid: %s\n", buffer);
}

void overflow(void) {
    char buffer[5] = "Hey";
    buffer[5] = '!';
    printf("Overflow: %s\n", buffer);
}

void safe_input(void) {
    char buffer[5];
    fgets(buffer, sizeof buffer, stdin);
    printf("Input: %s\n", buffer);
}

int main(void) {
    valid_access();
    overflow();
    safe_input();
    return 0;
}
