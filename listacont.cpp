#include "listacont.h"

ListaCont::ListaCont()
{
    pn = nullptr;
}

void ListaCont::insertar(Continente *dato)
{
     if (pn == nullptr){
         pn = new NodoCont(dato);
     }else if(pn->siguiente == nullptr){
         if(dato->cantidad_pecados > pn->c->cantidad_pecados){
             NodoCont* aux = new NodoCont(dato);
             aux->siguiente = pn;
             pn = aux;
         }else{
             pn->siguiente = new NodoCont(dato);
         }
     }else if(dato->cantidad_pecados > pn->c->cantidad_pecados){
         NodoCont* aux = new NodoCont(dato);
         aux->siguiente = pn;
         pn = aux;
     }else{
         NodoCont* tmp = pn;
         while (tmp->siguiente != nullptr) {
             if(dato->cantidad_pecados > tmp->siguiente->c->cantidad_pecados){
                 NodoCont* aux = new NodoCont(dato);
                 aux->siguiente = tmp->siguiente;
                 tmp->siguiente = aux;
                 break;
             }
             tmp = tmp->siguiente;
         }if(tmp->siguiente == nullptr){
             tmp->siguiente = new NodoCont(dato);
         }
     }
}
