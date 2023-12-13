template <typename T>
class Nodo {
public:
    Nodo();
    T elemento;
    Nodo<T> *siguiente;
};


template <typename T>
Nodo<T>::Nodo() {
    siguiente = NULL;
}
