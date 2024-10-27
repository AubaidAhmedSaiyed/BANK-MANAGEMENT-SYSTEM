// To check number is composite or not 

/// Approach :
// from 1 to n 
// but composite = except 1 & n;
// loop = 2 to n-1


// basic rule = num/nub : num = Big number/ nub = Small Numbber

#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int n ;
    cout<<"Enter number;";
    cin>>n;
    int count = 0;
    for(int i =1; i<=n;i++){
        
        if(n%i==0){
            count = count+1;
        }
    }
    if(count>2){
        cout<<"Composite!";
    }
    else{
        cout<<"Prime!";
    }
    
    
        
      
    
    return 0;
}

// /Another Approach

#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int n ;
    cout<<"Enter number;";
    cin>>n;
    int count = 0;
    for(int i =2; i<=n/2;i++){
        
        if(n%i==0){
            count = count+1;
            break;
        }
    }
    if(n==1) cout<<"Neither prime nor composite!";
    else if(count>0){
        cout<<"Composite!";
    }
    else cout<<"Prime";




 // Online C++ compiler to run C++ program online
// To print odd  number using continue
#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"Enter number";
    cin>>n;
    for(int i=1;i<=n;i++){
        if(i%2==0) continue;
        cout<<i<<" ";
        
    }
} 


// To print odd  number using continue using while 
#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"Enter number";
    cin>>n;
    int i = 1;
    while(i<=n){
        if(i%2==0){
            i++;
            continue;
        }
        cout<<i<<" ";
        i++;
        
    }
    return 0;
        
    
}




// To print odd  number using continue using do-while 
#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"Enter number";
    cin>>n;
    int i = 1;
    do{
        if(i%2==0){
            i++;
            continue;
        }
        cout<<i<<" ";
        i++;
    }while(i<=n);
        
    
    return 0;
        
    
}




// To count number of digits of number
#include<iostream>
#include<string.h>
using namespace std;
int main(){
    int n ;
    cout<<"Enter number";
    cin>>n;
    int count=0;
    while(n>0){
        n=n/10;// divide number by 10 : 123/10=12(excluding digit sfter point)
        count++;;
    }
    cout<<count;
    
    return 0;
        
    
}




// To get sum of digit
// n%10 = last digit of number
// n  = n /10 => number after removing last digit
#include<iostream>
#include<string.h>
using namespace std;
int main(){
    int n ;
    cout<<"Enter number";
    cin>>n;
    int ld, sum=0;
    while(n>0){
        ld = n%10;
        n = n/10;
        sum+=ld;
    }
    cout<<sum;
    
    return 0;
        
    
}




// To get product of digit
// n%10 = last digit of number
// n  = n /10 => number after removing last
#include<iostream>
#include<string.h>
using namespace std;
int main(){
    int n ;
    cout<<"Enter number";
    cin>>n;
    int ld, sum=1;
    while(n>0){
        ld = n%10;
        n = n/10;
        sum*=ld;
    }
    cout<<sum;
    
    return 0;
        
    
}




// See VIDEO
// To reverse number
#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"Enter number";
    cin>>n;
    int r = 0;
    while(n>0){
        int ld = n%10;// last dgit
        r*=10;// r=r*10
        r+=ld;// adding
        n=n/10;
        
        
    }
    cout<<r;
    
    
    
    return 0;
        
    
}