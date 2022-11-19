//To check the valid identifier, keyword
#include <cstring>
#include <iostream>
using namespace std;

bool isIdentifier(string str)
{

    if (!((str[0] >= 'a' && str[0] <= 'z') || (str[0] >= 'A' && str[0] <= 'Z')|| str[0] == '_'))
        return false;
    for (int i = 1; i < str.length(); i++) {
        if (!((str[i] >= 'a' && str[i] <= 'z')|| (str[i] >= 'A' && str[i] <= 'Z')|| (str[i] >= '0' && str[i] <= '9') || str[i] == '_'))
            return false;
    }
    return true;
}

int main(){
    while(true){
        string str;
        cin>>str;
        if(!str.compare("if") || !str.compare("else") || !str.compare("while") || !str.compare("do") || !str.compare("break") ||
            !str.compare("continue") || !str.compare("int") || !str.compare("double") || !str.compare("float")
           || !str.compare("return") || !str.compare("char") ||!str.compare("register") || !str.compare("main")
            || !str.compare("case") || !str.compare("char") || !str.compare("sizeof") || !str.compare("long")
           || !str.compare("short") || !str.compare("typedef") || !str.compare("volatile") || !str.compare("union") || !str.compare("struct")
            || !str.compare("switch") || !str.compare("enum") || !str.compare("extern") || !str.compare("unsigned") || !str.compare("void")
           ||!str.compare("auto") || !str.compare("static") || !str.compare("struct") ||!str.compare("default") || !str.compare("goto"))
            cout<<'"'+str+'"'<<" "<<"This is a Keyword"<<endl;
        else if(isIdentifier(str))
            cout<<'"'+str+'"'<<" "<<"This is an Identifier"<<endl;
        else
            cout<<'"'+str+'"'<<" "<<"This is not a valid keyword or identifier"<<endl;
    }
    return 0;
}
