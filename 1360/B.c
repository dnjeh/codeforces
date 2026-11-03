#include <stdio.h>
int main() {
    int a[1001];
    int T, n, pre, min, t;
    scanf("%d", &T);
    for(int _T=0;_T<T;_T++) {
        min=1001;
        for(int i=0;i<1001;i++) a[i]=0;
        scanf("%d", &n);
        for(int i=0;i<n;i++) {
            scanf("%d", &t);
            a[t]++;
            if(!i||pre>t) pre=t;
        }
        a[pre]--;
        for(int i=pre;i<=1000;i++) {
            if(a[i]) {
                if(min>i-pre) min=i-pre;
                pre=i;
                a[i--]--;
            }
        }
        printf("%d\n", min);
    }
    return 0;
}