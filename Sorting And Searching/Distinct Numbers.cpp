/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int DistinctNumbers(int n, vector<int>a){
    unordered_map<int,int>m;
    
    for(auto i=0;i<n;i++){
        m[a[i]]++;
    }
    
    
    return m.size();
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
