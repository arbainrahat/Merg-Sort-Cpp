#include<iostream>
using namespace std;
int main(){
	cout<<"Enter size of Array\n";
	int la,h,h1,h2,i,ll,lr,t,j,k,z,x,e;
	cin>>e;
	int a[e];
	la=0;
	cout<<"Enter values\n";
	for(z=0;z<e;z++){
		cin>>a[z];
		la=la+1;
	}
	h=la/2;
	h1=h-1;																		//Divide array into two parts
	h2=la-1;
	ll=0;
	int b[h],c[h+1];
	for(int i=0;i<=h1;i++){
		ll=ll+1;
		b[i]=a[i];
	}
	lr=0;
	for(x=h;x<=h2;x++){
		c[lr]=a[x];
		lr=lr+1;
	}
	
	for(i=0;i<ll;i++){
		t=b[i];																//Sort both arrays by insertion sort
		j=i;
		while(j>0 && b[j-1]>t){
			b[j]=b[j-1];
			j=j-1;
		}
		b[j]=t;
	}
	
	for(i=0;i<lr;i++){
		t=c[i];
		j=i;
		while(j>0 && c[j-1]>t){
			c[j]=c[j-1];
			j=j-1;
		}
		c[j]=t;
	}
	
	i=0;
	j=0;
	k=0;
	while(i<ll && j<lr){
		if(b[i]<=c[j]){
			a[k]=b[i];
			i=i+1;
		}
		else
		{																		//Merg both arrays into one array
			a[k]=c[j];
			j=j+1;
		}
		k=k+1;
	}
	while(i<ll){
		a[k]=b[i];
		i=i+1;
		k=k+1;
	}
	while(j<lr){
		a[k]=c[j];
		j=j+1;
		k=k+1;
	}
	cout<<"Merg Sort\n";
	for(z=0;z<e;z++){
		cout<<a[z]<<"	";
	}
	cin.get();
	system("pause");
	
	}
