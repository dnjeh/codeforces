#include <stdio.h>
int main() {
    int a[26]={0, };
    char t[110];
    for(int i=0;i<2;i++) {
        scanf("%s", t);
        for(int j=0;t[j];j++) {
            a[t[j]-'A']++;
        }
    }
    scanf("%s", t);
    for(int j=0;t[j];j++) {
        a[t[j]-'A']--;
    }
    for(int i=0;i<26;i++) {
        if(a[i]) {
            printf("NO");
            return 0;
        }
    }
    printf("YES");
}