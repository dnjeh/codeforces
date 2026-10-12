#include <stdio.h>
int main() {
    int a[101];
    int T, n, t, f;
    scanf("%d", &T);
    for(int _T=0;_T<T;_T++) {
        for(int i=0;i<=100;i++) a[i]=0;
        scanf("%d", &n);
        for(int i=0;i<n;i++) {
            scanf("%d", &t);
            a[t]++;
        }
        f=0;
        for(int i=0;i<=100;i++) {
            if(!f&&a[i]) f=1;
            else if(f==1&&!a[i]) f=2;
            else if(f==2&&a[i]) f=3;
        }
        if(f<=2) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}