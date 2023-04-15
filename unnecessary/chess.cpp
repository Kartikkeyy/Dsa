#include <iostream>
using namespace std;

int main() {
	int k;
	cin>>k;
	while(k--){
	    int n,x,y;
	    cin>>n>>x>>y;
	    int m=0;
	    if((x+y)<=n+1){
	        m=m+(x-1)+(y-1);
	    }
	    else{
	        m=m+(n-x)+(n-y);
	    }
	    int min,max;
	    x>y ? min=y : min=x;
	    x>y ? max=x : max=y;
	    m-m+min-1;
	    m=m+n-max;
	    m=m+(n-1)*2;
	    cout<<m<<endl;
	}
	return 0;
}
