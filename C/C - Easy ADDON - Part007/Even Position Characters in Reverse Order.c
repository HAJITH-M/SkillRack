#include <stdio.h>
#include <string.h>

int main() {
    char S[1001];
    scanf("%s", S);
    
    int length = strlen(S);
    // Traverse the string starting from the last even position
    for (int i = length - 1; i >= 0; i--) {
        if (i % 2 != 0) {
            printf("%c", S[i]);
        }
    }
    
    return 0;
}
