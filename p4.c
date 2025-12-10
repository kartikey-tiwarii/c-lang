// print english alphabet using pointers
#include<stdio.h>
int main() {
    char ch ;
    ch = 'A';
    char *ptr = &ch;
    while(*ptr <= 'Z'){
        printf("%c ", *ptr);
        (*ptr)++;
    }
    return 0;
}