#include <stdio.h>
void main()
 {
     int a[]={5,7,9,11,45,72,36};
     int n=sizeof(a)/sizeof(int);
     int i=0,j=0,k=0;
     for(i=0;i<n-1;i++)
     {
         for(j=i+1;j<n;j++)
         {
             if(a[i]>a[j])
             {
                 int temp=a[i];
                 a[i]=a[j];
                 a[j]=temp;
             }
         }
     }

     for(k=0;k<n;k++)
        printf("%d ",a[k]);

 }
