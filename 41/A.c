#include <stdio.h>
#include <string.h>
int main() {
    int n;
    char t[110], tt[110];
    scanf("%s %s", t, tt);
    if((n=strlen(t))!=strlen(tt)) {
        printf("NO");
        return 0;
    }
    for(int i=0;t[i];i++) {
        if(t[i]!=tt[n-i-1]) {
            printf("NO");
            return 0;
        }
    }
    printf("YES");
}