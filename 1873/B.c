#include <stdio.h>
int main() {
    int a[9];
    int T, n, tmul, mmax;
    scanf("%d", &T);
    for(int _T=0;_T<T;_T++) {
        scanf("%d", &n);
        for(int i=0;i<n;i++) {
            scanf("%d", &a[i]);
        }
        mmax=0;
        for(int i=0;i<n;i++) {
            tmul=1;
            for(int j=0;j<n;j++) {
                tmul*=a[j]+(i==j);
            }
            if(tmul>mmax) mmax=tmul;
        }
        printf("%d\n", mmax);
    }
    return 0;
}