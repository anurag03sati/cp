#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    //if three contin. dots are there then 2 are enough
    //if no dots then 0
    //if no 3 cont dots then sum of all dots
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int numofdots=0;
        int contdots=0;
        for(int j=0;j<s.size();j++){
            if(s[j]=='.')numofdots++;
            if(j>=2 && s[j-2]=='.'&& s[j-1]=='.' && s[j]=='.') contdots++;
        }
        if(contdots>0) cout<<2<<endl;
        if(contdots==0) cout<<numofdots<<endl;
    }
    return 0;
}