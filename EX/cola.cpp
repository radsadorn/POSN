#include <bits/stdc++.h>
using namespace std;

int main()

{

      int n, x, y, total;
      cin>>n;

      if (n>=20&&n<40){
            cout<<"1";
      } else if (n>=40){
            total= (n/20-2)*4+3; // n/20 จำนวนขวด
            cout<<total<<endl;
       }

}
