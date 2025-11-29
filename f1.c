// sum of a and b
#include<stdio.h>
int sum(int a, int b);
int main() {
    int a,b;
    printf("enter a,b:");
    scanf("%d%d", &a, &b);
    int z = sum(a,b);
    printf("the sum of a + b is :%d", z);
    return 0;
}
int sum(int a, int b){
    return a + b;
}
