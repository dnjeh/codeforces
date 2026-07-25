#include <stdio.h>

int main() {
    int n;
    char t[4];
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        scanf("%s", t);
        printf("%s\n", (t[0]=='Y'||t[0]=='y')&&(t[1]=='E'||t[1]=='e')&&(t[2]=='S'||t[2]=='s')?"YES":"NO");
    }
}