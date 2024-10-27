#include <stdio.h>
// string first & last : store detail of user and print all character using loop
void printstring(char arr[]);

void printstring(char arr[]){
    for(int i=0 ; arr[i] != '\0' ; i++){///condition  : runs till last null characrter occur if it occur then loop stops
        printf("%c",arr[i]);
    }
    printf("\n");
}
int main() {
    // Write C code here
    printf("Try programiz.pro\n");
    char first[] = "AUBAID";
    char last[]= "AHMED";
    printstring(first);
    printstring(last);
    
    

    return 0;
}


#include <stdio.h>
// string first & last : store detail of user and print all character using loop
void printstring(char arr[]);// for printing character by character

void printstring(char arr[]){
    for(int i=0 ; arr[i] != '\0' ; i++){
        printf("%c\t",arr[i]);
    }
    printf("\n");
}
int main() {
    // Write C code here
    printf("Try programiz.pro\n");
    char first[50];
    printf("Remember!\n Maximum 50 character can be stored!\n");
    printf("Enter your name:");
    scanf("%s",first); // store before space (for ex. aubaid ahmed: print/store== aubaid only)
    printstring(first);
    printf("The Nmae is :%s",first);
    
    

    return 0;
}

int main() {
    // Write C code here
    printf("Try programiz.pro\n");
    char first[50];
    fgets(first,50,stdin);//input
    puts(first);//output
    
    

    return 0;


#include <stdio.h>
// string first & last : store detail of user and print all character using loop
void printstring(char arr[]);

void printstring(char arr[]){
    int count=0;
    for(int i = 0;arr[i]!='\0';i++){
        count++;
    }
    printf("length is %d",count-1); /// since null also include
}
int main() {
    // Write C code here
    printf("Try programiz.pro\n");
    char name[50];
    printf("Enter your name:");
    fgets(name,50,stdin);
    printstring(name);
    
    

    return 0;
}

// copy string
#include <stdio.h>
#include <string.h>

int main() {
    // Write C code here
    printf("Try programiz.pro\n");
    char old[]="OLD";
    char New[]="NEW";
    strcpy(New,old);
    puts(New);/// value of old transfer to  New 

    return 0;
}



#include <stdio.h>
#include <string.h>

// take string as input from user using %c: character by character
int main() {
    // Write C code here
    printf("Try programiz.pro\n");
    char str[50];
    char ch;
    int i=0;
    while(ch!='\n'){  // since by character when we click oon enter it stops taking input : newline  
        scanf("%c",&ch);
        str[i]= ch;// inputed character goes to string character 
        i++;
        
    }
    str[i]='\0'; // since by using %c : we have to input null character
    puts(str);
    
    

    return 0;
}





#include <stdio.h>
#include <string.h>

// salting: attach 123 at end of password
void salting(char pass[]);
void salting(char pass[]){
    char salt[]="123";
    char newpass[100];
    strcpy(newpass,pass);// copy user password to another string for salting
    printf("%s",strcat(newpass,salt));// test+123
    
}
int main() {
    // Write C code here
    char pass[100];

    scanf("%s",pass);
    salting(pass);
    
   
    

    return 0;
}



//function to slice string and return string from n to m
void slice(char str[],int n ,int m);
void slice(char str[] , int n , int m){
    // n and m : valid values
    char newstr[100];
    int j = 0;
    for(int i = n;i<=m;i++,j++){/// all values that  are valid or already in function can be used inside like this
        newstr[j]= str[i];
    }
    newstr[j]='\0';
    puts(newstr);
    
}
int main() {
    // Write C code here
    char str[50];
    int n =3,m =6;
    printf("enter string:");
    scanf("%s",str);
    printf("New SSliced String:");
    slice(str,n,m);
    
    
    
   
    

    return 0;
}




#include <stdio.h>
#include <string.h>

//function to check a in string 
void slice(char str[]);
void slice(char str[]){
    
    int count=0;
    for(int i = 0;i<=strlen(str);i++){
        if(str[i] == 'a'){
            count++;
        }
    }
    printf("%d",count);
   
    
}
int main() {
    // Write C code here
    char str[50];
   
    printf("enter string:");
    scanf("%s",str);
    
    slice(str);
    
    
    
   
    

    return 0;
}



#include <stdio.h>
#include <string.h>
// check if character present in string or not
int main() {
    // Write C code here
    printf("Try programiz.pro\n");
    char str[50];
    char ch,count=0;
    printf("Enter a string:\n");
    fgets(str,50,stdin);
    puts(str);
    printf("Enter Character:\n");
    scanf("%c",&ch);
    for(int i =0;i<strlen(str);i++){
        if(str[i]==ch){
            count++;
        }
    }
    if(count>0){
        printf("Yes,it is present!");
    }
    else{
        printf("Not  Present!");
    }
    return 0;
}




// C program to check a string is palindrome or not
// using recursion

#include <stdio.h>
#include <string.h>

void isPalindrom(char str[], int index)
{
    int len = strlen(str) - (index + 1);

    if (str[index] == str[len])
    {
        if (index + 1 == len || index == len)
        {
            printf("Given string is a palindrome\n");
            return ;
        }
        isPalindrom(str, index + 1);
    }
    else {
        printf("Given string is not a palindrome\n");
    }
}

int main()
{
    char str[32] = { 0 };
    char rev[32] = { 0 };

    int cnt = 0;
    int flg = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    isPalindrom(str, 0);

    return 0;
}




/ palindrome without making new string
#include <string.h>

int main()
{
    char s[1000];
    int i,n,c=0;

    printf("Enter  the string : ");
    gets(s);
    n=strlen(s);

    for(i=0;i<n/2;i++)
    {
    	if(s[i]==s[n-i-1])
    	c++;

 	}
 	if(c==i)
 	    printf("string is palindrome");
    else
        printf("string is not palindrome");



    return 0;
}
