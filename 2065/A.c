#include <stdio.h>
#include <string.h>
int main() {
    char t[15];
    int T;
    scanf("%d", &T);
    for(int _T=0;_T<T;_T++) {
        scanf(" %s", t);
        for(int i=0;i<strlen(t)-2;i++) {
            printf("%c", t[i]);
        }
        printf("i\n");
    }
    return 0;
}