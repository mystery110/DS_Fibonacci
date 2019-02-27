#include <iostream>
using namespace std;

int fibonacci (int);
int main (){
	int x,tempans;//to record the temporary ans
	cin>>x;
	int index=0;//record the number of turn 
	int ques[x],ansIterative[x],f0=0,f1=1,ansRecurssive[x];;//two fibonacci number
	for (int i=0;i<x;i++){
		cin>>ques[i];}
	while(index!=x){
		for (int i=2;i<=ques[index];i++){
			tempans=f0+f1;
			f0=f1;
			f1=tempans;
		}
		ansRecurssive[index]=fibonacci(ques[index]);
		ansIterative[index]=tempans;
		tempans=0;
		f0=0;
		f1=1;
		index++;
	}

	cout<<"Ans is :"<<endl;
	for (int i=0;i<x;i++)
		cout<<ansIterative[i]<<"  "<<ansRecurssive[i]<<endl;
	}

int fibonacci(int x){
	if (x==1)
		return 1;
	else if (x==0)
		return 0;
	else 
		return fibonacci(x-1)+fibonacci(x-2);}


				

