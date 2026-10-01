#include <stdio.h>
int main() {
    char t[110], tt[110];
    int T, n;
    scanf("%d", &T);
    for(int _T=0;_T<T;_T++) {
        scanf(" %d %s %s", &n, t, tt);
        for(int i=0;t[i];i++) {
            if(t[i]!=tt[i]&&!(t[i]=='G'&&tt[i]=='B'||t[i]=='B'&&tt[i]=='G')) {
                printf("NO\n");
                break;
            }
            if(!t[i+1]) printf("YES\n");
        }
    }
    return 0;
}