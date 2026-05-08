#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    int t=*(int*)a - *(int*)b;
    return t>0?1:t<0?-1:0;
}

int main() {
    int a[100];
    long long int T, n, c, k, t;
    scanf("%lld", &T);
    for(int _T=0;_T<T;_T++) {
        scanf("%lld %lld %lld", &n, &c, &k);
        for(int i=0;i<n;i++) {
            scanf("%d", &a[i]);
        }
        qsort(a, n, sizeof(a[0]), compare);
        for(int i=0;i<n;i++) {
            if(a[i]<=c) {
                t=(c-(long long int)a[i])>k?k:c-(long long int)a[i];
                k-=t; a[i]+=t;
                c+=a[i];
            }
        }
        printf("%lld\n", c);
    }
}