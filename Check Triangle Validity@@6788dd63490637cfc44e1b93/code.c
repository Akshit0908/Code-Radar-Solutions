#include <stdio.h>
int main() {
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if((a<=b && b>a)||(b<=c && c>b)){
        printf("Valid");
    }
    else{
        printf("Invalid");
    }
    return 0;
}