#include <iostream>
#include <cstdlib>
#include <sstream>

using namespace std;

bool isInt(const string& str) {
    istringstream iss(str);
    int num = 0;
    if (iss >> num && iss.eof()) {
        return num >= 0 && num <= 100;
    }
    return false;
}


void playRidle(){
    int number = rand() % 101;
    int userChoice;
    string aux = "";
    int counter = 0;

    //descomente la siguiente linea para saber de antemano el número:
    //cout<<number<<endl;
    cout<<"Intenta adivinar el número que he pensado. Está entre 0 y 100."<<endl;

    do{
        cout<<"Introduce el número: "<<endl;
            counter++;      
            getline(cin, aux);
            
            if(!isInt(aux)){
                 cout<<"No ingresaste un número entero entre 0 y 100"<<endl;
            } else{
                userChoice = stoi(aux);
                
                if(userChoice == number){
                    cout<<"Acertaste! Demoraste "<< counter << " intento(s)" << endl;
                } else if(userChoice>number){
                        cout<<"Mayor"<< endl;
                    } else{
                        cout<<"Menor"<< endl;
                    }
                }
    } while(userChoice != number);
}

int main()
{
    playRidle();
    return 0;
}
