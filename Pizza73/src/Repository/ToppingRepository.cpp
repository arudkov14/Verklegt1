#include "ToppingRepository.h"


ToppingRepository::ToppingRepository()
{

}



void ToppingRepository::add_topping(Topping& topping)
{
    ofstream fout;
    fout.open("ToppingList.txt", ios::app);

        if(fout.is_open()){
            fout << topping;
            fout.close();
        }
        else {
            /// throw error
        }
}

vector<Topping> ToppingRepository::retrieve_all_toppings() {

    vector<Topping> toppingvector;
    Topping topping;

<<<<<<< HEAD
    ifstream fin;

    fin.open("ToppingList.txt");

=======
    ifstream fin("ToppingList.txt", ios::app);
>>>>>>> master
    if (fin.is_open()) {
        while (fin >> topping) {
            toppingvector.push_back(topping);
        }
        fin.close();
    }
    return toppingvector;
<<<<<<< HEAD
=======

>>>>>>> master
}


