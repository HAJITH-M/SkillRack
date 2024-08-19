#include <stdio.h>
#include <string.h>

int main() {
    char S[1001];
    
    // Read the input string
    scanf("%s", S);
    
    int length = strlen(S);
    
    // Iterate through the string and print alternate characters
    for(int i = 0; i < length; i += 2) {
        printf("%c", S[i]);
    }
    
    return 0;
}
