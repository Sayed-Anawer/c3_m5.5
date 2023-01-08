#include<bits/stdc++.h>

using namespace std;

int main()
{
int n,m;
cin>>n;

vector<int>v1;
v1.resize(n);

for(int i=0;i<n;i++){
    cin>>v1[i];
}
vector<int>v2;

cin>>m;
v2.resize(m);

for(int i=0;i<m;i++){
    cin>>v2[i];
}

set<int>s;
s.insert(v1.begin(),v1.end());
s.insert(v2.begin(),v2.end());

for(int x : s)
   {

       cout << x << " ";
   }

   cout<< "\n";
return 0;
}
