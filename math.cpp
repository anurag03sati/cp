#include <iostream>
#include <cmath>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    int ind=0;
    for(int i=0;i<s.size();i++){
        if(isdigit(s[i]) && i!=s.size()-1){
            if(ind==0)ind=i;
            s.insert(s.begin()+i+1,'+');
            i++;
        }
    }
    cout<<s.substr(ind)<<endl;
    return 0;
}