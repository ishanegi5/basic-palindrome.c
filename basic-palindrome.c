#include<stdio.h>
void main() {
    int n, value, original, reverse = 0;
    printf("Enter value: ");
    scanf("%d", &value);
    original = value;
    while (original != 0) {
        n = original % 10;
        reverse = reverse * 10 + n;
        original = original / 10;
    }
    if (value == reverse) {
        printf("palindrome");
    }
    else {
        printf("not palindrome");
    }
}