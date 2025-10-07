#include <iostream>
using namespace std;

int main() {

    // converting from celsius to farenheit
    float celsius,farenheit;
    
    cout<<"Enter temperature in Celsius:"<<"\n";
    cin>>celsius;

    farenheit = (celsius * 9/5) + 32;
    
    cout<<celsius<<"C is "<<farenheit<<"F"<<"\n";
    
    return 0;
    
}