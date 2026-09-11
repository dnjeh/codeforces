#include <stdio.h>
int main() {
    int T, tcnt=0;
    char t[6];
    scanf("%d", &T);
    for(int _T=0;_T<T;_T++) {
        scanf("%s", t);
        tcnt=0;
        for(int i=0;t[i];i++) {
            tcnt+=t[i]=='A'?-1:1;
        }
        printf("%c\n", tcnt>0?'B':'A');
    }
}