#include <stdio.h>
int main() {
    int a[26]={0, }, cnt=0;
    char t[1010];
    scanf("%[^\n]s", t);
    for(int i=0;t[i];i++) {
        if(t[i]>='a'&&t[i]<='z'&&!a[t[i]-'a']) {
            a[t[i]-'a']=1;
            cnt++;
        }
    }
    printf("%d", cnt);
}