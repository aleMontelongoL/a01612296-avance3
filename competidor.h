//Alejandra Montelongo A01612296
//Avance 1

#include <iostream>
#ifndef COMPETIDOR_H
#define COMPETIDOR_H
#include <vector>
#include <algorithm>
#include <stack>
#define EDAD 0
#define PESO 1
#define ALTURA 2
#define PTS_GENERALES 3
#define PS_W1 4
#define PS_W2 5
#define PS_W3 6
#define PTS_W1 7
#define PTS_W2 8
#define PTS_W3 9
#define TW1 10
#define TW2 11
#define TW3 12




using namespace std;

class Competidor {
    private:
    string nombre, apellido, pais, genero;
    int edad, rank, ptsGenerales, posw1, ptsw1, posw2, ptsw2, posw3, ptsw3,posw4, ptsw4, posw5, ptsw5, posw6, ptsw6, ptsw7, posw7, posw8, ptsw8, posw9, ptsw9, posw10, ptsw10 ;
    float altura, peso, tiempow1,tiempow2,tiempow3, tiempow5, tiempow7,tiempow8,tiempow9, tiempow10 ;

    public:
    Competidor();
    void setNombre(string n);
    string getNombre();
    void setEdad(int d);
    int getEdad();
    void setPeso(float p);
    int getPeso();
    void setApellido(string a);
    string getApellido();
    void setGenero(string g);
    string getGenero();
    void setAltura(float a);
    float getAltura();
    void setPais(string pa);
    string getPais();
    void setRank( int r);
    int getRank();
    void setPtsGenerales(int pg);
    int getPtsGenerales();
    void setPosw1(int pw1);
    int getPosw1();
    void setPtsw1(int ptw1);
    int getPtsw1();
    void setTiempow1(float t1);
    float getTiempow1();
    void setPosw2(int pw2);
    int getPosw2();
    void setPtsw2(int ptw2);
    int getPtsw2();
    void setTiempow2(float t2);
    float getTiempow2();
    void setPosw3(int pw3);
    int getPosw3();
    void setPtsw3(int ptw3);
    int getPtsw3();
    void setTiempow3(float t3);
    float getTiempow3();



    void imprimir();
    void imprimirt();
    void imprimirEdad();
    void imprimirAltura();
    void imprimirRank();
    void imprimirPeso();
    void imprimirPtsg();
    void imprimirPtsW1();
    void imprimirPtsW2();
    void imprimirPtsW3();
    void imprimirPsW1();
    void imprimirPsW2();
    void imprimirPsW3();
    void imprimirTW1();
    void imprimirTW2();
    void imprimirTW3();



    virtual ~Competidor();

};

#endif //COMPETIDORES_H

Competidor::Competidor() {
    nombre="";
    apellido="";
    edad=0;
    peso=0;
    genero="";
    altura=0;
    pais="";
    rank=0;
}


//todos los métodos de acceso set y get son de O(1) ya que asignan o devuelven un valor
//sin que se deba de realizar ninguna operación

void Competidor::setNombre(string n){
    nombre=n;

}

string Competidor::getNombre(){
    return nombre;
}
void Competidor::setEdad(int d){
    edad=d;

}

int Competidor::getEdad(){
    return edad;
}

void Competidor::setPeso(float p){
    peso=p;

}

int Competidor::getPeso(){
    return peso;

}

void Competidor::setApellido(string a) {
    apellido=a;
}

string Competidor::getApellido() {
    return apellido;
}

void Competidor::setPais(string pa) {
    pais=pa;
}

string Competidor::getPais() {
    return pais;
}

void Competidor::setGenero(string g) {
    genero=g;
}

string Competidor::getGenero() {
    return genero;
}

void Competidor::setAltura(float a) {
    altura=a;
}

float Competidor::getAltura() {
    return altura;
}

void Competidor::setRank(int r) {
    rank=r;
}

int Competidor::getRank() {
    return rank;
}

void Competidor::setPtsGenerales(int pg){
    ptsGenerales=pg;
}

int Competidor::getPtsGenerales(){
    return ptsGenerales;
}

void Competidor::setPosw1(int pw1){
    posw1=pw1;

}

int Competidor::getPosw1(){
    return posw1;
}

void Competidor::setPtsw1(int ptw1) {
    ptsw1=ptw1;
}

int Competidor::getPtsw1() {
    return ptsw1;
}

void Competidor::setTiempow1(float t1){
    tiempow1=t1;
}

float Competidor::getTiempow1(){
    return tiempow1;
}

void Competidor::setPosw2(int pw2) {
    posw2=pw2;

}

int Competidor::getPosw2() {
    return posw2;
}

void Competidor::setPtsw2(int ptw2) {
    ptsw2 = ptw2;
}

int Competidor::getPtsw2(){
    return ptsw2;
}

void Competidor::setTiempow2(float t2){
    tiempow2=t2;
}

float Competidor::getTiempow2(){
    return tiempow2;
}

void Competidor::setPosw3(int pw3){
    posw3=pw3;

}

int Competidor::getPosw3(){
    return posw3;
}

void Competidor::setPtsw3(int ptw3)
{
    ptsw3=ptw3;
}

int Competidor::getPtsw3(){
    return ptsw3;
}

void Competidor::setTiempow3(float t3){
    tiempow3=t3;
}

float Competidor::getTiempow3(){
    return tiempow3;
}


// Las funciones de imprimir tienen una complejidad de O(1), ya que muestran
//los valores de los atributos sin realizar calculos
void Competidor::imprimir(){
    std::cout<<"nombre: "<<nombre<<" "<<endl;
    std::cout<<"apellido: "<<apellido<<" "<<endl;
    std::cout<<"edad: "<<edad<<" "<<endl;
    std::cout<<"peso: "<<peso<<" "<<endl;
    std::cout<<"genero: "<<genero<<" "<<endl;
    std::cout<<"altura: "<<altura<<" "<<endl;
    std::cout<<"pais: "<<pais<<" "<<endl;

}

void Competidor::imprimirEdad(){
    std::cout<< nombre << " "<<apellido<<" "<<edad<<" "<<endl;
}

void Competidor::imprimirAltura(){
    std::cout<< nombre<<" "<<apellido<<" "<<altura<<" "<<endl;
}

void Competidor::imprimirPeso(){
    std::cout<< nombre<< " "<< apellido<<" "<< peso <<" "<<endl;
}

void Competidor::imprimirPtsg(){
    std::cout<<nombre <<" "<<apellido<< " "<<ptsGenerales<< " "<<endl;
}

void Competidor::imprimirPtsW1(){
    std::cout<<nombre <<" "<<apellido << " "<<ptsw1<< " "<<endl;
}

void Competidor::imprimirPtsW2(){
    std::cout<<nombre <<" "<<apellido << " "<<ptsw2<< " "<<endl;
}

void Competidor::imprimirPtsW3(){
    std::cout<<nombre <<" "<<apellido << " "<<ptsw3<< " "<<endl;
}

void Competidor::imprimirPsW1(){
    std::cout<<nombre <<" "<<apellido << " "<<posw1<< " "<<endl;
}

void Competidor::imprimirPsW2(){
    std::cout<<nombre <<" "<<apellido << " "<<posw2<< " "<<endl;
}

void Competidor::imprimirPsW3(){
    std::cout<<nombre <<" "<<apellido << " "<<posw3<< " "<<endl;
}

void Competidor::imprimirTW1(){
    std::cout<<nombre <<" "<<apellido << " "<<tiempow1<< " "<<endl;
}

void Competidor::imprimirTW2(){
    std::cout<<nombre <<" "<<apellido << " "<<tiempow2<< " "<<endl;
}

void Competidor::imprimirTW3(){
    std::cout<<nombre <<" "<<apellido << " "<<tiempow3<< " "<<endl;
}


void Competidor::imprimirt(){

}


//cada funcion de mergeSort tiene la misma forma de implementación para los diferentes atributos
//Tiene una complejidad de O(n log n)
//divide el arreglo a la mitad en cada llamada recursiva
//la mezcla de los arreglos mezcla los dos subarreglos O(n)


// Función merge parametrizada
void merge(std::vector<Competidor> &arr, int izquierda, int medio, int derecha, int criterio) {
    int tam1 = medio - izquierda + 1;
    int tam2 = derecha - medio;

    std::vector<Competidor> izq(tam1), der(tam2);

    for (int i = 0; i < tam1; i++)
        izq[i] = arr[izquierda + i];
    for (int j = 0; j < tam2; j++)
        der[j] = arr[medio + 1 + j];

    int i = 0, j = 0, k = izquierda;

    while (i < tam1 && j < tam2) {

        // Selección del criterio de comparación 
        if (criterio == EDAD) {
            if (izq[i].getEdad() <= der[j].getEdad()) {
                arr[k] = izq[i];
                i++;
                } else {
                    arr[k] = der[j];
                    j++;
                    }
                
        } else if (criterio == PESO) {
            if (izq[i].getPeso() <= der[j].getPeso()) {
                arr[k] = izq[i];
                i++;
                } else {
                    arr[k] = der[j];
                    j++;
                    }
        } else if (criterio == ALTURA) {
            if (izq[i].getAltura() <= der[j].getAltura()) {
                arr[k] = izq[i];
                i++;
                } else {
                    arr[k] = der[j];
                    j++;
                    }
        } else if (criterio == PTS_GENERALES) {
            if (izq[i].getPtsGenerales() <= der[j].getPtsGenerales()) {
                arr[k] = izq[i];
                i++;
                } else {
                    arr[k] = der[j];
                    j++;
                    }
        } else if (criterio == PS_W1) {
            if (izq[i].getPosw1() <= der[j].getPosw1()) {
                arr[k] = izq[i];
                i++;
                } else {
                    arr[k] = der[j];
                    j++;
                    }
        } else if(criterio==PS_W2){
            if (izq[i].getPosw2() <= der[j].getPosw2()) {
                arr[k] = izq[i];
                i++;
                } else {
                    arr[k] = der[j];
                    j++;
                    }
        }  else if(criterio==PS_W3){
            if (izq[i].getPosw3() <= der[j].getPosw3()) {
                arr[k] = izq[i];
                i++;
                } else {
                    arr[k] = der[j];
                    j++; }
        } else if(criterio==PTS_W1){
            if (izq[i].getPtsw1() <= der[j].getPtsw1()) {
                arr[k] = izq[i];
                i++; } 
                else {
                    arr[k] = der[j];
                    j++; }
        } else if(criterio==PTS_W2){
            if (izq[i].getPtsw2() <= der[j].getPtsw2()) {
                arr[k] = izq[i];
                i++;
                } else {
                    arr[k] = der[j];
                    j++; }
        } else if(criterio==PTS_W3){
            if (izq[i].getPtsw3() <= der[j].getPtsw3()) {
                arr[k] = izq[i];
                i++;
                } else {
                    arr[k] = der[j];
                    j++;
                    }
        } else if(criterio==TW1){
            if (izq[i].getTiempow1() <= der[j].getTiempow1()) {
                arr[k] = izq[i];
                i++;
                } else {
                    arr[k] = der[j];
                    j++;
                    }
        } else if(criterio==TW2){
            if (izq[i].getTiempow2() <= der[j].getTiempow2()) {
                arr[k] = izq[i];
                i++;
                } else {
                    arr[k] = der[j];
                    j++;
                    }
        } else if(criterio==TW3){
            if (izq[i].getTiempow3() <= der[j].getTiempow3()) {
                arr[k] = izq[i];
                i++;
                } else {
                    arr[k] = der[j];
                    j++;
                    }
        }
        k++;
    }

    while (i < tam1) {
        arr[k] = izq[i];
        i++;
        k++;
    }

    while (j < tam2) {
        arr[k] = der[j];
        j++;
        k++;
    }
}

void mergeSort(std::vector<Competidor> &arr, int izquierda, int derecha, int criterio) {
    if (izquierda < derecha) {
        int medio = izquierda + (derecha - izquierda) / 2;

        mergeSort(arr, izquierda, medio, criterio);
        mergeSort(arr, medio + 1, derecha, criterio);

        merge(arr, izquierda, medio, derecha, criterio);
    }
}


Competidor::~Competidor() {

}

