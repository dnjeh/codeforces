#include <stdio.h>
int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    a = (a==b) + (a==c) + (a==d) + (b==c) + (b==d) + (c==d);
    if(!a) printf("0");
    else if(a==1) printf("1");
    else if(a==2||a==3) printf("2");
    else printf("3");
}