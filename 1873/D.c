#include <stdio.h>
char t[200200];
int main() {
    int T, k, n, ans=0;
    scanf("%d", &T);
    for(int _T=0;_T<T;_T++) {
        ans=0;
        scanf(" %d %d %s", &k, &n, t);
        for(int i=0;i<k;i++) {
            if(t[i]=='B') {
                ans++;
                i+=n-1;
            }
        }
        printf("%d\n", ans);
    }
}