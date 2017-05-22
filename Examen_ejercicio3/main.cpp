#include <iostream>
#include "Correo.h"

using namespace std;

int main()
{
    Correo *correo_Ivan = new Correo("ivan_castillo@unitec.edu","Ivan Castillo");

    correo_Ivan->enviarMensaje("adas@unitec.edu","fsgsg@unitec.edu","Examen","ejermplo de la clase correo del examen programacion 3");
    correo_Ivan->enviarMensaje("fsdfs@unitec.edu","nvdf@unitec.edu","Examen2","ejermplo 2 de la clase correo del examen programacion 3");
    correo_Ivan->enviarMensaje("kghfd@unitec.edu","lopf@unitec.edu","Examen3","ejermplo 3 de la clase correo del examen programacion 3");
    correo_Ivan->enviarMensaje("qwd@unitec.edu","cvgf@unitec.edu","Examen4","ejermplo 3 de la clase correo del examen programacion 3");

    correo_Ivan->mostrarMensajesEnviados();

    delete correo_Ivan;
    return 0;
}
