#include <stdio.h> /// AREA OF SQUARE

int main() {
    // Write C code here
    int a ;
    printf("Let's calculate the area of square!\n");
    printf("Enter SIDE OF SQUARE:");
    scanf("%d",&a);
    printf("The Area is:%d", a*a);
    return 0 ;

}


#include <stdio.h>

int main() {
    // Write C code here
   int a = 22;
   int b = a;
   int c = b*6;  /////////.//////////
   int d = 1,e; //////////////////
   return 0;

}


#include <stdio.h>
#include<math.h>
int main() {
    // Write C code here
   int a= pow(2,3);
   printf("%d",a);
   return 0;

}

#include <stdio.h>

int main() {
    // Write C code here
    int i = j ;
    int j= a+j-i;
    int a,b,c,d;
    a=b=c=d=40;
    return 0;
}



#include <stdio.h>

int main() {
    // Write C code here
    //// TYPE CASTING
    int n = 45;
    float m = 32.34;
    n = (int) m;
    printf("Value of N %d",n); //// n = 32
    return 0;
}


/// IF statement
#include <stdio.h>

int main() {
    // Write C code here
    printf("Try programiz.pro\n");
    int age;
    printf("Enter Age:");
    scanf("%d",&age);
    if(age>5){
        printf("Your age is greater than 5");
    }
    else{
        printf("?????");
    }
    return 0;
}



#include <stdio.h>

int main() {
    // Write C code here
    printf("Try programiz.pro\n");
    int a;
    printf("Enter Age:");
    scanf("%d",&a);
    if(a){/// all non-zero are true 
        printf("Your age is greater than 5");
        printf("Value of not(a) is %d",!a);   // used here is NOT operator (wich reverses one/zero)
    
    }
    else{
        printf("Your Agfe is not greater than 5");
    }
    return 0;
}




#include <stdio.h>

int main() {
    // Write C code here
    printf("Try programiz.pro\n");
    int age;
    printf("Enter age:");
    scanf("%d",&age);
    if(age>18){
        printf("You are eligible!");
    }
    else if(age>60){ /// similar to python's elif
        printf("You are eligible but try not to do that!");
    }
    else{
        printf("You are not eligible !");
    };
    printf("Thank you");
    return 0;
}



#include <stdio.h>

int main() {
    // Write C code here
    printf("Try programiz.pro\n");
    //// IF - ELSE short form 
    /// condition ? expression-if-true : expression-if-false
    int a,b;
    printf("Enter a:");
    scanf("%d",&a);
    printf("Enter b:");
    scanf("%d",&b);
    a=b?printf("YES True it is!\n") : printf("OOno False it is!\n");
    printf("Thank you");
    return 0;
}



#include <stdio.h>

int main() {
    // Write C code here
    printf("Try programiz.pro\n");
    ////SWITCH..... STATEMENT
    
    int a;
    printf("Enter a:");
    scanf("%d",&a);
    
    switch(a){
        case 1:
            printf("You entered one\n");
            break; /// if not break then all below will be  print 
        case 2:
            printf("You entered two\n");
            break;
        default:
            printf("Nothing Matched\n");
            
        
    }
    printf("Thank you");
    return 0;
}



#include <stdio.h>

int main() {
    // Write C code here
    ///To check Upper/Lower
    char ch;
    printf("Enter a character:");
    scanf("%c",&ch);
    if(ch>=97 && ch<=122){
        printf("The entered character is of  Lowercase");
    }
    else{
        printf("The entered character is of Uppercase");
    }
    return 0;
}



#include <stdio.h>

int main() {
    // Write C code here
    ///To get ascii value of characcter
    char ch = 'a';
    printf("The value of ch is %d",ch);
    return 0;
}