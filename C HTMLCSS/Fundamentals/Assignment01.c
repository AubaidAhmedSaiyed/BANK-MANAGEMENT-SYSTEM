#include <stdio.h>
int n;
char ch1[100];
int sum =0;
int digit;
int main() {
    // Write C code here
    int ch;
    options:
    printf("\t\t\t Welcome \t\t\t\n");
    printf("\t\t-----------------\n");
    printf("\t1.Reverse a number\n");
    printf("\t2.Sum of Digits\n");
    printf("\t3.Check Palindrome or not\n");
    printf("\t4.Factors of Given Number\n");
    printf("\t5.Perfect Or Not\n");
    printf("\t6.Magic Number or Not\n");
    printf("\t7.Armstrong number or not\n");
    printf("\t8.Print Factorial\n\n");\
    
    printf("Enter a Choice:");
    scanf("%d",&ch);
    
    switch(ch){
        
        // To Reverse a Number
        case 1:
        int r = 0;
        printf("Enter  Number:");
        scanf("%d",&n);
        while(n>0){
            digit = n%10;
            r = r*10 + digit;
            n=n/10;
        }
        printf("Reversed Number is:%d\n",r);
        printf("Do you want to select more?");
        scanf("%s",&ch1);
        if(ch1=="yes"){
            goto options;
        }
        else{
            break;
        }
        
        
        // To Find Sum of Digits
        case 2:
        
        printf("Enter  Number:");
        scanf("%d",&n);
        while(n>0){
            digit = n%10;
            sum = sum + digit;
            n=n/10;
        }
        printf("Sum of Digits  is:%d\n",sum);
        break;\
        
        // To check for Palindrome Number
        case 3:
        
        printf("Enter  Number:");
        scanf("%d",&n);
        int m = n;
        while(m>0){
            digit = m%10;
            r = r*10 + digit;
            m=m/10;
        }
        if(r==n){
            printf("Given number is Palindrome !\n");
        }
        else{
            printf("Not a Palindrome Number !\n");
        }
        break;
        
        // To Find Factors of given Number
        case 4:
        printf("Enter  Number:");
        scanf("%d",&n);
        int i=1,count = 0;
        do{
            if(n%i == 0){
                count++;
                sum = sum*10 + i;
            }
            i++;
            
        }while(i<=n);
        
        if(count == 1 ){
            printf("Number of Factors of Are:%d only",count);
        }
        else if(count==2){
            printf("Number of Factors of Are:%d",count);
            printf("Factors : 1  %d ",n);
        }
        else if(count>2){
            printf("Number of Factors of Are:%d\n",count);
            while(sum>0){
                digit = sum%10;
                printf("Factor : %d\t|",digit);
                sum =sum/10;
        }
        }
        
        break;
        
        // To check for perfect Number 
        case 5:
        printf("Enter  Number:");
        scanf("%d",&n);
        
        do{
            if(n%i == 0){
                count++;
                sum = sum + i;
            }
            i++;
            
        }while(i<n);
        if(sum == n){
            printf("The Given Number is Perfect! ");
        }
        else{
            printf("The Given Number is Perfect! ");
        }
        break;
        
        // To check for Magic Number
        case 6:
        printf("Enter  Number:");
        scanf("%d",&n);
        m=n;
        while(m>0){
            digit = m%10;
            sum = sum + digit;
            m=m/10;
        }
        // Reversing the Sum
        int summ = sum;
        while(summ>0){
            digit = summ%10;
            r = r*10 + digit;
            summ=summ/10;
        }
        if(sum*r==n){
            printf("The Given number is Magic Number!");
        }
        else{
            printf("The Given number is Not a Magic Number!");
            
        }
        break;
        
        // To check for Armstrong Number
        case 7:
        printf("Enter  Number:");
        scanf("%d",&n);
        m = n;
        while(m>0){
            digit = m%10;
            sum = sum + (digit*digit*digit);
            m=m/10;
        }
        if(sum == n){
            printf("The Given number is Amrstrong!");
        }
        else{
            printf("The Given number is Not a Armstrongr!");
            
        }
        
        break;
        
        // To print Factorial
        case 8:
        printf("Enter  Number:");
        scanf("%d",&n);
        if(n==0 || n==1){
            printf("Factorial : 1 ");
        }
        else{
            int fact = 1;
            for(int i  = 1;i<=n;i++){
                fact = fact*i;
            }
            printf("Factorial is:%d", fact);
        }
    
        break;
    }
    printf("\n");
    printf("\t......Have a good day!......");

    return 0;
}