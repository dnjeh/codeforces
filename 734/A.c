#include <stdio.h>
int main() {
    int n, ans=0;
    char t;
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        scanf(" %c", &t);
        if(t=='D') ans++;
        else ans--;
    }
    printf("%s", !ans?"Friendship":(ans>0?"Danik":"Anton"));
}