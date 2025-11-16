#include<stdio.h>
int main() {
    int n; int AP = 4;
    printf("enter n:");
    scanf("%d",&n);
    // 4 7 10 13 16 19 ...
    for(int a= 1; a<=n; a++){
     AP = AP + 3;
     printf("%d", AP);
    }
    return 0;
}