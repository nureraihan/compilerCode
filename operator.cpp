#include<bits/stdc++.h>
using namespace std;

bool findOperator(string ar[], int size, string inp) {
    for(int i = 0; i < size; i++){
        if(ar[i] == inp) {
            return true;
        }
    }
    return false;
}
int main() {
    string arithmetic[] = {"+", "-", "", "/", "%", "++", "--"};
    string relational[] = {"==", "!=", ">", "<", ">=", "<="};
    string logical[] = {"&&", "||", "!"};
    string bitwise[] = {"&", "|", "~", "^", "<<", ">>"};
    string assignment[] = {"=", "+=", "-=", "=", "/=", "%=", "<<=", ">>=", "&=", "^=", "|="};
    string inp;
    while(true){
        cin>>inp;
        if(findOperator(arithmetic, 7, inp)){
            cout<<inp<<" "<<"Arithmetic Operator"<<endl;
        }else if(findOperator(relational, 6, inp)){
            cout<<inp<<" "<<"Relational Operator"<<endl;
        }else if(findOperator(logical, 3, inp)){
            cout<<inp<<" "<<"Logical Operator"<<endl;
        }else if(findOperator(bitwise, 6, inp)){
            cout<<inp<<" "<<"Bitwise Operator"<<endl;
        }else if(findOperator(assignment, 11, inp)){
            cout<<inp<<" "<<"Assignment Operator"<<endl;
        }else{
            cout<<inp<<" "<<"Not an operator"<<endl;
        }
    }
    return 0;
}
