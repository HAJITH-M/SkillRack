#include <stdio.h>
#include <string.h>

int main() {
    char S[1001]; // Array to store the string (with a max length of 1000 + 1 for null-terminator)
    int X, Y;

    // Read the input string and the integers X and Y
    scanf("%s %d %d", S, &X, &Y);

    // Calculate the length of the string
    int length = strlen(S);

    // Calculate the starting and ending positions for the substring
    int start = X;
    int end = length - Y;

    // Output the substring
    for (int i = start; i < end; i++) {
        printf("%c", S[i]);
    }
    printf("\n");

    return 0;
}
