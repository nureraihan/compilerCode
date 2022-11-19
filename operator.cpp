#include <iostream>

using namespace std;

int main()
{
    while(true){
        char ch;
        cin>>ch;
        Lebel:
        if (ch == '%' || ch=='/' || ch=='*' || ch== '+' || ch=='-'){
            cout<<ch<<" "<<"This is an Arithmetic Operator"<<endl;
        }
        else if( ch =='<' || ch =='>' || ch =='=')
            cout<<ch<<" "<<"This is a relational operator"<<endl;
        else if(ch=='&' || ch=='|' || ch =='!'){
            if(ch=='&'){
                cin>>ch;
                if(ch=='&')
                    cout<<"&& "<<"This is Logical AND Operator"<<endl;
                else{
                    cout<<"& "<<"This is bitwise operator"<<endl;
                    goto Lebel;
                }
            }else if(ch=='|'){
                cin>>ch;
                if(ch=='|')
                    cout<<"|| "<<"This is Logical OR Operator"<<endl;
                else{
                    cout<<"| "<<"This is bitwise operator"<<endl;
                    goto Lebel;
                }
            }else if(ch=='!'){
                cin>>ch;
                if(ch=='=')
                    cout<<"!= "<<"This is Not Equal Operator"<<endl;
                else{
                    cout<<"! "<<"This is bitwise operator"<<endl;
                    goto Lebel;
                }
            }
        }
        else
            cout<<ch<<" "<<"This is not a operator"<<endl;
    }
    return 0;
}
