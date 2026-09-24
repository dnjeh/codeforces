#include <stdio.h>
int main() {
    char t[55];
    int T, n, a[26], f;
    scanf("%d", &T);
    for(int _T=0;_T<T;_T++) {
        f=0;
        scanf(" %d %s", &n, t);
        for(int i=0;i<26;i++) {
            a[i]=0;
        }
        for(int i=0;t[i];i++) {
            if(i&&t[i-1]!=t[i]&&a[t[i]-'A']) {
                printf("NO\n");
                f=1;
                break;
            }
            a[t[i]-'A']=1;
        }
        if(!f) printf("YES\n");
    }
    return 0;
}