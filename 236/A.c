#include <stdio.h>
int main() {
    int a[26]={0, }, ans=0;
    char t[110];
    scanf("%s", t);
    for(int i=0;t[i];i++) {
        if(!a[t[i]-'a']) {
            a[t[i]-'a']=1;
            ans++;
        }
    }
    printf("%s", ans%2?"IGNORE HIM!":"CHAT WITH HER!");
}