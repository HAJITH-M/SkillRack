#include <stdio.h>
#include <string.h>

int main() {
    char S[1001];
    
    // Read the input string
    scanf("%s", S);
    
    int count = 0;
    int length = strlen(S);
    
    // Iterate through the string to find successive repeating characters
    for(int i = 1; i < length; i++) {
        if(S[i] == S[i - 1]) {
            count++;
            // Skip all successive repeating characters
            while(i < length && S[i] == S[i - 1]) {
                i++;
            }
        }
    }
    
    // Print the count of successive repeating instances
    printf("%d\n", count);
    
    return 0;
}
