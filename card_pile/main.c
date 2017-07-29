#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N,t,n,i,j,k,a[50],b[50],f=0;
    //int z=5;
    printf("Enter the size of the array:");
    scanf("%d",&N);
    printf("Enter the list:");
    for(k=0;k<N;k++)
    {
        scanf("%d",&a[k]);
    }
    n=N-1;
    i=0;
    j=n;
    t=0;
    while(i<j)
    {
        while(a[i]==a[j])
        {
            i++;
            j--;
        }
      if(a[i]<a[j])
      {
          while(a[i]!=a[j])
          {
              a[i+1]=a[i]+a[i+1];
              i++;
              f++;
          }
          b[t]=a[i];
          //b[z]=a[i];
          //z--;
          t++;
         i++;
          j--;
      }
       else
       {
          while(a[j]!=a[i])
          {
              a[j-1]=a[j]+a[j-1];
              j--;
              f++;
          }
           b[t]=a[j];
          // b[z]=a[j];
           //z--;
          t++;
          j--;
          i++;
       }
       if(i==j)
       {
           b[t]=a[i];
           t++;
       }
    }
   // printf("N=%d",N);
   if(f==(N-1))
   {

       printf("TRIVIAL MERGE");
   }
   else{
   int o=(N-f)/2;
    printf("No of merges:%d",f);
    printf("\nThe shortened list is:");
    for(k=0;k<o;k++)
    {
        printf("\n%d",b[k]);
    }
     for(k=o;k>=0;k--)
    {
        printf("\n%d",b[k]);
    }

   }

    return(0);
}
