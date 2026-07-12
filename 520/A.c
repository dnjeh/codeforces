#include <stdio.h>
int main() {
    char t[110];
    int n, a[26]={0, }, ans=0;
    scanf("%d %s", &n, t);
    for(int i=0;t[i];i++) {
        if((t[i]<='Z'?!a[t[i]-'A']:!a[t[i]-'a'])) {
            t[i]<='Z'?(a[t[i]-'A']=1):(a[t[i]-'a']=1);
            ans++;
        }
    }
    printf("%s", ans==26?"YES":"NO");
}