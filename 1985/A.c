#include <stdio.h>
int main() {
    char t[4], tt[4], ttt;
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        scanf(" %s %s", t, tt);
        ttt=t[0];
        t[0]=tt[0];
        tt[0]=ttt;
        printf("%s %s\n", t, tt);
    }
    return 0;
}