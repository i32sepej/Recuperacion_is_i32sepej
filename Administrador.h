#ifndef ADMINISTRADOR_H
#define ADMINISTRADOR_H

class Usuario;

class Administrador : public Usuario {

    private:

    std::string telefono_;

    public:
    // Constructor
    Administrador(std::string nombre,  std::string apellidos, 
                   std::string usuario,  std::string contrasena, std::string telefono)
        : Usuario(nombre, apellidos, usuario, contrasena) {

            telefono_=telefono;
        }

    void setTelefono(std::string telefono_n){telefono_=telefono_n;}
    std::string getTelefono(){return telefono_;}
};

#endif // ADMINISTRADOR_H
