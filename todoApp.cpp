#include <iostream>
using namespace std;

int main (){
    string todos [100];
    string pergjigjja;
    perseritja:
    cout << "Cfare veprimi deshironi te kryeni?- Per te shiquar listen e todos, shtyp 'show'; Per te shtuar todos, shtyp 'Add';"
    << "  Per te fshire/perfunduar todos shtyp 'Delete' " << endl;
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
        
        goto perseritja;
    }
   return 0;
}
