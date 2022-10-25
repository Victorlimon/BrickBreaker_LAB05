// Fill out your copyright notice in the Description page of Project Settings.


#include "Pila.h"

template<class T>
Pila<T>::Pila(int _numeroElementos)
{
	numeroElementos = _numeroElementos;
	Datos = new T[numeroElementos];
	Cima = -1;
}

template<class T>
Pila<T>::~Pila()
{
	delete[] Datos;
}

template<class T>
void Pila<T>::Insertar(T elementoInsertar)
{
	if (!Llena()) {
		Cima++;
		Datos[Cima] = elementoInsertar;

		cout << "Se insertado satisfactoriamente" << endl;
	}
	else {
		cout << "No se pudo ingresar el elemento en la pila" << endl;
	}
}

template<class T>
T Pila<T>::Sacar()
{
	if (!Vacia()) {
		T elementoSacar = Datos[Cima];
		Cima--;
		return elementoSacar;
	}
	else {
		cout << "No se pudo sacar el elemento de la pila" << endl;
	}
}

template<class T>
bool Pila<T>::Vacia()
{
	if (Cima < 0) {
		return true;
	}
	else
		return false;
}

template<class T>
bool Pila<T>::Llena()
{
	if (Cima < numeroElementos - 1) {
		return false;
	}
	else {
		return true;
	}
}
