#include <stdio.h>
int main() {
    char t[55];
    int T, n;
    scanf("%d", &T);
    for(int _T=0;_T<T;_T++) {
        scanf(" %d %s", &n, t);
        for(int i=0;t[i];i++) {
            if(t[i]=='L') {
                printf("%d\n", i+1);
                break;
            }
        }
    }
}