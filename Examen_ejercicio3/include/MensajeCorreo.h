#ifndef MENSAJECORREO_H
#define MENSAJECORREO_H


class MensajeCorreo
{
    public:
        MensajeCorreo();
        MensajeCorreo(const char *,const char *,const char *,const char *);
        virtual ~MensajeCorreo();

        //funciones establecer
        void set_para(const char *);
        void set_cc(const char *);
        void set_asunto(const char *);
        void set_mensaje(const char *);

        void mostrarMensaje();

        //funciones obtener
        const char * get_para()const;
        const char * get_cc()const;
        const char * get_asunto()const;
        const char * get_mensaje()const;

    protected:

    private:

        char * para;
        char * cc;
        char * asunto;
        char * mensaje;


};

#endif // MENSAJECORREO_H
