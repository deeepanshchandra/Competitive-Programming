#include <iostream>
using namespace std;

int main() {
    string str;
    cin>>str;
    for(int i=0;i<str.length();i++){
        for(int j=0;j<i;j++){
            if(str[i]==str[j]){
                cout<<"NO"<<endl;
                break;
            }
        }
    }
    cout<<"YES"<<endl;
    return 0;
}