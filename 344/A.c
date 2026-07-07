#include <stdio.h>
int main() {
    int n, t, pre, ans=1;
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        scanf("%d", &t);
        if(i&&pre!=t) ans++;
        pre=t;
    }
    printf("%d", ans);
}