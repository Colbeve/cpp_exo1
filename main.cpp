#include <iostream>

using namespace std;

/*Exercice 1-
Je demande un nombre à l’utilisateur.
Si le nombre est supérieur ou égal à 10, j’affiche « Il y a au moins une dizaine »,
sinon j’affiche « Il n’y a pas de dizaine ».
 */

int main()
{
    int n=0;

    cout << "Saisissez un nombre" << endl;
    cin>>n;
    cin.get();
    if (n>10){
        //bloc true
        cout<<"Il y a au moins une dizaine"<<endl;
    }else{
        //bloc false
        cout<<"Il n'y a pas de dizaine"<<endl;
    }
    return 0;
}
