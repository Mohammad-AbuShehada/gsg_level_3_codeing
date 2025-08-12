#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
int n;
cin>>n;
vector<string> act={"Swimming","Running","Footbal"};
vector<vector<string>>schedules;
int couter=0;
for(string act1:act)
    schedules.push_back({act1});
for(int i=2;i<=n;i++){
vector<vector<string>>new_schedules;
for(auto s:schedules){
for(string a:act){
    if(s.back()!=a){
        auto new_schedule=s;
        new_schedule.push_back(a);
        new_schedules.push_back(new_schedule);
    }
}
}
schedules=new_schedules;
}
for(auto schedule:schedules){
    for(int i=0;i<schedule.size();i++){
        cout<<schedule[i];
        if(i!=schedule.size()-1)
            cout<<" ";
    }
    cout<<'\n';
    couter++;
}
cout<<"COUNT: "<<couter<<endl;
return 0;
}
