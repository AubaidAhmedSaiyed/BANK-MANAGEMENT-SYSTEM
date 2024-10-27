int main() {
    // Write C code here
    float price[3];
    printf("eNTER 3 prices\n");
    scanf("%f",&price[0]);
    scanf("%f",&price[1]);
    scanf("%f",&price[2]);
    
    printf("Toatl after GST : %f",price[0]+(0.18*price[0]));
    
    return 0;
}


int main() {
    // Write C code here
    int arr[5];
    int*ptr= &arr[0];
    // input
    for(int i =0;i<5;i++){
        printf("%d index:",i);
        scanf("%d",(ptr+i));
    }

//output
    for(int i = 0;i<5;i++){
        printf("%d index=%d\n",i,*(ptr+i));
    }
    return 0;
}


int main() {
    // Write C code here
    int arr[5];
    int*ptr= &arr[0];
    for(int i =0;i<5;i++){
        printf("%d index:",i);
        scanf("%d",&arr[i]);// store in that address 
    }
    for(int i = 0;i<5;i++){
        printf("%d index=%d\n",i,arr[i]);
    }
    return 0;
}

// array function
void  numb(int arr[],int n);
void numb(int arr[],int n){
    for(int i =0;i<n;i++){
        printf("%d\t",arr[i]); // \t == space
        
    }
    
}
int main() {
    // Write C code here
    int arr[] = {23,34,56,678,90};
    numb(arr,5);
    return 0;
}






#include <stdio.h>
// Function to cou nt number of odd number in an array
void CountOdd(int arr[],int n);

int main() {
    // Write C code here
   int n;
   printf("enter size of array:\n");
   scanf("%d",&n);
   int arr[n];
   for(int i = 0;i<n;i++){
       printf("At index %d:\t",i);
       scanf("%d",&arr[i]);
   }
   CountOdd(arr,n);
   return 0;
}
void CountOdd(int arr[],int n){
    int count =0;
    for(int i =0;i<n;i++){
        if(arr[i]%2!=0){
            count++;
        }
    }
    printf("The Number of Odd Numbers Are:%d\n",count);
}




#include <stdio.h>
// Function to reverseer an array
/// SEE VIDEO
int main() {
    // Write C code here
    int arr[6]={1,2,3,4,5,6};
    for(int i=0;i<3;i++){
       int One = arr[i];
       int Two =arr[6-i-1]; 
       arr[i]= Two;
       arr[6-i-1]=One;//// LOGIC 
    /* TAKING 2 VARIABLES AND THEN STORING FIRST AND LAST ELEMNT AND THEN SWTICH THAT ELEMTNS - INSIDE FOR LOOP 
    */
    }
    for(int i =0;i<6;i++){
        printf("%d\t",arr[i]);
    }
    return 0;
}

// to find max in array
#include <stdio.h>
int stu(int st[],int n);
int stu(int st[],int n){
    int temp;  /// create  a temp variable to sotre max value by comparing one by one using for loop
    
    temp = st[0];
    for(int i=0;i<n;i++){
        if(temp<st[i]){
            temp=st[i];
        }
        
    }
    return temp;
}

int main() {
    int n; 
    printf("Enter Number of Student :");
    scanf("%d",&n);
    int st[n];
    for(int i=0;i<n;i++){
        printf("enter:");
        scanf("%d",&st[i]);
        
    }
    printf("%d",stu(st,n));
    
    
    
  

    return 0;
}
