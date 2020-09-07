#include<iostream>
using namespace std;

int main()
{
    int i = 0, s;
    string y;
    cout << "Enter letters: ";
    cin >> y;
    string x = { y };
    s = y.size();
    cout << "Capital letter: ";

    while (i < s)
    {       
        if (x[i] >= 65 && x[i] <= 90)          
            cout << x[i] ;     
        i++;
    }
    cout << endl;
    return 0;
}
