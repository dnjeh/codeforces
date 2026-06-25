#include <stdio.h>
int main() {
    int n=0, low=0;
    char t[110];
    scanf("%s", t);
    for(int i=0;t[i];i++, n++) {
        if(t[i]>='a') low++;
    }
    if(n-low>low) for(int i=0;t[i];i++) {
        printf("%c", t[i]-(t[i]>='a'?'a'-'A':0));
    }
    else for(int i=0;t[i];i++) {
        printf("%c", t[i]+(t[i]<='Z'?'a'-'A':0));
    }
}