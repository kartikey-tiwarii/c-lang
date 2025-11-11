#include<stdio.h>
int main () {
      int n;
    printf("enter n:");
    scanf("%d", &n);
/* for(int a = 1; a<=n; a++){
        for(int r = 1; r<=10; r++){
            printf("%d \n", a * r);
        }
    }*/
for(int a = n; a>=1; a--){
    for(int i = 1; i<=10; i++){
        printf("%d \n", i*a);
    }
}
    return 0;
}