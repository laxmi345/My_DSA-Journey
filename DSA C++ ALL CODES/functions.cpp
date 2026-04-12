#include<iostream>
using namespace std;
int SUMN(int n)
{
    int sum=0;
    for (int i=1;i<=n;i++){
        sum+=i;
    }
    return sum;
}
int main(){
    cout<<SUMN(5)<<endl;
    return 0;

}