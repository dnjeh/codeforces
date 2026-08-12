#include <stdio.h>
int main() {
    int n;
    char t;
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        scanf(" %c", &t);
        switch(t) {
        case 'c': case 'o': case 'd': case 'e': case 'f': case 'r': case 's': 
            printf("YES\n");
            break;
        default:
            printf("NO\n");
            break;
        }
    }
}