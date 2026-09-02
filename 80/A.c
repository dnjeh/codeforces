#include <stdio.h>
int main() {
    int a, b, f=0;
    scanf("%d %d", &a, &b);
    for(int i=a;i<=b;i++) {
        f=0;
        for(int j=2;j<i&&!f;j++) {
            if(!(i%j)) f=1;
        }
        if((i==a||i==b)&&f||(i!=a&&i!=b)&&!f) {
            printf("NO");
            return 0;
        }
    }
    printf("YES");
    return 0;
}