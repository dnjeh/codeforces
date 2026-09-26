#include <stdio.h>
int main() {
    int a[1000];
    int T, n, cnt, tcnt;
    scanf("%d", &T);
    for(int _T=0;_T<T;_T++) {
        cnt=tcnt=0;
        scanf("%d", &n);
        for(int i=0;i<n;i++) {
            scanf("%d", &a[i]);
            if(a[i]==2) cnt++;
        }
        if(cnt%2) {
            printf("-1\n");
            continue;
        }
        for(int i=0;i<n;i++) {
            if(a[i]==2) tcnt++;
            if(cnt/2==tcnt) {
                printf("%d\n", i+1);
                break;
            }
        }
    }
    return 0;
}