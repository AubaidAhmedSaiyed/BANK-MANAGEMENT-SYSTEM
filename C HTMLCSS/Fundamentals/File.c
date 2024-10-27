#include <stdio.h>

int main()
{
    printf("Hello World\n");
    FILE*fptr;
    fptr = fopen("fie.txt","r"); // open
    if(fptr == NULL){
        printf("THe file doesnt exixt\n");
    
    }
    else{
        printf("File Opend!");
    }
    fclose(fptr); // close
    
    return 0;
}


// reading from the file

#include <stdio.h>

int main()
{
    printf("Hello World\n");
    FILE*fptr;
    fptr = fopen("Text.txt","r"); // open
    if(fptr == NULL){
        printf("THe file doesnt exixt\n");
    
    }
    else{
        printf("File Opend!");
    }
    
    char ch;
    fscanf(fptr,"%c",&ch);  /// Reading From file
    printf("The Character is:%c\n",ch); // Printing the character
    // using another functuio  to Reading
    
    printf("%c\n", fgetc(fptr));
    fclose(fptr); // close
    
    
    
    return 0;
}

// writing in the file
#include <stdio.h>

int main()
{
    
    FILE*fptr;
    fptr = fopen("Text.txt","w"); // open
    if(fptr == NULL){
        printf("THe file doesnt exixt\n");
    
    }
    else{
        printf("File Opend!");
    }
    fprintf(fptr,"%c",'A');
    fprintf(fptr,"%c",'h');
    fprintf(fptr,"%c",'m');
    fprintf(fptr,"%c",'e');
    fprintf(fptr,"%c",'d');
    char ch;
    fscanf(fptr,"%c",&ch);  /// Reading From file
    printf("The Character is:%c\n",ch); // Printing the character
    
    fclose(fptr); // close
    

    return 0;
}

// reading using while loop

#include <stdio.h>

int main()
{
    
    FILE*fptr;
    fptr = fopen("Text.txt","r"); // open
    if(fptr == NULL){
        printf("THe file doesnt exixt\n");
    
    }
    else{
        printf("File Opend\n!");
    }
    
    char ch; // char to read all char
    ch = fgetc(fptr); // char read and store in char
    while(ch!= EOF){  // we have first store first char in ch then use while so that it can check thath ch 
    /// ch is not equla to eof
    
        printf("%c",ch);  // not use \n : so thath print in one line
        ch = fgetc(fptr);// read further char 
        
    }
    printf("\n");
    
    fclose(fptr); // close
    

    return 0;
}


#include <stdio.h>

int main()
{
    
    FILE*fptr;
    fptr = fopen("Text.txt","r");
    int n ;
    fscanf(fptr,"%d",&n);
    printf("number :%d\n",n);
    fclose(fptr);

    return 0;
}


// TAKING USER INPUT TO WRITE IN FILE


#include <stdio.h>
#include <string.h>


int main()
{
    FILE*fptr;
    fptr=fopen("Text.txt","a");
    
    //wrtinig in file
    char ch[100];
    printf("Enter name:");
    fgets(ch,100,stdin);
    puts(ch);
    

    
    for(int i = 0; i<=strlen(ch); i++){
        fputc(ch[i],fptr);
    }
    
    // reading from the FILE
    char c;
    c = fgetc(fptr);
    while(c!=EOF){
        printf("%c",c);
        c = fgetc(fptr);
    }
    return 0;
}


#include <stdio.h>
#include <string.h>


int main()
{
    FILE*fptr;
    fptr=fopen("Text.txt","a");
    
    //wrtinig in file
    char name[100];
    int marks;
    float cgpa;
    printf("Enter name:");
    scanf("%s",name);  // already a pointer hai array
    printf("Enter amrks:");
    scanf("%d",&marks);
    printf("Enter cgpa:");
    scanf("%f",&cgpa);
    
    fprintf(fptr,"%s\t",name);
    fprintf(fptr,"%d\t",marks);
    fprintf(fptr,"%f",cgpa);
    
    
    
    // reading from the FILE
    
    return 0;
}
Output: 
name  marks  cgpa


// input n to write from 1 to n odd number in file
#include <stdio.h>
#include <string.h>


int main()
{
    FILE*fptr;
    fptr=fopen("Text.txt","w");
    int n ;
    printf("Enter numbner n:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(i%2!=0){
            fprintf(fptr,"%d\t",i);
        }
    }
    
    fclose(fptr);
   
    
    
    // reading from the FILE
    
    return 0;
}

// 2 numbeer are in file : program to replace with their sum

// input two number then sum 