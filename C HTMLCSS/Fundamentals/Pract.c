#include <stdio.h>
#include <string.h>
#include <stdlib.h>


                   "dont use fgets as it have extra newline at last"



#define str_size 100 //Declare the maximum size of the string

void main()
{
    char str[str_size];
    int alp, digit, splch, i,sm,cp;
    sm = digit = splch = i = cp = 0;


       printf("\n\nCount total number of alphabets, digits and special characters :\n");
       printf("--------------------------------------------------------------------\n");
       printf("Input the string : ");
       scanf("%s",str);
      // fgets(str, sizeof str, stdin);

     /* Checks each character of string*/

    while(str[i]!='\0')
    {
        if(str[i]>='a' && str[i]<='z')
        {
            sm++;
        }

        else if(str[i]>='A' && str[i]<='Z')
        {
            cp++;
        }

        else if(str[i]>='0' && str[i]<='9')
        {
            digit++;
        }
        else
        {
            splch++;
        }

        i++;
    }

    printf("Number of UPPER CASE Alphabets in the string is : %d\n", cp);
    printf("Number of LOWER CASE Alphabets in the string is : %d\n", sm);
    printf("Number of Digits in the string is : %d\n", digit);
    printf("Number of Special characters in the string is : %d\n\n", splch);


    if ( sm>=1 && cp>=1 && digit >=1 && splch >=1 )
    {
        printf(" Your Password is Strong");
    }

      else if ( sm>=1 && cp==0 && digit >=1 && splch >=1 )
    {
        printf(" Your Password is Average");
    }
    else
    {
     printf(" Your Password is poor");
    }

}




int sum = 0;
int f(int n, int a, int b, int c) {
  //Write your code here.
  if(n==1){
      return a;
    
  }
  if(n==2){
      return b;
      
  }
  if(n==3){
      return c;
  }
  else{
      return f(n-1,1,2,3) + f(n-2,1,2,3) + f(n-3,1,2,3);
      
  } 
}

int main() {
    int n, a, b, c;
  
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = f(n, a, b, c);
 
    printf("%d", ans); 
    return 0;
}



// reverse array using same array

int main()
{
    int num, *arr, i,j,box;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);  
    }
    if(num%2==0){
    for(j=0;j<num/2;j++){
       box=arr[j];
       arr[j]=arr[num-1 -j];
       arr[num-1-j]=box;
    }
    }
    else{
        for(j=0;j<(num-1)/2;j++){
         box=arr[j];
         arr[j]=arr[num-1 -j];
        arr[num-1-j]=box;
    }
    }
   
    
    /* Write the logic to reverse the array. */

    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    return 0;



// Print each word of the sentence in a new line.

"homework"

// Given a string, , consisting of alphabets and digits, find the frequency of each digit in the given string.

