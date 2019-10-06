#include <iostream>
using namespace std;
int power(int a,int b){
    if(b==0)
        return 1;
    int smallerAns=power(a,b/2);
    smallerAns*=smallerAns;
    if(b&1)
        smallerAns*=a;
    return smallerAns;
}
int main() {
    int a,b;
    cin>>a>>b;
    cout<<power(a,b)<<endl;
    return 0;
}
