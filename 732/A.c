#include <stdio.h>
int main() {
    int n, c;
    scanf("%d %d", &n, &c);
    for(int i=1;i<=10;i++) {
        if(!(n*i%10)||n*i%10==c) {
            printf("%d", i);
            return 0;
        }
    }
}