#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Ejercicio 1: Encuentra el Elemento Mayor
Descripción: Escribe una función que tome un arreglo de enteros
y su tamaño, y devuelva el valor más grande del arreglo.
*/
int findMax(int arr[], int size) {
  int MAYOR = arr[0]; // Inicializar con el primer elemento del arreglo
  for (int i = 1; i < size; i++) {
    if (arr[i] > MAYOR) {
      MAYOR = arr[i];
    }
  }
  return MAYOR;
}

/*
Ejercicio 2: Invertir un Arreglo
Descripción: Escribe una función que tome un arreglo y su tamaño, y luego
invierta el orden de sus elementos.
*/
void reverseArray(int arr[], int size) {
  int sizeCopy;
  int vector[size];
  sizeCopy = size-1;

  for (int i = 0; i < size; i++){
    vector[sizeCopy] = arr[i];
    sizeCopy -= 1;
  }
  for (int i = 0; i < size; i++){
    arr[i] = vector[i];
  }

}

/*
Ejercicio 3: Filtrar Números Pares
Descripción: Escribe una función que tome un arreglo de enteros
y su tamaño, y luego devuelva un nuevo arreglo que contenga solo
los números pares del arreglo original.
*/
int *filterEvenNumbers(int arr[], int size, int *newSize) {
  int contador = 0;
  int *newArr;
  newArr = (int*) malloc(size * sizeof(int));
  for (int i = 0; i < size; i++) {
    if (arr[i] % 2 == 0) {
      contador++;
      newArr[contador-1] = arr[i];
    }
  }
  *newSize = contador;
  return newArr;
  
}

/*
Ejercicio 4: Fusión de dos Arreglos Ordenados
Descripción: Escribe una función que tome dos arreglos
ordenados y sus tamaños, y luego fusione estos dos
arreglos en un tercer arreglo también ordenado.
*/
void mergeSortedArrays(int arr1[], int size1, int arr2[], int size2, int result[]){
  int totalSize = size1+size2, contador = 0, auxiliar = 0;
  // meter los dos arreglos en el vector para luego ordenarlo
  for (int i = 0; i < totalSize; i++){
      result[i] = arr1[i];
  }
  
  for (int i = size1; i < totalSize; i++){
    result[i] = arr2[contador];
    contador ++;
  }

  // ordenamiento del arreglo resultante
  for (int i = 0; i < totalSize; i++){
    for (int j = 0; j < totalSize-1; j++){
      if (result[j] > result[j+1]){
        auxiliar =  result[j];
        result[j] = result[j+1];
        result[j+1] = auxiliar;
      }
    }
  }
}

/*
Ejercicio 5: Comprobación de Ordenación
Descripción: Escribe una función que tome un arreglo y su tamaño,
y luego devuelva 1 si el arreglo está ordenado en orden ascendente,
  0 si no está ordenado, y -1 si está ordenado en orden descendente.
*/
int checkSorted(int arr[], int size) {
  int ascendente = 0, descendente = 0; // tipos de orden
  for (int i = 0; i < size-1; i++){
    if (arr[i] > arr[i+1]){
      ascendente += 1;
    }
    else{
      descendente += 1;
    }
  }

  if(ascendente == size-2){
    return -1;
  }
  if(descendente == size-2){
    return 1;
  }
  
  return 0;
}

/*
Ejercicio 6: Información de una Biblioteca
Descripción: Vamos a representar la información de una biblioteca. En la
biblioteca, hay libros, y cada libro tiene un autor. Queremos organizar esta
información utilizando estructuras anidadas en C. Escribe la función para
inicializar la información de un libro.
*/

typedef struct {
  char nombre[50];
  int anioNacimiento;
} Autor;

typedef struct {
  char titulo[100];
  Autor autor;
  int anioPublicacion;
} Libro;

void inicializarLibro(Libro *libro, const char *titulo, const char *nombreAutor,
                      int anioNacimiento, int anioPublicacion) {
  /*
  strcpy(libro->titulo, titulo);
  strcpy(libro->autor.nombre, nombreAutor);
  libro->autor.anioNacimiento = anioNacimiento;
  libro->anioPublicacion = anioPublicacion;
  */
}

/*
Ejercicio 7: Lista enlazada de números
Descripción: Escribe una función que tome un arreglo de enteros y su tamaño, y
luego cree una lista enlazada usando la estructura Nodo. Cada nodo de la lista
debe contener un número del arreglo, y los nodos deben estar enlazados en el
mismo orden que los números aparecen en el arreglo. El último nodo de la lista
debe apuntar a NULL. La función debe devolver un puntero al primer nodo de la
lista enlazada.
Recuerda reservar memoria dinámica para cada nodo usando malloc.
  */

typedef struct nodo {
  int numero;
  struct nodo *siguiente; // puntero al siguiente nodo
} Nodo;

Nodo *crearListaEnlazada(int arr[], int size) {
  /*
  struct nodo *Cabeza = NULL;
  struct nodo *ahora = NULL;

  for (int i = 0; i < size; i++){
    struct nodo newNode = (struct nodo) malloc(sizeof(struct nodo));
    newNode.numero = arr[i];
    newNode.siguiente = NULL;
  }

  if (Cabeza == NULL){
    Cabeza = newNode;
    ahora = newNode;
  }
  else{
    ahora->siguiente = newNode;
    ahora = newNode;
  }
*/
  return NULL;//Cabeza;
}
