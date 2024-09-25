#include <iostream>
using std::cout;
using std::cin;
using std::endl;
int Factorielle(int N){
	if(N==0){
		return 1;
	}
	else{
		return N*Factorielle(N-1);
	}	
}
int main(){
	int Nb;
	cout<<"donner un entier :"<<endl;
	cin >>Nb;
	int fact =Factorielle(Nb);
	cout<<"le factoriel de "<< Nb << "=" << fact <<endl;
	return 0 ;
}
