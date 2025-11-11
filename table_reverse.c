#include<stdio.h>
int main() {
    int n; int c;
    printf("enter n");
    scanf("%d", &n);
    c = n-1;
    for(int a= 1; a<= 10; a++){
        printf("%d, n*a");
        for(int i = c; i>=1; i--){
            printf("%d", i*a);
        }
    }
    return 0;
}