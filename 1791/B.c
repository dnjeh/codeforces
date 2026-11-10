#include <stdio.h>
int main() {
    char t[55];
    int T, n, x, y, f;
    scanf("%d", &T);
    for(int _T=0;_T<T;_T++) {
        f=x=y=0;
        scanf(" %d %s", &n, t);
        for(int i=0;i<=n;i++) {
            if(x==1&&y==1) f=1;
            if(i==n) break;
            switch (t[i]) {
            case 'R':
                x++;
                break;
            case 'L':
                x--;
                break;
            case 'U':
                y++;
                break;
            case 'D':
                y--;
                break;    
            }
        }
        printf("%s\n", f?"YES":"NO");
    }
}