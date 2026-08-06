#include <iostream>
#include<vector>
using namespace std;

int main()
{
    int n,high,low,count=0;
    cin>>n;
    vector<int> vec(n);
    for (int k=0; k<n; k++){
        cin>>vec[k];
    }
    high = vec[0];
    low = vec[0];       
    for(int i=1; i<n; i++){
        if(vec[i]>high){
            count++;
            high=vec[i];
            }
        else if(vec[i]<low){
            count++;
            low=vec[i];
        }
        
    }
    cout<<count;
    return 0;
}