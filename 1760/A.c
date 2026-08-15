#include <stdio.h>
int min(int a, int b) {
    return a<b?a:b;
}
int max(int a, int b) {
    return a>b?a:b;
}
int main() {
    int T, a, b, c;
    scanf("%d", &T);
    for(int _T=0;_T<T;_T++) {
        scanf("%d %d %d", &a, &b, &c);
        printf("%d\n", a+b+c-max(a, max(b, c))-min(a, min(b, c)));
    }
}