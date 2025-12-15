//print matrik using array
#include<stdio.h>
int main() {
    int arr[2][3]={ 3, 4,5,6,7,9};
    for(int a = 0; a<2; a++){
        for(int b = 0; b<3; b++){
              printf("%d ", arr[a][b]);
        }
        printf("\n");
    }
    return 0;
}