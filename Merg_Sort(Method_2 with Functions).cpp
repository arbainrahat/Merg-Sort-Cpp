#include<iostream>
using namespace std;

void mergesort(int *a,int low,int high,int mid){
	int i, j, k, temp[high+1];
	i = low;
	k = 0;
	j = mid + 1;
 
	// Merge the two parts into temp
	while (i <= mid && j <= high)
	{
		if (a[i] <=a[j])
		{
			temp[k] = a[i];
			k++;
			i++;
		}
		else
		{
			temp[k] = a[j];
			k++;
			j++;
		}
	}
  
	// Insert all the remaining values from i to mid into temp
	while (i <= mid)
	{
		temp[k] = a[i];
		k++;
		i++;
	}
 
	// Insert all the remaining values from j to high into temp[].
	while (j <= high)
	{
		temp[k] = a[j];
		k++;
		j++;
	}
 
	// Assign sorted data stored in temp[] to a[].
	for (i = low; i <= high; i++)
	{
		a[i] = temp[i-low];
	} 
}


void mergesort1(int *a,int low,int high){
	int mid;
	if(low<high){
		
	mid=(low+high)/2;
	
	mergesort1(a,low,mid);
	mergesort1(a,mid+1,high);
    mergesort(a,low,high,mid);		
}
}


int main(){
	cout<<"Enter size of Array\n";
	int N;
	cin>>N;
	int a[N];
	cout<<"Enter Values in Array\n";
	for(int j=0;j<N;j++){
		cin>>a[j];
	}
	mergesort1(a,0,N-1);
	for(int d=0;d<N;d++){
		cout<<a[d]<<"	 ";
	}
	
	cin.get();
	system("pause");
}
