#include <stdio.h>

int main(){
    int arr[5],i;
    printf("Enter 5 number to insert in array:");
    for(i=0;i<5;i++){
        printf("Enter number %d",i);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<5;i++){
        printf("Element no %d:",i,arr[i]);
    }
    return 0;
}