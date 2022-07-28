#include <iostream>
#include <stdlib.h>
#include <string.h>
#include<vector>
#include <math.h>
#include <unordered_map>

#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
using namespace std;
int GetInt(void){
    return 1;
};
int factorial(int num)
{
    if (num == 0) //基本情况返回1;
        return 1;
    else
        return num * factorial(num - 1);
}
//[n/2+1,n]
double equal_prob(double me,double he,int n){//偶数时间
    double res=0;
    int memo[n+1];
    memo[0]=1;
    for(int index=1;index<n+1;index++){
        memo[index]=memo[index-1]*index;
    }
    cout<<memo[n]<<endl;
    double factor =pow(me,n/2)*pow(he,n/2);
    double cnn=memo[n]/(memo[n/2]*memo[n/2]);
    cout<<memo[n]<<'\t'<<memo[n/2]<<endl;
    cout<<"Cni:"<<cnn<<'\t'<<"factor:"<<factor<<endl;
    res=factor*cnn;
    return res;
}
double prob(double me,double he,int n){
    int memo[n+1];
    for(int index=0;index<n+1;index++){
        memo[index]=factorial(index);
    }
//    cout<<666<<endl;
//    cout<<me<<'\t'<<he<<'\t'<<n<<endl;
//    cout<<(me+he)<<endl;
//    cout<<((me+he)!=1)<<endl;
    if((me+he)!=1)
    {
        cout<<"sum is not 1!";
        return -1;
    }
    double res=0;double tmp=0; double Cni=0; double factor=0;
    for (int i=n/2+1;i<=n;i++){
        Cni=memo[n]/(memo[i]*memo[n-i]);
        if(i==n/2+1){
            factor=pow(me,i)*pow(he,n-i);
        }
        else {
            factor=factor*me/he;
        }
//        cout<<"Cni:"<<Cni<<'\t'<<"factor:"<<factor;

        tmp=Cni*factor;
//        cout<<tmp;
        cout<<tmp<<endl;
        res+=tmp;
    }
//    cout <<"res:"<<res<<endl;
    return res;
}
int main() {
    int n=0;
    while(1) {
        cin >> n;
        if (n == -1) {
            break;
        }
        else {
            double z = equal_prob(0.51, 0.49, n);
            cout << z << endl;
        }
    }
//cout<<(0.51+0.49==1);

}
//    vector <int> candidates = {1,2,3,4,5};
//
//    for(vector<int>::iterator iter=candidates.begin();iter!=candidates.end();iter++) {
//        cout<<*iter;
//int i=0;
//int j=0;
//    for (;i<5;i++){
//        for (;j<4;j++)
//            cout<<i<<j<<endl;
//    }
//
////    for (int i=0;i<5;i++){
////        for (int j=0;j<4;j++)
////            cout<<i<<j<<endl;
////    }
//    return 0;
//    const int res=GetInt();
//    cout<<res;

