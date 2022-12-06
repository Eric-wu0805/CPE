#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
    int n,num,k=0;
    int sum=0;
    cin>>n;
    while(n--){
    	k=0;
    	sum=0;
    	cin>>num;
 		int a[num]={0};
 		int b[num]={0};
 		for(int i=0;i<num;i++){
 			cin>>a[i];
		 }
		for(int f=1;f<num;f++){
			k=0;
			for(int j=0;j<f;j++){
				if(a[j]<=a[f]){
				   k++;
			}
			b[f]=k;	
		}	
	
		}
		for(int i=0;i<num;i++){
			sum+=b[i];
		}
		cout<<sum<<endl;
	}
	return 0;
}
