// Program to find first reapeating alphabet
#include <stdio.h>
#include <string.h>

// Function to find the first repeating lowercase alphabet
char findFirstRepeatingLowerAlpha(const char* str) {
    // Array to store the frequency of each lowercase alphabet
    // 'a' is at index 0, 'b' at index 1, and so on.
    int freq[26] = {0}; 
    int i;

    // Iterate through the string to count character frequencies
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') { // Process only lowercase alphabets
            freq[str[i] - 'a']++;
        }
    }

    // Iterate through the string again to find the first character with frequency > 1
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            if (freq[str[i] - 'a'] > 1) {
                return str[i]; // Return the first repeating lowercase alphabet
            }
        }
    }

    return '\0'; // Return null character if no repeating lowercase alphabet is found
}

int main() {
    char str1[] = "programming";
    char str2[] = "hello world";
    char str3[] = "abcdefg";
    char str4[] = "apple";

    char result1 = findFirstRepeatingLowerAlpha(str1);
    if (result1 != '\0') {
        printf("First repeating lowercase alphabet in \"%s\": %c\n", str1, result1);
    } else {
        printf("No repeating lowercase alphabet found in \"%s\"\n", str1);
    }

    char result2 = findFirstRepeatingLowerAlpha(str2);
    if (result2 != '\0') {
        printf("First repeating lowercase alphabet in \"%s\": %c\n", str2, result2);
    } else {
        printf("No repeating lowercase alphabet found in \"%s\"\n", str2);
    }

    char result3 = findFirstRepeatingLowerAlpha(str3);
    if (result3 != '\0') {
        printf("First repeating lowercase alphabet in \"%s\": %c\n", str3, result3);
    } else {
        printf("No repeating lowercase alphabet found in \"%s\"\n", str3);
    }
    
    char result4 = findFirstRepeatingLowerAlpha(str4);
    if (result4 != '\0') {
        printf("First repeating lowercase alphabet in \"%s\": %c\n", str4, result4);
    } else {
        printf("No repeating lowercase alphabet found in \"%s\"\n", str4);
    }

    return 0;
}


