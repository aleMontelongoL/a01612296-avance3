//Alejandra Montelongo A01612296

#include <iostream>
#include <vector>
#include <fstream>
#include "competidor.h"
#include "entrenamiento.h"
#include <algorithm>
using namespace std;

void cargaArchivo (std::vector<Competidor> &listaCompetidoresHombres, std::vector<Competidor> &listaCompetidoresMujeres) {
    //En esta funcion de carga archivo el archivo se lee línea por línea hasta que se termina el archivo por lo que la complejidad
    // sería O(n) ya que si hay n líneas en el archivo ya que se procesa una vez cada línea y se inserta un elemento en el vector
    //el mejor de los casos sería O(1) que solo hubiera una línea en el archivo
    ifstream archivo;
    string nombre, apellido, pais, genero;
    int edad, rank, ptsGenerales,posw1,ptsw1, posw2, ptsw2, posw3, ptsw3;
    float altura, peso, tiempow1,tiempow2,tiempow3;

    // abrir archivo
    archivo.open("competidores1.txt", ios::in);
    //o(1)
    if (archivo.fail()) {
        cout << "El archivo no se pudo abrir" << endl;
        exit(1);
    }
    //lectura de archivo
    while (archivo >> rank>> nombre >> apellido >> pais >> edad >> altura >> peso >> genero >> ptsGenerales >> posw1 >> ptsw1 >> tiempow1 >> posw2 >> ptsw2 >> tiempow2 >> posw3>> ptsw3>> tiempow3) {
        Competidor C;  
        C.setNombre(nombre);
        C.setApellido(apellido);
        C.setPais(pais);
        C.setEdad(edad);
        C.setAltura(altura);
        C.setPeso(peso);
        C.setGenero(genero);
        C.setPtsGenerales(ptsGenerales);
        C.setPosw1(posw1);
        C.setPtsw1(ptsw1);
        C.setTiempow1(tiempow1);
        C.setPosw2(posw2);
        C.setPtsw2(ptsw2);
        C.setTiempow2(tiempow2);
        C.setPosw3(posw3);
        C.setPtsw3(ptsw3);
        C.setTiempow3(tiempow3);
        //separar por hombres y mujeres 
        //O(1)
        if (genero == "men") {
            listaCompetidoresHombres.push_back(C);


        } else if (genero == "women") {
            listaCompetidoresMujeres.push_back(C);

        }


    }

}


//Las funciones de imprimir recorren un vector y muestran la informacion de los competidores 
//La complejodad es O(n) donde n es el numero de elementos en el vector y cada elemento se imprime una vez 
void imprimeInformacion(std::vector<Competidor> &listaCompetidores){
    int n=listaCompetidores.size();
    //O(n)
    for (int i=0; i<n; i++){
        listaCompetidores[i].imprimir();
    }
}

void imprimeCompetidoresEdad(std::vector<Competidor> &listaCompetidores) {
    for (auto &c : listaCompetidores) {
        c.imprimirEdad();  
    }
}

void imprimeCompetidoresAltura(std::vector<Competidor> &listaCompetidores){
    for (auto &c : listaCompetidores) {
        c.imprimirAltura();  
    }
}

void imprimeCompetidoresPeso(std::vector<Competidor> &listaCompetidores){
    for (auto &c : listaCompetidores) {
        c.imprimirPeso();  
    }
}

void imprimeCompetidoresPtsGenerales(std::vector<Competidor> &listaCompetidores){
    for (auto &c : listaCompetidores) {
        c.imprimirPtsg();  
    }
}

void imprimeCompetidoresPtsW1(std::vector<Competidor> &listaCompetidores){
    for (auto &c : listaCompetidores) {
        c.imprimirPtsW1();  
    }
}

void imprimeCompetidoresPtsW2(std::vector<Competidor> &listaCompetidores){
    for (auto &c : listaCompetidores) {
        c.imprimirPtsW2();  
    }
}

void imprimeCompetidoresPtsW3(std::vector<Competidor> &listaCompetidores){
    for (auto &c : listaCompetidores) {
        c.imprimirPtsW3();  
    }
}

void imprimeCompetidoresPsW1(std::vector<Competidor> &listaCompetidores){
    for (auto &c : listaCompetidores) {
        c.imprimirPsW1();  
    }
}

void imprimeCompetidoresPsW2(std::vector<Competidor> &listaCompetidores){
    for (auto &c : listaCompetidores) {
        c.imprimirPsW2();  
    }
}

void imprimeCompetidoresPsW3(std::vector<Competidor> &listaCompetidores){
    for (auto &c : listaCompetidores) {
        c.imprimirPsW3();  
    }
}

void imprimeCompetidorestW1(std::vector<Competidor> &listaCompetidores){
    for (auto &c : listaCompetidores) {
        c.imprimirTW1();  
    }
}

void imprimeCompetidorestW2(std::vector<Competidor> &listaCompetidores){
    for (auto &c : listaCompetidores) {
        c.imprimirTW2();  
    }
}

void imprimeCompetidorestW3(std::vector<Competidor> &listaCompetidores){
    for (auto &c : listaCompetidores) {
        c.imprimirTW3();  
    }
}

//El menu permite seleccionar entre distintas opciones las funcionalidades
//como impresión y ordenamiento, la ejecución de cada caso tiene su propia complejidad 
//La carga de datos y la impresión tienen complejidad de O(n) 
//Las funcion MergeSort es complejidad O(n log n)
int main() {
    std::vector<Competidor> listaCompetidoresHombres;
    std::vector<Competidor> listaCompetidoresMujeres;
    
    cargaArchivo(listaCompetidoresHombres,listaCompetidoresMujeres);
    Usuario usuario;
    int opcion;
    do {
        std::cout<<"----Tabla de puntuaciones de Crossfit Games 2024----"<<endl;
        std::cout<<"Puedes filtrar los resultados de cada workout, por posición, puntuación y en algunos casos por tiempo"<<endl;
        std::cout<<"Presiona para filtrar: "<<endl;
        std::cout<<"Presiona 0 para salir del menu: "<<endl;
        std::cout<<"1. Para mostrar todos los competidores e información general "<<endl;
        std::cout<<"2. Mostrar competidores hombres por pts general "<<endl;
        std::cout<<"3. Mostrar competidores mujeres por pts general "<<endl;
        std::cout<<"4. Ordenar competidores hombres por edad "<<endl;
        std::cout<<"5. Ordenar competidores mujeres por edad "<<endl;
        std::cout<<"6. Ordenar competidores hombres por estatura "<<endl;
        std::cout<<"7. Ordenar competidores mujeres por estatura "<<endl;
        std::cout<<"8. Ordenar competidores hombres por peso"<<endl;
        std::cout<<"9. Ordenar competidoras mujeres por peso "<<endl;
        std::cout<<"10. Ordenar por posicion en workout"<<endl;
        std::cout<<"11. Ordenar por pts en workout "<<endl;
        std::cout<<"12. Ordenar por tiempo en workout "<<endl;
        std::cout<<"13. Registrar o consultar tu entrenamiento" <<endl; 
        cin>>opcion;
        //O(1)
        switch (opcion) {
            case 1:
                std::cout << "Competidores:" << endl;
                imprimeInformacion(listaCompetidoresHombres);// Las funciones de imprimir son O(n) ya que recorren el vector
                imprimeInformacion(listaCompetidoresMujeres);// El mejor de los casos seria O(1) 
                break;
                
            case 2:
                mergeSort(listaCompetidoresHombres, 0, listaCompetidoresHombres.size() - 1, PTS_GENERALES); //O n(log n)
                std::cout << "Competidores hombres por posición general:" << endl;
                imprimeCompetidoresPtsGenerales(listaCompetidoresHombres);
                break;

            case 3:
                mergeSort(listaCompetidoresMujeres, 0, listaCompetidoresMujeres.size() - 1, PTS_GENERALES);
                std::cout << "Competidores mujeres por posición general:" << endl;
                imprimeCompetidoresPtsGenerales(listaCompetidoresMujeres);
                break;

            case 4:
                mergeSort(listaCompetidoresHombres, 0, listaCompetidoresHombres.size() - 1, EDAD);
                std::cout << "Competidores hombres ordenados por edad:" << endl;
                imprimeCompetidoresEdad(listaCompetidoresHombres);
                break;

            case 5:
                mergeSort(listaCompetidoresMujeres, 0, listaCompetidoresMujeres.size() - 1, EDAD);
                std::cout<< "Competidoras mujeres ordenadas por edad:" << endl;
                imprimeCompetidoresEdad(listaCompetidoresMujeres);
                break;

            case 6:
                mergeSort(listaCompetidoresHombres, 0, listaCompetidoresHombres.size() - 1, ALTURA);
                std::cout << "Ordenando competidores hombres por estatura: " << endl;
                imprimeCompetidoresAltura(listaCompetidoresHombres);
                break;

            case 7:
                mergeSort(listaCompetidoresMujeres, 0, listaCompetidoresMujeres.size() - 1, ALTURA);
                std::cout << "Ordenando competidores mujeres por estatura: " << endl;
                imprimeCompetidoresAltura(listaCompetidoresMujeres);
                break;

            case 8:
                mergeSort(listaCompetidoresHombres, 0, listaCompetidoresHombres.size() - 1, PESO);
                std::cout<< "Ordenando competidoras mujeres por peso..." << endl;
                imprimeCompetidoresPeso(listaCompetidoresHombres);
                break;

            case 9:
                mergeSort(listaCompetidoresMujeres, 0, listaCompetidoresMujeres.size() - 1, PESO);
                std::cout<< "Ordenando competidoras mujeres por peso..." << endl;
                imprimeCompetidoresPeso(listaCompetidoresMujeres);
                break;
                
            case 10:
                std::cout << "Ordenando por posición en workout..." << endl;
                std::cout<<"selecciona genero 1:hombre, 2: mujer" <<endl;
                int g;
                cin>>g;
                if (g==1){
                    std::cout<<"selecciona el numero de workout 1, 2 o 3"<<endl;
                    int ps;
                    cin>>ps;
                    if (ps==1){
                    mergeSort(listaCompetidoresHombres, 0, listaCompetidoresHombres.size() - 1, PS_W1);
                    imprimeCompetidoresPsW1(listaCompetidoresHombres);
                    }
                    else if(ps==2){
                    mergeSort(listaCompetidoresHombres, 0, listaCompetidoresHombres.size() - 1, PS_W2);
                    imprimeCompetidoresPsW2(listaCompetidoresHombres);
                    }
                    else if(ps==3){
                    mergeSort(listaCompetidoresHombres, 0, listaCompetidoresHombres.size() - 1, PS_W3);
                    imprimeCompetidoresPsW3(listaCompetidoresHombres);
                    }
                    else{
                        std::cout<<"error/opcion no disponible"<<endl;
                    }
                    break;
                }

                else if(g==2){
                    std::cout<<"selecciona el numero del workout 1, 2 o 3"<<endl;
                    int psm;
                    cin>>psm;
                    if (psm==1){
                    mergeSort(listaCompetidoresMujeres, 0, listaCompetidoresMujeres.size() - 1, PS_W1);
                    imprimeCompetidoresPsW1(listaCompetidoresMujeres);
                    }
                    else if(psm==2){
                    mergeSort(listaCompetidoresMujeres, 0, listaCompetidoresMujeres.size() - 1, PS_W2);
                    imprimeCompetidoresPsW2(listaCompetidoresMujeres);
                    }
                    else if(psm==3){
                    mergeSort(listaCompetidoresMujeres, 0, listaCompetidoresMujeres.size() - 1, PS_W3);
                    imprimeCompetidoresPsW3(listaCompetidoresMujeres);
                    }

                }
                else{
                    std::cout<<"error/opcion no disponible";
                }
                break;

            case 11:
                std::cout << "Ordenando por puntos en workout..." << endl;
                std::cout<<"selecciona genero 1:hombre, 2: mujer" <<endl;
                int ge;
                cin>>ge;
                if (ge==1){
                    std::cout<<"selecciona el workout 1, 2 o 3"<<endl;
                    int w1;
                    cin>>w1;
                    if (w1==1){
                    std::cout<<" "<<endl;
                    mergeSort(listaCompetidoresHombres, 0, listaCompetidoresHombres.size() - 1, PTS_W1);
                    imprimeCompetidoresPtsW1(listaCompetidoresHombres);
                    }
                    else if(w1==2){
                    mergeSort(listaCompetidoresHombres, 0, listaCompetidoresHombres.size() - 1, PTS_W2);
                    imprimeCompetidoresPtsW2(listaCompetidoresHombres);
                    }
                    else if(w1==3){
                    mergeSort(listaCompetidoresHombres, 0, listaCompetidoresHombres.size() - 1, PTS_W3);
                    imprimeCompetidoresPtsW3(listaCompetidoresHombres);
                    }
                    else{
                        std::cout<<"opcion no disponible"<<endl;
                    }

                }
                else if(g==2){
                    std::cout<<"selecciona el workout 1, 2 o 3"<<endl;
                    int w1;
                    cin>>w1;
                    if (w1==1){
                    std::cout<<" "<<endl;
                    mergeSort(listaCompetidoresMujeres, 0, listaCompetidoresMujeres.size() - 1, PTS_W1);
                    imprimeCompetidoresPtsW1(listaCompetidoresMujeres);
                    }
                    else if(w1==2){
                    mergeSort(listaCompetidoresMujeres, 0, listaCompetidoresMujeres.size() - 1, PTS_W2);
                    imprimeCompetidoresPtsW2(listaCompetidoresMujeres);
                    }
                    else if(w1==3){
                    mergeSort(listaCompetidoresMujeres, 0, listaCompetidoresMujeres.size() - 1, PTS_W3);
                    imprimeCompetidoresPtsW3(listaCompetidoresMujeres);
                    }
                    else{
                    std::cout<<"opcion no disponible";
                    }
                }
                else{
                    std::cout<<"opcion no disponible";
                }
                
                break;
                
            case 12:
                cout << "Ordenando por tiempo en workout..." << endl;
                cout<<"selecciona género: 1 hombre 2 mujer "<<endl;
                int genero;
                cin>>genero;
                if (genero==1){
                    int t1;
                    std::cout<<"selecciona el workout 1, 2 o 3"<<endl;
                    cin>>t1;
                    if (t1==1){
                    std::cout<<" "<<endl;
                    mergeSort(listaCompetidoresHombres, 0, listaCompetidoresHombres.size() - 1, TW1);
                    imprimeCompetidoresPtsW1(listaCompetidoresHombres);
                    }
                    else if(t1==2){
                    mergeSort(listaCompetidoresHombres, 0, listaCompetidoresHombres.size() - 1, TW2);
                    imprimeCompetidoresPtsW2(listaCompetidoresHombres);
                    }
                    else if(t1==3){
                    mergeSort(listaCompetidoresHombres, 0, listaCompetidoresHombres.size() - 1, TW3);
                    imprimeCompetidoresPtsW3(listaCompetidoresHombres);
                    }
                    else{
                    std::cout<<"opcion no disponible";
                    }
                }

                else if(genero==2){
                    int t1;
                    cin>>t1;
                    std::cout<<"selecciona el workout 1, 2 o 3"<<endl;
                    if (t1==1){
                    std::cout<<" "<<endl;
                    mergeSort(listaCompetidoresMujeres, 0, listaCompetidoresMujeres.size() - 1, TW1);
                    imprimeCompetidoresPtsW1(listaCompetidoresMujeres);
                    }
                    else if(t1==2){
                    mergeSort(listaCompetidoresMujeres, 0, listaCompetidoresMujeres.size() - 1, TW2);
                    imprimeCompetidoresPtsW2(listaCompetidoresMujeres);
                    }
                    else if(t1==3){
                    mergeSort(listaCompetidoresMujeres, 0, listaCompetidoresMujeres.size() - 1, TW3);
                    imprimeCompetidoresPtsW3(listaCompetidoresMujeres);
                    }
                    else{
                    std::cout<<"opcion no disponible";
                    }
                }
                break;

            
            case 13: 
                vector<Usuario> usuarios;
                int opcionEntrenamiento;
                do {
                    cout << "\n---- Sistema de Entrenamiento ----" << endl;
                    cout << "1. Registrar nuevo usuario" << endl;
                    cout << "2. Iniciar sesion" << endl;
                    cout << "3. Volver al menu principal" << endl;
                    cout << "Seleccione una opción: ";
                    cin >> opcionEntrenamiento;
                    
                    switch(opcionEntrenamiento) {
                        case 1: {
                            Usuario nuevoUsuario;
                            nuevoUsuario.setNombre();
                            nuevoUsuario.setApellido();
                            nuevoUsuario.setContrasena();
                            usuarios.push_back(nuevoUsuario);
                            nuevoUsuario.guardarEnArchivo();
                            cout << "Usuario registrado exitosamente!" << endl;
                            break;
                        }
                        case 2: {
                            //string nombre, apellido, password;
                            string password;
                            
                            // cout << "Ingrese nombre: ";
                            // cin >> nombre;
                            // cout << "Ingrese apellido: ";
                            // cin >> apellido;
                            Usuario tempUser;
                            tempUser.setNombre();
                            tempUser.setApellido();
                            
                            cout << "Ingrese contraseña: ";
                            cin >> password;
                            
                            if (tempUser.cargarDeArchivo() && tempUser.checkContrasena(password)) {
                                int opcionUsuario;
                                do {
                                    cout << "\n---- Menu de Entrenamiento ----" << endl;
                                    cout << "1. Registrar entrenamiento" << endl;
                                    cout << "2. Consultar ultimo entrenamiento" << endl;
                                    cout << "3. Mostrar entrenamientos anteriores" << endl;
                                    cout << "4. Volver al menu de login" << endl;
                                    cout << "Seleccione una opción: ";
                                    cin >> opcionUsuario;
                                    
                                    switch(opcionUsuario) {
                                        case 1:
                                            tempUser.registrarEntrenamiento();
                                            break;
                                        case 2:
                                            tempUser.consultarUltimoEntrenamiento();
                                            break;
                                        case 3:
                                            tempUser.mostrarEntrenamientosAnteriores();
                                            break;
                                        case 4:
                                            cout << "Volviendo al menu de login..." << endl;
                                            break;
                                        default:
                                            cout << "Opcion invalida" << endl;
                                    }
                                } while (opcionUsuario != 4);
                            } else {
                                cout << "Usuario o contraseña incorrectos" << endl;
                            }
                            break;
                        }
                        case 3:
                            cout << "Volviendo al menú principal..." << endl;
                            break;
                        default:
                            cout << "Opción inválida" << endl;
                    }
                } while (opcionEntrenamiento != 3);
                break;
            

        }
        
        std::cout << endl;  
    } 
    while (opcion != 0);
    return 0;
}

