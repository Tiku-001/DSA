#include<stdio.h>
int main(){
    int x=5.665;
    int *y=&x;
    int **f=&y;
    printf("%f ",&x);
    printf("%f ",*y);
    return 0;
}