#include "nodo.h"

template <typename T>
class Pila {
public:
    Pila();
    ~Pila();
    bool push(T x);
    bool pop();
    T top() const;
    bool esVacia() const;

private:
    Nodo<T> *tope;
    int numElementos;
};


template <typename T>
Pila<T>::Pila() {
    tope = NULL;
    numElementos = 0;
}


template <typename T>
Pila<T>::~Pila() {
    while (!esVacia())
        pop();
}


template <typename T>
bool Pila<T>::push(T x) {
    Nodo<T>* nuevo = new Nodo<T>();
    nuevo->elemento = x;
    nuevo->siguiente = tope;
    tope = nuevo;
    numElementos += 1;
    return true;
}


template <typename T>
bool Pila<T>::pop() {
    bool exito = false;
    if (!esVacia()) {
        Nodo<T> *p = tope;
        tope = p->siguiente;
        delete p;
        numElementos -= 1;
        exito = true;
    }
    return exito;
}


template <typename T>
T Pila<T>::top() const {
    T elem;
    if (!esVacia())
        elem = tope->elemento;
    return elem;
}


template <typename T>
bool Pila<T>::esVacia() const {
    return (tope == NULL);
}
