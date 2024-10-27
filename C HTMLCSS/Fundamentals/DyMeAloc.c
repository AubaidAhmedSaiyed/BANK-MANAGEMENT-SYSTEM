#include <stdio.h>
#include <stdlib.h>  // / for DMA
int main()
{
    printf("Hello World\n");
    int *ptr;
    ptr = (int*)malloc(5*sizeof(int));
    /// assigning values
    ptr[0]= 1; 
    ptr[1] = 2;
    ptr[2] = 3;
    ptr[3]= 56;
    ptr[4] = 46;
    
    for(int i = 0 ; i<5;i++){
        printf("%d\t",ptr[i]); /// like an array 
    }
    
    printf("%d\n",sizeof(int));// 4 (output)

    return 0;
}



#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    
    ptr = (int*)calloc(5,sizeof(int));
    /// assigning values
    // ptr[0]= 1; 
    // ptr[1] = 2;
    // ptr[2] = 3;
    // ptr[3]= 56;
    // ptr[4] = 46;
    
    for(int i = 0 ; i<5;i++){
        printf("%d\t",ptr[i]); /// like an array 
    }

    return 0;
}output:   0 0 0 0 0 



#include <stdio.h>
#include <stdlib.h>
//to allocate memory of size n - entered by user 

int main()
{
    int *ptr;
    int n ;
    printf("enter number:");
    scanf("%d",&n);
    ptr = (int*)malloc(n*sizeof(int));
    /// assigning values
    // ptr[0]= 1; 
    // ptr[1] = 2;
    // ptr[2] = 3;
    // ptr[3]= 56;
    // ptr[4] = 46;
    
    for(int i = 0 ; i<n;i++){
        printf("%d\t",ptr[i]); /// like an array 
        /// if create like array then ask from user it svalue
    }

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
//to allocate memory of 5 then increase it to size n - entered by user 

int main()
{
    int *ptr;
    int n ;
    printf("enter number:");
    scanf("%d",&n);
    ptr = (int*)calloc(5,sizeof(int));
     //assigning values
    ptr[0]= 1; 
    ptr[1] = 2;
    ptr[2] = 3;
    ptr[3]= 56;
    ptr[4] = 46;
    
    for(int i = 0 ; i<5;i++){
        printf("%d\t",ptr[i]); /// like an array 
    }
    ptr = realloc(ptr,n);
    
    for(int i = 0 ; i<8;i++){
        printf("%d\t",ptr[i]); /// like an array 
    }

    return 0;
}