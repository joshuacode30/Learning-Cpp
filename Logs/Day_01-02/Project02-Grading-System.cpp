#include <iostream>
using namespace std;

int main() {
    
    cout<<"Welcome to the Grading System:\n";

    float marks, percentage;

    cout<<"Enter your total marks/600:\n";
    cin>>marks;
    
    percentage = marks/600 * 100; 

    if (percentage >= 90) {
        cout<<"Percentage: "<<percentage<<"% , Grade: A+ , Outstanding\n";
    } else if (percentage >= 80) {
        cout<<"Percentage: "<<percentage<<"% , Grade: A , Excellent\n";
    } else if (percentage >= 70) {
        cout<<"Percentage: "<<percentage<<"% , Grade: B+ , Very Good\n";
    } else if (percentage >= 60) {
        cout<<"Percentage: "<<percentage<<"% , Grade: B , Good\n";
    } else if (percentage >= 55) {
        cout<<"Percentage: "<<percentage<<"% , Grade: C+ , Above Average\n";
    } else if (percentage >= 50) {
        cout<<"Percentage: "<<percentage<<"% , Grade: C , Average\n";
    } else {
        cout<<"Percentage: "<<percentage<<"% , Grade: F , Needs Improvement\n";
    }
    return 0;
}