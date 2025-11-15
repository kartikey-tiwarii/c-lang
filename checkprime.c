#include<stdio.h>
int main() {
    int n; int m =0;
    printf("enter n:");
    scanf("%d", &n);
    for(int a = 1; a<=n; a++){
        if(n%a == 0){
            m = m + 1;
        }
        }
        if(m == 2){
            printf("prime number:%d", n);
        }
        else{
            printf("not a prime number:%d", n);
        }
return 0;
}