#include <stdio.h>
int main() {
    long long int k, n, T;
    scanf("%lld", &T);
    for(int _T=0;_T<T;_T++) {
        scanf("%lld %lld", &n, &k);
        printf("%s\n", !(n%2)||k%2&&n>=k?"YES":"NO");
    }
    return 0;
}