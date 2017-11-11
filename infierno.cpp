#include "infierno.h"

Infierno::Infierno()
{
    pecadores = new Lista();
}


/*
 * Entrada: una persona
 * Salida: ninguna
 *
 * agrega una persona al infierno
 */
void Infierno::agregar(Persona *p)
{
    pecadores->insertarPecador(p);
    condenados[p->id] = 666;
}

/*
 * Entradas: id de las persona
 * Salida: Persona que se acaba de eliminar
 *
 * elimina a la persona buscada de la lista
 * del infierno
 */
Persona* Infierno::eliminar(int id)
{
    return pecadores->borrar(id);
}

void Infierno::correoAmerica()
{
    ofstream file;
    file.open("..\\ArbolDelJuicio\\america.txt", std::ofstream::out | std::ofstream::trunc);
    if (file.fail()) {
        qDebug() << "Error al cargar el paraiso";
        exit(1);
    }
    file << "\n\n\n";
    Nodo* temp = pecadores->primerNodo;
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

void Infierno::correoEuropa()
{
    ofstream file;
    file.open("..\\ArbolDelJuicio\\europa.txt", std::ofstream::out | std::ofstream::trunc);
    if (file.fail()) {
        qDebug() << "Error al cargar el eur";
        exit(1);
    }
    file << "\n\n\n";
    Nodo* temp = pecadores->primerNodo;
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

void Infierno::correoAfrica()
{
    ofstream file;
    file.open("..\\ArbolDelJuicio\\africa.txt", std::ofstream::out | std::ofstream::trunc);
    if (file.fail()) {
        qDebug() << "Error al cargar el afr";
        exit(1);
    }
    file << "\n\n\n";
    Nodo* temp = pecadores->primerNodo;
    while(temp != NULL) {
        Persona* p = temp->persona;
        if (p->correoElectonico.compare(correos[1]) == 0 && !enviados.contains(p->id)) {
            string str =  (to_string( p->id) + " " + p->nombre + " " + p->apellido + " " + p->pais + " " +
                    p->profesion + " " + p->creencia + " " + p->horaYFecha);
            file << str << endl;
            enviados.append(p->id);
            cout << str << endl;
        }
        temp = temp->siguiente;
    }
    file.flush();
    file.close();
    char* command = "curl smtp://smtp.gmail.com:587 -v --mail-from \"personas.continente.europa@gmail.com\" --mail-rcpt \"personas.continente.africa@gmail.com\" --ssl -u personas.continente.europa@gmail.com:estructurasdatos -T \"africa.txt\" -k --anyauth";
        WinExec(command, SW_HIDE);
}

void Infierno::correoOciania()
{
    ofstream file;
    file.open("..\\ArbolDelJuicio\\oceania.txt", std::ofstream::out | std::ofstream::trunc);
    if (file.fail()) {
        qDebug() << "Error al cargar el oceania";
        exit(1);
    }
    file << "\n\n\n";
    Nodo* temp = pecadores->primerNodo;
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

void Infierno::correoAsia()
{
    ofstream file;
    file.open("..\\ArbolDelJuicio\\asia.txt", std::ofstream::out | std::ofstream::trunc);
    if (file.fail()) {
        qDebug() << "Error al cargar el asia";
        exit(1);
    }
    file << "\n\n\n";
    Nodo* temp = pecadores->primerNodo;
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
