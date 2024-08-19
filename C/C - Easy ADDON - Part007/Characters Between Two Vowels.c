#include <stdio.h>
#include <string.h>

// Function to check if a character is a vowel
int isVowel(char ch) {
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');
}

int main() {
    char S[1001];
    
    // Read the input string
    scanf("%s", S);
    
    int length = strlen(S);
    int found = 0; // Flag to check if any valid character is found
    
    // Iterate through the string, checking each character surrounded by vowels
    for(int i = 1; i < length - 1; i++) {
        if(isVowel(S[i - 1]) && isVowel(S[i + 1])) {
            printf("%c", S[i]);
            found = 1;
        }
    }
    
    // If no characters match the condition, print -1
    if(!found) {
        printf("-1");
    }
    
    return 0;
}
