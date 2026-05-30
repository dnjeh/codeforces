#include <stdio.h>
int max(int a, int b) {
    return a>b?a:b;
}
int min(int a, int b) {
    return a<b?a:b;
}
int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if(max(a, max(b, c))-min(a, min(b, c))>=10) printf("check again");
    else {
        printf("final %d", a+b+c-max(a, max(b, c))-min(a, min(b, c)));
    }
}   