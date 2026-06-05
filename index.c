#include<stdio.h>
int main(){
    int x=10;
    int *y=&x;
    int **f=&y;
    printf("%d ",x);
    printf("%d ",*y);
    printf("%d",**f);
    return 0;
}