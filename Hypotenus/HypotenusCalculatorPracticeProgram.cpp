#include <iostream>
#include <cmath>

using namespace std;

int main(){
    
    double a;
    double b;
    double c;

    cout << "Enter side A: ";
    cin >> a;

    cout << "Enter size B: ";
    cin >> b;


    c = sqrt(pow(a,2) + pow(b,2));
    cout << "side C: " << c;

    return 0;
}




