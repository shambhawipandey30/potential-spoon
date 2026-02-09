#include<stdio.h>
 int sum(int a[])
 {
    int s=0;
    for (int i=0;i<s;i++)
    s=s+a[i];
    return s;
 }
  
 int man (int a [])
 {
    int n =0;
    int s =0;
    for (int i=0;i<s;i++)
    if(n<a[i])
    n=a[i];
    return n; 
 }

 void main (){
    int arr [5];
    int i ;
    for (i=0;i<5;i++){
        printf ("\n Enter a number ");
        scanf ("%d", &arr [i]);
    }

    printf("\n sum of number %d", sum(arr));
    printf("\n man of number %d",man(arr));
    
 }