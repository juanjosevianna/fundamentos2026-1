#include <iostream>
using namespace std;
#include <vector>
#include <cstdlib>
int main(){
    int n;cin>>n;
    vector<int>v(n);
    double media=0;
    for(int i =0;i<n;++i){
        v[i]=rand()%10;
        media+=v[i];
    }
    media/=n;
    vector<int>may;
    cout<<" el vector es:   ";
    for(int i=0;i<n;++i){
        cout<<v[i]<<" ";
        if (media<=v[i])may.push_back(v[i]);
        
    }
    
    cout<<"\nla media es :  "<<media;
    cout<<"\nlos mayores son:   ";
    for(int i=0;i<may.size();++i){
        cout<<may[i]<<" ";
    }
    n=may.size();
    for(int j=0;j<n-1;++j){
        for(int i=0;i<n-1;++i){
            if(may[i]>may[i+1]){
                int temp=may[i];
                may[i]=may[i+1];
                may[i+1]=temp;
            }
        }
    }
    cout<<"\nla lista ordenada es:   ";
    for(int i=0;i<n;++i){
        cout<<may[i]<<" ";
    }
    
}