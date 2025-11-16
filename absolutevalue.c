#include<stdio.h>
int main() {
    int n; int z;
    printf("enter n:");
    scanf("%d", &n);
    z = -(n);
    if(n<0){
        printf("%d", z);
    }
    else{
        printf("%d", n);
    }
    return 0;
}