#include <iostream>
#include <vector>
#include <string>
#include "clases/Usuario/Usuario.h"
#include "clases/Estudiante/Estudiante.h"
#include "clases/Profesor/Profesor.h"
#include "clases/Administrador/Administrador.h"
#include "clases/ProgramaSICUE/ProgramaSICUE.h"
#include "clases/Inscripcion/Inscripcion.h"
#include "clases/Universidad/Universidad.h"
#include "clases/PlanDeConvalidacion/PlanDeConvalidacion.h"



void Menu_Principal() {
    system("cls");
    std::cout << "===== BIENVENIDO AL SISTEMA SICUE =====\n";
    std::cout << "1. Registrarse\n";
    std::cout << "2. Iniciar sesion\n";
    std::cout << "3. Salir\n";
    std::cout << "Seleccione una opcion: ";
}
void menu_alumno() {
   
    system("cls");
    std::cout << "===== MENU ESTUDIANTE =====\n";
    std::cout << "1. Ver Programa SICUE\n";
    std::cout << "2. Inscribirse Programa SICUE\n";
    std::cout << "3. Mis Inscriciones\n";
    std::cout << "4. Cerrar sesion\n";
    std::cout << "Seleccione una opcion: ";
    
    
}
void menu_profesor() {
   
    system("cls");
    std::cout << "===== MENU PROFESOR =====\n";
    std::cout << "1. Ver Programa SICUE\n";
    std::cout << "2. Inscribirse Programa SICUE\n";
    std::cout << "3. Mis Inscripciones\n";
    std::cout << "4. Cerrar sesion\n";
    std::cout << "Seleccione una opcion: ";
    
} 
void menu_admin() {
    system("cls");
    std::cout << "===== MENU ADMINISTRADOR =====\n";
    std::cout << "1. Mostrar datos Programa SICUE estudiantes\n";
    std::cout << "2. Mostrar datos Programa SICUE profesores\n";
    std::cout << "3. Cerrar sesion\n";
    std::cout << "Seleccione una opcion: ";
        
}
void menu_SICUE_a(){
    system("cls");
    std::cout << "===== MENU INSCRIPCION =====\n";
    std::cout << "1. Asignaturas convalidas\n";
    std::cout << "2. Informacion adicional de las universidades \n";
    std::cout << "3. Incribirse a un programa SICUE \n";
    std::cout << "4. Salir \n";
    std::cout << "Seleccione una opcion: ";
}
void menu_SICUE_p(){
    system("cls");
    std::cout << "===== MENU INSCRIPCION =====\n";
    std::cout << "1. Informacion adicional de las universidades \n";
    std::cout << "2. Incribirse a un programa SICUE \n";
    std::cout << "3. Salir \n";
    std::cout << "Seleccione una opcion: ";
}
void menu_mis_ins(){
    system("cls");
    std::cout << "===== MENU MIS INSCRICIONES =====\n";
    std::cout << "1. Ver mis Inscripciones\n";
    std::cout <<"2. Anular inscripcion\n";
    std::cout << "3. Salir \n";
    std::cout << "Seleccione una opcion: ";

}

int main() {
    
    Profesor nuevoProfesor("empty_p","empty_p","empty_p","empty_p","empty_p",0);
    Estudiante nuevoEstudiante("empty_e","empty_e","empty_e","empty_e","empty_e",0);
    Administrador nuevoAdministrador("empty_a","empty_a","empty_a","empty_a","empty_a");

    //Planes Sicue
    ProgramaSICUE programa1(1, "Universidad de Córdoba", "Universidad de Granada", "01/02/2025", "30/06/2025", "Primer Cuatrimestre");
    ProgramaSICUE programa2(2, "Universidad de Córdoba", "Universidad Autónoma de Madrid", "01/09/2025", "31/01/2026", "Segundo Cuatrimestre");
    ProgramaSICUE programa3(3, "Universidad de Córdoba", "Universidad de Barcelona", "01/02/2025", "30/06/2025", "Primer Cuatrimestre");
    ProgramaSICUE programa4(4, "Universidad de Córdoba", "Universidad de Zaragoza", "01/09/2025", "30/06/2026", "Anual");
    ProgramaSICUE programa5(5, "Universidad de Córdoba", "Universidad de Oviedo", "01/09/2025", "31/01/2026", "Segundo Cuatrimestre");
   
    // Planes de convalidación para los programas SICUE de Informática
    PlanDeConvalidacion plan_sicue_inf_1({"Estructuras de Datos", "Bases de Datos", "Redes de Computadores"});
    PlanDeConvalidacion plan_sicue_inf_2({"Algoritmia", "Sistemas Operativos", "Computación en la Nube"});
    PlanDeConvalidacion plan_sicue_inf_3({"Inteligencia Artificial", "Seguridad Informática", "Ingeniería del Software"});
    PlanDeConvalidacion plan_sicue_inf_4({"Arquitectura de Computadores", "Criptografía", "Desarrollo de Videojuegos"});
    PlanDeConvalidacion plan_sicue_inf_5({"Programación Web", "Big Data", "Administración de Sistemas"});

    // Planes de convalidación para los programas SICUE de Magisterio
    PlanDeConvalidacion plan_sicue_mag_1({"Psicología Educativa", "Didáctica General", "Organización Escolar"});
    PlanDeConvalidacion plan_sicue_mag_2({"Educación Infantil", "Teoría del Aprendizaje", "Expresión Corporal"});
    PlanDeConvalidacion plan_sicue_mag_3({"Historia de la Educación", "Metodología de la Enseñanza", "Gestión Escolar"});
    PlanDeConvalidacion plan_sicue_mag_4({"Tecnología Educativa", "Evaluación Educativa", "Inclusión y Diversidad"});
    PlanDeConvalidacion plan_sicue_mag_5({"Prácticas Educativas", "Pedagogía Terapéutica", "Didáctica de la Matemática"});

    // Planes de convalidación para los programas SICUE de Medicina
    PlanDeConvalidacion plan_sicue_med_1({"Anatomía Humana", "Fisiología", "Farmacología"});
    PlanDeConvalidacion plan_sicue_med_2({"Patología General", "Bioquímica Clínica", "Microbiología"});
    PlanDeConvalidacion plan_sicue_med_3({"Cirugía General", "Neurología", "Radiología"});
    PlanDeConvalidacion plan_sicue_med_4({"Pediatría", "Cardiología", "Oncología"});
    PlanDeConvalidacion plan_sicue_med_5({"Medicina Interna", "Geriatría", "Psiquiatría"});

    //info Universidad

    Universidad Universidad_1("Universida de Granada","Granada","España","informacion@ugr.es","+34 958 24 30 00","ugr.es");
    Universidad Universidad_2("Universida Autonoma de Madrid","Madrid","España","informacion@uam.es","+34 914 97 50 00","uam.es");
    Universidad Universidad_3("Universida de Barcelona","Barcelona","España","sae@ub.edu","+34 934 02 11 00","ub.es");
    Universidad Universidad_4("Universida de Zaragoza","Zaragoza","España","acceso@unizar.es","+34 976 76 10 42","unizar.es");
    Universidad Universidad_5("Universida de Oviedo","Oviedo","España","secretariageneral@uniovi.es","+34 985 10 30 00","uniovi.es");
    
    //Inscripciones
    Inscripcion ins1(1);
    Inscripcion ins2(2); 
    Inscripcion ins3(3); 
    Inscripcion ins4(4); 
    Inscripcion ins5(5);
    Inscripcion ins1_p(1);
    Inscripcion ins2_p(2); 
    Inscripcion ins3_p(3); 
    Inscripcion ins4_p(4); 
    Inscripcion ins5_p(5);

    //Programa sicue(admin) estudiante
    Usuario ad_e1("Alejandro","Perez Caballero","i32alpeca");
    Usuario ad_e2("Cristina", "Ramirez Gonzalez","i32crrago");
    Usuario ad_e3("Carlos", "Garcia Lopez","i32cagarlop");
    Usuario ad_e4("Maria", "Lopez Sanchez","i32malopsa");
    Usuario ad_e5("David", "Martinez Ruiz","i32damaru");
    Usuario ad_e6("Laura", "Gonzalez Moreno","i32lagomo");
    Usuario ad_e7("Antonio", "Rodriguez Fernandez","i32anrofe");
    Usuario ad_e8("Jose", "Fernandez Torres","i32jofeto");
    Usuario ad_e9("Marta", "Diaz Jimenez","i32madiji");
    Usuario ad_e10("Raul", "Hernandez Gonzalez","i32rahego");
    Usuario ad_p1("Sofia", "Garcia Perez","i32sogape");
    Usuario ad_p2("Luis", "Sanchez Alvarez","i32lusaal");
    Usuario ad_p3("Juan", "Moreno Ramos","i32jumora");
    Usuario ad_p4("Pablo", "Ruiz Castro","i32paruca");
    Usuario ad_p5("Ana", "Jimenez Torres","i32ajito");
    Usuario ad_p6("Pedro", "Torres Vazquez","i32petova");
    Usuario ad_p7("Beatriz", "Vazquez Gomez","i32bevago");
    Usuario ad_p8("Alba", "Castro Perez","i32alcape");
    Usuario ad_p9("Elena", "Ramos Fernandez","i32elrafe");
    Usuario ad_p10("Javier", "Alvarez Ramirez","i32jaalra");
    
    std::vector<std::string>lista_ins_e,lista_ins_p,lista_ins_a_nombre;
    int opcion_principal,opcion_alumno,opcion_profesor,opcion_administrador,opcion_sicue,opcion_ad,opcion_mis_ins,ele, curso_a,curso_p,id,seguro;
    bool ele_b = true, res = false, loginExitoso = false, encontrado = false;
    std::string nombre, apellidos, usuario, contrasena,nombre_ad,id_a,telefono;
    do {
        Menu_Principal();
        std::cin >> opcion_principal;
        std::cin.ignore(); // Para evitar problemas con el buffer

        switch (opcion_principal) {
            case 1:
                system("cls");
                std::cout << "===== REGISTRO DEL USUARIO =====\n";

                do {
                    std::cout << "Elija su rol(numero):\n";
                    std::cout << "1. Alumno\n";
                    std::cout << "2. Profesor\n";
                    std::cout << "3. Administrador\n";
                    std::cin >> ele;

                    if (ele != 1 && ele != 2 && ele != 3){
                        std::cout <<"Entrada invalida\n";
                    } else {
                        ele_b = false;
                    }
                } while (ele_b);

                std::cin.ignore();  // Limpiar el buffer antes de leer strings

                    std::cout << "Ingrese su nombre: ";
                    std::cin >> nombre;  // Cambiado a cin
                    std::cout << "Ingrese sus apellidos: ";
                    std::cin >> apellidos;  // Cambiado a cin
                    std::cout << "Ingrese su nombre de usuario: ";
                    std::cin >> usuario;  // Cambiado a cin

                // Validar contrasena
                do {
                    std::cout << "Ingrese su contrasena (minimo 8 caracteres, 1 mayuscula y 1 numero): ";
                    std::cin >> contrasena;

                    bool tieneMayuscula = false, tieneNumero = false;
                    for (char c : contrasena) {
                        if (isupper(c)) tieneMayuscula = true;
                        if (isdigit(c)) tieneNumero = true;
                    }

                    if (contrasena.length() >= 8 && tieneMayuscula && tieneNumero) {
                        break;
                    } else {
                        std::cout << "La contrasena no cumple con los requisitos. Intente de nuevo.\n";
                        std::cout<<"Pulse ENTER para continuar...";
                        std::cin.ignore();
                        std::cin.get();
                    }
                } while (true);

                // **Registro según el tipo de usuario**
                if (ele == 1) { // **Alumno**
                    std::string carrera;
                    
                    do
                    {
                        std::cout << "Ingrese su carrera: \n";
                        std::cout << "1.Informatica \n";
                        std::cout << "2.Magisterio \n";
                        std::cout << "3.Medicina \n";
                        std::cin >> carrera;

                        if(carrera == "Informatica" ||carrera == "Medicina"||carrera == "Magisterio" ){res = true;}
                        else{std::cout<<"Intentelo de nuevo\n";}

                    } while (res == false);
                    
                    res = false;

                    do
                    {
                        std::cout << "Ingrese su curso actual (minimo 2 curso para registrarse): ";
                        std::cin>>curso_a; 

                        if(curso_a == 1){std::cout<<"Error.Intentelo de nuevo\n";}
                        else{res = true;}

                    } while (res == false);
                    
                    nuevoEstudiante.setNombre(nombre);
                    nuevoEstudiante.setApellidos(apellidos);
                    nuevoEstudiante.setUsuario(usuario);
                    nuevoEstudiante.setContrasena(contrasena);
                    nuevoEstudiante.setCarrera(carrera);
                    nuevoEstudiante.setCurso(curso_a);

                    std::cout << "Registro de estudiante completado.\n";
                    std::cout<<"Pulse ENTER para continuar...";
                    std::cin.ignore();
                    std::cin.get();

                } else if (ele == 2) { // **Profesor**
                    std::string Titulacion;
                   
                    res = false;
                    do
                    {
                        std::cout << "Ingrese su titulacion: \n";
                        std::cout << "1.Marketing \n";
                        std::cout << "2.Historia \n";
                        std::cout << "3.Enfermeria \n";
                        std::cin >> Titulacion;

                        if(Titulacion == "Marketing" ||Titulacion == "Historia"||Titulacion == "Enfermeria" ){res = true;}
                        else{std::cout<<"Intentelo de nuevo\n";}

                    } while (res == false);

                    std::cout << "Ingrese su curso: ";
                    std::cin >> curso_p;

                    nuevoProfesor.setNombre(nombre);
                    nuevoProfesor.setApellidos(apellidos);
                    nuevoProfesor.setUsuario(usuario);
                    nuevoProfesor.setContrasena(contrasena);
                    nuevoProfesor.setTitulacion(Titulacion);
                    nuevoProfesor.setCurso(curso_p);

                    std::cout << "Registro de profesor completado.\n";
                    std::cout<<"Pulse ENTER para continuar...";
                    std::cin.ignore();
                    std::cin.get();

                } else if (ele == 3) { // **Administrador**
                    std::cout << "Ingrese su número de teléfono\n";
                    std::cin>>telefono;
                    nuevoAdministrador.setTelefono(telefono);
                    nuevoAdministrador.setNombre(nombre);
                    nuevoAdministrador.setApellidos(apellidos);
                    nuevoAdministrador.setUsuario(usuario);
                    nuevoAdministrador.setContrasena(contrasena);
                    std::cout << "Registro de administrador completado.\n";
                    std::cout<<"Pulse ENTER para continuar...";
                    std::cin.ignore();
                    std::cin.get();
                }
            
                break;

            case 2:
                system("cls");
                std::cout << "===== INICIO DE SESION =====\n";
                
                // Solicitar usuario y contraseña
                std::cout << "Ingrese su nombre de usuario: ";
                std::cin >> usuario;
                std::cout << "Ingrese su contrasena: ";
                std::cin >> contrasena;

                // Verificar si los datos ingresados coinciden con algún usuario registrado
                // Para esto, haríamos comparaciones en funcion del tipo de usuario.
                // Asegúrate de almacenar los objetos de usuario de alguna forma (por ejemplo, en una lista o mapa)
                
                // Aquí solo se verifican los datos contra los objetos creados previamente
                if (nuevoEstudiante.getUsuario() == usuario && nuevoEstudiante.getContrasena() == contrasena) {
                    std::cout << "Bienvenido, " << nuevoEstudiante.getUsuario() << " Has iniciado sesion como Estudiante.\n";
                    std::cout<<"Pulse ENTER para continuar...";
                    std::cin.ignore();
                    std::cin.get();
                    loginExitoso = true;
                    do
                    {
                        menu_alumno();
                        std::cin>>opcion_alumno;
                        switch (opcion_alumno)
                        {
                        case 1:
                                std::cout << programa1.mostrarinfo_a();
                                std::cout << programa2.mostrarinfo_a();
                                std::cout << programa3.mostrarinfo_a();
                                std::cout << programa4.mostrarinfo_a();
                                std::cout << programa5.mostrarinfo_a();
                                std::cout<<"Pulse ENTER para continuar...";
                                std::cin.ignore();
                                std::cin.get();

                            break;
                        case 2:
                            do
                            {  
                                menu_SICUE_a();   
                                
                                std::cin>>opcion_sicue;
                                switch (opcion_sicue)
                                {
                                case 1:
                                    std::cout<<"Selecciona el Id: \n";
                                    std::cin>>id;
                                                                        
                                    if(id == 1){
                                        std::cout<<programa1.mostrarinfo_a()<<std::endl;
                                        if(nuevoEstudiante.getCarrera() == "Informatica"){plan_sicue_inf_1.mostrarAsignaturas();}
                                        if(nuevoEstudiante.getCarrera() == "Magisterio"){plan_sicue_mag_1.mostrarAsignaturas();}
                                        if(nuevoEstudiante.getCarrera() == "Medicina"){plan_sicue_med_1.mostrarAsignaturas();}
                                    }
                                    else if(id == 2){
                                        std::cout<<programa2.mostrarinfo_a()<<std::endl;
                                        if(nuevoEstudiante.getCarrera() == "Informatica"){plan_sicue_inf_2.mostrarAsignaturas();}
                                        if(nuevoEstudiante.getCarrera() == "Magisterio"){plan_sicue_mag_2.mostrarAsignaturas();}
                                        if(nuevoEstudiante.getCarrera() == "Medicina"){plan_sicue_med_2.mostrarAsignaturas();}
                                    }
                                    else if(id == 3){
                                        std::cout<<programa3.mostrarinfo_a()<<std::endl;
                                        if(nuevoEstudiante.getCarrera() == "Informatica"){plan_sicue_inf_3.mostrarAsignaturas();}
                                        if(nuevoEstudiante.getCarrera() == "Magisterio"){plan_sicue_mag_3.mostrarAsignaturas();}
                                        if(nuevoEstudiante.getCarrera() == "Medicina"){plan_sicue_med_3.mostrarAsignaturas();}
                                    }
                                    else if(id == 4){
                                        std::cout<<programa4.mostrarinfo_a()<<std::endl;
                                       if(nuevoEstudiante.getCarrera() == "Informatica"){plan_sicue_inf_4.mostrarAsignaturas();}
                                        if(nuevoEstudiante.getCarrera() == "Magisterio"){plan_sicue_mag_4.mostrarAsignaturas();}
                                        if(nuevoEstudiante.getCarrera() == "Medicina"){plan_sicue_med_4.mostrarAsignaturas();}
                                    }
                                    else if(id == 5){
                                        std::cout<<programa5.mostrarinfo_a()<<std::endl;
                                        if(nuevoEstudiante.getCarrera() == "Informatica"){plan_sicue_inf_5.mostrarAsignaturas();}
                                        if(nuevoEstudiante.getCarrera() == "Magisterio"){plan_sicue_mag_5.mostrarAsignaturas();}
                                        if(nuevoEstudiante.getCarrera() == "Medicina"){plan_sicue_med_5.mostrarAsignaturas();}
                                    }
                                    else{
                                    std::cout<<"Entrada invalida\n";
                                    std::cout<<"Pulse ENTER para continuar...";
                                    std::cin.ignore();
                                    std::cin.get();
                                    }
                                    
                                    std::cout<<"Pulse ENTER para continuar...";
                                    std::cin.ignore();
                                    std::cin.get();

                                    break;
                                case 2:
                                    std::cout<<"Selecciona el Id: \n";
                                    std::cin>>id;
                                    if(id == 1){
                                        std::cout<<programa1.mostrarinfo_a()<<std::endl;
                                        std::cout<<Universidad_1.info_uni()<<std::endl;
                                    }
                                    else if(id == 2){
                                        std::cout<<programa2.mostrarinfo_a()<<std::endl;
                                        std::cout<<Universidad_2.info_uni()<<std::endl;
                                    }
                                    else if(id == 3){
                                        std::cout<<programa3.mostrarinfo_a()<<std::endl;
                                        std::cout<<Universidad_3.info_uni()<<std::endl;
                                    }
                                    else if(id == 4){
                                        std::cout<<programa4.mostrarinfo_a()<<std::endl;
                                        std::cout<<Universidad_4.info_uni()<<std::endl;
                                    }
                                    else if(id == 5){
                                        std::cout<<programa5.mostrarinfo_a()<<std::endl;
                                        std::cout<<Universidad_5.info_uni()<<std::endl;
                                    }
                                    else{
                                    std::cout<<"Entrada invalida\n";
                                    std::cout<<"Pulse ENTER para continuar...";
                                    std::cin.ignore();
                                    std::cin.get();
                                    }
                                    std::cout<<"Pulse ENTER para continuar...";
                                    std::cin.ignore();
                                    std::cin.get();
                                    
                                    break;

                                case 3:
                                    std::cout<<"Selecciona el Id del programa al que te quieres inscribir: \n";
                                    std::cin>>id;
                                    
                                    if(id == 1){
                                        std::cout<<programa1.mostrarinfo_a()<<std::endl;
                                        std::cout<<"Estas seguro?\n";
                                        std::cout<<"1.Si\n";
                                        std::cout<<"2.No\n";
                                        std::cin>>seguro;
                                        if(seguro == 1){
                                            
                                            ins1.setUsuario(nuevoEstudiante.getUsuario());
                                            lista_ins_e.push_back("1");
                                            std::cout<<"Inscripcion creada\n";

                                        }else{
                                            std::cout<<"Saliendo de la inscripcion...\n";
                                        }
                                        

                                    }
                                    else if(id == 2){
                                        std::cout<<programa2.mostrarinfo_a()<<std::endl;
                                        std::cout<<"Estas seguro?\n";
                                        std::cout<<"1.Si\n";
                                        std::cout<<"2.No\n";
                                        std::cin>>seguro;
                                        if(seguro == 1){
                                            
                                            ins2.setUsuario(nuevoEstudiante.getUsuario());
                                            lista_ins_e.push_back("2");
                                            std::cout<<"Inscripcion creada\n";
                                        }else{
                                            std::cout<<"Saliendo de la inscripcion...\n";
                                        }

                                    }
                                    else if(id == 3){
                                        std::cout<<programa3.mostrarinfo_a()<<std::endl;
                                        std::cout<<"Estas seguro?\n";
                                        std::cout<<"1.Si\n";
                                        std::cout<<"2.No\n";
                                        std::cin>>seguro;
                                        if(seguro == 1){
                                            
                                            ins3.setUsuario(nuevoEstudiante.getUsuario());
                                            lista_ins_e.push_back("3");
                                            std::cout<<"Inscripcion creada\n";
                                        }else{
                                            std::cout<<"Saliendo de la inscripcion...\n";
                                        }
 
                                    }
                                    else if(id == 4){
                                        std::cout<<programa4.mostrarinfo_a()<<std::endl;
                                        std::cout<<"Estas seguro?\n";
                                        std::cout<<"1.Si\n";
                                        std::cout<<"2.No\n";
                                        std::cin>>seguro;
                                        if(seguro == 1){
                                            
                                            ins4.setUsuario(nuevoEstudiante.getUsuario());
                                            lista_ins_e.push_back("4");
                                            std::cout<<"Inscripcion creada\n";
                                        }else{
                                            std::cout<<"Saliendo de la inscripcion...\n";
                                        }

                                    }
                                    else if(id == 5){
                                        std::cout<<programa5.mostrarinfo_a()<<std::endl;
                                        std::cout<<"Estas seguro?\n";
                                        std::cout<<"1.Si\n";
                                        std::cout<<"2.No\n";
                                        std::cin>>seguro;
                                        if(seguro == 1){
                                            
                                            ins5.setUsuario(nuevoEstudiante.getUsuario());
                                            lista_ins_e.push_back("5");
                                            std::cout<<"Inscripcion creada\n";
                                        }else{
                                            std::cout<<"Saliendo de la inscripcion...\n";
                                        }

                                    }
                                    else{
                                    std::cout<<"Entrada invalida\n";
                                    std::cout<<"Pulse ENTER para continuar...";
                                    std::cin.ignore();
                                    std::cin.get();
                                    }


                                    std::cout<<"Pulse ENTER para continuar...";
                                    std::cin.ignore();
                                    std::cin.get();


                                    break;
                                case 4:
                                    std::cout<<"Saliendo de la inscripcion..."<<std::endl;
                                    std::cout<<"Pulse ENTER para continuar...";
                                    std::cin.ignore();
                                    std::cin.get();
                                    break;
                                default:
                                    std::cout<<"Entrada invalida\n";
                                    std::cout<<"Pulse ENTER para continuar...";
                                    std::cin.ignore();
                                    std::cin.get();
                                    break;
                                }
                            
                            } while (opcion_sicue != 4);
                            

                            break;
                        case 3:
                            do
                            {
                                menu_mis_ins();
                                std::cin>>opcion_mis_ins;
                                switch (opcion_mis_ins)
                                {
                                case 1:
                                    std::cout<<"Tus incripciones son: \n";
                                    for (int i = 0; i <lista_ins_e.size();i++){

                                        if(lista_ins_e[i] == "1"){
                                            if(ins1.isAnulada()== true){
                                                std::cout<<"(ANULADA) ";
                                                std::cout<<programa1.mostrarinfo_a();
                                            }
                                            else{std::cout<<programa1.mostrarinfo_a();}
                                        }
                                        else if(lista_ins_e[i] == "2"){
                                            if(ins2.isAnulada()== true){
                                                std::cout<<"(ANULADA) ";
                                                std::cout<<programa2.mostrarinfo_a();
                                            }
                                            else{std::cout<<programa2.mostrarinfo_a();}
                                        }
                                        else if(lista_ins_e[i] == "3"){
                                            if(ins3.isAnulada()== true){
                                                std::cout<<"(ANULADA) ";
                                                std::cout<<programa3.mostrarinfo_a();
                                            }
                                            else{std::cout<<programa3.mostrarinfo_a();}
                                        }
                                        else if(lista_ins_e[i] == "4"){
                                            if(ins4.isAnulada()== true){
                                                std::cout<<"(ANULADA) ";
                                                std::cout<<programa4.mostrarinfo_a();
                                            }
                                            else{std::cout<<programa4.mostrarinfo_a();}
                                        }
                                        else if(lista_ins_e[i] == "5"){
                                            if(ins5.isAnulada()== true){
                                                std::cout<<"(ANULADA) ";
                                                std::cout<<programa5.mostrarinfo_a();
                                            }
                                            else{std::cout<<programa5.mostrarinfo_a();}
                                        }
                                        
                                    }
                                    std::cout<<"Pulse ENTER para continuar...";
                                    std::cin.ignore();
                                    std::cin.get();
                                    break;
                                case 2:
                                    std::cout<<"Selecciona la id de la inscripcion que quieres Anular: \n ";
                                    std::cin>>id;
                                        if(id>=1 && id <= 5){                                            
                                            for(int i = 0;i<lista_ins_e.size();i++){

                                                if(lista_ins_e[i] == std::to_string(id)){
                                                    encontrado = true;
                                                    if(lista_ins_e[i]== "1"){
                                                        ins1.anular();
                                                        std::cout<<"La inscripcion con Id: "<<id<<" Ha sido anulada con exito"<<std::endl;
                                                    }
                                                    if(lista_ins_e[i]== "2"){
                                                        ins2.anular();
                                                        std::cout<<"La inscripcion con Id: "<<id<<" Ha sido anulada con exito"<<std::endl;
                                                    }
                                                    if(lista_ins_e[i]== "3"){
                                                        ins3.anular();
                                                        std::cout<<"La inscripcion con Id: "<<id<<" Ha sido anulada con exito"<<std::endl;
                                                    }
                                                    if(lista_ins_e[i]== "4"){
                                                        ins4.anular();
                                                        std::cout<<"La inscripcion con Id: "<<id<<" Ha sido anulada con exito"<<std::endl;
                                                    }
                                                    if(lista_ins_e[i]== "5"){
                                                        ins5.anular();
                                                        std::cout<<"La inscripcion con Id: "<<id<<" Ha sido anulada con exito"<<std::endl;
                                                    }

                                                }

                                            }
                                        if (encontrado == false) {
                                            std::cout << "Entrada invalida\n";
                                        }

                                        }
                                        else{std::cout<<"Entrada invalida\n";}

                                        std::cout<<"Pulse ENTER para continuar...";
                                        std::cin.ignore();
                                        std::cin.get();

                                    break;
                                case 3:
                                    std::cout<<"Saliendo de Mis Inscripciones..."<<std::endl;
                                    std::cout<<"Pulse ENTER para continuar...";
                                    std::cin.ignore();
                                    std::cin.get();
                                    break;
                                default:
                                    std::cout<<"Entrada invalida\n";
                                    std::cout<<"Pulse ENTER para continuar...";
                                    std::cin.ignore();
                                    std::cin.get();
                                    break;
                                }

                            } while (opcion_mis_ins!= 3);
                            
                            break;
                        case 4:
                            std::cout<<"Cerrando sesion..."<<std::endl;
                            std::cout<<"Pulse ENTER para continuar...";
                            std::cin.ignore();
                            std::cin.get();
                            break;

                        default:

                            std::cout<<"Entrada invalida\n";
                            std::cout<<"Pulse ENTER para continuar...";
                            std::cin.ignore();
                            std::cin.get();
                            break;
                        }
                    } while (opcion_alumno !=4);
                    
                } 
                else if (nuevoProfesor.getUsuario() == usuario && nuevoProfesor.getContrasena() == contrasena) {
                    std::cout << "Bienvenido, " << nuevoProfesor.getUsuario() << " Has iniciado sesion como Profesor.\n";
                    std::cout<<"Pulse ENTER para continuar...";
                    std::cin.ignore();
                    std::cin.get();
                    loginExitoso = true;
                    do
                    {
                        menu_profesor();
                        std::cin>>opcion_profesor;
                        switch (opcion_profesor)
                        {
                        case 1:
                            std::cout << programa1.mostrarinfo_p();
                            std::cout << programa2.mostrarinfo_p();
                            std::cout << programa3.mostrarinfo_p();
                            std::cout << programa4.mostrarinfo_p();
                            std::cout << programa5.mostrarinfo_p();

                            std::cout<<"Pulse ENTER para continuar...";
                            std::cin.ignore();
                            std::cin.get();
                            break;
                        case 2:
                            do
                            {  
                                menu_SICUE_p();   
                                
                                std::cin>>opcion_sicue;
                                switch (opcion_sicue)
                                {
                                case 1:
                                    std::cout<<"Selecciona el Id: \n";
                                    std::cin>>id;
                                    if(id == 1){
                                        std::cout<<programa1.mostrarinfo_p()<<std::endl;
                                        std::cout<<Universidad_1.info_uni()<<std::endl;
                                    }
                                    else if(id == 2){
                                        std::cout<<programa2.mostrarinfo_p()<<std::endl;
                                        std::cout<<Universidad_2.info_uni()<<std::endl;
                                    }
                                    else if(id == 3){
                                        std::cout<<programa3.mostrarinfo_p()<<std::endl;
                                        std::cout<<Universidad_3.info_uni()<<std::endl;
                                    }
                                    else if(id == 4){
                                        std::cout<<programa4.mostrarinfo_p()<<std::endl;
                                        std::cout<<Universidad_4.info_uni()<<std::endl;
                                    }
                                    else if(id == 5){
                                        std::cout<<programa5.mostrarinfo_p()<<std::endl;
                                        std::cout<<Universidad_5.info_uni()<<std::endl;
                                    }
                                    else{
                                    std::cout<<"Entrada invalida\n";
                                    std::cout<<"Pulse ENTER para continuar...";
                                    std::cin.ignore();
                                    std::cin.get();
                                    }
                                    std::cout<<"Pulse ENTER para continuar...";
                                    std::cin.ignore();
                                    std::cin.get();
                                    
                                    break;

                                case 2:
                                    std::cout<<"Selecciona el Id del programa al que te quieres inscribir: \n";
                                    std::cin>>id;
                                    
                                    if(id == 1){
                                        std::cout<<programa1.mostrarinfo_p()<<std::endl;
                                        std::cout<<"Estas seguro?\n";
                                        std::cout<<"1.Si\n";
                                        std::cout<<"2.No\n";
                                        std::cin>>seguro;
                                        if(seguro == 1){
                                            
                                            ins1_p.setUsuario(nuevoProfesor.getUsuario());
                                            lista_ins_p.push_back("1");
                                            std::cout<<"Inscripcion creada\n";

                                        }else{
                                            std::cout<<"Saliendo de la inscripcion...\n";
                                        }
                                        

                                    }
                                    else if(id == 2){
                                        std::cout<<programa2.mostrarinfo_p()<<std::endl;
                                        std::cout<<"Estas seguro?\n";
                                        std::cout<<"1.Si\n";
                                        std::cout<<"2.No\n";
                                        std::cin>>seguro;
                                        if(seguro == 1){
                                            
                                            ins2_p.setUsuario(nuevoProfesor.getUsuario());
                                            lista_ins_p.push_back("2");
                                            std::cout<<"Inscripcion creada\n";
                                        }else{
                                            std::cout<<"Saliendo de la inscripcion...\n";
                                        }

                                    }
                                    else if(id == 3){
                                        std::cout<<programa3.mostrarinfo_p()<<std::endl;
                                        std::cout<<"Estas seguro?\n";
                                        std::cout<<"1.Si\n";
                                        std::cout<<"2.No\n";
                                        std::cin>>seguro;
                                        if(seguro == 1){
                                            
                                            ins3_p.setUsuario(nuevoProfesor.getUsuario());
                                            lista_ins_p.push_back("3");
                                            std::cout<<"Inscripcion creada\n";
                                        }else{
                                            std::cout<<"Saliendo de la inscripcion...\n";
                                        }
 
                                    }
                                    else if(id == 4){
                                        std::cout<<programa4.mostrarinfo_p()<<std::endl;
                                        std::cout<<"Estas seguro?\n";
                                        std::cout<<"1.Si\n";
                                        std::cout<<"2.No\n";
                                        std::cin>>seguro;
                                        if(seguro == 1){
                                            
                                            ins4_p.setUsuario(nuevoProfesor.getUsuario());
                                            lista_ins_p.push_back("4");
                                            std::cout<<"Inscripcion creada\n";
                                        }else{
                                            std::cout<<"Saliendo de la inscripcion...\n";
                                        }

                                    }
                                    else if(id == 5){
                                        std::cout<<programa5.mostrarinfo_p()<<std::endl;
                                        std::cout<<"Estas seguro?\n";
                                        std::cout<<"1.Si\n";
                                        std::cout<<"2.No\n";
                                        std::cin>>seguro;
                                        if(seguro == 1){
                                            
                                            ins5_p.setUsuario(nuevoProfesor.getUsuario());
                                            lista_ins_p.push_back("5");
                                            std::cout<<"Inscripcion creada\n";
                                        }else{
                                            std::cout<<"Saliendo de la inscripcion...\n";
                                        }

                                    }
                                    else{
                                    std::cout<<"Entrada invalida\n";
                                    std::cout<<"Pulse ENTER para continuar...";
                                    std::cin.ignore();
                                    std::cin.get();
                                    }


                                    std::cout<<"Pulse ENTER para continuar...";
                                    std::cin.ignore();
                                    std::cin.get();


                                    break;
                                case 3:
                                    std::cout<<"Saliendo de la inscripcion..."<<std::endl;
                                    std::cout<<"Pulse ENTER para continuar...";
                                    std::cin.ignore();
                                    std::cin.get();
                                    break;
                                default:
                                    std::cout<<"Entrada invalida\n";
                                    std::cout<<"Pulse ENTER para continuar...";
                                    std::cin.ignore();
                                    std::cin.get();
                                    break;
                                }
                            
                            } while (opcion_sicue != 3);
                            

                            break;
                        case 3:
                                do
                            {
                                menu_mis_ins();
                                std::cin>>opcion_mis_ins;
                                switch (opcion_mis_ins)
                                {
                                case 1:
                                    std::cout<<"Tus incripciones son: \n";
                                    for (int i = 0; i <lista_ins_p.size();i++){

                                        if(lista_ins_p[i] == "1"){
                                            if(ins1_p.isAnulada()== true){
                                                std::cout<<"(ANULADA) ";
                                                std::cout<<programa1.mostrarinfo_p();
                                            }
                                            else{std::cout<<programa1.mostrarinfo_p();}
                                        }
                                        else if(lista_ins_p[i] == "2"){
                                            if(ins2_p.isAnulada()== true){
                                                std::cout<<"(ANULADA) ";
                                                std::cout<<programa2.mostrarinfo_p();
                                            }
                                            else{std::cout<<programa2.mostrarinfo_p();}
                                        }
                                        else if(lista_ins_p[i] == "3"){
                                            if(ins3_p.isAnulada()== true){
                                                std::cout<<"(ANULADA) ";
                                                std::cout<<programa3.mostrarinfo_p();
                                            }
                                            else{std::cout<<programa3.mostrarinfo_p();}
                                        }
                                        else if(lista_ins_p[i] == "4"){
                                            if(ins4_p.isAnulada()== true){
                                                std::cout<<"(ANULADA) ";
                                                std::cout<<programa4.mostrarinfo_p();
                                            }
                                            else{std::cout<<programa4.mostrarinfo_p();}
                                        }
                                        else if(lista_ins_p[i] == "5"){
                                            if(ins5_p.isAnulada()== true){
                                                std::cout<<"(ANULADA) ";
                                                std::cout<<programa5.mostrarinfo_p();
                                            }
                                            else{std::cout<<programa5.mostrarinfo_p();}
                                        }
                                        
                                    }
                                    std::cout<<"Pulse ENTER para continuar...";
                                    std::cin.ignore();
                                    std::cin.get();
                                    break;
                                case 2:
                                    encontrado = false;
                                    std::cout<<"Selecciona la id de la inscripcion que quieres Anular: \n ";
                                    std::cin>>id;
                                        if(id>=1 && id <= 5){                                            
                                            for(int i = 0;i<lista_ins_p.size();i++){

                                                if(lista_ins_p[i] == std::to_string(id)){
                                                    encontrado = true;
                                                    if(lista_ins_p[i]== "1"){
                                                        ins1_p.anular();
                                                        std::cout<<"La inscripcion con Id: "<<id<<" Ha sido anulada con exito"<<std::endl;
                                                    }
                                                    if(lista_ins_p[i]== "2"){
                                                        ins2_p.anular();
                                                        std::cout<<"La inscripcion con Id: "<<id<<" Ha sido anulada con exito"<<std::endl;
                                                    }
                                                    if(lista_ins_p[i]== "3"){
                                                        ins3_p.anular();
                                                        std::cout<<"La inscripcion con Id: "<<id<<" Ha sido anulada con exito"<<std::endl;
                                                    }
                                                    if(lista_ins_p[i]== "4"){
                                                        ins4_p.anular();
                                                        std::cout<<"La inscripcion con Id: "<<id<<" Ha sido anulada con exito"<<std::endl;
                                                    }
                                                    if(lista_ins_p[i]== "5"){
                                                        ins5_p.anular();
                                                        std::cout<<"La inscripcion con Id: "<<id<<" Ha sido anulada con exito"<<std::endl;
                                                    }

                                                }

                                            }
                                        if (encontrado == false) {
                                            std::cout << "Entrada invalida\n";
                                        }

                                        }
                                        else{std::cout<<"Entrada invalida\n";}

                                        std::cout<<"Pulse ENTER para continuar...";
                                        std::cin.ignore();
                                        std::cin.get();

                                    break;
                                case 3:
                                    std::cout<<"Saliendo de Mis Inscripciones..."<<std::endl;
                                    std::cout<<"Pulse ENTER para continuar...";
                                    std::cin.ignore();
                                    std::cin.get();
                                    break;
                                default:
                                    std::cout<<"Entrada invalida\n";
                                    std::cout<<"Pulse ENTER para continuar...";
                                    std::cin.ignore();
                                    std::cin.get();
                                    break;
                                }

                            } while (opcion_mis_ins!= 3);
                            
                            break;

                        case 4:
                            std::cout<<"Cerrando sesion...\n";
                            std::cout<<"Pulse ENTER para continuar...";
                            std::cin.ignore();
                            std::cin.get();
                            break;                      

                        default:
                        
                            std::cout<<"Entrada invalida\n";
                            std::cout<<"Pulse ENTER para continuar...";
                            std::cin.ignore();
                            std::cin.get();

                            break;
                        }
                    } while (opcion_profesor !=4);
                } 
                else if (nuevoAdministrador.getUsuario() == usuario && nuevoAdministrador.getContrasena() == contrasena) {
                    std::cout << "Bienvenido, " << nuevoAdministrador.getUsuario() << " Has iniciado sesion como Administrador.\n";
                    std::cout<<"Pulse ENTER para continuar...";
                    std::cin.ignore();
                    std::cin.get();
                    loginExitoso = true;
                    do
                    {
                        menu_admin();
                        std::cin>>opcion_administrador;
                        switch (opcion_administrador)
                        {
                            case 1:

                                std::cout<<ad_e1.getAllData()<<programa1.mostrarinfo_a();
                                plan_sicue_inf_1.mostrarAsignaturas();
                                std::cout <<"\n";

                                std::cout<<ad_e2.getAllData()<<programa2.mostrarinfo_a();
                                plan_sicue_mag_4.mostrarAsignaturas();
                                std::cout <<"\n";

                                std::cout<<ad_e3.getAllData()<<programa4.mostrarinfo_a();
                                plan_sicue_inf_3.mostrarAsignaturas();
                                std::cout <<"\n";

                                std::cout<<ad_e4.getAllData()<<programa5.mostrarinfo_a();
                                plan_sicue_med_1.mostrarAsignaturas();
                                std::cout <<"\n";

                                std::cout<<ad_e5.getAllData()<<programa5.mostrarinfo_a();
                                plan_sicue_mag_2.mostrarAsignaturas();
                                std::cout <<"\n";

                                std::cout<<ad_e6.getAllData()<<programa3.mostrarinfo_a();
                                plan_sicue_med_5.mostrarAsignaturas();
                                std::cout <<"\n";

                                std::cout<<ad_e7.getAllData()<<programa2.mostrarinfo_a();
                                plan_sicue_inf_2.mostrarAsignaturas();
                                std::cout <<"\n";

                                std::cout<<ad_e8.getAllData()<<programa1.mostrarinfo_a();
                                plan_sicue_med_4.mostrarAsignaturas();
                                std::cout <<"\n";

                                std::cout<<ad_e9.getAllData()<<programa3.mostrarinfo_a();
                                plan_sicue_mag_2.mostrarAsignaturas();
                                std::cout <<"\n";

                                std::cout<<ad_e10.getAllData()<<programa4.mostrarinfo_a();                           
                                plan_sicue_inf_4.mostrarAsignaturas();
                                std::cout <<"\n";

                                for (int i = 0; i <lista_ins_e.size();i++){

                                    if(lista_ins_e[i] == "1"){
                                        if(ins1.isAnulada()== false){std::cout<<nuevoEstudiante.getAllData()<<programa1.mostrarinfo_a()<<std::endl;}
                                    }
                                    else if(lista_ins_e[i] == "2"){
                                       if(ins2.isAnulada()== false){std::cout<<nuevoEstudiante.getAllData()<<programa2.mostrarinfo_a()<<std::endl;}
                                    }
                                    else if(lista_ins_e[i] == "3"){
                                        if(ins3.isAnulada()== false){std::cout<<nuevoEstudiante.getAllData()<<programa3.mostrarinfo_a()<<std::endl;}
                                    }
                                    else if(lista_ins_e[i] == "4"){
                                        if(ins4.isAnulada()== false){std::cout<<nuevoEstudiante.getAllData()<<programa4.mostrarinfo_a()<<std::endl;}
                                    }
                                    else if(lista_ins_e[i] == "5"){
                                        if(ins5.isAnulada()== false){std::cout<<nuevoEstudiante.getAllData()<<programa5.mostrarinfo_a()<<std::endl;}
                                    }
                        
                                }

                                do
                                {
                                    std::cout<<"1.Matricular estudiante\n";
                                    std::cout<<"2.Ver listas de estudiante matriculados\n";
                                    std::cout<<"3.salir\n";
                                    std::cin>>opcion_ad;

                                    switch (opcion_ad)
                                    {
                                    case 1:
                                        std::cout<<"Escriba el nombre del estudiante a matricular\n";
                                        std::cin>>nombre_ad;
                                        std::cout<<"Seleccione el id del programa SICUE del estudiante a matricular\n";
                                        std::cin>>id_a;
                                        encontrado = false;
                                        if(nombre_ad == ad_e1.getNombre() && id_a == "1"){lista_ins_a_nombre.push_back(nombre_ad);std::cout<<"Matriculado\n";encontrado = true;}
                                        if(nombre_ad == ad_e2.getNombre() && id_a == "2"){lista_ins_a_nombre.push_back(nombre_ad);std::cout<<"Matriculado\n";encontrado = true;}
                                        if(nombre_ad == ad_e3.getNombre() && id_a == "4"){lista_ins_a_nombre.push_back(nombre_ad);std::cout<<"Matriculado\n";encontrado = true;}
                                        if(nombre_ad == ad_e4.getNombre() && id_a == "5"){lista_ins_a_nombre.push_back(nombre_ad);std::cout<<"Matriculado\n";encontrado = true;}
                                        if(nombre_ad == ad_e5.getNombre() && id_a == "5"){lista_ins_a_nombre.push_back(nombre_ad);std::cout<<"Matriculado\n";encontrado = true;}
                                        if(nombre_ad == ad_e6.getNombre() && id_a == "3"){lista_ins_a_nombre.push_back(nombre_ad);std::cout<<"Matriculado\n";encontrado = true;}
                                        if(nombre_ad == ad_e7.getNombre() && id_a == "2"){lista_ins_a_nombre.push_back(nombre_ad);std::cout<<"Matriculado\n";encontrado = true;}
                                        if(nombre_ad == ad_e8.getNombre() && id_a == "1"){lista_ins_a_nombre.push_back(nombre_ad);std::cout<<"Matriculado\n";encontrado = true;}
                                        if(nombre_ad == ad_e9.getNombre() && id_a == "3"){lista_ins_a_nombre.push_back(nombre_ad);std::cout<<"Matriculado\n";encontrado = true;}
                                        if(nombre_ad == ad_e10.getNombre() && id_a == "4"){lista_ins_a_nombre.push_back(nombre_ad);std::cout<<"Matriculado\n";encontrado = true;}
                                        if(nombre_ad == nuevoEstudiante.getNombre()){
                                            for(int i = 1; i<lista_ins_e.size();i++){

                                                if(lista_ins_e[i] == "1" && id_a == "1"){
                                                    if(ins1.isAnulada()== false){lista_ins_a_nombre.push_back(nombre_ad);std::cout<<"Matriculado\n";encontrado = true;}
                                                    
                                                }
                                                if(lista_ins_e[i] == "2" && id_a == "2"){
                                                    if(ins2.isAnulada()== false){lista_ins_a_nombre.push_back(nombre_ad);std::cout<<"Matriculado\n";encontrado = true;}
                                                   
                                                }
                                                if(lista_ins_e[i] == "3" && id_a == "3"){
                                                    if(ins3.isAnulada()== false){lista_ins_a_nombre.push_back(nombre_ad);std::cout<<"Matriculado\n";encontrado = true;}
                                                    
                                                }
                                                if(lista_ins_e[i] == "4" && id_a == "4"){
                                                    if(ins4.isAnulada()== false){lista_ins_a_nombre.push_back(nombre_ad);std::cout<<"Matriculado\n";encontrado = true;}
                                                    
                                                }
                                                if(lista_ins_e[i] == "5" && id_a == "5"){
                                                    if(ins5.isAnulada()== false){lista_ins_a_nombre.push_back(nombre_ad);std::cout<<"Matriculado\n";encontrado = true;}
                                                    
                                                }
                                            }
                                        }
                                       
                                        if(encontrado == false){std::cout<<"Nombre o Id no encontrado.\n";}
                   

                                        break;
                                    case 2:
                                        
                                        encontrado = false;
                                        for(int i = 0;i<lista_ins_a_nombre.size();i++)
                                        {    
                                            if(lista_ins_a_nombre[i] == ad_e1.getNombre()){
                                            std::cout<<ad_e1.getAllData()<<programa1.mostrarinfo_a();
                                            plan_sicue_inf_1.mostrarAsignaturas();
                                            std::cout <<"\n";encontrado = true;
                                            }

                                            if(lista_ins_a_nombre[i] == ad_e2.getNombre()){
                                            std::cout<<ad_e2.getAllData()<<programa2.mostrarinfo_a();
                                            plan_sicue_mag_4.mostrarAsignaturas();
                                            std::cout <<"\n";encontrado = true;
                                            }

                                            if(lista_ins_a_nombre[i] == ad_e3.getNombre()){
                                            std::cout<<ad_e3.getAllData()<<programa4.mostrarinfo_a();
                                            plan_sicue_inf_3.mostrarAsignaturas();
                                            std::cout <<"\n";encontrado = true;
                                            }

                                            if(lista_ins_a_nombre[i] == ad_e4.getNombre()){
                                            std::cout<<ad_e4.getAllData()<<programa5.mostrarinfo_a();
                                            plan_sicue_med_1.mostrarAsignaturas();
                                            std::cout <<"\n";encontrado = true;
                                            }

                                            if(lista_ins_a_nombre[i] == ad_e5.getNombre()){
                                            std::cout<<ad_e5.getAllData()<<programa5.mostrarinfo_a();
                                            plan_sicue_mag_2.mostrarAsignaturas();
                                            std::cout <<"\n";encontrado = true;
                                            }
                                            
                                            if(lista_ins_a_nombre[i] == ad_e6.getNombre()){
                                            std::cout<<ad_e6.getAllData()<<programa3.mostrarinfo_a();
                                            plan_sicue_med_5.mostrarAsignaturas();
                                            std::cout <<"\n";encontrado = true;
                                            }

                                            if(lista_ins_a_nombre[i] == ad_e7.getNombre()){
                                            std::cout<<ad_e7.getAllData()<<programa2.mostrarinfo_a();
                                            plan_sicue_inf_2.mostrarAsignaturas();
                                            std::cout <<"\n";encontrado = true;
                                            }

                                            if(lista_ins_a_nombre[i] == ad_e8.getNombre()){
                                            std::cout<<ad_e8.getAllData()<<programa1.mostrarinfo_a();
                                            plan_sicue_med_4.mostrarAsignaturas();
                                            std::cout <<"\n";encontrado = true;
                                            }
                                            
                                            if(lista_ins_a_nombre[i] == ad_e9.getNombre()){
                                            std::cout<<ad_e9.getAllData()<<programa3.mostrarinfo_a();
                                            plan_sicue_mag_2.mostrarAsignaturas();
                                            std::cout <<"\n";encontrado = true;
                                            }

                                            if(lista_ins_a_nombre[i] == ad_e10.getNombre()){
                                            std::cout<<ad_e10.getAllData()<<programa4.mostrarinfo_a();                           
                                            plan_sicue_inf_4.mostrarAsignaturas();
                                            std::cout <<"\n";encontrado = true;
                                            }

                                            if(lista_ins_a_nombre[i] == nuevoEstudiante.getNombre()){

                                                for (int i = 0; i <lista_ins_e.size();i++){

                                                    if(lista_ins_e[i] == id_a && id_a == "1"){
                                                        if(ins1.isAnulada()== false){std::cout<<nuevoEstudiante.getAllData()<<programa1.mostrarinfo_a()<<std::endl;encontrado = true;}
                                                    }
                                                    else if(lista_ins_e[i] == id_a && id_a == "2"){
                                                        if(ins2.isAnulada()== false){std::cout<<nuevoEstudiante.getAllData()<<programa2.mostrarinfo_a()<<std::endl;encontrado = true;}
                                                    }
                                                    else if(lista_ins_e[i] == id_a && id_a == "3"){
                                                        if(ins3.isAnulada()== false){std::cout<<nuevoEstudiante.getAllData()<<programa3.mostrarinfo_a()<<std::endl;encontrado = true;}
                                                    }
                                                    else if(lista_ins_e[i] == id_a && id_a == "4"){
                                                        if(ins4.isAnulada()== false){std::cout<<nuevoEstudiante.getAllData()<<programa4.mostrarinfo_a()<<std::endl;encontrado = true;}
                                                    }
                                                    else if(lista_ins_e[i] == id_a && id_a == "5"){
                                                        if(ins5.isAnulada()== false){std::cout<<nuevoEstudiante.getAllData()<<programa5.mostrarinfo_a()<<std::endl;encontrado = true;}
                                                    }

                                                }
                                            }
                                        }

                                        if(encontrado == false){std::cout<<"No hay alumno matriculados\n";}
                                        break;
                                    case 3:
                                        std::cout<<"Saliendo...\n";
                                        break;

                                    default:

                                        std::cout<<"Entrada invalida\n";

                                        break;
                                    }

                                    
                                } while (opcion_ad!=3);
                                
                
                                std::cout<<"Pulse ENTER para continuar...";
                                std::cin.ignore();
                                std::cin.get();

                                break;
                            case 2:
                                std::cout<<ad_p1.getAllData()<<programa4.mostrarinfo_p()<<std::endl;
                                std::cout<<ad_p2.getAllData()<<programa5.mostrarinfo_p()<<std::endl;
                                std::cout<<ad_p3.getAllData()<<programa1.mostrarinfo_p()<<std::endl;
                                std::cout<<ad_p4.getAllData()<<programa3.mostrarinfo_p()<<std::endl;
                                std::cout<<ad_p5.getAllData()<<programa4.mostrarinfo_p()<<std::endl;
                                std::cout<<ad_p6.getAllData()<<programa1.mostrarinfo_p()<<std::endl;
                                std::cout<<ad_p7.getAllData()<<programa2.mostrarinfo_p()<<std::endl;
                                std::cout<<ad_p8.getAllData()<<programa2.mostrarinfo_p()<<std::endl;
                                std::cout<<ad_p9.getAllData()<<programa5.mostrarinfo_p()<<std::endl;
                                std::cout<<ad_p10.getAllData()<<programa4.mostrarinfo_p()<<std::endl;                           

                                for (int i = 0; i <lista_ins_p.size();i++){

                                    if(lista_ins_p[i] == "1"){
                                        if(ins1_p.isAnulada()== false){
                                        std::cout<<nuevoProfesor.getAllData()<<programa1.mostrarinfo_p()<<std::endl;
                                        }
                                    }
                                    else if(lista_ins_p[i] == "2"){
                                        if(ins2_p.isAnulada()== false){
                                        std::cout<<nuevoProfesor.getAllData()<<programa2.mostrarinfo_p()<<std::endl;
                                        }
                                    }
                                    else if(lista_ins_p[i] == "3"){
                                        if(ins3_p.isAnulada()== false){
                                        std::cout<<nuevoProfesor.getAllData()<<programa3.mostrarinfo_p()<<std::endl;
                                        }
                                    }
                                    else if(lista_ins_p[i] == "4"){
                                        if(ins4_p.isAnulada()== false){
                                        std::cout<<nuevoProfesor.getAllData()<<programa4.mostrarinfo_p()<<std::endl;
                                        }
                                    }
                                    else if(lista_ins_p[i] == "5"){
                                        if(ins5_p.isAnulada()== false){
                                        std::cout<<nuevoProfesor.getAllData()<<programa5.mostrarinfo_p()<<std::endl;
                                        }
                                    }
                        
                                }
                                std::cout<<"Pulse ENTER para continuar...";
                                std::cin.ignore();
                                std::cin.get();


                                break;
                            case 3:
                            
                                std::cout<<"Cerrando sesion...\n";
                                std::cout<<"Pulse ENTER para continuar...";
                                std::cin.ignore();
                                std::cin.get();
                                break;

                            default:
                            
                                std::cout<<"Entrada invalida\n";
                                std::cout<<"Pulse ENTER para continuar...";
                                std::cin.ignore();
                                std::cin.get();
                                break;
                        }
                    } while (opcion_administrador !=3);
                } 
                else {
                    std::cout << "Usuario o contrasena incorrectos. Intente de nuevo.\n";
                    std::cout<<"Pulse ENTER para continuar...";
                    std::cin.ignore();
                    std::cin.get();
                }
                break;
                
            case 3:

                std::cout << "Saliendo del sistema...\n";
                break;

            default:
                std::cout <<"Entrada invalida.\n";
                std::cout<<"Pulse ENTER para continuar...";                
                std::cin.get();
        }
    } while (opcion_principal != 3);

    return 0;
}
