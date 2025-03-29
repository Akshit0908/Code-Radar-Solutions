#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",arr[i]);
    }
    int max=0;
    for(int i=0;i<n;i++){
        if(arr[i]<n){
            max=arr[i];
        }
    }
    int min=0;
    for(int i=0;i<n;i++){
        if(arr[i]>n){
            min=arr[i];
        }
    }
    printf("%d %d",min,max);
    return 0;
















}