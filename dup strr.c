#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int freq[256] = {0};
    int i;

    printf("Enter a string: ");
    fgets(str, 100, stdin);

    for (i = 0; str[i]; i++)
    {
        freq[str[i]]++;
    }

    printf("Duplicate characters in the string:\n");
    for (i = 0; i < 256; i++)
    {
        if (freq[i] > 1) {
            printf("%c ", (char)i);
        }
    }
    printf("\n");

    return 0;
}
