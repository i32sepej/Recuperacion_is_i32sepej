#include <string>

class Inscripcion {
private:
    int id_;
    std::string usuario_;
    bool anulada_;

public:
    Inscripcion(int id, std::string usuario= "empty")
        : id_(id), usuario_(usuario), anulada_(false) {}

    int getId() { return id_; }
    std::string getUsuario() { return usuario_; }
    bool isAnulada() { return anulada_; }
    void setUsuario(std::string usuario){usuario_=usuario;}
    
    void anular() { anulada_ = true; }

};

