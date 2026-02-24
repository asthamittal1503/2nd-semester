#include <stdio.h>
#include <string.h>

int main() {
    char str1[100];
    char str2[100];
    char strCopy[100];
    char strRev[100];

    printf("Enter first string: ");
    gets(str1);

    printf("Enter second string: ");
    gets(str2);

    // a. Addition (Concatenation)
    // strcat(destination, source) appends str2 to the end of str1
    strcat(str1, str2);
    printf("After Addition (Concatenation): %s\n", str1);
  
  
    strcpy(strCopy, str1);
    printf("Copied String: %s\n", strCopy);
	 
    printf("Length of string: %zu\n", strlen(str1));

    // c. Reverse
    // Note: Standard C library doesn't have a portable strrev(). 
    // We'll use a simple loop logic to reverse str1 into strRev.
    printf("Reversed String: %s\n", strRev);

    return 0;
}

