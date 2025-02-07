#include <vector>
#include <string>

class PlanDeConvalidacion {
private:
    std::vector<std::string> asignaturas_convalidadas_;

public:
    PlanDeConvalidacion( std::vector<std::string> asignaturas)
        : asignaturas_convalidadas_(asignaturas) {}

    std::vector<std::string> getAsignaturasConvalidadas() { return asignaturas_convalidadas_; }

    void setAsignaturasConvalidadas(std::vector<std::string> asignaturas) { asignaturas_convalidadas_ = asignaturas; }

    void mostrarAsignaturas() {
        std::cout << "Asignaturas convalidadas: ";
        for (const auto& asignatura : asignaturas_convalidadas_) {
            std::cout << asignatura << ", ";
        }
        std::cout << std::endl;
    }
};
