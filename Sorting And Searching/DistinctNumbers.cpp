#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int DistinctNumbers(int n, vector<int>a){
    sort(a.begin(),a.end());
    int ans=1;
    
    for(auto i=1;i<n;i++){
        if(a[i]!=a[i-1]){
            ans++;
        }
    }
    
    
    return ans;
    
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin>>n;
    
    vector<int>a;
    
    for(auto i=0;i<n;i++){
        int ins;
        cin>>ins;
        
        a.push_back(ins);
    }
    
    cout<<DistinctNumbers(n,a)<<endl;

    return 0;
}
