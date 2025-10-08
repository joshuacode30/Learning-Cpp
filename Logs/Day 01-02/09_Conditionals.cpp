#include <iostream>
#include <string>
using namespace std;

int main() {
    
    // If 

    int age = 19;

    if (age>=18) {
        cout<<"You are an adult.\n";
    }
    
    // if-else 
    
    if (age >= 18) {
        cout<<"You are an adult.\n";
    } 
    else {
        cout<<"You cannot vote.\n";
    }

    // if-else if-else

    int marks = 75;

    if (marks >= 90) {
        cout<<"Grade: A\n";
    } 
    else if (marks >= 75) {
        cout<<"Grade: B\n";
    }
    else {
        cout<<"Grade: C\n";
    }

    // Nested if

    int driver_age = 25;
    bool hasLicense = true;

    if (age >= 18) {
        if (hasLicense) {
            cout<<"You can drive.\n";
        } else {
            cout<<"You need a license to drive.\n";
        }
    } else {
        cout<<"You aren't old enough to drive yet.\n";
    }

    // ternary (conditional) operator

    string msg = (age >= 18) ? "Adult" : "Minor";
    cout<<"You are a(n) "<<msg<<"\n";

    // Switch statement - with break

    int choice = 3;

    switch(choice) {
        case 1: cout<<"Vanillaa\n"; break;
        case 2: cout<<"Chocolate\n"; break;
        case 3: cout<<"Strawberry\n"; break;
        default: cout<<"Invalid choice\n";
    }
    
    // Switch statement with fallthrough - without break 

    int num_choice = 2;

    switch (num_choice) {
        case 1: 
            cout<<"One\n";
        case 2: 
            cout<<"Two\n";
        case 3: 
            cout<<"Three\n";
        case 4: 
            cout<<"Four\n";
        case 5: 
            cout<<"Five\n";
        default: 
            cout<<"Other\n";
    }

    // intentional fallthrough using Switch with no break

    int day = 6;

    switch (day) {
        case 6:
        case 7:
            cout << "Weekend\n";
            break;
        default:
            cout << "Weekday\n";
    }

    // fallthrough using explicit marker C++17

    int x = 1;

    switch (x) {
        case 1:
            cout << "One\n";
            [[fallthrough]];  // explicitly allows falling through
        case 2:
            cout << "Two\n";
            break;
    }

    // Compound conditions
    // AND
    if (age > 18 && hasLicense) {
        cout << "You can drive.\n";
    }

    //OR
    int lvl = 36;
    int money = 2285;
    if (money >= 5000 || lvl >= 30) {
        cout<<"You may progress to the next stage.\n";
    }

    // NOT
    bool loggedIn = false;
    if (!loggedIn) {
        cout<<"Enter username and password to log in.\n";
    }

    return 0;
}