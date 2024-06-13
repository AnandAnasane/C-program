#include <stdio.h>

// Function to compare two strings
int compareStrings(const char *str1, const char *str2) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            // Return the difference of the mismatched characters
            return str1[i] - str2[i];
        }
        i++;
    }
    // If one string is a prefix of the other
    return str1[i] - str2[i];
}

int main() {
    char str1[100], str2[100];

    // Input two strings
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Remove newline character from the input strings if present
    for (int i = 0; str1[i] != '\0'; i++) {
        if (str1[i] == '\n') {
            str1[i] = '\0';
            break;
        }
    }
    for (int i = 0; str2[i] != '\0'; i++) {
        if (str2[i] == '\n') {
            str2[i] = '\0';
            break;
        }
    }

    // Compare the strings
    int result = compareStrings(str1, str2);

    // Output the result
    if (result < 0) {
        printf("The first string is less than the second string.\n");
    } else if (result > 0) {
        printf("The first string is greater than the second string.\n");
    } else {
        printf("The two strings are equal.\n");
    }

    return 0;
}
