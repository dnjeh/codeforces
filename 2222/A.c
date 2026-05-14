#include <stdio.h>
int mem[1001]={1};
int dp(int t, int n, int* a, int now) {
    int ret=0;
    if(mem[t]==now) ret=now;
    else {
        for(int i=0;i<n;i++) if(t-a[i]>=0&&dp(t-a[i], n, a, now)) {
            ret=mem[t]=now;
            break;
        } 
    }
    return ret;
}
int main() {
    int a[10];
    int T, n, f;
    scanf("%d", &T);
    for(int i=1;i<=T;i++) {
        f=mem[0]=i;
        scanf("%d", &n);
        for(int j=0;j<n;j++) {
            scanf("%d", &a[j]);
            a[j]=100/a[j];
        }
        for(int j=1;j<=100*n;j++) {
            if(!dp(j, n, a, i)) {
                printf("No\n", j);
                f=0;
                break;
            }
        }
        if(f) printf("Yes\n");
    }
}