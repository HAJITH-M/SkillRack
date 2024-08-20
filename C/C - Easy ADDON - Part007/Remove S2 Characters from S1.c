#include <stdio.h>
#include <string.h>

int main() {
    char S1[1001], S2[1001];
    int i, j;
    int remove[256] = {0}; // Array to mark characters to be removed

    // Read the input strings
    scanf("%s", S1);
    scanf("%s", S2);

    // Mark characters present in S2 in the remove array
    for (i = 0; S2[i] != '\0'; i++) {
        remove[(int)S2[i]] = 1;
    }

    // Traverse S1 and print characters not marked for removal
    for (i = 0; S1[i] != '\0'; i++) {
        if (!remove[(int)S1[i]]) {
            printf("%c", S1[i]);
        }
    }
    
    return 0;
}
