#include<Stdio.h>
int main() {
    int n , m = 0, z, c;
    printf("enter n:");
    scanf("%d", &n);
    z = n/2; 
    for(int i = 1; i <= n; i++){
    for(int a= 2; a<=z; a++){
        c = n%a == 0;
        if(c){
        m = 1;
        break;
        }
    }
    
    if( m == 0) {
        printf("prime number :%d \n",c);
    }

    else {
        printf("not a prime number: %d \n", n);
    }
    }
    return 0;
}