#include <string>

class Universidad {
private:
    std::string nombre_;
    std::string ciudad_;
    std::string pais_;
    std::string email_;
    std::string telefono_;
    std::string web_;
public:
    Universidad(std::string nombre, std::string ciudad, std::string pais, std::string email, std::string telefono,std::string web)
        : nombre_(nombre), ciudad_(ciudad), pais_(pais),email_(email),telefono_(telefono),web_(web) {}

    std::string getNombre() { return nombre_; }
    std::string getCiudad() { return ciudad_; }
    std::string getPais() { return pais_; }
    std::string getEmail(){return email_;}
    std::string getTelefono(){return telefono_;}
    std::string getWeb(){return web_;}

    void setNombre(std::string nombre) { nombre_ = nombre;}
    void setCiudad(std::string ciudad) { ciudad_ = ciudad;}
    void setPais(std::string pais) { pais_ = pais;}
    void setEmail(std::string email){email_=email;}
    void setTelefono(std::string telefono){telefono_=telefono;}
    void setWeb(std::string web){web_=web;}

    std::string info_uni(){

        return "Nombre: "+ nombre_ + "\n" + 
        "Ciudad: " + ciudad_ +"\n" +
        "Pais: " + pais_ +"\n" +
        "Email: " + email_ +"\n" +
        "Telefono: " + telefono_ +"\n"+
        "Pagina web: " + web_ +"\n";
    }
};

