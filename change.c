#include<stdio.h>
int main(){
    int x,y,temp;
    x=5;y=8;
    printf("Before: x:%d,y:%d",x,y);
    temp=x;
    x=y;
    y=temp;
    printf("After: x:%d,y:%d",x,y);
    return 0;
}


