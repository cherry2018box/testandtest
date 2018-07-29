/*
*git change first!
*/
#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
//试题9:斐波那契数列
long long Fibonacci(int n){
	if(!(n>=0)){
		printf("ERROR!");
		return 0;
	} 
	else if(n==0)
		return 0;
	else if(n==1)
		return 1;
	else {
		long long s1=0,s2=1,s=0;
		for(int i=2;i<=n;i++){
			s=s1+s2;
			s1=s2;
			s2=s;
		}
		return s;
	}
}
int main(){
    int n;
    long long s;
	while(scanf("%d",&n)!=EOF){
		s=Fibonacci(n);
		printf("%d",s);
	}
	return 0;
}
