#include <stdio.h>
#define LL long long
int main() {
    LL int T, n, m;
    scanf("%lld", &T);
    for(LL int _T=0;_T<T;_T++) {
        scanf("%lld %lld", &n, &m);
        printf("%lld\n", 
            n>=3?
            m*2
            :
            (
                n>=2?
                m
                :
                0
            )
        );
    }
}