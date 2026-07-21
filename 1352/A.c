#include <stdio.h>
int fun(int t) {
    return t?1:0;
}
int main() {
    int T, n;
    scanf("%d", &T);
    for(int _T=0;_T<T;_T++) {
        scanf("%d", &n);
        printf("%d\n", fun(n/10000)+fun(n/1000%10)+fun(n/100%10)+fun(n/10%10)+fun(n%10));
        for(int i=1;n;n/=10, i*=10) {
            if(n%10) printf("%d%c", n%10*i, n/10?' ':'\n');
        }
    }
}