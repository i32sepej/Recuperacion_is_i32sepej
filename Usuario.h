#include <string>

class Usuario {
private:
    std::string nombre_;
    std::string apellidos_;
    std::string usuario_;
    std::string contrasena_;

public:

    Usuario(std::string nombre, std::string apellidos, std::string usuario,  std::string contrasena= "empty")
        : nombre_(nombre), apellidos_(apellidos), usuario_(usuario), contrasena_(contrasena) {}

    std::string getNombre(){ return nombre_; }
    std::string getApellidos()  {return apellidos_; }
    std::string getUsuario() { return usuario_; }
    std::string getContrasena(){return contrasena_;}
    std::string getAllData(){
        
        return "Nombre: "+ nombre_ +
        " || Apellidos: "+ apellidos_ +
        " || Usuario: "+ nombre_ + " || ";
    
    }

    void setNombre(std::string nombre_n){ nombre_ = nombre_n; }
    void setApellidos(std::string apellidos_n){ apellidos_=apellidos_n; }
    
    void setUsuario(std::string usuario_n){ usuario_=usuario_n;}
    void setContrasena(std::string contraseña_n){contrasena_=contraseña_n;}


};

