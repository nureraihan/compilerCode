#include <iostream>

using namespace std;

int main()
{
    while(true){
        char ch;
        cin>>ch;
        if (ch == '%' || ch=='/' || ch=='*' || ch== '+' || ch=='-'){
            cout<<ch<<" "<<"This is an Arithmetic Operator"<<endl;
        }
        else if(ch=='<' || ch =='>' )
            cout<<ch<<" "<<"This is a relational operator"<<endl; 
        
        else 
            cout<<ch<<" "<<"This is not a operator"<<endl;
    }
    return 0;
}
