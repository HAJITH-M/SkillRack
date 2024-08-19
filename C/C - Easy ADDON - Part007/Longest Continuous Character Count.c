#include <stdio.h>
#include <string.h>

int main() {
    char S[1001], C;
    
    // Read the string S and the character C
    scanf("%s %c", S, &C);
    
    int maxCount = 0, currentCount = 0;
    int length = strlen(S);
    
    // Iterate through the string to find the longest continuous occurrence of C
    for(int i = 0; i < length; i++) {
        if(S[i] == C) {
            currentCount++;
            if(currentCount > maxCount) {
                maxCount = currentCount;
            }
        } else {
            currentCount = 0;
        }
    }
    
    // Print the longest continuous occurrence
    printf("%d\n", maxCount);
    
    return 0;
}
