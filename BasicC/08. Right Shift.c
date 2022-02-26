#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int i;
    scanf("%d",&i);
    for (int j=1;j<=i;j++){
        n *= 2;
    }
    printf("%d",n);
}
