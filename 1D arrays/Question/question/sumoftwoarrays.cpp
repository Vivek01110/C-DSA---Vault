#include <bits/stdc++.h>
vector <int> reverse(vector<int> v){
	int i=0;
	int j=v.size()-1;
	while(i<j){
		swap( v[ i++ ] , v[  j-- ] );
	
	}
	return v;
}
vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) { 
	vector<int>newvector;
	int i=n-1;
	int j=m-1;
	int sum=0;
	int carry=0;
	while(i>=0 && j>=0){
		sum=a[i]+b[j]+carry;
		carry=sum/10;
		sum=sum%10;
		newvector.push_back(sum);
	   i--;
	   j--;
	   
	}
	while(i>=0){
		sum=a[i]+carry;
		carry=sum/10;
		sum=sum%10;
		newvector.push_back(sum);
		i--;
	}
	while(j>=0){
		sum=a[j]+carry;
		carry=sum/10;
		sum=sum%10;
		newvector.push_back(sum);
		j--;
	}
	while(carry!=0){
		sum=carry;
		carry=sum/10;
		sum=sum%10;
		newvector.push_back(sum);
	}
	return reverse(newvector);
	// Write your code here.
}