#include <stdio.h>
int main() {
    int n, k, ans=0;
    scanf("%d %d", &n, &k);
    for(int i=1, j=5;j<=240-k&&i<=n;i++, j+=i*5) {
        ans++;
    }
    printf("%d", ans);
}