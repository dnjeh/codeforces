#include <stdio.h>
#include <string.h>
int main() {
    char t[110];
    int T, n;
    scanf("%d", &T);
    for(int _T=0;_T<T;_T++) {
        scanf(" %s", t);
        if((n=strlen(t))>10) printf("%c%d%c\n", t[0], n-2, t[n-1]);
        else printf("%s\n", t);
    }
}