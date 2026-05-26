#include <stdio.h>
int fun(int l, int a, int b) {
    int ret=a;
    for(int _ret=a+b, i=0;i<=5010;_ret+=b, i++) {
        _ret%=l;
        if(ret<_ret) ret=_ret;
    }
    return ret;
}
int main() {
    int T, l, a, b;
    scanf("%d", &T);
    for(int _T=0;_T<T;_T++) {
        scanf("%d %d %d", &l, &a, &b);
        printf("%d\n", l%b&&b%l?l-1:fun(l, a, b));
    }
}