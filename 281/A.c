#include <stdio.h>
int main() {
    char t[1010];
    scanf("%s", t);
    if(t[0]>='a') t[0]-='a'-'A';
    printf("%s", t);
}