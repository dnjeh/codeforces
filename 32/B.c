#include <stdio.h>
int main() {
    char t[210];
    scanf("%s", t);
    for(int i=0;t[i];i++) {
        if(t[i]=='.') printf("0");
        else if(t[i+1]=='.') {
            printf("1");
            i++;
        }
        else {
            printf("2");
            i++;
        }
    }
}