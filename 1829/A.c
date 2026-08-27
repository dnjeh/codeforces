#include <stdio.h>
int main() {
    char a[11]="codeforces";
    char t[11];
    int n, tans=0;
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        scanf(" %s", t);
        tans=0;
        for(int j=0;t[j];j++) {
            if(t[j]!=a[j]) tans++;
        }
        printf("%d\n", tans);
    }
    return 0;
}