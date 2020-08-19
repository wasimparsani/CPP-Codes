//to count the digit of integer number
#include <iostream>
using namespace std;

int n,sum,t,r;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    scanf("%d",&t);
    while(t--)
    {
       sum=0; 
        scanf("%d",&n);
        while(n!=0)
        {
        	r=n%10;
            sum+=r;
            n/=10;
        }
        printf("%d\n",sum);
    }
    
	return 0;
}
