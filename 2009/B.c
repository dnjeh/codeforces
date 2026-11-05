#include <stdio.h>
int main() {
    char t[5];
    int T, n, a[500];
    scanf("%d", &T);
    for(int _T=0;_T<T;_T++) {
        scanf("%d", &n);
        for(int i=0;i<n;i++) {
            scanf("%s", t);
            for(int j=0;j<4;j++) {
                if(t[j]=='#') a[i]=j+1;
            }
        }
        for(int i=n-1;i>=0;i--) {
            printf("%d%c", a[i], i-1>=0?' ':'\n');
        }
    }
}