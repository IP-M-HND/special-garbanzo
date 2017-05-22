#include <iostream>
#include <cstring>

using namespace std;

char * mayuscula(char * arreglo){

    char * palabra = new char[strlen(arreglo)+1];
    for(int i =0; i <=(strlen(arreglo)+1);i++){
        palabra[i] = toupper(arreglo[i]);
    }
    //int x = strlen(arreglo)+1;
    //palabra[i] = toupper(arreglo[i]);
    return palabra;

}

void compara_cadenas(char * cadn1,char * cadn2){

    char * axu1 = new char[strlen(cadn1)+1];
    char * axu2 = new char[strlen(cadn2)+1];

    strcpy(axu1,mayuscula(cadn1));
    strcpy(axu2,mayuscula(cadn2));
    if(strcmp(axu1,axu2)==0){
        cout << "Las cadenas son iguales" << endl;
    }else{
        cout << "Las cadenas son diferentes" << endl;
    }
}

int main()
{
    compara_cadenas("Hola","hola");
    return 0;
}
