#include <stdio.h>
int main() {
    int a[101]={0, };
    int n, k, t, ans=0;
    scanf("%d %d", &n, &k);
    for(int i=0;i<n;i++) {
        scanf("%d", &t);
        a[t]++;
    }
    for(int i=100;i>0;i--) {
        if(a[i]) {
            ans++;
            a[i]--;
            if(ans==k) {
                ans+=a[i];
                break;
            }
            i++;
        }
    }
    printf("%d", ans);
}