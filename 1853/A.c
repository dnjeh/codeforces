#include <stdio.h>
int main() {
    int T, n, t, pre, min;
    scanf("%d", &T);
    for(int _T=0;_T<T;_T++) {
        scanf("%d", &n);
        for(int i=0;i<n;i++) {
            scanf("%d", &t);
            if(i==1||min>t-pre) min=t-pre;
            pre=t;
        }
        printf("%d\n", min<0?0:min/2+1);
    }
    return 0;
}