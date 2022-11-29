#include <iostream>
#include <regex>
using namespace std;
regex integer("^[0-9]+$");
bool isInteger(string str)
{
    return regex_match(str, integer) ? 1 : 0;
}

regex floatnum("^[0-9]+[.][0-9]+$");
bool isFloatnum(string str)
{
    return regex_match(str, floatnum) ? 1 : 0;
}

regex exponent("^[0-9]+[E][+-]?[0-9]+$");
regex floatexponent("^[0-9]+[.][0-9]+[E][+-]?[0-9]+$");

bool isExponent(string str)
{
    return (regex_match(str, exponent) || regex_match(str, floatexponent)) ? 1 : 0;
}
int main(){
    while(true){
        string word;
        cin >> word;
        if (isInteger(word))
        {
            cout << word << " is an integer." << endl;
        }
        else if (isFloatnum(word))
        {
            cout << word << " is a float number." << endl;
        }
        else if (isExponent(word))
        {
            cout << word << " is an exponent number." << endl;
        }
        else
            cout << word << "Not a number " << endl;
    }
}
