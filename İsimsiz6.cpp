#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void removeDuplicates(char str[]) {
    int i = 0, j = 0;
    while (str[i] != '\0') {
        if (j > 0 && str[i] == str[j - 1]) {
            j--;
        } else {
            str[j] = str[i];
            j++;
        }
        i++;
    }
    str[j] = '\0';
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    removeDuplicates(str);
    printf("String after removing duplicates: %s\n", str);
    return 0;
}