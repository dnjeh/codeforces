#include <stdio.h>
#include <string.h>
int main() {
    char t[110];
    int T, n;
    scanf("%d", &T);
    for(int _T=0;_T<T;_T++) {
        scanf("%s", t);
        n=strlen(t);
        printf("%c", t[0]);
        for(int i=1;i<n;i+=2) {
            printf("%c", t[i]);
        }
        printf("\n");
    }
    return 0;
}