#include <iostream>
#include <string>
using namespace std;

int main() {

    /*
    char array[10]
    can store a c-string of length = 9
    (from index 0 to index 8)
    and null character, which is required for c-string
    (at index 9)
    
    OR 
    
    we can use string objects using <string> header
    */
   
    char name[20]; 
    string surname;
    int age;

    cout<<"Enter your name:\n";
    cin>>name;
    cout<<"Enter your surname:\n";
    cin>>surname;
    cout<<"Enter your age:\n";
    cin>>age;

    cout<<"Hello "<<name<<" "<<surname<<". "<<"You will be "<<age + 1<<" years old soon!\n";

    /*
    cannot use '' single quotes for a string but only for single characters like 'A' not 'AB'
    while
    "" double quotes work for both strings and single characters like "A" and "AB"
    */

    return 0;
}