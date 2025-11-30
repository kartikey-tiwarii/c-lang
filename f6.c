#include<stdio.h>
void m(int n);
int main() {
    int n; 
    printf("enter n:");
    scanf("%d", &n);
    m(n);
    return 0;
}
    void m(int n){
        int a= 0;
        int b= 1;
        int c;
       for(int i = 1; i <=n; i++){
        printf("%d\n", a);
        c = a + b;
        a = b;
        b = c;

       }
    }