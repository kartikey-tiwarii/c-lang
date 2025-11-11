#include<stdio.h>
int main() {
    int n; int z;
    printf("enter n:");
    scanf("%d", &n);
    z =n/2;
    for(int a=1; a<=z; a++){
        if("n%a == 0"){
            printf("not a prime number:%d", n);
        }
        else{
            printf("prime number: %d", n);
        }
    }
return 0;
}