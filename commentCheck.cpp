#include <iostream>
#include <cstring>
using namespace std;
int main(){
    while(true){
        string line;
        getline(cin, line);
        int l = line.length();
        if(line[0]=='/' && line[1]=='/'){
            cout<<"Single line comment"<<endl;
        }
        else if(line[0]=='/' && line[1]=='*'){
            if(line[0]=='/' && line[1]=='*' && line[l-2]=='*' && line[l-1]=='/')
                cout<<"Multi line comment"<<endl;
            else if (line[0]=='/' && line[1]=='*'){
                while(getline(cin,line)){
                    int p=line.length();
                    if(line[p-2]=='*' && line[p-1]=='/'){
                         cout<<"Multi line comment"<<endl;
                        break;
                    }
                }
            }
        }
        else{
            cout<<"Not a comment"<<endl;
        }
    }
    return 0;
}
