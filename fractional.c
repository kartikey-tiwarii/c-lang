// take float input and printthe fractional partof the real number
#include<stdio.h>
int main() {
    float y;
    printf("enter y:");
    scanf("%f", &y);
    int x = y;
    float z = y - x;
    printf("%f", z);
    return 0;
}