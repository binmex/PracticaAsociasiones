//
// Created by Binmex on 11/11/2021.
//

#include <sstream>
#include "Estudiante.h"

Estudiante::Estudiante(const std::string &name, double id, Genero genero) : name(name), id(id), genero(genero) {}

Estudiante::~Estudiante() {

}

const std::string &Estudiante::getName() const {
    return name;
}

void Estudiante::setName(const std::string &name) {
    Estudiante::name = name;
}

double Estudiante::getId() const {
    return id;
}

void Estudiante::setId(double id) {
    Estudiante::id = id;
}

const std::vector<Matricula *> &Estudiante::getMatricula() const {
    return matricula;
}

void Estudiante::setMatricula(const std::vector<Matricula *> &matricula) {
    Estudiante::matricula = matricula;
}

Genero Estudiante::getGenero() const {
    return genero;
}

void Estudiante::setGenero(Genero genero) {
    Estudiante::genero = genero;
}


std::string Estudiante::toString() {
    std::string genero = Estudiante::genero == Genero::MASCULINO ? "Masculino" : "Femenino";
    return "Nombre= "+name+" Id= "+ parseNum(id)+" Genero= "+genero+"\n";
}

//no se me olvide importar #include <sstream>
std::string Estudiante::parseNum(double valor) {
    std::ostringstream aux;
    aux << valor;
    return aux.str();
}


