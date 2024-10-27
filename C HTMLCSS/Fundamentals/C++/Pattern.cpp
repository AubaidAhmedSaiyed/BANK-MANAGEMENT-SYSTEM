// To pattern print
#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"Enter number";
    cin>>n;
    int r = 0;
    for(int i = 1;i<=3;i++){
        cout<<"***"<<endl;
        
    }
    
    
    return 0;

include <iostream>
/// Pattern matching
using namespace std;
int main() {
    // Write C++ code here
    int n;
    cout<<"Enter row:";
    cin>>n;
    int m;
    cout<<"Enter column:";
    cin>>m;
    // first loop will be for row
    for(int i =1;i<=n;i++){
        for(int j=1;j<=m;j++){/// loop for coloumn
            cout<<"*";
        }
        cout<<endl;
    }   
    return 0;
}  





#include <iostream>
/// Pattern matching
// A B C D X 4
using namespace std;
int main() {
    // Write C++ code here
    int n;
    cout<<"Enter row:";
    cin>>n;
    int m;
    cout<<"Enter column:";
    cin>>m;
    // first loop will be for row
    for(int i =1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cout<<(char)(j+64)<<" ";
        }
        cout<<endl;
    }   
    return 0;
}






#include <iostream>
/// Pattern matching
// *
// * * 
using namespace std;
int main() {
    // Write C++ code here
    int n;
    cout<<"Enter row:";
    cin>>n;
    int m;
    cout<<"Enter column:";
    cin>>m;
    // first loop will be for row
    for(int i =1;i<=n;i++){
        for(int j=1;j<=i;j++){ /// Print thingss wrt row number
        /// if row is 1 then * will be 1 
        //j <=i always
            cout<<"*"<<" ";
        }
        cout<<endl;
    }   
    return 0;
}




/// 1
//  A B 
//  1 2 3
//  A B C D 
/// 1 2 3 4 5 


#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    int n ; 
    cout<<"Enter rows:";
    cin>>n;
    int m ;
    cout<<"Enter column:";
    cin>>m;
    for(int i =1;i<=n;i++){
        
        for(int j=1;j<=i;j++){
            if(i%2==0){
                cout<<char(j+64)<<" ";
            
        }
            else{
                cout<<j<<" ";
            
        }
            
        }
        cout<<endl;
        
        }
        
    return 0;
}




#include <iostream>
using namespace std;

// *******
// ******
// ****
/// observe : i + j = n +1
// j = n+1-i

int main() {
    // Write C++ code here
    int n ; 
    cout<<"Enter rows:";
    cin>>n;
    int m ;
    cout<<"Enter column:";
    cin>>m;
    for(int i =1;i<=n;i++){
        for(int j=1;j<=(n+1-i);j++){
            cout<<"*"<<" ";
           
        
        }
        cout<<endl;
    }   
        
    
    

    return 0;
}

#include <iostream>
using namespace std;

// 1 2 3 4
// 1 2 3
// 1 2
// 1

int main() {
    // Write C++ code here
    int n ; 
    cout<<"Enter rows:";
    cin>>n;
    int m ;
    cout<<"Enter column:";
    cin>>m;
    for(int i =1;i<=n;i++){
        for(int j=1;j<=(n+1-i);j++){
            cout<<j<<" ";
           
        
        }
        cout<<endl;
    }   
        
    
    

    return 0;
}


#include <iostream>
using namespace std;

//1 
  2 3 
  4 5 6

int main() {
    // Write C++ code here
    int n ; 
    cout<<"Enter rows:";
    cin>>n;
   
    int a =1;
    for(int i =1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<a++<<" ";
            
        
        }
        cout<<endl;
    }   
        
    
    

    return 0;
}



#include <iostream>
using namespace std;

//
// odd number rows
int main() {
    // Write C++ code here
    int n ; 
    cout<<"Enter rows:";
    cin>>n;
    int m ;
    cout<<"Enter column:";
    cin>>m;
    int a =1;
    for(int i =1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<2*j-1<<" ";
           
        
        }
        cout<<endl;
    }   
        
    
    

    return 0;
}




#include <iostream>
using namespace std;
/* 1
   0 1
   1 0 1
   0 1 0 1
   1 0 1 0 1
*/
 // observe  = i+j = even = in pattern = 1
// i%2 !=0  > 0 ->1
int main() {
    // Write C++ code here
    int n ; 
    cout<<"Enter rows:";
    cin>>n;
    int m ;
    cout<<"Enter column:";
    cin>>m;
    int a =1;
    for(int i =1;i<=n;i++){ // row
        for(int j=1;j<=i;j++){  /// column
            if((i+j)%2==0){
                cout<<1<<" ";
            }
           else{
               cout<<0<<" ";
           }
        
        }
       
        cout<<endl;
    }   
        
    
    

    return 0;
}



#include <iostream>
// ##*##
//##*##
//*****
//##*##
//##*##
using namespace std;
int main() {
    // Write C++ code here
    int n = 5;// row
    int m = 5; // column
    for(int i = 1;i<=n;i++){
        if(i==3){
            cout<<"*****"<<" ";
        }
        else{
            cout<<"##*##"<<" ";
        }
        cout<<endl;
    }

    return 0;
}
// more optimixe

// Online C++ compiler to run C++ program online
#include <iostream>
//  
// 
//
//  
//  
using namespace std;
int main() {
    // Write C++ code here
    int n = 5;// row
    int m = 5; // column
    int mid = n/2 + 1;
    for(int i = 1;i<=n;i++){
        for(int j =1;j<=n;j++){
            if(i==mid || j==mid) cout<<"* ";
            else cout<<"#"<<" ";
        }
        cout<<endl;
    }
       
    


    return 0;
}




#include <iostream>
//  *
//  *
//*****
//  *
//  *
using namespace std;
int main() {
    // Write C++ code here
    int n = 5;// row
    int m = 5; // column
    for(int i = 1;i<=n;i++){
        if(i==3){
            cout<<"  *****"<<" ";
        }
        else{
            cout<<"\t*"<<" ";
        }
        cout<<endl;
    }

    return 0;
}



// Online C++ compiler to run C++ program online
#include <iostream>
//  
// 
//
//  
//  
using namespace std;
int main() {
    // Write C++ code here
    int n = 5;// row
    int m = 5; // column
    int mid = n/2 + 1;
    for(int i = 1;i<=n;i++){
        for(int j =1;j<=n;j++){
            if(i==mid || j==mid) cout<<"* ";
            else cout<<" "<<" ";
        }
        cout<<endl;
    }
       
    


    return 0;
}



#include <iostream>
//  
// # # # # # x 4
//
//  
//  
using namespace std;
int main() {
    // Write C++ code here
    int n = 5;// row
    int m = 5; // column
    for(int i = 1;i<=n;i++){
        for(int j =1;j<=n;j++){
            cout<<"#"<<" ";
        }
        cout<<endl;
    }
       
    


    return 0;
}




#include <iostream>
//  
// * * * * * *
// * # # # # *
// * * * * * * 
//  
using namespace std;
int main() {
    // Write C++ code here
    int n = 4;// row
    int m = 4; // column
    
    for(int i = 1;i<=n;i++){
        for(int j =1;j<=n;j++){
            if(i==1 || j==1 || i==4|| j==4){
               cout<<"*"<<" "; 
            } 
            
            else cout<<"#"<<" ";
        }
        cout<<endl;
    }




#include <iostream>
//  
//       *
//     * *
//   * * *
// * * * * 

using namespace std;
int main() {
    // Write C++ code here
    int n = 4;// row
    int m = 4; // column
    
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=n-i+1;j++){  // for  reverse triangle 
            cout<<" "<<" ";
        }
        for(int j = 1;j<=i;j++){//  for stars 
            cout<<"*"<<" ";
        }
        
        cout<<endl;
    }
       
    


    return 0;
}

in above code, # -> " "

// # # # # 
// # # # 
// # # 
// # 
int main() {
    // Write C++ code here
    int n = 4;// row
    int m = 4; // column
    
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=n-i+1;j++){  // for  reverse triangle 
            cout<<"#"<<" ";
        }
        // for(int j = 1;j<=i;j++){//  for stars 
        //     cout<<"*"<<" ";
        // }
        
        cout<<endl;
    }
 // j < = n - i + 1      
    


    return 0;
}

but if " " -> ""
//     * 
//    * * 
//   * * * 
//  * * * * 
 
int main() {
    // Write C++ code here
    int n = 4;// row
    int m = 4; // column
    
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=n-i+1;j++){  // for  reverse triangle 
            cout<<""<<" ";
        }
        for(int j = 1;j<=i;j++){//  for stars 
            cout<<"*"<<" ";
        }
        
        cout<<endl;
    }
       
    


    return 0;
}

    1 
   1 2 
  1 2 3 
 1 2 3 4 

in above code * -> j

//         * * * * 
//       * * * * 
//     * * * * 
//   * * * * 

int main() {
    // Write C++ code here
    int n = 4;// row
    int m = 4; // column
    
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=n-i+1;j++){  // for  reverse triangle 
            cout<<" "<<" ";
        }
        for(int j = 1;j<=n;j++){//  for stars 
            cout<<"*"<<" ";
        }
        
        cout<<endl;
    }
       
    


    return 0;
}