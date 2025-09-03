#include <iostream>
using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	#endif
    	int tc;
	cin >> tc;
	while(tc--)
	    {
		int n,k;
		cin >> n >> k;
		for(int i=0;i<n;i++)
		    for(char c='a';c<'a'+k;c++)
			cout << c;
		cout << '\n';
	    }
}
