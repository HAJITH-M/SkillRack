#include <stdio.h>
#include <string.h>

int main() {
    char S[1001], C;
    
    // Read the string S and the character C
    scanf("%s %c", S, &C);
    
    int count = 0;
    int length = strlen(S);
    
    // Iterate through the string and check odd positions (1-based index)
    for(int i = 0; i < length; i += 2) {
        if(S[i] == C) {
            count++;
        }
    }
    
    // Print the count of character C in odd positions
    printf("%d\n", count);
    
    return 0;
}
