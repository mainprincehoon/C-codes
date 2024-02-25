#include <stdio.h>
int main(){
    int a;
    scanf("%d", &a);
    int n;
    scanf("%d", &n);
    for ( int i=1;i<=n;i++){
        printf("%d\n",a);
        a=a*4;
    }
    return 0;
}

