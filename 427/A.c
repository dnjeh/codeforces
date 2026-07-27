#include <stdio.h>
int main() {
    int n, sum=0, t, ans=0;
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        scanf("%d", &t);
        if(sum<=0&&t<0) ans++;
        else sum+=t;
    }
    printf("%d", ans);
}