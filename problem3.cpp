#include<bits/stdc++.h>

using namespace std;

int main(){

ios_base::sync_with_stdio(0);
cin.tie(0);


string str;
cin>> str;
int char_code;
	for (int i = 0; i < str.length(); i++)
	{
		if(i%2==0){
		char_code = int(str[i]);

		if (char_code == 122)
		{
			str[i] = char(97);
		}
		else if (char_code >= 97 && char_code <= 122)
		{
			str[i] = char(char_code + 1);
		}
		}

	}
	cout << str<< "\n";
    return 0;
}
