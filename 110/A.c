#include <stdio.h>
int fun(long long int t) {
    int cnt=0;
    for(;t;t/=10) {
        if(t%10==4||t%10==7) cnt++;
    }
    return cnt==4||cnt==7;
}
int main() {
    long long int n;
    scanf("%lld", &n);
    printf("%s", fun(n)?"YES":"NO");
}