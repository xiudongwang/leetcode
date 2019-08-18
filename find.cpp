#include <iostream>
#include <vector>
using namespace std;
//first value
int find(vector<int>&v, int value)
{
	int low = 0;
	int high = v.size()-1;
	int mid = low+(high-low)/2;
	while(low<=high){
		if(v[mid] >= value)
			high =mid - 1;
		else
			low = mid + 1;
		mid = low+(high-low)/2;
		
	}
	cout<<"low="<<low<<" high="<<high<<endl;
	if(v[low]==value)
		return low; 

	return -1;
	
}

//last value
int find2(vector<int>&v, int value)
{
	int low = 0;
	int high = v.size()-1;
	int mid = low+(high-low)/2;
	while(low<=high){
		if(v[mid] <= value)
			low =low + 1;
		else
			high = high - 1;
		mid = low+(high-low)/2;
		
	}
	cout<<"low="<<low<<" high="<<high<<endl;
	if(v[high]==value)
		return high; 

	return -1;
}	

int main()
{
	vector<int> v{1,2,3,4,5,6,6,6,6,6,6,6,6,7};
	cout<<find2(v, 6)<<endl;
}

