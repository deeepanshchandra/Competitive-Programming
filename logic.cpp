#include <iostream>
using namespace std;

int main()
{
    for (int i=0; i<n; i++){
        for (int j=i+1; j<n ; j++){
            if (vec[i]==vec[j]){
                continue;
            }
            else{count++;}
        } 
    }
    return 0;
}