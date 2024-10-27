#include <stdio.h>


int sum(int,int);//// Function Portotype

int sum(int a,int b){  /// Function Definetion
    printf("THe Subtraction of given is:%d\n",a-b);
    ///return a-b;
}

int main() {
    // Write C code here

    int a = 100;
    int  b = 78;
    sum(a,b);
    return 0;
}



/// No pRINT INSIDE FUCTION
#include <stdio.h>


int sum(int,int);//// Function Portotype

int sum(int a,int b){  /// Function Definetion
    //printf("THe Subtraction of given is:%d\n",a-b);
    return a-b;
}

int main() {
    // Write C code here
    /// initialize random generator
    int a = 100;
    int  b = 78;
    printf("%d\n",sum(a,b));//// OR int c = sum(a,b) THEN printf($d,c)
    return 0;
}
////// int === void if function not return

#include <stdio.h>
int sum(int a , int b);

int sum(int a,int b){
    return a+b;
}
int main() {
    // Write C code here
    printf("Try programiz.pro\n");
    int a=6;
    int b=9;
    printf("Sum is %d : ", sum(a,b));

    return 0;
}


/// Table of 10

#include <stdio.h>
void Table(int a);
void Table(int a){
    printf("TABLE OF NUMBER %d IS :\n",a);
    for(int i = 1 ; i<=10 ; i++){
        printf("%d X %d = %d\n",a,i,a*i);
    }
}

int main() {
    // Write C code here
    printf("Try programiz.pro\n");
    int a =10;
    Table(a);

    return 0;
}



#include <stdio.h>


float SquArea(float a);
float SquArea(float a){
    return a*a;
    
}

float RectArea(float a,float b);
float RectArea(float a, float b){
    return a*b;
}
int main() {
    // Write C code here
    printf("Try programiz.pro\n");
    float a = 10.0;
    float b = 12.0;
    printf("The Area of Square: %f\n",SquArea(a));
    printf("The Area of Rectangle: %f\n",RectArea(a,b));

    return 0;
}


// RECURSIOn Solution ===  ITERATION solution
// FUNCTION CALL ITSELF MUL;TIPLE TIMES
// Base Case :  Condition which stops recurssion

#include <stdio.h>


void Recursion(int count);
void Recursion(int count){
    if(count==0){
        return;
    }
    printf("Hello World\n");
    Recursion(count-1);
}
int main() {
    // Write C code here
    printf("Try programiz.pro\n");
    Recursion(5);
    return 0;
}




#include <stdio.h>


/// SUM OF  FIRST  N NATURAL NUMEBR  :  if n=2 : 1+2 : sum(1)+2 : 
/// sum(n-1) + n
int sum(int a);
int sum(int a){
    if(a<=0){   /// BASE CASE
        return 0;
    }
    int Sumn = sum(a-1);
    int SUm = Sumn + a;
    return SUm;
}
int main() {
    // Write C code here
    printf("Try programiz.pro\n");
    printf("%d\n",sum(5));
    return 0;
}

// Let's break down the process of how the corrected recursive `sum` function works in C:

// 1. **Function Definition with Base Case:**
//    ```c
//    int sum(int a) {
//        if (a <= 0) {
//            return 0; // base case
//        }
//        int Sumn = sum(a - 1);
//        int SUm = Sumn + a;
//        return SUm;
//    }
//    ```
//    - If `a` is less than or equal to 0, the function returns 0. This prevents infinite recursion and provides a stopping point.

// 2. **Recursive Case:**
//    - If `a` is greater than 0, the function calls itself with the argument `a - 1`.
//    - The result of this call is stored in `Sumn`.
//    - Then, `a` is added to `Sumn` to get `SUm`, which is returned.

// ### Example of `sum(5)`:

// - **Initial Call:**
//   - `sum(5)`:
//     - `a` is 5, so it calls `sum(4)`.

// - **First Level of Recursion:**
//   - `sum(4)`:
//     - `a` is 4, so it calls `sum(3)`.

// - **Second Level of Recursion:**
//   - `sum(3)`:
//     - `a` is 3, so it calls `sum(2)`.

// - **Third Level of Recursion:**
//   - `sum(2)`:
//     - `a` is 2, so it calls `sum(1)`.

// - **Fourth Level of Recursion:**
//   - `sum(1)`:
//     - `a` is 1, so it calls `sum(0)`.

// - **Base Case:**
//   - `sum(0)`:
//     - `a` is 0, so it returns 0.

// ### Unwinding the Recursion:

// As each recursive call completes, the function returns and computes the sum step by step:

// - `sum(1)`:
//   - `Sumn = sum(0) = 0`
//   - `SUm = 0 + 1 = 1`
//   - Returns 1

// - `sum(2)`:
//   - `Sumn = sum(1) = 1`
//   - `SUm = 1 + 2 = 3`
//   - Returns 3

// - `sum(3)`:
//   - `Sumn = sum(2) = 3`
//   - `SUm = 3 + 3 = 6`
//   - Returns 6

// - `sum(4)`:
//   - `Sumn = sum(3) = 6`
//   - `SUm = 6 + 4 = 10`
//   - Returns 10

// - `sum(5)`:
//   - `Sumn = sum(4) = 10`
//   - `SUm = 10 + 5 = 15`
//   - Returns 15

// Thus, the final result of `sum(5)` is 15.

// ### Complete Corrected Program:
// ```c
// #include <stdio.h>

// int sum(int a) {
//     if (a <= 0) {
//         return 0; // base case
//     }
//     int Sumn = sum(a - 1);
//     int SUm = Sumn + a;
//     return SUm;
// }

// int main() {
//     printf("%d\n", sum(5)); // Output: 15
//     return 0;
// }
// ```

// This program correctly calculates and prints the sum of the first 5 natural numbers.






#include <stdio.h>
/// 5!=1x2x3x4x5
/// n!=nx(n-1)!

/// FACTORIAL
int Fact(int a);
int Fact(int a){
    if(a==0 || a==1){
        return 1;
    }
    return a*Fact(a-1);
    
}

int main() {
    // Write C code here
    printf("Try programiz.pro\n");
    int n = 5;
    int fact = 1;
    int i =1;
    do{
        fact = fact*i;
        i++;
    }while(i<=n);
    printf("%d\n",fact);
    printf("%d",Fact(n));
    return 0;
}





#include <stdio.h>
int fact(int);
int fact(int n){
    if(n==0 || n==1){
        return 1;
    }
    return n*fact(n-1);
}
// Recursion
//Factorial 
int main(){
    int n = 5;
    printf("%d",fact(n));
    return 0;
}


#include <stdio.h>
int fact(int);
int fact(int n){
    if(n==1){
        return 1;
    }
    printf("%d\t",n);
    fact(n-1);
}
// Recursion
//print n to 1
int main(){
    int n = 10;
    printf("%d",fact(n));
    return 0;
}



#include <stdio.h>
void fact(int,int);
void fact(int n,int x){
    if(n>x){
        return;
    }
    printf("%d\t",n);
    fact(n+1,x);
    
}
// Recursion
//print 1 to n 
int main(){
    int x = 10,n=1;
    fact(n,x);
    return 0;
}