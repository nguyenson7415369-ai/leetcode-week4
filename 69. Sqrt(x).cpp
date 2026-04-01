#include<iostream>
using namespace std;
class Solution {
public:
    int mySqrt(int x) {
        if(x==0) return 0;
        if(x==1) return 1;
        if(x==2) return 1;
        if(x==3) return 1;
        if(x==5) return 2;
        for(long long i=0;i<=x/2;++i){
        	if(i*i==x){
        		return i;
        		break;
			}
			if(i*i>x){
				return i-1;
				break;
			}
		}
        return 0;
    }
};
int main(){
	Solution a;
	cout<<a.mySqrt(99);
}
