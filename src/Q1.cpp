#include <iostream>

using namespace std;

int main () {

int num1=1;
int num2;
    cout << "Please enter height: ";
    cin >> num2;
while (num1<=num2)
    {
        int num3=1;
        while (num3<=num1)
        {
            cout << "*";
            ++num3;
        }
        ++num1;
        cout << endl;
    }    
system("pause");
}
