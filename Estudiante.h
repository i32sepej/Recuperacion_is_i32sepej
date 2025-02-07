#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H
#include <string>

class Usuario;

class Estudiante : public Usuario {
private:
    std::string carrera_;
    int curso_;

public:
    Estudiante(std::string nombre, std::string apellidos, std::string usuario, 
               std::string contrasena,  std::string carrera, int curso)
        : Usuario(nombre, apellidos, usuario, contrasena), carrera_(carrera), curso_(curso) {}

    std::string getCarrera(){ return carrera_; }
    int getCurso(){ return curso_; }

    void setCarrera(std::string carrera_n){ carrera_ = carrera_n; }
    void setCurso(int curso_n){ curso_=curso_n; }

};

#endif