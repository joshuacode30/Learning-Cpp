#include <iostream>
using namespace std;

int main() {
    //Implicit Type Conversion - Automatic/Type Promotion

    int a = 10;
    double b = a;
    /* 
    int -> double (automatic)
    a is promoted from 10 to 10.0
    safe, no data loss
    */
    cout<<"a: "<<a<<"\nb: "<<b<<"\n";


    double x = 3.5;
    int y = x; 
    /*
    double -> int (automatic)
    the fractional part is Truncated NOT Rounded
    risky due to loss of data
    */
    cout<<"x: "<<x<<"\ny: "<<y<<"\n";

    //Explicit Type Conversion - Manual/Casting 
    
    double pi = 3.14;
    int m = (int)pi;
    /*
    Older C-Style Type Casting
    Works but not safe 
    */
    cout<<"pi: "<<pi<<"\nm: "<<m<<"\n";

    return 0;
}