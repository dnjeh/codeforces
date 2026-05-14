#include <stdio.h>
int main() {
    int ta[7];
    int T, tsum, tmax;
    scanf("%d", &T);
    for(int _T=0;_T<T;_T++) {
        tsum=tmax=0;
        for(int i=0;i<7;i++) {
            scanf("%d", &ta[i]);
            tsum-=ta[i];
            if(!i||tmax<ta[i]) tmax=ta[i];
        }
        printf("%d\n", tsum+tmax*2);
    }
}