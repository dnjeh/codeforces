#include <stdio.h>
int main() {
    char t[11];
    int T, n, a[52];
    scanf("%d", &T);
    for(int _T=0;_T<T;_T++) {
        for(int i=0;i<52;i++) {
            a[i]=0;
        }
        scanf("%d %s", &n, t);
        for(int i=0;t[i];i++) {
            a[t[i]<'a'?t[i]-'A'+26:t[i]-'a']++;
        }
        printf("%s\n", n==5&&a['T'-'A'+26]&&a['i'-'a']&&a['m'-'a']&&a['u'-'a']&&a['r'-'a']?"YES":"NO");
    }
}