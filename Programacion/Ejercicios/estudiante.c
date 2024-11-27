#include<stdio.h>
#include<stdlib.h>



define MAX_NOMBRE 20                                                                                   
#define MAX_ESTUDIANTES 20                                                                              
typedef struct  {                                                                                       
        char nombre[MAX_NOMBRE];                                                                        
        int edad;                                                                                       
        float nota;                                                                                     
                                                
} Estudiante;                        
                                                                                
//Estudiantes inicializar(char * nombre, int edad, float nota){                                         
        //Estuadiante estudiante_nuevo;                                                                 
        //return estudiante_nuevo;                                                                      
        void inicializar(Estudiante * estudiante_a_rellenar, char * nombre, int edad, float nota){      
              estudiante_a_rellenar.edad = edad;                                              
              estudiante_a_rellenar.nota = nota;                                              
              strcpy(estudiante_a_rellenar->nombre,nombre);                                           
        }                                                                                               
int main(){                                                                                             
        Estudiante listado[MAX_ESTUDIANTES];                                                            
                                                                                                        
        int num_estudiantes;                                                                            
        int edad;                                                                                       
        float nota;                                                                                     
        char nombre[MAX_NOMBRE];                                                                        
                                                                                                        
        for(int i=0; i< num_estudiantes; i++){                                                          
        printf("%p\n",listado);                                                                         
        printf("Sizeof listado: %lu\n", sizeof(listado));                                               

        printf("Sizeof estudiante: %lu\n", sizeof(Estudiante));                                         
                                                                                                        
        printf("¿Cuántos estudiantes desea inicializar?");                                              
        scanf("%d", &num_estudiantes);                                                                  
        printf("Introduce la edad:");                                                                   
        scanf("%d", &edad);                                                                             
        printf("Introduce la nota:");                                                                   
        scanf("%f", &nota);                                                                             
        printf("Introduce la nombre:");                                                                 
        scanf("%s", nombre);                                                                            
                                                                                                        
        inicializar(&listado[0],nombre,edad,nota);                                                      
        }                                                                                               
                                                                                                        
        printf("Edad antigua de %s: %d\n",listado[0].nombre,listado.edad);                              
                cumpleanios(&listado[0]);

                return 0;
        }