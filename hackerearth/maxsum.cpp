#include <iostream>
#include<algorithm>
using namespace std;
int main() {
	int num;
	cin >> num;
	while(num--){
		int a,k;
		cin>>a>>k;
		int arr[a];
		for(int i=0;i<a;i++){
			cin>>arr[i];
		}
		sort(arr,arr + a);
		int sum=0;
		for(int i=a-1;i>-1 && k>0;i--){
            sum=sum+arr[i];
            if(arr[i]!=arr[i-1]){
                k=k-1;
            }
        }
		cout<<sum<<endl;
	}
}