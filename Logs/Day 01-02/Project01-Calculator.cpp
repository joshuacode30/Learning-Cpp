#include <iostream>
using namespace std;

int main() {
    
    cout<<"Welcome to Simple Calculator\n";

    cout<<"Choose number with corresponding option:\n";
    cout<<"1. Add\n";
    cout<<"2. Subtract\n";
    cout<<"3. Multiply\n";
    cout<<"4. Divide\n";
    
    int option;
    float numA, numB, result;

    cin>>option;

    switch(option) {
        case 1: 
            cout<<"Enter 1st number:\n"; 
            cin>>numA;
            cout<<"Enter 2nd number:\n"; 
            cin>>numB;
            result = numA + numB;
            cout<<"Sum of "<<numA<<" and "<<numB<<" is "<<result<<"\n";
            break;
        case 2:
            cout<<"Enter 1st number:\n"; 
            cin>>numA;
            cout<<"Enter 2nd number:\n"; 
            cin>>numB;
            result = numA - numB;
            cout<<"Differnce of "<<numA<<" with "<<numB<<" is "<<result<<"\n";
            break;
        case 3: 
            cout<<"Enter 1st number:\n"; 
            cin>>numA;
            cout<<"Enter 2nd number:\n"; 
            cin>>numB;
            result = numA * numB;
            cout<<"Product of "<<numA<<" and "<<numB<<" is "<<result<<"\n";
            break;
        case 4:
            cout<<"Enter 1st number:\n"; 
            cin>>numA;
            cout<<"Enter 2nd number:\n"; 
            cin>>numB;
            result = numA / numB;
            cout<<"Quotient of "<<numA<<" over "<<numB<<" is "<<result<<"\n";
            break;
        default:
            cout<<"Invalid choice.\n";
        }

    cout<<"Exiting...\n";

    return 0;
}