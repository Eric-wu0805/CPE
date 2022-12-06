#include<iostream>
#include<cmath>
using namespace std;
int happy(int s);
int f(int c);
int main()
{
   int n,a;
   int total=0,m=0,num=0,k=0,sum=0,pp=0;
   cin>>n;
   while(n--){
   		k++;
   		cin>>a;
   		if(a<10){
   			num=happy(a);
   		    sum=f(num);
		   }else{
		   	sum=f(a);
		   }
   	
   		while(1){
   			pp=f(sum);
   			sum=f(pp);
   			if(sum<10)break;
		   }
		
		  
		
   	if(sum==1){
   		cout<<"Case "<<"#"<<k<<":"<<" "<<a<<" is a Happy number.\n";
	   }else{
	   		cout<<"Case "<<"#"<<k<<":"<<" "<<a<<" is an Unhappy number.\n";
	   }
	  
	   
   }
}
int f(int c){
	int m=0,total=0;
		while(c>0){
   			m=c%10;
   			c/=10;
   			total+=happy(m);
		   }
		   return total;
}
int happy(int s){
	int sum=0;
	sum=pow(s,2);
	return sum;
}

 
