// call by reference (pointer)
#include<stdio.h>
int swap(int *a, int *b);
int main() {
    int x = 4;
    int y = 5;
    swap(&x,&y);
    printf(" x:%d\n", x);
    printf("y:%d \n", y);
    return 0;
}
    int swap(int *a, int *b){
    int *c ;
    *c = *b;
    *b = *a;
    *a = *c;
    printf("a:%d \n", *a);
    printf("b:%d \n", *b);
    }