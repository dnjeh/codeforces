#include <stdio.h>
int main() {
    char t[2];
    int n, m, f=0;
    scanf("%d %d", &n, &m);
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            scanf(" %s", t);
            if(t[0]=='C'||t[0]=='M'||t[0]=='Y') f=1;
        }
    }
    if(f) printf("#Color");
    else printf("#Black&White");
    return 0;
}