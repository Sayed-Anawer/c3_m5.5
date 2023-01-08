#include<bits/stdc++.h>

// Binary Search implementaion
using namespace std;

int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);

int n,k;
cin >> n >> k;
vector <int> a(n);

for(int i=0;i<n;i++){
    cin>>a[i];
}
sort(a.begin(),a.end());
cout<<"After sorted the array\n";
for(int i=0;i<n;i++){
    cout<<a[i] << " ";
}
cout <<endl;
int low = 0, high = n-1;
bool flag=0;
while(low<=high){
    int mid = (low+high)/2;
    if(a[mid]==k) {
        flag=1;
        cout << "YES " << mid << "\n";
        break;
    }

    if(a[mid]>k){
        high=mid-1;
    }

    else{
        //a[mid]<k
        low=mid+1;
    }
}
if(!flag)
cout << "NO"<< "\n";
return 0;
}

/*
10 12
2 4 6 7 8 9 10 11 14 18
*/

