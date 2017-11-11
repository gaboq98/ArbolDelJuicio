#include "paraiso.h"
#include <QDebug>

Paraiso::Paraiso()
{

}

Paraiso::Paraiso(Mundo *m, Infierno *inf)
{
    personas = new Lista();
    mundo = m;
    infierno = inf;
    dic_mundo = &mundo->diccionario;
    dic_infierno = &infierno->condenados;
}

/*
 * Mata una persona :'( xD :3 8==D :v
 */
void Paraiso::genera_afortunado()
{
    int id = rand()%10000000;
    if(dic_infierno->contains(id)){
        Persona* persona = infierno->eliminar(id);
        personas->insertarOrdenado(persona);
    }else if(dic_mundo->contains(id)){
        Persona* persona = mundo->eliminar(id);
        personas->insertarOrdenado(persona);
    }else{
        no_nacidos.append(id);
        mundo->no_nacidos.append(id);
    }
    qDebug() << "Muerto";
}

void Paraiso::correoAmerica()
{
    ofstream file;
    file.open("..\\ArbolDelJuicio\\america.txt", std::ofstream::out | std::ofstream::trunc);
    if (file.fail()) {
        qDebug() << "Error al cargar el paraiso";
        exit(1);
    }
    file << "\n\n\n";
    Nodo* temp = personas->primerNodo;
    while(temp != NULL) {
        Persona* p = temp->persona;
        if (p->correoElectonico.compare(correos[0]) == 0 && !enviados.contains(p->id)) {
            string str =  (to_string( p->id) + " " + p->nombre + " " + p->apellido + " " + p->pais + " " +
                    p->profesion + " " + p->creencia + " " + p->horaYFecha + "\n");
            file << str << endl;
            enviados.append(p->id);
        }
        temp = temp->siguiente;
    }
    file.flush();
    file.close();
    char* command = "curl smtp://smtp.gmail.com:587 -v --mail-from \"personas.continente.europa@gmail.com\" --mail-rcpt \"personas.continente.america@gmail.com\" --ssl -u personas.continente.europa@gmail.com:estructurasdatos -T \"america.txt\" -k --anyauth";
        WinExec(command, SW_HIDE);
}

void Paraiso::correoEuropa()
{
    ofstream file;
    file.open("..\\ArbolDelJuicio\\europa.txt", std::ofstream::out | std::ofstream::trunc);
    if (file.fail()) {
        qDebug() << "Error al cargar el eur";
        exit(1);
    }
    file << "\n\n\n";
    Nodo* temp = personas->primerNodo;
    while(temp != NULL) {
        Persona* p = temp->persona;
        if (p->correoElectonico.compare(correos[2]) == 0 && !enviados.contains(p->id)) {
            string str =  (to_string( p->id) + " " + p->nombre + " " + p->apellido + " " + p->pais + " " +
                    p->profesion + " " + p->creencia + " " + p->horaYFecha + "\n");
            file << str << endl;
            enviados.append(p->id);
        }
        temp = temp->siguiente;
    }
    file.flush();
    file.close();
    char* command = "curl smtp://smtp.gmail.com:587 -v --mail-from \"personas.continente.europa@gmail.com\" --mail-rcpt \"personas.continente.europa@gmail.com\" --ssl -u personas.continente.europa@gmail.com:estructurasdatos -T \"europa.txt\" -k --anyauth";
        WinExec(command, SW_HIDE);
}

void Paraiso::correoAfrica()
{
    ofstream file;
    file.open("..\\ArbolDelJuicio\\africa.txt", std::ofstream::out | std::ofstream::trunc);
    if (file.fail()) {
        qDebug() << "Error al cargar el afr";
        exit(1);
    }
    file << "\n\n\n";
    Nodo* temp = personas->primerNodo;
    while(temp != NULL) {
        Persona* p = temp->persona;
        if (p->correoElectonico.compare(correos[1]) == 0 && !enviados.contains(p->id)) {
            string str =  (to_string( p->id) + " " + p->nombre + " " + p->apellido + " " + p->pais + " " +
                    p->profesion + " " + p->creencia + " " + p->horaYFecha);
            file << str << endl;
            enviados.append(p->id);
        }
        temp = temp->siguiente;
    }
    file.flush();
    file.close();
    char* command = "curl smtp://smtp.gmail.com:587 -v --mail-from \"personas.continente.europa@gmail.com\" --mail-rcpt \"personas.continente.africa@gmail.com\" --ssl -u personas.continente.europa@gmail.com:estructurasdatos -T \"africa.txt\" -k --anyauth";
        WinExec(command, SW_HIDE);
}

void Paraiso::correoOciania()
{
    ofstream file;
    file.open("..\\ArbolDelJuicio\\oceania.txt", std::ofstream::out | std::ofstream::trunc);
    if (file.fail()) {
        qDebug() << "Error al cargar el oceania";
        exit(1);
    }
    file << "\n\n\n";
    Nodo* temp = personas->primerNodo;
    while(temp != NULL) {
        Persona* p = temp->persona;
        if (p->correoElectonico.compare(correos[3]) == 0 && !enviados.contains(p->id)) {
            string str =  (to_string( p->id) + " " + p->nombre + " " + p->apellido + " " + p->pais + " " +
                    p->profesion + " " + p->creencia + " " + p->horaYFecha + "\n");
            file << str << endl;
            enviados.append(p->id);
        }
        temp = temp->siguiente;
    }
    file.flush();
    file.close();
    char* command = "curl smtp://smtp.gmail.com:587 -v --mail-from \"personas.continente.europa@gmail.com\" --mail-rcpt \"personas.continente.oceania@gmail.com\" --ssl -u personas.continente.europa@gmail.com:estructurasdatos -T \"oceania.txt\" -k --anyauth";
        WinExec(command, SW_HIDE);
}

void Paraiso::correoAsia()
{
    ofstream file;
    file.open("..\\ArbolDelJuicio\\asia.txt", std::ofstream::out | std::ofstream::trunc);
    if (file.fail()) {
        qDebug() << "Error al cargar el asia";
        exit(1);
    }
    file << "\n\n\n";
    Nodo* temp = personas->primerNodo;
    while(temp != NULL) {
        Persona* p = temp->persona;
        if (p->correoElectonico.compare(correos[4]) == 0 && !enviados.contains(p->id)) {
            string str =  (to_string( p->id) + " " + p->nombre + " " + p->apellido + " " + p->pais + " " +
                    p->profesion + " " + p->creencia + " " + p->horaYFecha + "\n");
            file << str << endl;
            enviados.append(p->id);
        }
        temp = temp->siguiente;
    }
    file.flush();
    file.close();
    char* command = "curl smtp://smtp.gmail.com:587 -v --mail-from \"personas.continente.europa@gmail.com\" --mail-rcpt \"personas.continente.asia@gmail.com\" --ssl -u personas.continente.europa@gmail.com:estructurasdatos -T \"asia.txt\" -k --anyauth";
        WinExec(command, SW_HIDE);
}
