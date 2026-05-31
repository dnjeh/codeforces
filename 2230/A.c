#include <stdio.h>
long long int min(long long int a, long long int b) {
    return a<b?a:b;
} 
int main() {
    int T;
    long long int n, a, b;
    scanf("%d", &T);
    for(int _T=0;_T<T;_T++) {
        scanf("%lld %lld %lld", &n, &a, &b);
        printf("%lld\n", min(n*a, min(n/3*b+n%3*a, (n/3+(n%3?1:0))*b)));
    }
}