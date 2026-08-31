#include <stdio.h>
int main() {
    int n, k, t, cnt=0;
    scanf("%d %d", &n, &k);
    for(int i=0;i<n;i++) {
        scanf("%d", &t);
        cnt+=5-t>=k;
    }
    printf("%d", cnt/3);
    return 0;
}