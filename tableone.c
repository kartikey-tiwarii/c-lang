#include<stdio.h>
int main() {
    int n;
    printf("enter n:");
    scanf("%d", &n);
    for(int a= 1; a<=10;a++){
        printf("%d * %d = %d \n",a,n, a * n );
    }
    return 0;
}