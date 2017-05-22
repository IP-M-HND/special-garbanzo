#ifndef CORREO_H
#define CORREO_H

#include "MensajeCorreo.h"

class Correo
{
    public:
        Correo();
        Correo(const char *,const char *);
        virtual ~Correo();

        //funciones establecer
        void set_correoElectronico(const char *);
        void set_nombre(const char *);

        void enviarMensaje(const char *,const char *,const char *,const char *);

        //funciones obtener
        const char * get_correoElectronico() const;
        const  char * get_nombre() const;
        const  char * get_Cpara(int i) const;
        void mostrarMensajesEnviados();

    protected:

    private:

        int cont;
        char * correoElectronico;
        char * nombre;
        MensajeCorreo * MensajesEviados;
};

#endif // CORREO_H
