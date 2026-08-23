#include <stdio.h>
int main() {
    int n, a, ans;
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        scanf("%d", &a);
        ans=0;
        for(int j=0;j<a;j++) {
            ans++;
            if(!(ans%3)||ans%10==3) j--;
        }
        printf("%d\n", ans);
    }
    return 0;
}