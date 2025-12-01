// GST find
#include<stdio.h>
void gst(float n);
int main() {
    float n = 5;
    gst(n);
    return 0;
}
    void gst(float n){
        n = n + (0.18 * n);
        printf("%f",n);
    }
