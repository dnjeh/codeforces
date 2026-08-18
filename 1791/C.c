#include <stdio.h>
int main() {
    int T, n, a[2001], l, r, tans;
    scanf("%d", &T);
    for(int _T=0;_T<T;_T++) {
        scanf("%d", &n);
        l=0; r=n-1; tans=n;
        for(int i=0;i<n;i++) {
            scanf("%01d", &a[i]);
        }
        for(;l<r;) {
            if(a[l]!=a[r]) {
                l++;
                r--;
                tans-=2;
            }
            else break;
        }
        printf("%d\n", tans);
    }
}