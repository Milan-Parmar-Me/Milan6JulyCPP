#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n,milan[n];
    int m=0;
    int i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
  
        scanf("%d",&milan[i]);
          if(milan[i]>0)
    {
        m=m+milan[i];
    }
        
    }
    printf("%d",m);
    
    
    return 0;
}
