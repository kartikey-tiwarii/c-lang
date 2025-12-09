// fatorial using function
#include<stdio.h>
int m(int n);
int main() {
    int n;
    printf("enter n:");
    scanf("%d", &n);
    m(n);
    return 0;
}
    int m(int n){
        int r = 1;
        for(int a = 1; a<=n; a++){
            r = r * a;
        }
        printf("the factorial of the given number is: %d", r);
    }