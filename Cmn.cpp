#include <iostream>

using namespace std;

int Cmn(int m,int n){
    if(m<n)
	{
		return 0;
	}
	else{
		int a=m-n;
		for(int i=m-1;i>a;i--)
			m*=i;
		for(int j=n-1;j>0;j--)
			n*=j;
		int r=m/n;
		return r;
	}

}

int main(){
	int n,m;
	cout<<"������n��m��ֵ"<<endl;
	cin>>n>>m;
	cout<<"Cmn��ֵ��"<<Cmn(m,n)<<endl;
	return 0;
}
    