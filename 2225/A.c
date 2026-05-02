#include <stdio.h>
int main() {
    long long int t, a, b;
    scanf("%lld", &t);
    for(long long int i=0;i<t;i++) {
        scanf("%lld %lld", &a, &b);
        printf("%s\n", a*2!=b?"YES":"NO");
    }
}