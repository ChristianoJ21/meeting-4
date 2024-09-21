#include <iostream>
using namespace std;

int a;

int main()
{
    cout << "Input : ";
    cin >> a;
    
cout << "Multiplication Table For " << a << "(1 - 10)" << endl;
cout << "---------------------------------------" << endl;
    
    for (int i = 1; i <= 10; i++) {
        
        cout << a << " x " << i << " = " << a*i << endl;      
    }

    return 0;
}
