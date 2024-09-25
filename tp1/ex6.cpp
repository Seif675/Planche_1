#include <iostream>
using std::cout;
using std::endl;
/*void swap (int &a,int &b){
	int temp = a;
    a = b;
    b = temp;
}*/
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
	int a=5;
	int b=10;
    swap(&a,&b);
    cout << "a = " << a << ", b = " << b << endl;
	return 0;
}
