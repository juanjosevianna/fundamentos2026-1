#include <iostream>
using namespace std;

int main() {
	int n;
    int c=1;
    cin>>n;
	while (n <1 || n>9){
		cout<<"numero invalido\n";
        cin>>n;
	}
    for(int i =0;i<n;++i){
        	for(int j=0;j<=i;++j){
            	cout<<c<<" ";
            	c++;
            	c++;
        	}
        	cout<<'\n';
	
    }
}
