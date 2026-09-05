#include <stdio.h>
char t[100001];
int main() {
    int a[4], ans=0;
    for(int i=0;i<4;i++) {
        scanf("%d", &a[i]);
    }
    scanf(" %s", t);
    for(int i=0;t[i];i++) {
        ans+=a[t[i]-'0'-1];
    }
    printf("%d", ans);
}