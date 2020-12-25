#include<bits/stdc++.h> 

using namespace std; 
  
int main() 
{ 
    int i =100; 
    int j=45.667;
    //stringstream ss;
	cout<<setbase(16); 
    cout<<"0x"<<hex<<i<<endl; 
    float value = (int)(j * 100 + .5); 
    float t2=(float)(value/100);
   	string t3 = string(1,t2);
   	
    cout<<setfill('-')<<setw(14)<<"+"+t<<endl;
        
   
    
    
    return 0; 
} 
