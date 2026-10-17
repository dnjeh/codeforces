#include <stdio.h>
#include <stdlib.h>
int main() {
    int T, n, tcnt, a[100], b[2][2], f;
    scanf("%d", &T);
    for(int _T=0;_T<T;_T++) {
        tcnt=b[0][0]=b[0][1]=b[1][0]=b[1][1]=f=0;
        scanf("%d", &n);
        for(int i=0;i<n;i++) {
            scanf("%d", &a[i]);
        }
        for(int i=0;i<n&&!f;i++) {
            if(tcnt>=1&&b[0][0]==a[i]) b[0][1]++;
            else if(tcnt<=2&&b[1][0]==a[i]) b[1][1]++;
            else if(!tcnt||tcnt<2&&b[tcnt][0]!=a[i]) {
                b[tcnt][1]++;
                b[tcnt++][0]=a[i];
            }
            else {
                f=1;
                break;
            }
        }
        if(!f&&(abs(b[0][1]-b[1][1])<=1||b[0][1]==n)) printf("Yes\n");
        else printf("No\n");
    }
}