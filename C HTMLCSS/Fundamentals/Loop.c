#include <stdio.h>

int main() {
    // WHILE LOOP
    printf("Try programiz.pro\n");
    int i=0;
    while(i<4){
        printf("Happy\n");
        i = i+1; ///  or i++
        
    }

    return 0;
}






#include <stdio.h>

int main() {
    // Write C code here
    /// print natural number from 10 to 20 when initial loop  counter is initialised to zero
    int i = 0; // initial loop counter is initialised to zero
    while (i<=20){
        if(i>=10){
            printf("Number is:%d\n",i);
        }
        i++;
    }
    

    return 0;
}




#include <stdio.h>

int main() {
    // Write C code here
    /// ++i: increment first then prints i
    /// i++: print first then increment i
    int i = 6; // initial loop counter is initialised to zero
    printf("Number is:%d\n",i++); /// print 6 but change it as 7
    printf("Number is%d\n",i);//// 7 will be print
    printf("Number is:%d\n",++i); //// 8 will be print

    return 0;
}




#include<stdio.h>

int main() {
    // Write C code here
    /// DO- WHILE LOOP
    /// while check condition then execute
    /// do-while: execute code then checks condition(while loop execute at least once.)
    int i =0;
    
    do{
        printf("the vslue of i is %d\n",i);
        i++;
    } while (i<4);
    return 0;
}   /// printf execute then increment then check under while loop then cycle...







#include <stdio.h>

int main() {
    /// print first n natural number using do-while
    int i = 1 ;
    int n;
    printf("Enter number:");
    scanf("%d",&n);
    do{
        printf("%d\n",i);
        i++;
        
    } while(i<=n);
    return 0;
}



#include <stdio.h>

int main() {
    /// for loop
    int n = 6;
    for(int i = 0; i<n ; i++){
        printf("Value is :%d\n",i);
    }/// i<n : condition
    //// int i =0: inistialise 
    //// i++: iterate 
    
    return 0;
}




#include <stdio.h>

int main() {
    /// for loop: first n natural number
    int n ;
    printf("Enter numner:");
    scanf("%d",&n);
    
    for(int i = 1; i<=n ; i++){
        printf("Value is :%d\n",i);
    }
    
    return 0;
}





#include <stdio.h>

int main() {
    /// for loop:decrementing (reverse order natural number)
    int n ;
    printf("Enter numner:");
    scanf("%d",&n);
    
    for(n; n; n--){  // here n in second refers to that value of n is non-zero
        printf("Value is :%d\n",n);
    }
    
    return 0;
}





#include <stdio.h>

int main() {
    /// break statement
    int n ;
    printf("Enter numner:");
    scanf("%d",&n);
    
    for(n; n<15; n++){  // here n in second refers to that value of n is non-zero
        if(n%2==0){
            printf("The number is divisible by 2\n");
            break;
        }
        printf("Value is :%d\n",n);
    }
    
    return 0;
}





#include <stdio.h>

int main() {
    // Write C code here
    /// SUM OF FIRST n NATURAL NUMBER USING  do-while
    int n, i = 1;
    printf("Enter value of n:");
    scanf("%d",&n);
    int sum =0;
    do{
        sum+=i;
        i++;
    } while(i<=n);
    printf("Sum of FIrst %d natursal number is:\n",n);
    printf("%d",sum);

    
    return 0;
}