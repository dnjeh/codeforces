#include <stdio.h>
#include <string.h>
int main() {
    char t[110];
    int T;
    scanf("%d", &T);
    for(int _T=0;_T<T;_T++) {
        scanf(" %s", t);
        for(int i=strlen(t)-1;i>=0;i--) {
            if(t[i]=='q') printf("p");
            else if(t[i]=='p') printf("q");
            else printf("w");
        }
        printf("\n");
    }
    return 0;
}