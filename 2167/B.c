#include <stdio.h>
int main() {
    char t[30];
    int T, n, a[26], f;
    scanf("%d", &T);
    for(int _T=0;_T<T;_T++) {
        f=0;
        for(int i=0;i<26;i++) a[i]=0;
        scanf("%d", &n);
        for(int i=0;i<2;i++) {
            scanf("%s", t);
            for(int j=0;j<n;j++) {
                a[t[j]-'a']+=i?-1:1;
            }
        }
        for(int i=0;i<26&&!f;i++) {
            if(a[i]) {
                printf("NO\n");
                f=1;
                break;
            }
        }
        if(!f) printf("YES\n");
    }
    return 0;
}