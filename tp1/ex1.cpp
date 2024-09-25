#include <iostream>
using std::cout;
using std::cin;
using std::endl;
double convertir(double distance, char unite) {
    if (unite == 'k' || unite == 'K')
        return distance * 0.621;
    else if (unite == 'm' || unite == 'M')
        return distance * 1.60934;
    else {
        cout << "Erreur : unite non reconnue." << endl;
        return 0;
    }
}
int main() {
    double distance;
    char choix;
    cout << "k : kilometre vers Miles" << endl;
    cout << "M : mile vers km" << endl;
    cout << "Donnez votre choix : ";
    cin >> choix;
    cout << "Donnez la distance : ";
    cin >> distance;
    if (choix == 'k' || choix == 'K')
        cout << distance << " km = " << convertir(distance, choix) << " miles" << endl;
    else if (choix == 'm' || choix == 'M')
        cout << distance << " miles = " << convertir(distance, choix) << " km" << endl;
    else {
        cout << "Erreur : unite non reconnue." << endl;
    }

    return 0;
}
