// table print using function
#include<stdio.h>
void printtable(int n);
int main() {
    int n;
    printf("enter n:");
    scanf("%d", &n);
    printtable(n);
    return 0;
}
   void printtable(int n){
    for(int a= 1; a<=10; a++){
        printf("%d \n", a*n);
    }
   }
