#include <stdio.h>
int main() {
    int a[101]={0, }, n, m, t, ans=0;
    scanf("%d", &n);
    for(int i=0;i<2;i++) {
        scanf("%d", &m);
        for(int j=0;j<m;j++) {
            scanf("%d", &t);
            if(!a[t]) {
                a[t]=1;
                ans++;
            }
        }
    }
    printf("%s", ans==n?"I become the guy.":"Oh, my keyboard!");
}