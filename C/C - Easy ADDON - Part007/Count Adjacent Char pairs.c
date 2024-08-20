#include <stdio.h>

int main() {
    char S[1001]; // Array to store the string (with a max length of 1000 + 1 for null-terminator)
    int C = 0;    // Variable to store the count of instances

    // Input the string
    scanf("%s", S);

    // Iterate through the string and count adjacent pairs
    for(int i = 0; S[i] != '\0'; i++) {
        if(S[i + 1] != '\0' && S[i + 1] == S[i] + 1) {
            C++;
        }
    }

    // Print the result
    printf("%d\n", C);

    return 0;
}
