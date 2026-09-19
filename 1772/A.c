#include <stdio.h>
int main() {
    int T;
    char t[4];
    scanf("%d", &T);
    for(int _T=0;_T<T;_T++) {
        scanf(" %s", t);
        printf("%d\n", t[0]-'0'+t[2]-'0');
    }
}