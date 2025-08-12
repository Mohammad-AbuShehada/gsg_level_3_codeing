#include <bits/stdc++.h>
#define ll long long
using namespace std;
int n,counter=0;
void recur(int x,vector<string>cur){
        if(x==n){
                counter++;
            for(string s: cur)
                cout<<s<<" ";
            cout<<'\n';
            return;
        }
        vector<string>act1=cur;
        act1.push_back("Running");
        vector<string>act2=cur;
        act2.push_back("Swimming");
        vector<string>act3=cur;
        act3.push_back("Footbal");
        if(cur.empty()){
            recur(x+1,act1);
            recur(x+1,act2);
            recur(x+1,act3);
        }
        else if(cur.back()=="Running"){
            recur(x+1,act2);
            recur(x+1,act3);
        }
        else if(cur.back()=="Swimming"){
            recur(x+1,act1);
            recur(x+1,act3);
        }
        else if(cur.back()=="Footbal"){
            recur(x+1,act1);
            recur(x+1,act2);
        }
}
int main(){
    cin>>n;
    recur(0,{});
    cout<<"COUNT: "<<counter<<endl;
return 0;
}
