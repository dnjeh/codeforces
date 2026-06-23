#include <stdio.h>
int main() {
    char t[55];
    int n, ans=0;
    scanf("%d %s", &n, t);
    for(int i=0;t[i];i++) {
        if(i&&t[i]==t[i-1]) ans++;
    }
    printf("%d", ans);
}