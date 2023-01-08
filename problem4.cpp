#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(false);
   int a[100], b[100], c[100], i, j, k=0;
   int a_size, b_size, x, cnt=0;

   cin>>a_size;
   for(i=0; i<a_size; i++)
      cin>>a[i];

   cin>>b_size;
   for(i=0; i<b_size; i++)
      cin>>b[i];
   for(i=0; i<a_size; i++)
   {
      for(j=0; j<b_size; j++)
      {
         if(a[i]==b[j])
         {
               c[k] = a[i];
               k++;

         }
      }
   }
   if(k==0)
      cout<<"\nCommon Element not Found!";
   else
   {

      for(i=0; i<k; i++)
         cout<<c[i]<<" ";
   }
   cout<<endl;
   return 0;
}
