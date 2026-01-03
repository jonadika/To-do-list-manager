#include <iostream>
using namespace std;

int main (){
    string todos [100]={"todo1", "todo2"};
    string pergjigjja;
    perseritja:
    cout << "Cfare veprimi deshironi te kryeni?- Per te shiquar listen e todos, shtyp 'show',  per te fshire/perfunduar nje todo, shtyp 'delete' " << endl;
    cin >> pergjigjja;
    while (pergjigjja != "exit"){
        if (pergjigjja == "show") {
            cout << "lista e todos eshte: "<< endl;
            for(int i=0; i<100; i++){
                if (todos[i] != "") {
                    cout << todos[i] << endl;
                }
            }
        }
        else if (pergjigjja == "delete"){
            int indeksi;
            cout << "Tregoni numrin e indeksit te todo-s deshironi te fshini" << endl;
            cin >> indeksi;
            todos[indeksi] = " ";
        } 
        goto perseritja;
    }
   return 0;
}
