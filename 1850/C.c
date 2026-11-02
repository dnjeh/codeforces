#include <stdio.h>
int main() {
    char t[8][8];
    int T;
    scanf("%d", &T);
    for(int _T=0;_T<T;_T++) {
        for(int i=0;i<8;i++) {
            scanf("%s", &t[i]);
        }
        for(int i=0;i<8;i++) {
            for(int j=0;j<8;j++) {
                if(t[j][i]!='.') printf("%c", t[j][i]);
            }
        }
        printf("\n");
    }
}