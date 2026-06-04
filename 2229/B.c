#include <stdio.h>
int main() {
    int a[100000];
    int T, n, t, max, maxi, tt;
    long long int tans;
    scanf("%d", &T);
    for(int _T=0;_T<T;_T++) {
        tans=0;
        scanf("%d", &n);
        for(int i=0;i<n;i++) {
            scanf("%d", &a[i]);
        }
        max=0;
        for(int i=0;i<n;i++) {
            scanf("%d", &t);
            if(a[i]>t) {
                tt=a[i];
                a[i]=t;
                t=tt;
            }
            if(a[i]>max) {
                max=a[i];
                maxi=i;
            }
            tans+=(long long int)t;
        }
        tans+=(long long int)a[maxi];
        printf("%lld\n", tans);
    }
}