#include <iostream>

using namespace std;

int main () {

int x;
int y;
string str="";
    cout <<"Please enter height: ";
    cin >> x;

    y=1;
    x=x*1;
    do{
        int z=x;
        cout << str;
        do{
            cout << "* ";
            --z;
        } while (z>=y);
            ++y;
            cout << endl;
            str+=" ";
    } while (y<=x);

system("pause");
}
