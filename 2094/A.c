#include <stdio.h>
int main() {
    char t[11];
    int T;
    scanf("%d", &T);
    for(int _T=0;_T<T;_T++) {
        for(int i=0;i<3;i++) {
            scanf(" %s", t);
            printf("%c", t[0]);
        }
        printf("\n");
    }
}