#include <stdio.h>
int main() {
    char t[110];
    int T, cnt=0;
    scanf("%d", &T);
    for(int _T=0;_T<T;_T++) {
        scanf(" %s", t);
        cnt=0;
        for(int i=0;t[i];i++) {
            if(t[i]=='Y') cnt++;
            if(cnt>=2) {
                printf("NO\n");
                cnt=-1;
                break;
            }
        }
        if(cnt>=0) printf("YES\n");
    }
}