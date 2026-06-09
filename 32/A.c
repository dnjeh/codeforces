#include <stdio.h>
int abs(int a) {
    return a<0?a*-1:a;
}
int main() {
    int a[1000];
    int n, d, ans=0;
    scanf("%d %d", &n, &d);
    for(int i=0;i<n;i++) {
        scanf("%d", &a[i]);
    }
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            if(i==j) continue;
            if(abs(a[i]-a[j])<=d) ans++;
        }
    }
    printf("%d", ans);
}