#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string a, b;
    cin >> a >> b;
    
    cout << a.size() << " " << b.size() << endl;
    cout << a + b << endl;
    char c0 = a[0];
    char c1 = b[0];
    
    a[0] = c1;
    b[0] = c0;
    
    cout << a << " " << b << endl;
    
    
    
    return 0;
}