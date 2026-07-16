#include <stdio.h>
int main() {
    char t[20];
    int n, ans=0; 
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        scanf("%s", t);
        switch(t[0]) {
        case 'T': ans+=4; break;
        case 'C': ans+=6; break;
        case 'O': ans+=8; break;
        case 'D': ans+=12; break;
        case 'I': ans+=20; break;
        default:
            break;
        }
    }
    printf("%d", ans);
}