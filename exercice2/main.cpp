
#include <iostream>
#include <string>
using namespace std;

class Compte {
protected:
    string numero;
    double solde;

public:
    Compte(string n, double s) {
        numero = n;
        solde = s;
    }

    void deposer(double montant) {
        solde += montant;
        cout << "Depot de " << montant << " DH effectue." << endl;
    }

    void retirer(double montant) {
        if (montant <= solde) {
            solde -= montant;
            cout << "Retrait de " << montant << " DH effectue." << endl;
        } else {
            cout << "Solde insuffisant !" << endl;
        }
    }

    void afficher() {
        cout << "Numero du compte : " << numero << endl;
        cout << "Solde : " << solde << " DH" << endl;
    }
};

class CompteEpargne : public Compte {
private:
    double tauxInteret;

public:
    CompteEpargne(string n, double s, double taux)
        : Compte(n, s) {
        tauxInteret = taux;
    }

    double calculerInteret() {
        return solde * tauxInteret / 100;
    }
};

int main() {
    CompteEpargne c1("C12345", 1000, 5);

    cout << "Informations du compte :" << endl;
    c1.afficher();

    cout << endl;

    c1.deposer(500);
    c1.retirer(200);

    cout << endl;

    cout << "Interet : " << c1.calculerInteret() << " DH" << endl;

    cout << endl;

    c1.afficher();

    return 0;
}
