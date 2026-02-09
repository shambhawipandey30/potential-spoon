#include<stdio.h>
 int getsum (int arr[],int n) {
    int sum=0;
     for(int i=0;i<n;i++){
        sum+=arr[i];
     }

     return sum;
}
 int main() {
  int arr[] ={1,2,3,4,5};

    int n=sizeof (arr) / sizeof (arr[0]);
    int sum = getsum (arr,n);
    printf ("%d", sum);
    return 0;
 }