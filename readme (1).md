### Alejandra Montelongo A01612296
## Avance 3

# Proyecto: Cross Training
Mi proyecto se basa en la información obtenida de la página de Crossfit Games, la cual incluye datos generales de los participantes como su nombre, país, edad, altura, peso, y categorías en las que compiten, así como su desempeño en los diferentes workouts (eventos). Además de estos datos, también se incluyen las posiciones obtenidas por los atletas en cada evento, sus tiempos registrados, la cantidad de puntos. El programa permite a los usuarios acceder a esta información a través de diferentes filtros, ofreciendo la posibilidad de organizar y clasificar los resultados de acuerdo con diversos criterios, como el rendimiento general, el tiempo empleado, las posiciones en cada workout.

El sistema incluye una sección para crear un nombre de usuario y una contraseña personalizados, lo que permite a cada usuario registrar y almacenar los detalles y el tiempo de sus entrenamientos. El programa reconocerá el nombre de usuario y la contraseña cada vez que inicies sesión, guardando los datos de cada sesión de entrenamiento en un archivo dedicado. De esta forma, cada usuario tiene su propio archivo personal donde se registran sus avances y actividades.

## Descripción del avance 1
En el primer avance, creé la clase competidor, encargada de leer y organizar los datos desde el archivo 'competidores1'. Implementé el algoritmo de ordenamiento Merge Sort para procesar esta información, permitiendo ordenar y filtrar fácilmente a los competidores por distintos criterios, como edad, altura, peso, puntos y tiempos. Facilita la gestión y el análisis de los datos de cada participante, optimizando la visualización de la información relevante para cada usuario.

## Descripción del avance 2
En el segundo avance, desarrollé las clases Entrenamiento y Usuario, e implementé una pila que permite a cada usuario registrar y almacenar sus entrenamientos de manera organizada. Con esta estructura, el usuario puede consultar fácilmente su último entrenamiento o revisar sus sesiones previas, facilitando un seguimiento detallado y accesible de su progreso en el tiempo.

### Cambios sobre el primer avance
1. Parametrización de función Merge: El objetivo es evitar código duplicado al hacer que la función sea más flexible y reutilizable. De forma que adapte la función, permitiendo ordenar o filtrar los datos de acuerdo con distintos criterios sin necesidad de duplicar el código. Con esta parametrización, el código se vuelve más eficiente y fácil de mantener.
2. Cambio de nombre de clase: Anteriormente la clase se llamaba competidores pero como buena práctica de programación, ahora, cada instancia representa a un solo participante, lo que hace más intuitivo entender que la clase se centra en un competidor individual. Usar el singular también permite que las colecciones de estos objetos se nombren de manera clara como competidores, manteniendo consistencia y evitando confusiones.

## Descripción del avance 3
Se implementó una funcionalidad que permite reconocer al usuario y crear un archivo específico para cada uno. En este archivo, se registran los entrenamientos de forma detallada, incluyendo el tiempo y otros detalles relevantes. Esta mejora permite un seguimiento personalizado y preciso de cada usuario, facilitando el análisis individual de sus entrenamientos.

### Cambios sobre el segundo avance
1. El programa identifica a cada usuario y crea un archivo único en el que se registran sus entrenamientos. Cada usuario tiene un archivo con su nombre y apellido, donde se guarda el historial de entrenamientos mediante una estructura de pila. Al agregar un nuevo entrenamiento, este se guarda tanto en la pila como en el archivo correspondiente, asegurando que los datos se conserven entre sesiones. Al iniciar, el programa carga los datos previos desde el archivo, permitiendo al usuario revisar o añadir nuevos entrenamientos mientras mantiene un registro detallado y personalizado.


## Instrucciones para compilar el avance de proyecto
Ejecuta el siguiente comando en la terminal:

`g++ main.cpp -o entrega3` 

## Instrucciones para ejecutar el avance de proyecto
Ejecuta el siguiente comando en la terminal:

`./main` 

## Descripción de las entradas del avance de proyecto
Para el avance 3, la entrada sería ingresar la opcion 13 de Registrar o Consultar entrenamiento, el usuario se registra, después registra algún entrenamiento o varios. 

## Descripción de las salidas del avance de proyecto
Elegir la opción de mostrar último entrenamiento, se muestra tu último entrenamiento o mostrar entrenamientos anteriores, se muestran todos los registrados anteriormente y se crea un archivo con el nombre del usuario donde se muestran cada uno de los entrenamientos, nombre apellido y contraseña.

## Desarrollo de competencias

### SICT0301: Evalúa los componentes
#### Hace un análisis de complejidad correcto y completo para los algoritmos de ordenamiento usados en el programa.
Según mi comprensión, he explicado correctamente el análisis de la complejidad de los algoritmos de ordenamiento utilizados en el código, centrándome en su rendimiento y tiempo de ejecución. Aunque el código puede resultar un poco extenso debido a las distintas funcionalidades que incluye, como la división y combinación de los datos en el caso del MergeSort, considero que he cubierto adecuadamente los aspectos clave de la complejidad, como el O(nlogn) del MergeSort, lo que garantiza un análisis preciso. A pesar de la longitud del código, he tratado de mantener una estructura clara que respalde este análisis de manera coherente. Lo que si reconozco es que mi código puede ser más eficiente ya que es extenso y las funciones son muy parecidas, por lo que si es un área de oportunidad a mejorar.

#### Hace un análisis de complejidad correcto y completo de todas las estructuras de datos y cada uno de sus usos en el programa.
Según mi comprensión, he realizado un análisis completo y preciso de la complejidad de la pila utilizada en el programa. He evaluado específicamente los casos de inserción, eliminación y consulta en esta estructura. En el caso de la pila, la operación de inserción (push) y eliminación (pop) tienen una complejidad de 
𝑂(1),lo que significa que son operaciones constantes y no dependen del tamaño de la pila. Esto resulta ventajoso, ya que el programa puede registrar o consultar el último entrenamiento de manera rápida y eficiente.

Esta elección es ideal para gestionar los entrenamientos de los usuarios, dado que, al tratarse de un registro secuencial de eventos, solo necesito acceder al último elemento añadido, que corresponde al entrenamiento más reciente. La pila, al seguir el principio LIFO (Last In, First Out), me permite manejar los datos en el orden requerido para el proyecto, garantizando un rendimiento óptimo en términos de tiempo y simplicidad para los objetivos del programa.

#### Hace un análisis de complejidad correcto y completo para todos los demás componentes del programa y determina la complejidad final del programa.
Considero que he desarrollado esta competencia, ya que he abordado un análisis detallado de la complejidad en todos los componentes del programa, más allá de las estructuras de datos. He examinado la eficiencia de las funciones, el algoritmo de ordenamiento y la estructura de datos, determinando su impacto en la complejidad final del programa. 

### SICT0302: Toma decisiones
#### Selecciona un algoritmo de ordenamiento adecuado al problema y lo usa correctamente.
Decidí utilizar el algoritmo MergeSort para este proyecto debido a su eficiencia entre los algoritmos que revisamos en clase. A diferencia de otros algoritmos como el bubble sort o insertion sort, MergeSort tiene un tiempo de ejecución garantizado de O(n log n) lo que lo hace más adecuado para manejar grandes conjuntos de datos, como es el caso de los competidores en mi proyecto. MergeSort divide los datos en partes más pequeñas, ordena esas partes de manera recursiva y luego las combina eficientemente, lo que asegura un rendimiento consistente incluso cuando el número de competidores es elevado. Este enfoque me brinda la confianza de que el programa funcionará de manera óptima sin importar el tamaño del conjunto de datos, lo cual es clave para el manejo de información de múltiples categorías como el rendimiento general y los tiempos en los distintos eventos. 


#### Selecciona una estructura de datos adecuada al problema y la usa correctamente.

He elegido utilizar una pila en mi proyecto debido a las ventajas que ofrece su estructura de datos, basada en el principio LIFO (Last In, First Out). Esto significa que el último entrenamiento que se registra es el primero en estar disponible para su consulta. Esta característica es ideal para mi proyecto, ya que me permite acceder de forma inmediata al entrenamiento más reciente sin tener que recorrer toda la estructura. Al hacer uso de una pila, puedo optimizar el tiempo de consulta, manteniendo la información prioritaria fácilmente accesible.

Además, la pila resulta conveniente para gestionar de manera ordenada los registros de entrenamientos, que normalmente no necesitan consultarse en su totalidad de inmediato. Al mantener el historial de manera secuencial y directa, puedo enfocarme en los registros más recientes, facilitando la revisión rápida de los últimos entrenamientos y permitiendo un acceso más ágil a la información que considero más relevante para los usuarios.

### SICT0303: Implementa acciones científicas
#### Implementa mecanismos para consultar información de las estructras correctos.
En mi proyecto, he implementado mecanismos efectivos para consultar la información almacenada en las estructuras de datos, especialmente en la pila de entrenamientos. He diseñado funciones que permiten al usuario acceder al último entrenamiento registrado de manera rápida y sencilla, utilizando el principio LIFO de la pila. Esto permite consultar de inmediato el entrenamiento más reciente, que es el dato más relevante para la mayoría de las consultas en este contexto.

Además, he desarrollado métodos para mostrar todos los entrenamientos previos de forma ordenada, lo cual garantiza una visión completa del historial de actividad del usuario. Estas funcionalidades son claras y eficientes y demuestran mi comprensión de cómo utilizar la pila para facilitar el acceso a la información requerida en el proyecto.

#### Implementa mecanismos de lectura de archivos para cargar datos a las estructuras de manera correcta.
He implementado mecanismos eficientes de lectura de archivos que permiten cargar correctamente los datos. Desde la entrega 1 empleo un ciclo que recorre el archivo de texto línea por línea, extrayendo y leyendo cada atributo como nombre, apellido, país, edad, altura, peso, tiempo, posiciones, puntos,etc. Esta información es clasificada y almacenada en vectores separados por género, lo que facilita la organización de los datos. Esto permite cargar los datos de forma ordenada y que la información este lista para ser manipulada para el ordenamiento.

### Implementa mecanismos de escritura de archivos para guardar los datos  de las estructuras de manera correcta
He implementado un mecanismo de escritura en archivos que permite guardar de forma precisa y organizada los datos de la estructura de pila que almacena los entrenamientos. Cada usuario tiene su propio archivo en el que se registran todos sus entrenamientos en el orden en que fueron añadidos, lo que asegura que la información sea persistente y esté disponible en futuras sesiones.

Para cada entrenamiento, he implementado un formato específico en el archivo que facilita tanto la escritura como la posterior recuperación de los datos. Esta estructura de almacenamiento garantiza que los datos se mantengan consistentes y organizados, permitiendo al programa cargar el historial completo de entrenamientos al iniciar una sesión nueva. La implementación demuestra que domino los mecanismos de lectura y escritura de archivos necesarios para guardar los datos de forma efectiva, manteniendo la integridad y accesibilidad de la información.