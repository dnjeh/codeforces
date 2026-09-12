#include <stdio.h>
#include <string.h>
int main() {
    char t[110];
    int T, len, f;
    scanf("%d", &T);
    for(int _T=0;_T<T;_T++) {
        f=0;
        scanf("%s", t);
        len=strlen(t);
        if(len%2) {
            printf("NO\n");
            continue;
        }
        for(int i=0;i+len/2<len&&!f;i++) {
            if(t[i]!=t[i+len/2]) {
                printf("NO\n");
                f=1;
            }
        }
        if(!f) printf("YES\n");
    }
    return 0;
}