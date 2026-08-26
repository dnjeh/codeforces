#include <stdio.h>
int min(int a, int b) {
    return a<b?a:b;
}
int main() {
    int a[3][5000] = {{0, }, };
    int n, cnt[3]={0, }, t;
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        scanf("%d", &t);
        t--;
        a[t][cnt[t]]=i+1;
        cnt[t]++;
    }
    cnt[0]=min(cnt[0], min(cnt[1], cnt[2]));
    printf("%d\n", cnt[0]);
    for(int i=0;i<cnt[0];i++) {
        printf("%d %d %d\n", a[0][i], a[1][i], a[2][i]);
    }
    return 0;
}