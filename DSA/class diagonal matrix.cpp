#include<bits/stdc++.h>
#include<conio.h>
using namespace std;

class diagonal {
	private:
		int n;
		int *a;
	public:
		diagonal()
		{
			n=2;
			a=new int[2];
		}
		diagonal(int n) 
		{
			this->n=n;
			a=new int[n];
		}		
		void set(int i,int j,int x);
		int get(int i,int j);
		void display();
		~diagonal()
		{
			delete []a;
		}
};

void diagonal::set(int i,int j,int x)
{
	if(i==j)
		a[i-1]=x;
}

int diagonal::get(int i, int j)
{
	if(i==j) return a[i-1];
	else return 0;
}

void diagonal::display()
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i==j)
				cout<<a[i]<<" ";
			else
				cout<<"0 ";
		}

		cout<<endl;
	}
}

int main()
{
	diagonal d1(5);
	d1.set(5,5,4);

	d1.set(1,1,5);
	
	d1.set(4,4,1);
	
	d1.set(2,2,9);
	d1.set(3,3,7);	

	d1.display();
	
	cout<<d1.get(2,2)<<endl;
	
	cout<<d1.get(4,4);
	return 0;
}
