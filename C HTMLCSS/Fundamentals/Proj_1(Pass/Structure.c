#include <stdio.h>
#include <string.h>

struct student{        ///Creating structiure
    int rollN;
    char name[100];
    float cgpa;
}; // REmember

int main() {
    // Write C code here
    printf("Try programiz.pro\n");
    struct student s1; //using 

    s1.rollN=123;
    s1.cgpa=8.9;
    strcpy(s1.name,"Aubaid"); // since using array notaion wer have defined string so we can not directly change (see in notes)
    
    printf("Student RollNu mb : %d",s1.rollN);

    return 0;
}





#include <stdio.h>
#include <string.h>

struct student{        ///Creating structiure
    int rollN;
    char name[100];
    float cgpa;
}; // REmember

int main() {
    
    // using Array Notation
    // structure to extract marks info of student from differnet branches
   
    struct student IT[100];
    
     /// 100 means ===  100 student 
     // each student have name ,roll and cgpa
    
    IT[0].rollN = 56;
    IT[0].cgpa = 8.9;
    strcpy(IT[0].name , "Aubaid");
    
    printf("Student Nmae %s\n",IT[0].name);

    return 0;
}




#include <stdio.h>
#include <string.h>

struct student{        ///Creating structiure
    int rollN;
    char name[100];
    float cgpa;
}; // REmember

int main() {
    
    struct student Aubaid = {13,"AUBaid",9.9};
    printf("Roll Number:%d\n",Aubaid.rollN);  // without pointer
    
    // printing using pointers
    struct student*ptr ;
    ptr = &Aubaid;
    
    printf("Roll Numbeer:%d\n",(*ptr).rollN);
    // *ptr = Whole Aubaid 
    // *ptr. ww== ww only 
    
    return 0;
}



#include <stdio.h>
#include <string.h>

struct student{        ///Creating structiure
    int rollN;
    char name[100];
    float cgpa;
}; // REmember

int main() {
    
    struct student Aubaid = {13,"AUBaid",9.9};
    printf("Roll Number:%d\n",Aubaid.rollN);  // without pointer
    
    // printing using pointers
    struct student*ptr ;
    ptr = &Aubaid;
    
    printf("Roll Numbeer:%d\n",(*ptr).rollN);
    printf("Roll Numbeer:%d\n",ptr->rollN);  // simplicity 
    // *ptr = Whole Aubaid 
    // *ptr. ww== ww only 
    
    return 0;
}





#include <stdio.h>
#include <string.h>

struct student{        ///Creating structiure
    int rollN;
    char name[100];
    float cgpa;
}; // REmember
// first create structure then function create

void Student(struct student s1);// s1 structure which help to print
void Student(struct student s1){
    printf("Roll Numbeer:%d\n",s1.rollN);
    printf("Roll Numbeer:%s\n",s1.name);  // if s --> c then only one letter will print since %c - only one letter(character)
    printf("Roll Numbeer:%f\n",s1.cgpa);
    
}
int main() {
    
    struct student Aubaid = {13,"AUBaid",9.9};
    printf("Roll Number:%d\n",Aubaid.rollN);  // without pointer
    
    // printing using pointers
    struct student*ptr ;
    ptr = &Aubaid;
    
    printf("Roll Numbeer:%d\n",(*ptr).rollN);
    printf("Roll Numbeer:%d\n",ptr->rollN);
    
    printf("Printing using Fuction \n");
    // printing value of Aubaid 
    Student(Aubaid);  // only name of variable like s1 or Aubaid
    
    return 0;
}





#include <stdio.h>
#include <string.h>

struct student{        ///Creating structiure
    int rollN;
    char name[100];
    float cgpa;
}; // REmember
// first create structure then function create

void Student(struct student s1);// s1 structure which help to print
void Student(struct student s1){   // parameter is copy of original argument
    printf("Roll Numbeer:%d\n",s1.rollN);
    printf("Roll Numbeer:%s\n",s1.name);  // if s --> c then only one letter will print since %c - only one letter(character)
    printf("Roll Numbeer:%f\n",s1.cgpa);
    
    s1.rollN=15;// this  will not change  in structure because structure  are pass by call by value !!!
    
}
int main() {
    
    struct student Aubaid = {13,"AUBaid",9.9};
    printf("Roll Number:%d\n",Aubaid.rollN);  // without pointer
    
    
    
    printf("Printing using Fuction \n");
    
   
    // printing value of Aubaid 
    Student(Aubaid);  // only name of variable like s1 or Aubaid
    Aubaid.rollN = 14;
    printf("Change in main function \n");
    printf("Roll Number:%d\n",Aubaid.rollN);
    
    return 0;
}






#include <stdio.h>
struct vector{
    int x;
    int y;
};
void calcsum(struct vector v1 ,struct vector v2,struct vector sum);
void calcsum(struct vector v1 ,struct vector v2,struct vector sum){
    sum.x = v1.x + v2.x;
    sum.y = v1.y + v2.y;
    /// SINCE THIS PROCESS WILL NOT REFLECT IN MAIN FUNCTION BECAUSE OF PASS BY VALUE : HENCE PRINT IT INSIDE THIS FUNCTION 
    // OR WE CAN CREATE POINTER TO SAVE IN MAIN 
    printf("Sum of X : %d\n",sum.x);  
    printf("Sum of y : %d\n",sum.y);
}

int main() {
    // Write C code here
    printf("Try programiz.pro\n");
    struct vector v1 = {5,10};
    struct vector v2 = {3,7} ; 
    struct vector sum = {0}; // initialize 
    
    calcsum(v1,v2,sum);

    return 0;
}







#include <stdio.h>
struct complex{
    int real;
    int img;
};


int main() {
    // Write C code here
    printf("Try programiz.pro\n");
    struct complex c1={5,8};
    struct complex*ptr = &c1;
    
    printf("Real part:%d",ptr->real);
    
    
 
    
    

    return 0;
}