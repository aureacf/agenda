#include <iostream>
#include <list>

using namespace std;

int main(){

    list<int> aula;
    int tam;

    tam=10;
    for (int i=0; i< tam; i++){
        aula.push_back(i);
    }

    cout << "Tamanho da Lista: " << aula.size() << "\n\n";

    tam = aula.size();
    for (int i=0; i< tam; i++){
        cout << aula.front() << "\n";
        aula.pop_front();
    }


return 0;}
