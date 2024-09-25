#include <iostream>
using std::cout;//using namespace std;
using std::cin;
using std::endl;

int main()
{
    int nombres[10];
    int min;
    for (int i=0;i<10;i++){
        cout <<"Entrez un nombre"<<i+1<<":";
        cin >> nombres [i];
    }
    min=nombres[0];
    for (int i=1;i<10;i++){
        if(nombres[i]<min){
            min=nombres[i];
        }
    }
    cout << "le plus petit de ce entier est :" << min<< endl;
    return 0;
}

