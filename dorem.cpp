#include<iostream>
#include<vector>
#include<map>
using namespace std;

int main() {
    int t;
    cin >> t;

    for(int i = 0; i < t; i++) {
        int n;
        cin >> n;
        vector<int>v;
        //if 3 or more distinct elements then no
        //if 1 distinct el then yes
        //if 2 then check if count(a)-count(b)>=2
        map<int,int>mpp;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            mpp[x]++;
        }
        if(mpp.size()>=3)cout<<"No"<<endl;
        else if(mpp.size()==1)cout<<"Yes"<<endl;
        else{
            for(auto x:mpp) v.push_back(x.second);
            if(abs(v[0]-v[1])>=2)cout<<"No"<<endl;
            else{
                cout<<"Yes"<<endl;
            }
        }
    }
    
    return 0;
}
