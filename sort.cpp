#include <iostream>
#include <vector>

using namespace std;

void insertsort(vector<int>&v)
{
	int i,j;
	int s = v.size();
	int temp;
	for(i=1; i<s; i++){
		j=i;
		while(j>0 && v[j]<v[j-1]){
			swap(v[j],v[j-1]);
			j--;
		}
	}
}


void shellsort(vector<int>&v)
{
	int i,j,k;
	int s = v.size();
	k = s;
	while(k>1){
		k = k/3+1;
		for(i=k; i<s; i++){
			j = i;
			while(j>=k && v[j]<v[j-k]){
				swap(v[j], v[j-k]);
				j-=k;
			}
		}
	}
}

void print_value(vector<int>&v)
{
	for(auto va:v){
		cout<<' '<<va;
	}
	cout<<endl;
}

void merge(vector<int>&v, int l, int m, int h)
{
	vector<int>tempv(v.size());
//	cout<<"l="<<l<<" m="<<m<<" h="<<h<<endl;	
	int i = l;
	int left = l;
	int right = m;
	while(left<m && right<h){
		if(v[left]<v[right]){
			tempv[i++] = v[left++];
		} else {
			tempv[i++] = v[right++];
		}
	}

	while(left<m)
		tempv[i++] = v[left++];
	while(right<h)
		tempv[i++] = v[right++];
	for(i=l; i<h; i++){
		v[i] = tempv[i];
	}

}

void merge_sort(vector<int>&v, int l, int h)
{
	if(l+1==h)
		return;
	int m = l + (h-l)/2;
	merge_sort(v, l, m);
	merge_sort(v, m, h);
	merge(v, l, m, h);

}

void merge_sort2(vector<int>&v)
{
	int sz;
	int size = v.size();
	cout<<"size="<<size<<endl;
	for(sz=2; sz<2*size; sz+=sz){
		cout<<"sz="<<sz<<endl;
		for(int i=0; i<=size; i+=sz){
			cout<<"i="<<i<<endl;
			merge(v, i, i+sz/2, min(i+sz, size));
		}
		print_value(v);
	}

}

void merge_sort(vector<int>&v)
{
	merge_sort(v, 0 , v.size());
}


int main()
{
	vector<int>a{1,8,5,7,6,6,9,5,0,6,9};
	
	print_value(a);
	//shellsort(a);
	//print_value(a);
	//insertsort(a);
	merge_sort2(a);
	print_value(a);
}
