#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// 1. Function to load string dynamically
char *LoadString(int N) {
    char *str = (char *)malloc(N + 1);
    printf("Enter string: ");
    scanf("%s", str);
    return str;
}

// 2. Function to calculate string length
int StringLength(char *str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

// 3. Procedure to load array
void LoadArray(char *p, char arr[]) {
    int i = 0;
    while (p[i] != '\0') {
        arr[i] = p[i];
        i++;
    }
    arr[i] = '\0';
}

// 4. Procedure to reverse array
void ReverseArray(char arr[], char rev[], int n) {
    for (int i = 0; i < n; i++) {
        rev[i] = arr[n - 1 - i];
    }
    rev[n] = '\0';
}

// 5. Procedure to display array
void DisplayArray(char arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%c", arr[i]);
    }
    printf("\n");
}

// 6. Recursive function to calculate ASCII sum
int SumStringASCII(char *p) {
    if (*p == '\0') {
        return 0;
    }
    return *p + SumStringASCII(p + 1);
}

// 7. Recursive function to reverse string in place
void ReverseString(char *start, char *end) {
    if (start >= end) {
        return;
    }
    
    char temp = *start;
    *start = *end;
    *end = temp;
    
    ReverseString(start + 1, end - 1);
}
