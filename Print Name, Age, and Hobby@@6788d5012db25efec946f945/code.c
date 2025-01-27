#include <stdio.h>
int main() {
    char a[100],b[200];
    int age;
    scanf("%s %d",&a,&age);
    scanf("%s",&b);
    printf("Name: %s",a);
    printf("Age: %d",age);
    printf("Hobby: %s",b);
    return 0;
}