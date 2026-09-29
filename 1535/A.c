#include <stdio.h>
int abs(int t) {
    return t<0?t*-1:t;
}
int main() {
    int T, a[4], max=0, mmax=0, maxi, mmaxi;
    scanf("%d", &T);
    for(int _T=0;_T<T;_T++) {
        max=mmax=0;
        for(int i=0;i<4;i++) {
            scanf("%d", &a[i]);
            if(max<a[i]) {
                mmax=max;
                max=a[i];
                mmaxi=maxi;
                maxi=i;
            }
            else if(mmax<a[i]) {
                mmax=a[i];
                mmaxi=i;
            }
        }
        printf("%s\n", abs(maxi-mmaxi)>1||maxi+mmaxi==3?"YES":"NO");
    }
}