#include <stdio.h>

char convertVowelToUppercase(char ch) {
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        return ch - 32;
    }
    return ch;
}

int main() {
    char string[52];
    int i;

    printf("Enter a string: ");
    fgets(string, sizeof(string), stdin);

    for (i = 0; string[i] != '\0'; ++i) {
        string[i] = convertVowelToUppercase(string[i]);
    }

    printf("Output String: %s", string);
    return 0;
}
