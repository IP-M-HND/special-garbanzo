#include "Correo.h"
#include <cstring>
#include "iostream"

using namespace std;

Correo::Correo()
{
    //ctor
    this->cont=0;
    this->correoElectronico = new char;
    strcpy(this->correoElectronico,"");
    this->nombre = new char;
    strcpy(this->correoElectronico,"");
    this->MensajesEviados = new MensajeCorreo[50];
}
Correo::Correo(const char * correoElectronico,const char * nombre)
{
    //ctor
    this->cont=0;
    this->correoElectronico = new char[strlen(correoElectronico)+1];
    strcpy(this->correoElectronico,correoElectronico);
    this->nombre = new char[strlen(nombre)+1];
    strcpy(this->correoElectronico,nombre);
    this->MensajesEviados = new MensajeCorreo[50];

}
Correo::~Correo()
{
    //dtor
    delete [] this->correoElectronico;
    delete [] this->nombre;
    delete [] this->MensajesEviados;
}


//funciones establecer
void Correo::set_correoElectronico(const char * correoElectronico){
    delete [] this->correoElectronico;
    this->correoElectronico = new char[strlen(correoElectronico)+1];
    strcpy(this->correoElectronico,correoElectronico);
}
void Correo::set_nombre(const char * nombre){
    delete [] this->nombre;
    this->nombre = new char[strlen(nombre)+1];
    strcpy(this->nombre,nombre);
}

//funciones obtener

const char * Correo::get_correoElectronico() const{
    return this->correoElectronico;
}
const  char * Correo::get_nombre() const{
    return this->nombre;
}

void Correo::enviarMensaje(const char * para,const char * cc,const char * asunto,const char * mensaje){
    this->MensajesEviados[this->cont].set_para(para);
    this->MensajesEviados[this->cont].set_cc(cc);
    this->MensajesEviados[this->cont].set_asunto(asunto);
    this->MensajesEviados[this->cont].set_mensaje(mensaje);
    this->cont++;
}

void Correo::mostrarMensajesEnviados(){
    cout << "---------------------Mensajes Enviados-------------------" << endl;
    for(int i = 0;i<this->cont;i++){
        cout << "***********************************************" << endl;
        cout << "Remitente: " << this->MensajesEviados[i].get_para() << endl;
        cout << "Asunto: " << this->MensajesEviados[i].get_asunto()  << endl;
        cout << "***********************************************" << endl;
    }
}
