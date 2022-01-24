#include <bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(), (x).end()
typedef long long ll;


int main(){
int N;
string s;
vector<int> like(N,0);
vector<int>dislike(N,0);
vector<string>l;
std::vector<string>::iterator it,iter;
int index;
cin>>N;
for(int i=0;i<N;i++){
    cin>>like[i];
    for(int j=0;j<like[i];j++){
        cin>>s;
        // it=find(l.begin(),l.end(),s);
        // if(it==l.end())
        l.push_back(s);
    }
    cin>>dislike[i];
     for(int j=0;j<dislike[i];j++){
            cin>>s;
            it=find(l.begin(),l.end(),s);
            //cout<<it;
            if(it!=l.end()){
                index=it-l.begin();
                l.erase(l.begin()+index);
               // cout<<"Found element";
            //(it!=l.end())?l.erase(l.begin()+it):continue;
        }
        }
}
sort(l.begin(),l.end());
iter=std::unique(l.begin(),l.end());
        l.push_back(s);
l.resize(std::distance(l.begin(),iter));
cout<<l.size();
for(int i=0;i<l.size();i++)
   cout<<" "<<l[i]<<" ";
return 0;
}


