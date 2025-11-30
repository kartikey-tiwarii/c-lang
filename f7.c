#include<stdio.h>
int s(int a, int b);
int main() {
    int a,b;
    printf("enter a,b:");
    scanf("%d%d", &a, &b);
    s(a,b);
    return 0;
}
    int s(int a, int b){
        a = a + b;
        b = a - b;
        a = a - b;
        printf("a is:%d \n", a);
        printf("a is:%d \n", b);
    }