#include <stdio.h>
int abs(int t) {
    return t<0?t*-1:t;
}
int main() {
    int T, a, b, t;
    scanf("%d", &T);
    for(int _T=0;_T<T;_T++) {
        scanf("%d %d", &a, &b);
        printf("%d\n", abs(a-b)/10+(abs(a-b)%10?1:0));
    }
}