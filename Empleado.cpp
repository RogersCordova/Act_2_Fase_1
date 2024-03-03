#include "Persona.cpp"
#include <iostream>
using namespace std;

 class Empleado : Persona {
 	
 	private : string puesto;
	 int codigo;
 	
 	
 	public :
 		Empleado(){
		 }
		 
	Empleado(string nom,string ape,string dir,int tel,string fn,string pues,int cod)
	
			: Persona(nom,ape,dir,tel,fn){
		puesto = pues;
		codigo = cod;
	}

 	
 	
 	
 };

