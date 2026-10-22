#include <stdio.h>
int a[200000];
int main() {
    int T, n, m;
    scanf("%d", &T);
    for(int _T=0;_T<T;_T++) {
        scanf("%d", &n);
        m=n;
        for(int i=0;i<n;i++) {
            scanf("%d", &a[i]);
            if(i&&a[i-1]>a[i]) m++;
        }
        printf("%d\n", m);
        for(int i=0;i<n;i++) {
            printf("%d", a[i]);
            if(i&&a[i-1]>a[i]) printf(" %d", a[i]);
            printf("%c", i+1<n?' ':'\n');
        }
    }
    return 0;
}