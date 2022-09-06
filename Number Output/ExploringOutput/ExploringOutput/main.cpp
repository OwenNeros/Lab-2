/*
 Owen Neros
 C++ Fall 2022
 Due:
 */

#include <iostream>
#include <string>

using namespace std;

string m = "Monday       ";
string t = "Tuesday      ";
string w = "Wednesday    ";
string th ="Thursday     ";
string f = "Friday       ";
string c =  "10:00    C++ 162";
string ch = "11:45    Gen Chemistry 1 165";
string ep = "8:20     Engineering Problems 180";
string ch2 ="2:15     Gen Chemistry 1 165 - lab";
string ce = "6:30     The College Experience 108";

string s1 = "   *     *     *     *";
string s2 = "*     *     *     *";

int main()
{

    cout << m << c;
    cout << "\n" << m << ch;
    cout << "\n" << m << ce;
    cout << "\n" << "\n";
    
    cout << t << ep;
    cout << "\n" << t << c;
    cout << "\n" << "\n";
    
    cout << w << c;
    cout << "\n" << w << ch;
    cout << "\n" << w << ch2;
    cout << "\n" << "\n";
    
    cout << th << ep;
    cout << "\n" << th << c;
    cout << "\n" << "\n";
    
    cout << f << c;
    cout << "\n" << f << ch;
    
    
    cout << "\n" << "\n";
    cout << s1 << "\n" << s2 << "\n";
    cout << s1 << "\n" << s2 << "\n";
    cout << s1 << "\n" << s2 << "\n";
    cout << s1 << "\n" << s2;
}
