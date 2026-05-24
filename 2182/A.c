#include <stdio.h>
#include <string.h>
int main() {
    char t[25];
    int T, n;
    scanf("%d", &T);
    for(int _T=0;_T<T;_T++) {
        scanf("%d %s", &n, t);
        printf("%d\n", strstr(t, "2025")==NULL||strstr(t, "2026")!=NULL?0:1);
    }
}