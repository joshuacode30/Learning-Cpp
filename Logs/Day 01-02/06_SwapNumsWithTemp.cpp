#include <iostream>
using namespace std;

int main() {
    
    int a = 5, b = 10, temp;
    
    cout<<"Before:\n"<<"a: "<<a<<"\nb: "<<b<<"\n";

    temp = a;
    a = b;
    b = temp;

    cout<<"After:\n"<<"a: "<<a<<"\nb: "<<b<<"\n";

    return 0;
}