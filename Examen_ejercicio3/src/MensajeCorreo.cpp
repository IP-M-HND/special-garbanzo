#include "MensajeCorreo.h"
#include <cstring>
#include <iostream>

using namespace std;

MensajeCorreo::MensajeCorreo()
{
    //ctor
    this->asunto = new char;
    strcpy(this->asunto,"");
    this->para = new char;
    strcpy(this->para,"");
    this->cc = new char;
    strcpy(this->cc,"");
    this->mensaje = new char;
    strcpy(this->mensaje,"");
}
MensajeCorreo::MensajeCorreo(const char * para,const char * cc,const char * asunto,const char * mensaje)
{
    //ctor
    this->set_para(para);
    this->set_cc(cc);
    this->set_asunto(asunto);
    this->set_mensaje(mensaje);
}

MensajeCorreo::~MensajeCorreo()
{
    //dtor
    delete [] this->asunto;
    delete [] this->cc;
    delete [] this->para;
    delete [] this->mensaje;
}


//funciones establecer
void MensajeCorreo::set_para(const char * para){
    delete [] this->para;
    this->para = new char[strlen(para)+1];
    strcpy(this->para,para);
}

void MensajeCorreo::set_cc(const char * cc){
    delete [] this->cc;
    this->cc = new char[strlen(cc)+1];
    strcpy(this->cc,cc);
}
void MensajeCorreo::set_asunto(const char * asunto){
    delete [] this->asunto;
    this->asunto = new char[strlen(asunto)+1];
    strcpy(this->asunto,asunto);
}
void MensajeCorreo::set_mensaje(const char * mensaje){
    delete [] this->mensaje;
    this->mensaje = new char[strlen(mensaje)+1];
    strcpy(this->mensaje,mensaje);
}


void MensajeCorreo::mostrarMensaje(){
    cout << "Para: " << this->para << endl;
    cout << "CC: " << this->cc << endl;
    cout << "Asunto: " << this->asunto << endl;
    cout << "Mensaje: " << endl << this->mensaje << endl;
}

//funciones obtener
const char * MensajeCorreo::get_para()const{
    return this->para;
}
const char * MensajeCorreo::get_cc()const{
    return this->cc;
}
const char * MensajeCorreo::get_asunto()const{
    return this->asunto;
}
const char * MensajeCorreo::get_mensaje()const{
    return this->mensaje;
}
