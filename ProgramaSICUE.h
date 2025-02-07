#include<string>

class ProgramaSICUE {
private:
    int id_;
    std::string universidad_origen_;
    std::string universidad_destino_;
    std::string fecha_inicio_;
    std::string fecha_fin_;
    std::string duracion_;

public:
    ProgramaSICUE(int id, std::string origen, std::string destino, std::string inicio, std::string fin, std::string duracion)
        : id_(id), universidad_origen_(origen), universidad_destino_(destino), fecha_inicio_(inicio), fecha_fin_(fin), duracion_(duracion) {}

    int getId() { return id_; }
    std::string getUniversidadOrigen() { return universidad_origen_; }
    std::string getUniversidadDestino() { return universidad_destino_; }
    std::string getFechaInicio() { return fecha_inicio_; }
    std::string getFechaFin() { return fecha_fin_; }
    std::string getDuracion() { return duracion_; }

    void setId(int id) { id_ = id; }
    void setUniversidadOrigen(std::string origen) { universidad_origen_ = origen; }
    void setUniversidadDestino(std::string destino) { universidad_destino_ = destino; }
    void setFechaInicio(std::string inicio) { fecha_inicio_ = inicio; }
    void setFechaFin(std::string fin) { fecha_fin_ = fin; }
    void setDuracion(std::string duracion) { duracion_ = duracion;}

    std::string mostrarinfo_a(){

        return "Id: "+ std::to_string(id_) + "\n" + 
        "Universidad Origen: " + universidad_origen_ +"\n" +
        "Universidad Destino: " + universidad_destino_ +"\n" +
        "Fecha Inicio: " + fecha_inicio_ +"\n" +
        "Fecha Final: " + fecha_fin_ +"\n" +
        "Duracion: " + duracion_ +"\n";

    }
    std::string mostrarinfo_p(){

        return "Id: "+ std::to_string(id_) + "\n" + 
        "Universidad Origen: " + universidad_origen_ +"\n" +
        "Universidad Destino: " + universidad_destino_ +"\n" +
        "Fecha Inicio: " + fecha_inicio_ +"\n" +
        "Fecha Final: " + fecha_fin_ +"\n" +
        "Duracion: Anual"  +"\n";
    }
};