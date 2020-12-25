//This is The Coding Area
#incl
using namespace std;
typedef int ll;
ll t,n,i,s=0,temp,total,cnt;
ll a[10000],b[10000];



int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>t;
	while(t--)
	{
		cin>>n;
		
		for(i=1;i<=n;i++)
		{
			cin>>a[i];
			b[i]=a[i];
		}
		sort(b+1,b+(n+1));
		//total=count(a,b,0);
	//int count(ll a[],ll b[],ll cnt)
	//{
while()
{
	for(i=1;i<=n;i++)
	{
		if(a[i]==b[i])
		{
			s=1;
		}
		else{
			s=0;
			break;
		}
	}
	if(s==1){
		cout<<cnt+1<<"\n";
		break;
	}
	else
	{
		ll c[n];
		for(i=1;i<=n;i++)
		{
			c[a[i]]=b[i];
		}

	cnt++;
	}
	
	
}

		
		return 0;
		
	}
}
