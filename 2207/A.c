#include <stdio.h>
int main() {
    int a[100];
    int T, n, tmax, tmin;
    scanf("%d", &T);
    for(int _T=0;_T<T;_T++) {
        tmax=tmin=0;
        scanf("%d", &n);
        for(int i=0;i<n;i++) {
            scanf("%01d", &a[i]);
            if(a[i]) tmax++;
        }   
        for(int i=0;i<n;i++) {
            if(i&&i+1<n&&a[i-1]+a[i+1]==2&&!a[i]) {
                a[i]=1;
                tmax++;   
            }
        }
        tmin=tmax;
        for(int i=0;i<n;i++) {
            if(i&&i+1<n&&a[i-1]+a[i+1]==2) {
                a[i]=0;
                tmin--;
            }
        }
        printf("%d %d\n", tmin, tmax);
    }
}