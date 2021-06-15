#include<bits/stdc++.h>
using namespace std;

void write(string s,int n)
{
    int i=0;
    while(n>0)
    {
        (n&1)?cout<<s[i]: cout<<"";
        i++;
        n=n>>1;
    }
    cout<<"\n";
}

int main() 
{
    string s="abc";
	int n=s.size();
	int range=(1<<n)-1;
	for(int i=0;i<=range;i++)
	{
		write(s,i);
	}
	
	return 0;
}
