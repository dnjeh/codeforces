#include <stdio.h>
int main() {
    long long int tsum=0;
    int T, n, t, f;
    scanf("%d", &T);
    for(int i=0;i<T;i++) {
        scanf("%d", &n);
        tsum=f=0;
        for(int i=0;i<n;i++) {
            scanf("%d", &t); 
            if(t==1) f=1;
            else {
                tsum+=(long long int)t;
                f=0;
            }
        }
        if(f) tsum++;
        printf("%lld\n", tsum%676767677);
    }
}