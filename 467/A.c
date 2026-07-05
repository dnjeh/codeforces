#include <stdio.h>
int main() {
    int n, t, tt, ans=0;
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        scanf("%d %d", &t, &tt);
        if(tt-t>=2) ans++;
    }
    printf("%d", ans);
}