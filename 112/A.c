#include <string.h>
#include <stdio.h>
int main() {
    int n;
    char t[110], tt[110];
    scanf("%s %s", t, tt);
    strlwr(t);
    strlwr(tt);
    printf("%d", (n=strcmp(t, tt))<0?-1:(n>0?1:n));
}