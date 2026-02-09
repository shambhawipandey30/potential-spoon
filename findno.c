#include <stdio.h>

int main() {
    int arr[5],i,search,found=0;
    printf("Enter 5 number to insert in array: ");
    for(i=0;i<5;i++){
        printf("\n Enter number %d: ",i);
        scanf("%d",&arr[i]);
    }
    printf("\n Enter number to be search");
    scanf("%d",&search);
    for(i=0;i<5;i++){
        if(search==arr[i]){
            search=i;
            break;
        }
    }
    printf(" Element found no. %d , search ");
     
    return 0;

}