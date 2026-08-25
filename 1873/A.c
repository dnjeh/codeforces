#include <stdio.h>
int main() {
    char t[4];
    int T;
    scanf("%d", &T);
    for(int i=0;i<T;i++) {
        scanf("%s", t);
        printf("%s\n", t[0]=='a'||t[1]=='b'||t[2]=='c'?"YES":"NO");
    }
}