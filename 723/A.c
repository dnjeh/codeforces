#include <stdio.h>
int abs(int t) {
    return t<0?t*-1:t;
}
int max(int a, int b) {
    return a>b?a:b;
}
int min(int a, int b) {
    return a<b?a:b;
}
int main() {
    int a, b, c, d;
    scanf("%d %d %d", &a, &b, &c);
    d=a+b+c-min(a, min(b, c))-max(a, max(b, c));
    printf("%d", abs(a-d)+abs(b-d)+abs(c-d));
}