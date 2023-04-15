        #include<iostream>
        #include<string>
        #include<vector>
        #include<map>
        using namespace std;
        int func(int n){
	    vector<int> v;
	    map<int,string> mp;
	    int count=0,k=1;
	    while(true){
	        int j=k,flag=1;
	        string st;
            char c;
	        while(j!=0){
	            if(j%2==1){
                    if(c=='1'){
                        flag=0;
                        break;
                    }
	                st='1'+st;
	                count++;
                    c='1';
	            }
	            else{
                    c='0';
	                st='0'+st;
	                count++;
	            }
	            j=j/2;
	        }
            c='2';
            if(count>n){
                break;
            }
            else{
                count=0;
            }
	        if(flag==1){
                v.push_back(k);
            }
	        k++;
	    }
        
        for(auto val : v){
            cout<<val<<" ";
        }
	}
        int main(){
            func(4);
        return 0;
        }
        