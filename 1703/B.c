#include <stdio.h>
int main() {
    char t[55];
    int T, n, a[26]={0, }, tans;
    scanf("%d", &T);
    for(int _T=0;_T<T;_T++) {
        scanf("%d %s", &n, t);
        tans=0;
        for(int i=0;i<26;i++) {
            a[i]=0;
        }
        for(int i=0;t[i];i++) {
            if(!(a[t[i]-'A']++)) tans++;
            tans++;
        }
        printf("%d\n", tans);
    }
    return 0;
}