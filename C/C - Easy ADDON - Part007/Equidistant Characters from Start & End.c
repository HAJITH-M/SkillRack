#include <stdio.h>
#include <string.h>

int main() {
    char S1[1001]; // Array to hold the input string, 1001 to accommodate the null terminator
    char result[1001]; // Array to hold the result string
    int start, end;
    int index = 0;

    // Read the input string
    if (fgets(S1, sizeof(S1), stdin) != NULL) {
        // Remove newline character if present
        S1[strcspn(S1, "\n")] = '\0';

        int length = strlen(S1);

        start = 0;
        end = length - 1;

        while (start <= end) {
            if (S1[start] == S1[end]) {
                result[index++] = S1[start];
            }
            start++;
            end--;
        }

        // Null-terminate the result string
        result[index] = '\0';

        // Print the result string
        printf("%s\n", result);
    }

    return 0;
}
