/*
	Created By : Vikram Markali
*/

#include <bits/stdc++.h>
#define print(x) cout<<x<<;
using namespace std;

void solve()
{
    
    int jadu,i;
    cin>>jadu;
    set<int> mortal;
    mortal.insert(1);
    for(i=2;i*i<=jadu;i++)
    {
        if(jadu%i==0)
        {
            mortal.insert(i);
            mortal.insert(jadu/i);
            break;
        }
    }
    if(mortal.size()!=3)
	{
    	cout<<-1<<endl;
	}
    else
    {
        for(int it:mortal)
		{
        	cout<<it<<" ";
		}
        cout<<endl;
    }

}

int main()
{
  #ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
  #endif

	int t;
	cin >> t;
	while(t--)
	{
		solve();
	}
	return 0;
}