#include<stdio.h>
int main() {
    int n; int m = 100;
    printf("enter n:");
    scanf("%d", &n);
    for(int a =n; a>=0; a--){
        printf("%d \n", m );
        m = m - 3;
    }
    return 0;
}