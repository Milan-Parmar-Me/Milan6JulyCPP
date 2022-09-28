#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if(a>b)
    {
        if(a>c)
        {
            if(a>d)
            {
                printf("%d",a);
            }
            else{
                printf("%d",d);
            }
        }
    }
    else if(d>a)
    {
        if(d>b)
        {
            if(d>c)
            {
                printf("%d",d);
            }
            else {
            printf("%d",c);
            }
            
            
        }
        
    }
       else if(c>d)
    {
        if(c>a)
        {
            if(c>b)
            {
                printf("%d",c);
            }
            else {
            printf("%d",b);
            }
            
            
        }
        
    }
 
    
    
    
    
    return 0;
}

