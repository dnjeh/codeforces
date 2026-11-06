#include <stdio.h>
int main() {
    char t[110];
    int T, n, max=0;
    scanf("%d", &T);
    for(int _T=0;_T<T;_T++) {
        scanf(" %d %s", &n, t);
        for(int i=0;i<n;i++) {
            if(!i||t[i]-'a'>max) max=t[i]-'a';
        }
        printf("%d\n", max+1);
    }
}