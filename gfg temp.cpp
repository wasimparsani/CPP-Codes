// An efficient C++ program to compute sum of bitwise AND 
// of all pairs 
#include <bits/stdc++.h> 
using namespace std; 

// Returns value of "arr[0] & arr[1] + arr[0] & arr[2] + 
// ... arr[i] & arr[j] + ..... arr[n-2] & arr[n-1]" 
int pairAndSum(int arr[], int n) 
{ 
	int ans = 0; // Initialize result 

	// Traverse over all bits 
	for (int i = 0; i < 32; i++) 
	{ 
		// Count number of elements with i'th bit set 
		int k = 0; // Initialize the count 
		for (int j = 0; j < n; j++) 
			if ( (arr[j] & (1 << i)) ) 
				k++;
		cout<<k<<" "; 

		// There are k set bits, means k(k-1)/2 pairs. 
		// Every pair adds 2^i to the answer. Therefore, 
		// we add "2^i * [k*(k-1)/2]" to the answer. 
//		ans += (1<<i) * (k*(k-1)/2); 
	} 

	return ans; 
} 

// Driver program to test above function 
int main() 
{ 
	int arr[] = {10,7,2,8,3}; 
	int n = sizeof(arr) / sizeof (arr[0]); 
	cout << pairAndSum(arr, n) << endl; 
	return 0; 
} 

