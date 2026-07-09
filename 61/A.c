#include <stdio.h>
int main() {
    char t[110], tt[110];
    scanf("%s %s", t, tt);
    for(int i=0;t[i];i++) { 
        printf("%c", t[i]!=tt[i]?'1':'O');
    }
}