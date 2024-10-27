#include <stdio.h>
//(*ptr)++ == *ptr = *ptr +1
int main() {
    // Write C code here
    printf("Try programiz.pro\n");
    float a = 100.0;
    float *ptr=&a;
    float **pptr=&ptr;
    printf("%d\n",ptr); // address of a
    printf("%d\n",pptr); // address of ptr

    return 0;
}



#include <stdio.h>
//(*ptr)++ == *ptr = *ptr +1
int main() {            
    // Write C code here
    
    printf("Try programiz.pro\n");
    int i =4;
    int *ptr = &i;
    int **pptr = &ptr;
    // value === *
    
    printf("%d\n",**pptr);  // 4
    printf("%d\n",*ptr);  // 4
    printf("%d\n",i);  // 4
    return 0;
}



#include <stdio.h>
//(*ptr)++ == *ptr = *ptr +1

void sq(int n);
void sq(int n){
    n=n*n;
    printf("Square is %d\n", n);
}

void _sq(int *n);
void _sq(int *n){ // EXTRACT THE VALUE FROM ADDRESS PASSED FROM MAIN
    *n = (*n)*(*n);
    printf("Square is %d\n", *n);
}
int main() {            
    // Write C code here
    int n =4;
    printf("number is :%d\n",n);
    sq(n);
    _sq(&n);  // Address of n is pass as argument 
    printf("number is :%d\n",n);// since vallue changed from address level hence , n stores 26 as value 
    
    
   
    return 0;
}



void swap(int n , int m,int p);
void swap(int n , int m,int p){
    p = n;
    n = m;
    m = p;
    printf("after swapping\n");
    
    printf("%d === %d \n",n,m);
}
int main() {            
    // Write C code here
    int p, n =4;
    int m = 5;
    printf("number is :%d==%d\n",n,m);
    swap(n,m,p);

    printf("number is :%d==%d\n",n,m);// address level pe change nahi hua 
    
   
    return 0;
}



void swap(int *n , int *m,int *p);
void swap(int *n , int *m,int *p){
    *p = *n;
    *n = *m;
    *m = *p;
    printf("after swapping\n");
    
    printf("%d === %d \n",*n,*m);
}
int main() {            
    // Write C code here
    int p, n =4;
    int m = 5;
    printf("number is :%d==%d\n",n,m);
    swap(&n,&m,&p);

    printf("number is :%d==%d\n",n,m);// address level pe change  hua 
    
   
    return 0;
}



#include <stdio.h>
/// SUM/PRODUCT/AVG

void dowork(int a,int b,int *sum,int *prod,int *avg);

void dowork(int a, int b, int *sum, int *prod, int *avg) {
    *sum = a + b;   // sum ke location par a aur b ka sum store karna
    *prod = a * b;  // prod ke location par a aur b ka product store karna
    *avg = (a + b) / 2; // avg ke location par a aur b ka average store karna
}



int main() {
    // Write C code here
    printf("Try programiz.pro\n ");
    int a=3,b=5;
    int sum,prod,avg;
    dowork(a,b,&sum,&prod,&avg);
    
    printf("sum=%d,prod=%d,avg=%d\n",sum,prod,avg);

    return 0;
}


right
 // Complete this function
    int c= *a;
   // printf("%d\n",c);
    *a = *a + *b ;
    //printf("%d\n",*a);   ;
    if(c > *b){
        *b = c - *b;
        //printf("%d",*b);
    }
    else{
        *b = *b - c;
        //printf("%d\n",*b);
    }
}


wrong
// Complete this function
    int *c= *a;
    printf("%d\n",c);
    *a = *a + *b ;
    //printf("%d\n",*a);   ;
    if(*a > *b){
        *b = *c - *b;
        //printf("%d",*b);
    }
    else{
        *b = *b - *c;
        //printf("%d\n",*b);
    }
}