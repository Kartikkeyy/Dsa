#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	int n;
	cin>>n;
	while(n--){
	    int a;
	    cin>>a;
	    vector<int> v;
	    while(a--){
	        int b;
	        cin>>b;
	        v.push_back(b);
	    }
	    sort(v.begin(),v.end());
	    int max=INT32_MIN,sum=0;
        for(int i=0;i<v.size();i++){
            sum=v[i];
            while(v[i]==v[i+1]){
                i++;
                sum++;
            }
            if(sum>max){
                max=sum;
            }
        }
        cout<<sum<<endl;
	}
	return 0;
}