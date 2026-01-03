#include <iostream>
using namespace std;

int main (){
    string todos [100];
    int nextBlankTodoIndex = 0;
    string pergjigjja;
    perseritja:
    cout << "Cfare veprimi deshironi te kryeni?- Per te shiquar listen e todos, shtyp 'show'" << endl;
    cin >> pergjigjja;
    while (pergjigjja != "exit"){
        if (pergjigjja == "show") {
            cout << "lista e todos eshte: "<< endl;
            for(int i=0; i<100; i++){
                if (todos[i] != "") {
                    cout << todos[i] << endl;
                }
            }

        } else if (pergjigjja == "add") {
            string todo;
            cout << "shkruaj todo: " << endl;
            cin >> todo;
            todos [nextBlankTodoIndex] = todo;
            nextBlankTodoIndex++; 

        }


        goto perseritja;
    }
   return 0;
}
