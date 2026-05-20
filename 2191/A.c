#include <stdio.h>
int main() {
    int T, n, t, f;
    scanf("%d", &T);
    for(int _T=0;_T<T;_T++) {
        scanf("%d", &n);
        for(int i=0;i<n;i++) {
            scanf("%d", &t);
            if(!i) f=t%2;
            if(f>=0&&(f+i)%2!=(t)%2) f=-1;
        }
        printf("%s\n", f<0?"NO":"YES");
    }
}