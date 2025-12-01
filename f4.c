// square of the given number uning function
#include<stdio.h>
#include<math.h>
void square(int n);
int main() {
    int n;
    printf("enter n:");
    scanf("%d", &n);
    square(n);
    return 0;
}
   void square(int n){
    int z = pow(n,2);
    printf("the square of the given number is:%d", z);
   }