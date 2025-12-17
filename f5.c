// find are of square ,circle ad rectangle using function
#include<stdio.h>
void area(int n);
int rectangle(int a, int b);
int main() {
    int n, a,b;
    printf("enter a,b:");
    scanf("%d%d", &a,&b);
    printf("enter n:");
    scanf("%d", &n);
    area(n);
    rectangle(a,b);
    return 0;
}
    int rectangle(int a,int b){
        int p = a * b;
        printf("the area of rectange is:%d",p);
    }
    void area(int n){
        int z = n * n;
        int y = 3.14 * n * n;
        printf("Area of square:%d \n",z);
        printf("Area of circle:%d \n",y);
    }