#include<stdio.h>
int main() {
    int n,a = 0,b=1,c; 
    printf("enter n:");
    scanf("%d", &n);
    for(int z = 1; z<=n; z++){
        printf("%d \n", a);
        c = a + b;
        a = b;
        b = c;
    }
    return 0;
}