#include <stdio.h>

int main() {
    char t[110], tt[110];
    int T, a, _a;
    scanf("%d", &T);
    for(int _T=0;_T<T;_T++) {
        _a=a=0;
        scanf("%s", t);
        for(int i=0, j=0;t[i];i++) {
            _a=t[i]-'0';
            if(!a) a=_a?1:-1;
            else if(a==1&&!_a) a=2;
            else if(a==-1&&_a) a=-2;
            else tt[j++]=t[i];
            tt[j]=0;
        }
        printf("%s\n", tt);
    }
}