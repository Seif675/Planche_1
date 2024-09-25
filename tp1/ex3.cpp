#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;
int main() {
    int N; 
    cout << "Entrez le nombre de mots a saisir : ";
    cin >> N;
    string mots[N]; 
    string motPlusLong = ""; 
    for (int i = 0; i < N; i++) {
        cout << "Entrez le mot " << i + 1 << " : ";
        cin >> mots[i];
    }
    for (int i = 0; i < N; i++) {
        if (mots[i].length() > motPlusLong.length()) {
            motPlusLong = mots[i];
        }
    }
    cout << "Le mot le plus long est : " << motPlusLong << std::endl;
    return 0;
}
