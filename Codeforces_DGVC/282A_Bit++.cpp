#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n,value=0;
    cin>>n;

    for(int i=0; i<n; i++){
        string bit;
        cin>>bit;
        if (bit=="X++" or bit=="++X"){
            value++;
        }
        else if(bit=="--X" or bit=="X--"){
            value--;
        }
    }
    cout<<value;
    return 0;
}