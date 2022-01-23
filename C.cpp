#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(),x.end()

vector<string> in[100009];

int main(){
    int N,t;
    string s;
    cin>>N;
    t=N;
    vector<int>l(N,0);
    vector<int>d(N,0);
    vector<string>like;
    vector<string>dislike;
 
    for(int i=0;i<t;i++)
    {
        cin>>l[i];
        for(int j=0;j<l[i];j++)
        {
            cin>>s;
            like.push_back(s);
        }
        cin>>d[i];
        for(int j=0;j<d[i];j++)
        {
            cin>>s;
            dislike.push_back(s);
        }
    }
    sort( like.begin(), like.end() );
  like.erase( unique( like.begin(), like.end() ), like.end() );
  sort( dislike.begin(), dislike.end() );
  dislike.erase( unique( dislike.begin(), dislike.end() ), dislike.end() );
    cout<<"OUTPUT\n";
for(auto elem1 :like)
{
    cout<<elem1<<"\t";
}
    cout<<"OUTPUT\n";
for(auto elem2 :dislike)
{
    cout<<elem2<<"\t";
}

for(auto elem:dislike)
{
    for(auto ele:like)
    {
        if(elem==ele)
        like.erase(remove(like.begin(), like.end(), ele), like.end());
    }
}
   cout<<"OUTPUT\n";
   cout<<like.size()<<"\t";
for(auto e :like)
{
    cout<<e<<"\t";
}
    return 0;
}
