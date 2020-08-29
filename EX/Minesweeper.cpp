#include <iostream>
using namespace std;

int main()
{
    char m[51][51];
    char r[51][51];
    int i,k,w,h,x,y;
    cin>>w>>h;
    for(i=0;i<h;i++)
        for(k=0;k<w;k++)
            cin>>m[i][k];
    for(i=0;i<h;i++){
        for(k=0;k<w;k++){
        	r[i][k]=48;
            if(m[i][k]=='*'){
            	r[i][k]=42; goto terminal1;
			}
			if(i!=0&&k!=0&&m[i-1][k-1]=='*'){
				r[i][k]++;
			}
			if(i!=0&&m[i-1][k]=='*'){
				r[i][k]++;
			}
			if(i!=0&&k!=w&&m[i-1][k+1]=='*'){
				r[i][k]++;
			}
			if(k!=0&&m[i][k-1]=='*'){
				r[i][k]++;
			}
			if(k!=w&&m[i][k+1]=='*'){
				r[i][k]++;
			}
			if(i!=h&&k!=0&&m[i+1][k-1]=='*'){
				r[i][k]++;
			}
			if(i!=h&&m[i+1][k]=='*'){
				r[i][k]++;
			}
			if(i!=h&&k!=w&&m[i+1][k+1]=='*'){
				r[i][k]++;
			}
			terminal1:;
            cout<<r[i][k] ;
        }
        cout<<endl;
    }
    return 0;
}
