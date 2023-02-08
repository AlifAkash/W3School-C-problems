#include<iostream>
using namespace std;

bool isprimechekcer(int n)
{
    bool ans=true;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            ans=false;
            break;
        }
    }
    return ans;
}

int main()

{
    int n;
    cin>>n;
    int counterans=0;
    for(int i=1;i<=n;i++){
        int counterp=0;
        for(int j=2;j<i;j++){
            if(i%j==0 &&isprimechekcer(j)==true){
                counterp++;
            }
        }
        if(counterp==2){
            counterans++;
        }
    }
    cout<<counterans<<endl;
}
