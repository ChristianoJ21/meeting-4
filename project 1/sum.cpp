#include <iostream>
using namespace std;

int sum = 0;

int main()
{
    int i;
    cout << "input : ";
    cin >> i;
    
    for (i; i >= 1; i--) {
      
        sum += i;
    }
cout << "sum : " << sum << endl;
    return 0;
}
