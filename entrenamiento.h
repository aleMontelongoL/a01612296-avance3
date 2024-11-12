//Alejandra Montelongo A01612296
//Avance 2

#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <fstream>
#include <string>

using namespace std;

class Entrenamiento {
    private:
        string tiempo, detalles;
    public:
        Entrenamiento();
        void setTiempo();
        string getTiempo();
        void setDetalles();
        string getDetalles();
        void mostrarEntrenamiento();
        string toFileString();
        void fromFileString(string data);
};


//O(1) asigna valores iniciales a tiempo y detalles
Entrenamiento::Entrenamiento(){
    tiempo="";
    detalles="";
}


//O(1) crea una cadena de texto con los datos del entrenamiento
string Entrenamiento::toFileString() {
    return tiempo + "," + detalles + "\n";
}

// O(n) donde n es la longitud de data
void Entrenamiento::fromFileString(string data) {
    size_t pos = data.find(",");
    tiempo = data.substr(0, pos);
    detalles = data.substr(pos + 1);
}

//O(1) entradas del usuario 
void Entrenamiento::setTiempo(){
    cout << "Ingresa tu tiempo del entrenamiento: " << endl;
    cin >> tiempo;
}


//O(1) devuelven el valor 
string Entrenamiento::getTiempo(){
    return tiempo;
}

//O(1) entrada del usuario
void Entrenamiento::setDetalles(){
    cout << "En este espacio puedes ingresar algun detalle de tu entrenamiento: " << endl;
    cin.ignore();
    getline(cin, detalles);
}

//O(1) devuelve el valor
string Entrenamiento::getDetalles(){
    return detalles;
}


//O(1) muestra el dato
void Entrenamiento::mostrarEntrenamiento(){
    cout << "Tiempo: " << tiempo << ", Detalles: " << detalles << endl;
}

class Usuario {
    private:
        string nombre, apellido, password;
        stack<Entrenamiento> entrenamientos;
        
    public:
        Usuario();
        void registrarEntrenamiento();
        void consultarUltimoEntrenamiento();
        void mostrarEntrenamientosAnteriores();
        void setNombre();
        string getNombre();
        void setApellido();
        string getApellido();
        void setContrasena();
        bool checkContrasena(string input);
        void guardarEnArchivo();
        bool cargarDeArchivo();
        string getFileName();
};

//O(1) asigna valores iniciales 
Usuario::Usuario(){
    nombre = "";
    apellido = "";
    password = "";
}

//O(1) entrada del usuario
void Usuario::setContrasena() {
    cout << "Ingresa una contrasena para tu cuenta: " << endl;
    cin >> password;
}
//O(n) donde n es la longitud de la contraseña
bool Usuario::checkContrasena(string input) {
    return password == input;
}

//O(n) donde n= es la suma de la longitud del nombre y apellido
//realiza una concatenación de las cadenas
string Usuario::getFileName() {
    return nombre + "_" + apellido + ".txt";
}
//O(n) donde n es el numero de entrenamientos en la pila
//convierte la pila a un vector temporal (tempVector)
//recorre y escribe cada entrenamiento en el archivo, el proceso es lineal con respecto
//al número de entrenamientos
void Usuario::guardarEnArchivo() {
    ofstream archivo(getFileName());
    if (archivo.is_open()) {
        archivo << nombre << endl;
        archivo << apellido << endl;
        archivo << password << endl;
        
        stack<Entrenamiento> temp = entrenamientos;
        vector<Entrenamiento> tempVector;
        
        while (!temp.empty()) {
            tempVector.push_back(temp.top());
            temp.pop();
        }
        
        for (int i = tempVector.size() - 1; i >= 0; i--) {
            archivo << tempVector[i].toFileString();
        }
        archivo.close();
        cout << "Datos guardados exitosamente." << endl;
    } else {
        cout << "Error al guardar los datos." << endl;
    }
}

//O(n) donde n es el número de líneas en el archivo, uno por cada entrenamiento
//cada línea se convierte en un objeto Entrenamiento y se apila en entrenamientos 
bool Usuario::cargarDeArchivo() {
    ifstream archivo(getFileName());
    if (archivo.is_open()) {
        getline(archivo, nombre);
        getline(archivo, apellido);
        getline(archivo, password);
        
        string linea;
        while (getline(archivo, linea)) {
            if (!linea.empty()) {
                Entrenamiento ent;
                ent.fromFileString(linea);
                entrenamientos.push(ent);
            }
        }
        archivo.close();
        return true;
    }
    return false;
}

//O(n) donde n es el número de entrenamientos en la pila debido a la llamada a guardarEnArchivo
void Usuario::registrarEntrenamiento(){
    Entrenamiento nuevoEntrenamiento;
    nuevoEntrenamiento.setTiempo();
    cout << "que buen tiempo!" << endl;
    nuevoEntrenamiento.setDetalles();
    entrenamientos.push(nuevoEntrenamiento);
    cout << "Entrenamiento registrado para " << nombre << endl;
    guardarEnArchivo(); 
}

//O(1) consulta el elemento en la cima de la pila
void Usuario::consultarUltimoEntrenamiento() {
    if (!entrenamientos.empty()) {
        cout << "Último entrenamiento de " << nombre << ":" << endl;
        entrenamientos.top().mostrarEntrenamiento();
    } else {
        cout << "No hay entrenamientos registrados aún." << endl;
    }
}

//O(n) donde n es el número de entrenamientos en la pila.
void Usuario::mostrarEntrenamientosAnteriores() {
    if (entrenamientos.empty()) {
        cout << "No hay entrenamientos registrados aún." << endl;
        return;
    }
    
    cout << "Entrenamientos anteriores de " << nombre << ":" << endl;
    stack<Entrenamiento> temp = entrenamientos;
    while (!temp.empty()) {
        temp.top().mostrarEntrenamiento();
        temp.pop();
    }
}

//O(1) entrada del usuario
void Usuario::setNombre(){
    cout << "Ingresa tu nombre: " << endl;
    cin >> nombre;
}

//O(1) devuelve el valor
string Usuario::getNombre(){
    return nombre;
}

//O(1) entrada del apellido
void Usuario::setApellido(){
    cout << "Ingresa tu apellido: " << endl;
    cin >> apellido;
}

//O(1) devuelve el valor
string Usuario::getApellido(){
    return apellido;
}
