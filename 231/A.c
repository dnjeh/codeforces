#include <stdio.h>
int main() {
    int n, t, tt, ttt, ans=0;
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        scanf("%d %d %d", &t, &tt, &ttt);
        if(t+tt+ttt>=2) ans++;
    }
    printf("%d", ans);
}