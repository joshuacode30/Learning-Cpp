#include <iostream>
#include <utility> // gives access to swap() helper function
using namespace std;

int main() {
    // Using Arithmetic Operations

    // Might cause overflow if a+b exceeds integer limit

    int a = 10, b = 20;

    cout<<"Before:\n"<<"a: "<<a<<"\nb: "<<b<<"\n";
    
    a = a + b; // a=30
    b = a - b; // b=10
    a = a - b; // a=20
    
    cout<<"After:\n"<<"a: "<<a<<"\nb: "<<b<<"\n";
    

    
    // Using bitwise XOR swap

    // No extra memory, no overflow
    // Only works on integers
    
    int x = 10, y = 20;
    
    cout<<"Before:\n"<<"x: "<<x<<"\ny: "<<y<<"\n";
    
    x = x ^ y; 
    y = x ^ y;
    x = x ^ y;
    
    cout<<"After:\n"<<"x: "<<x<<"\ny: "<<y<<"\n";
    
    

    // Using swap() helper function

    // Modern, works for any type
    // No overflow risk
    // technically uses temp inside function
    // Cleanest and most maintable

    int m = 10, n = 20;
    
    cout<<"Before:\n"<<"m: "<<m<<"\nn: "<<n<<"\n";
    
    swap (m,n);

    cout<<"After:\n"<<"m: "<<m<<"\nn: "<<n<<"\n";

    return 0;
}