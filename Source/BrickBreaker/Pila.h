// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */
template<class T>
class BRICKBREAKER_API Pila
{
private:

	T* Datos;
	//vector<T> datos;
	int Cima;
	const int numeroElementos;
public:
	Pila(int _numeroElementos);
	~Pila();
	void Insertar(T c);
	T Sacar();
	bool Vacia();
	bool Llena();

};
