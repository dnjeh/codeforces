#include <stdio.h>
int main() {
    int a[2][30]={{0, }};
    int n, ans=0;
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        scanf("%d %d", &a[0][i], &a[1][i]);
    }
    for(int i=0;i<n;i++) for(int j=0;j<n;j++) {
        if(i!=j&&a[0][i]==a[1][j]) ans++;
    }
    printf("%d", ans);
}