#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int n;
    cin>>n;
    if(n%2==0) /// using if
    cout<<"Even it is!";
    else cout<"Odd It is!";
   
    

    return 0;
}

//  OR 


#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int n;
    cin>>n;
    if(n%2==0) cout<<"Even it is!";
   
    

    return 0;
}

/// OR 
// for organizing you can 
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int n;
    cout<<"Enter n :";
    cin>>n;
    if(n%2==0){
        cout<<"Even it is!";
    }
    else{
        cout<<"Odd it is!";
    }
    

    return 0;
}




// To print absolute value of input number
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int n ;
    cout<<"Enter n :";
    cin>>n;
    if(n>0){
        cout<<n;
    }
    else{
        cout<<-n;  /// negative of n (since in else - n will be negative)
    }
   

    return 0;
}





// To print absolute value of input number
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int n ;
    cout<<"Enter n :";
    cin>>n;
    if(n>0){
        cout<<n;
    }
    else{
        n = -n;  // to change n completely
        cout<<n;  /// negative of n (since in else - n will be negative)
    }
    cout<<"\n";
    cout<<n;
    
   

    return 0;
}


/// Profit / losss

#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int c,s;
    cout<<"Enter selling Price:";
    cin>>s;
    cout<<"Ennter Cost Price: ";
    cin>>c;
    if(s>c){
        cout<<"Profit!\n";
        cout<<"Around :";
        cout<<s-c;
    }
    else if(s<c){
        cout<<"Loss \n!";
        cout<<"Around: ";
        cout<<c-s;
    }
    else{
        cout<<"No Profit No Loss !";
    }
    return 0;
}



#include <iostream>
using namespace std;

// print table of 19
int main() {
    // Write C++ code here
    for(int i = 19;i<=190;i++){
        if(i%19==0){
            cout<<i<<" | ";
        }
    }
    return 0;
}  output :  19 | 38 | 57 | 76 | 95 | 114 | 133 | 152 | 171 | 190 | 

another method
#include <iostream>
using namespace std;

// print table of 19
int main() {
    // Write C++ code here
    for(int i = 19;i<=190;i+=19){
        
        cout<<i<<" | ";
    
    }
    return 0;
}




#include <iostream>
using namespace std;

// print AP
int main() {
    // Write C++ code here
    int n = 10;
    for(int i = -1;i<=n;i+=4){
        
        cout<<i<<" | ";
    
    }
    return 0;
}





#include <iostream>
using namespace std;

// print AP
int main() {
    // Write C++ code here
    int n = 10;
    // for last term use An formul == 2n -1
    for(int i = -1;i<=(2*n-1);i+=2){
        
        cout<<i<<" | ";
    
    }
    return 0;
}





#include <iostream>
using namespace std;
// another methdo
// print AP
int main() {
    // Write C++ code here
    int n = 10;
    // for last term use An formul == 2n -1
    for(int i = 1;i<=(2*n-1);i++){
        
        cout<<i<<" | ";
        i = i + 2;
    
    }
    return 0;
}
//To find highest factor other than itself

#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int n ;
    cout<<"Enter n :";
    cin>>n;
    for(int i = 1;i<n;i++){
        if(n%i==0){
            cout<<i<<endl;
        }
    }

    return 0;
}


// // OPTIMIZE  WAY 
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int n ;
    cout<<"Enter n :";
    cin>>n;
    for(int i = 1;i<=n/2;i++){  /// seee
        if(n%i==0){
            cout<<i<<endl;
        }
    }

    return 0;
}


/// more optimize
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int n ;
    cout<<"Enter n :";
    cin>>n;
    for(int i=n/2;i>=1;i--){  /// see 
        if(n%i==0){
            cout<<i<<endl;
            break;
        }
    }

    return 0;
}