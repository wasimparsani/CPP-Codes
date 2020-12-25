#include <bits/stdc++.h>
using namespace std;
int i=1,flag,j,c=1,n;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	cin>>n;
	while(c<=n){
	    i++;
        flag = 1; 
  
        for (j = 2; j*j <= i; ++j) { 
            if (i % j == 0) { 
                flag = 0; 
                break; 
            } 
        }    
        if (flag == 1) {
            cout << i << "\n";
            c++;
        }
}
 
	return 0;
}
