#ifndef PROFESOR_H
#define PROFESOR_H

class Usuario;
#include <string>

class Profesor : public Usuario {
private:
    std::string titulacion_;
    int curso_;

public:
   
    Profesor(const std::string& nombre, const std::string& apellidos, const std::string& usuario, 
             const std::string& contrasena, const std::string& titulacion, int curso)
        : Usuario(nombre, apellidos, usuario, contrasena), titulacion_(titulacion), curso_(curso) {}


    std::string getTitulacion() const { return titulacion_; }
    int getCurso() const { return curso_; }

    void setTitulacion(std::string titulacion_n){ titulacion_ = titulacion_n; }
    void setCurso(int curso_n){ curso_=curso_n; }
    
};

#endif 
