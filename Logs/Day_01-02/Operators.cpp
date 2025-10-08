#include <iostream>
using namespace std;

int main() {
    
    // Arithmetic 
    cout<<"\nArithmetic:\n";

    int a = 2, b = 7, c = 10,d,e;

    a = a + b;      // 9
    b = a - c;      // -1
    c = c * 10;     // 100 
    d = 27/a;       // 3
    e = c%3;        // 1 
    
    cout<<a<<'\n';
    cout<<b<<'\n';
    cout<<c<<'\n';
    cout<<d<<'\n';
    cout<<e<<'\n';

    
    // Relational
    cout<<"\nRelational:\n";

    int  x = 10, y = 20;
    cout<< (x>y) <<'\n';    // 0
    cout<< (x<y) <<'\n';    // 1
    cout<< (x>=y) <<'\n';   // 0
    cout<< (x<=y) <<'\n';   // 1
    cout<< (x==y) <<'\n';   // 0
    cout<< (x!=y) <<'\n';   // 1    


    // Logical 
    cout<<"\nLogical:\n";
    
    bool A = false, B = true;
    
    // 'and' or '&&'
    cout<<"AND:\n";
    cout<<(A and A)<<'\n';  // 0
    cout<<(A and B)<<'\n';  // 0
    cout<<(B and A)<<'\n';  // 0
    cout<<(B and B)<<'\n';  // 1
    
    // 'or' or '||'
    cout<<"OR:\n";
    cout<<(A or A)<<'\n';   // 0
    cout<<(A or B)<<'\n';   // 1
    cout<<(B or A)<<'\n';   // 1
    cout<<(B or B)<<'\n';   // 1
    
    // 'not' or '!'
    cout<<"NOT:\n";
    cout<<(not A)<<'\n';    // 1
    cout<<(not B)<<'\n';    // 0
    
    
    // Assignment
    cout<<"\nAssignment:\n";
    
    float X = 10, Y = 12.5, Z = 3.14, U = 50.0;
    
    X += Y;     // 22.5
    Y -= Z;     // 9.36
    Z *= U;     // 157
    U /= X;     // 2.22222
    
    cout<<X<<'\n';
    cout<<Y<<'\n';
    cout<<Z<<'\n';
    cout<<U<<'\n';
    
    
    // Increment/Decrement
    cout<<"\nIncrement/Decrement:\n";
    
    int j = 5;
    int k = ++j + 10;  
    // j becomes 6 first, then k = 6 + 10
    // j = 6, k = 16
    cout<<"j: "<<j<<"\nk: "<<k<<"\n";
    
    int l = 5;
    int m = l++ + 10;  
    // m = 5 + 10, then l becomes 6
    // l = 6, m = 15
    cout<<"l: "<<l<<"\nm: "<<m<<"\n";
    
    int p = 5;
    int q = p++ + ++p;  
    // Step 1: p++ → uses 5, then p = 6
    // Step 2: ++p → p = 7, uses 7
    // q = 5 + 7 = 12
    // Final: p = 7, q = 12
    cout<<"p: "<<p<<"\nq: "<<q<<"\n";
    


    return 0;
}