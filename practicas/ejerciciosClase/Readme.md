# Algoritmica
<p align="center">Segundo Parcial</p>
<div>
<div style = 'text-align:center'>
<img src="https://codigoonclick.com/wp-content/uploads/2023/08/estructuras-de-datos.jpg" alt="JuveYell" width="500px">
</div>
En este segundo parcial pudimos apreciar un tema muy importante y fundamental para el almacenamiento y administracion correcta y eficaz de las estructuras de datos. Es por esto que vimos cuáles son los distintos tipos de estructuras de datos y pudimos aprecias sus respectivos metodos (acciones) para poder hacer interaccion con la misma. 


# **Índice**   
1. [Estrutura de datos](#id1)
   
   1.1 [Arreglo](#id2)
   
   1.2 [Cola](#id3)
   
   1.3 [Pila](#id4)
   
   1.4 [Lista](#id5)
   
   1.5 [Grafo](#id6)
   
2. [Algoritmos](#id7)
 
   2.1 [DFS](#id8)
   
   2.1 [BFS](#id9)
   


# Estrutura de datos
Una estructura de datos es una forma organizada y eficiente de almacenar, gestionar y acceder a datos en un programa informático. Define cómo se organizan y relacionan los datos entre sí, así como las operaciones que se pueden realizar sobre ellos.

Las estructuras de datos pueden ser simples, como arreglos y listas, o más complejas, como árboles y grafos. Cada tipo de estructura de datos tiene sus propias características y se adapta mejor a ciertos tipos de problemas.

## Arreglo<a name="id2"></a>
Un arreglo es una colección ordenada de elementos del mismo tipo. Estos elementos están almacenados en posiciones consecutivas de memoria, lo que permite acceder a ellos de manera eficiente. Los arreglos son fundamentales en la programación y se utilizan para una variedad de propósitos, como almacenar listas de datos, implementar matrices y realizar operaciones de búsqueda y ordenación. Sin embargo, tienen limitaciones, como un tamaño fijo en algunos casos o la necesidad de reorganización en caso de inserciones o eliminaciones de elementos en arreglos de tamaño fijo.

### Caracteristicas
- Mismo tipo de elemento para todo el arreglo
- Los elementos estan ordenados
- Dependiendo la circunstancia, puede tener un tamaño fijo o dinamico
- Acceso eficiente

## Cola<a name="id3"></a>
Una cola es una estructura de datos lineal que sigue el principio FIFO (First In, First Out), lo que significa que el primer elemento que se inserta en la cola es el primero en ser eliminado. Es similar a una fila de personas esperando su turno en un supermercado o en un banco: la primera persona que llega es la primera en ser atendida, mientras que el resto tiene que esperar a que la persona anterior sea atendida.

### Caracteristicas
- Sus datos se almacenan de forma lineal
- Solo se puede conocer al elemento del frente
- No tiene un tamaño definido, por lo que se pueden añadir elementos las veces requeridas
- Se pueden implementar utilizando arreglos o listas enlazadas
- Mismo tipo de elemento

## Pila<a name="id4"></a>
Una pila es una estructura de datos lineal que sigue el principio de "Last In, First Out" (LIFO), lo que significa que el último elemento en ser agregado es el primero en ser eliminado. Es como una pila de platos en la que solo puedes agregar o quitar platos de la parte superior (si eres una persona coherente y no quieres hacer esfuerzo por demas).

### Caracteristicas
- Al igual que la cola, solo se puede conocer al elemento del frente
- Es una estructura lineal, donde los elementos son almacenados uno tras otro
- Se pueden implementar utilizando arreglos o listas enlazadas
- Mismo tipo de elemento

## Lista<a name="id5"></a>
La lista es una colección ordenada de elementos. Estos elementos pueden ser de cualquier tipo de datos y se almacenan secuencialmente uno después del otro. Además, una lista es versátil y flexible que permite almacenar y manipular colecciones de elementos de manera ordenada, a diferencia de las anteriores mencionadas. 

### Caracteristicas
- Las listas pueden crecer o reducir dinámicamente en tamaño
- Se pueden hacer más operaciones, a diferencia de las colas y pilas
- Se puede agregar, eliminar, acceder, buscar elementos
- Se pueden implementar de diversas formas: arreglos, listas enlazadas, listas doblemente enlazadas, listas circulares, entre otras  

## Grafo<a name="id6"></a>
Un grafo es una estructura de datos que consiste en un conjunto de vértices (nodos) y un conjunto de aristas (conexiones) que conectan esos vértices. Los grafos se utilizan para representar relaciones entre objetos en forma de redes o arboles. Un grafo puede contar con un peso (costo entre los vertices que se conectan), con ciclos (grafos ciclicos), tambien puede ser dirigido y no dirigido.

### Caracteristicas
- Es de las ultimas estructuras implementadas en el mundo de la informatica
- Tiene un nodo padre y los nodos que se conectan a este son nodos hijos; los nodos que están a los extremos (los ultimos) son llamadas hojas (haciendo alusion a un arbol, debido a su parecido estructural)
- Cuando cierta cantidad 'n' de nodos estan todos conectados entre sí, se le llama un clique de tamaño 'n'

## Algoritmos<a name="id7"></a>
Los algoritmos son conjuntos finitos y ordenados de operaciones o pasos definidos que resuelven un problema o realizan una tarea específica. En términos más simples, un algoritmo es una secuencia de instrucciones paso a paso que describe cómo realizar una tarea particular.

Los algoritmos son fundamentales en el campo de la informática y las matemáticas, y tienen una amplia gama de aplicaciones en diversos campos, incluyendo:
- Resolucion de problemas
- Automatizacion de tareas
- Optimización de tiempo, recursos, etc

En esta ocacion habalremos de dos algoritmos: DFS y BFs. Estos algoritmos son bastante populares y usados en el basto campo de la informatica. 

<div style="background-color: white; display: inline-block; padding: 10px;">
    <img src="https://www.boardinfinity.com/blog/content/images/2022/10/BFS-DFS.png" alt="Texto alternativo">
</div>

## DFS<a name="id8"></a>
DFS, o Depth-First Search (Búsqueda en Profundidad), es un algoritmo utilizado para recorrer o buscar en un grafo o árbol. El nombre "en profundidad" indica que el algoritmo explora tanto como sea posible a lo largo de cada rama antes de retroceder y avanzar en la siguiente rama.

El funcionamiento básico del algoritmo DFS es el siguiente:

1. Comienza en un vértice de inicio dado.
2. Añade los vertices conectados al vertice padre en una pila y se va eliminando de acuerdo a su aparicion
3. Explora tanto como sea posible a lo largo de una rama, avanzando hacia adelante hasta que no hay más vértices vecinos por explorar.
4. Una vez que no hay más vértices por explorar en la rama actual, retrocede al último vértice visitado que tenga vértices vecinos por explorar y continúa explorando a lo largo de otra rama no visitada.
5. Repite este proceso hasta que se hayan visitado todos los vértices alcanzables desde el vértice de inicio.

Tiene una gran cantidad de usos, los más destacables son:
- Recorrido de grafos
- Búsqueda de caminos
- Ordenamiento topológico
- Detección de ciclos (en un grafo)

## BFS<a name="id9"></a>
BFS, o Breadth-First Search (Búsqueda en Anchura), es otro algoritmo de búsqueda utilizado para recorrer o buscar en un grafo o árbol. A diferencia de DFS, que explora tanto como sea posible a lo largo de una rama antes de retroceder, BFS explora todos los vecinos de un vértice antes de avanzar al siguiente nivel de vecinos.

El algoritmo BFS tiene un funcionamiento muy parecido al del DFS:

1. Comienza en un vértice de inicio dado.
2. Añade los vertices conectados al vertice padre en una cola y se va eliminando de acuerdo a su aparicion
3. Explora tanto como sea posible a lo largo de una rama, avanzando hacia adelante hasta que no hay más vértices vecinos por explorar.
4. Una vez que no hay más vértices por explorar en la rama actual, retrocede al último vértice visitado que tenga vértices vecinos por explorar y continúa explorando a lo largo de otra rama no visitada.
5. Repite este proceso hasta que se hayan visitado todos los vértices alcanzables desde el vértice de inicio.
6. Comparando resultados con el DFS, podemos ver que el BFS siempre dará la ruta más corta de un nodo a otro

Algunos de sus usos son:
- Recorrido de vertices en un grafo
- Búsqueda de caminos más cortos, ordenandolos por nivel 
- Detteción de componentes conectados en un grafo no dirigido
- Generación de arboles de cobertura minima en un grafo no ponderado (Minimum Spanning Tree)


