#include <iostream>
using namespace std;

int sum(int n,int m){
    int s=0;
    while(n>0){
        s=s+n%10;
        n=n/10;
    }
    while(m>0){
        s=s+m%10;
        m=m/10;
    }
    return s;
}
int main() {
	int hr,min;
	scanf("%d:%d",&hr,&min);
	int k;
    cin>>k;
    int count=0;
    while(sum(hr,min)%k!=0){
        min++;
        count++;
        if(min>59){
            min=min-60;
            hr++;
            if(hr>23){
                hr=hr-24;
            }
        }
    }
    cout<<count<<endl;
}