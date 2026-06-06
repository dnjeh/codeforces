#include <stdio.h>
int main() {
    char t[3][4];
    scanf("%s%s%s", t[0], t[1], t[2]);
    printf("%s", t[0][0]==t[2][2]&&t[0][1]==t[2][1]&&t[0][2]==t[2][0]&&t[1][0]==t[1][2]?"YES":"NO");
}