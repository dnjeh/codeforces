#include <stdio.h>
int main() {
    int a[10];
    int T, n, tmax, tcnt;
    scanf("%d", &T);
    for(int _T=0;_T<T;_T++) {
        scanf("%d", &n);
        tmax=tcnt=0;
        for(int i=0;i<n;i++) {
            scanf("%d", &a[i]);
            if(tmax<a[i]) tmax=a[i];
        }
        for(int i=0;i<n;i++) {
            if(tmax==a[i]) tcnt++;
        }
        printf("%d\n", tcnt);
    }
}