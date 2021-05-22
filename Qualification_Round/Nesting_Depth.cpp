/* author           : Akash kumar 
   codejam username : Akash@1996
*/


#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define mod 1000000007
#define pb push_back

void solve(string s)
{
   int n=s.size();
   int c=0;
   for(int i=0;i<n;++i)	
   {
   	if(s[i]=='0')
   	{
   		if(c!=0)
   		{
   			cout<<")";
   		}
   		cout<<s[i];
   		c=0;
   	}
   	else
   	{
   		if(c==0)
		{
			cout<<"("<<s[i];
			c++;
		}
		else
		{
			cout<<s[i];
		}
   	}
   }
   if(s[n-1]=='1')
   {
	   cout<<")";
   }
   cout<<"\n";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    for(int i=1;i<=t;++i)
    {
    	string s;
    	cin>>s;
    	cout<<"Case #"<<i<<": ";
    	solve(s);
    }
	return 0;
}
