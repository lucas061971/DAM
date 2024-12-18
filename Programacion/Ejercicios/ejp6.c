#include<stdio.h>
#include<stdlib.h> 
#include<string.h>

#define MAX_CHARTITULO 80
#define MAX_CHARAUTOR 45
#define MAX_LIBRO 40

typedef enum{
        FICTION, // 0
        NON_FICTION,// 1
        THEATER, //2 
        POETRY, //3
        ESSAY, //4
} genero_literario;

typedef struct {
        int id;  
        char nombre[MAX_CHARTITULO];
        char autor[MAX_CHARAUTOR];
        float precio;
        genero_literario categoria;
        int stock;
}Book;


void imprimirLibro(Book libro){

        
        printf("ID: %d\n",libro.id);                    //id del título
        printf("Nombre: %s\n",libro.nombre);            //nombre del título
        printf("Autor: %s\n",libro.autor);              //autor del título
        printf("Precio: %.2f\n",libro.precio);          //precio del título
        printf("Categoria: %d\n",libro.categoria);      //categoria del título
        printf("Stock: %i\n",libro.stock);              //stock del título

}

void mostrarTodosLosLibros(Book * books){                      //Esto permite que te muestre todos los libros con sus respectivas informaciones.
for (int i = 0 ; i < 40 ; i++){                                //Hacemos un bucle for para que te muestre todos los numeros de 0 a 40 como hemos indicado sumando de uno en uno que lo hemos indicado con el i++.
     imprimirLibro(books[i]);
}
}
void mostrarUnLibroPorId(Book * books, int id){                 //Esto permite que tu quieras buscar el libro que tu quieras sin que te muestren todos los libros.

        if ( id >= 1 && id <= 40) {                             //Aqui hacemos un if, para q si introducimos un número entre 1 y 40 que sea además el que hemos indicado, te lo muestre.
        Book libroseleccionado = books[id - 1];                 //Esto sirve para que cuando introduzcamos un número sea ese el que nos muestre y no uno más ya que el orden empezaria desde 0, es decir, que si ponemos 2 te mostraria el 1 pero en este caso te muestra el que quieres.
        printf("\nDetalles del libro seleccionado:\n");
        imprimirLibro(libroseleccionado);
}
}
void mostrarUnLibroPorIdCategoria(Book * books, genero_literario categoria_a_buscar){         //Esto te permite que tu puedas buscar todos los libros que tengan la categoria que tu pongas.
        if ( categoria_a_buscar >= 1 && categoria_a_buscar <= 40) {             //Esto sirve para que el número que introduzcamos este en este rango de numeros.
        for(int i = 0; i <40 ; i++){                                            //Esto sirve para hacer un bucle y la aplicacion vaya de uno en uno comprobando haber si tiene la categoria que has puesto q te muestre.
                if( (books[i]).categoria ==  categoria_a_buscar){               //Esto sirve para que si la categoria a buscar esta en esa función te lo imprima.
                        imprimirLibro(books[i]);                
                }
        }
        
        
        
}
}

void aumentarStock(Book * books, int id, int stock){                        //Esto te permite buscar por id el libro que quieres(lo mismo que en el mostrarUnLibroPorId), y además aumentar el stock con las suma que tu quieras.

        if (id >= 1 && id <= 40) {              //Esto te indica que si el número esta en ese rango (de 1 a 40), pasamos a lo siguiente. 
        Book libroseleccionado = books[id - 1];                 
        printf("\nDetalles del libro seleccionado anteriores:\n");              //Este es el texto que te muestra para saber lo que tenías antes de la actualización que has querido hacer.
        imprimirLibro(libroseleccionado);
        libroseleccionado.stock += stock;                       //Esto sirve para cuando tu has seleccionado el libro le sume la cantidad que tu elijas al stock
        printf("\nStock actualizado a: %d\n", libroseleccionado.stock);         //Este es el texto que te muestra antes de mostrarte la actualización del stock que tuahas querido poner.
         


                
        }


}




void buscar_e_imprimir_libro(Book * books,int id_a_buscar){


        }




int main(){
        // tipo_de_dato nombre_de_la_variable = valor_de_la_variable;
        // Darle un valor a la variable es opcional.
        Book books[MAX_LIBRO] = {
        {1, "To Kill a Mockingbird", "Harper Lee", 15.99, FICTION, 10},
        {2, "1984", "George Orwell", 12.49, FICTION, 5},
        {3, "The Great Gatsby", "F. Scott Fitzgerald", 10.99, FICTION, 8},
        {4, "Moby Dick", "Herman Melville", 18.99, FICTION, 12},
        {5, "War and Peace", "Leo Tolstoy", 20.00, FICTION, 7},
        {6, "Pride and Prejudice", "Jane Austen", 14.99, FICTION, 9},
        {7, "The Catcher in the Rye", "J.D. Salinger", 10.00, FICTION, 6},
        {8, "The Odyssey", "Homer", 17.49, FICTION, 4},
        {9, "Ulysses", "James Joyce", 25.00, FICTION, 2},
        {10, "The Divine Comedy", "Dante Alighieri", 22.00, POETRY, 3},
        {11, "Leaves of Grass", "Walt Whitman", 13.00, POETRY, 11},
        {12, "The Iliad", "Homer", 18.50, FICTION, 7},
        {13, "A Brief History of Time", "Stephen Hawking", 15.00, NON_FICTION, 15},
        {14, "The Art of War", "Sun Tzu", 9.99, NON_FICTION, 20},
        {15, "Sapiens: A Brief History of Humankind", "Yuval Noah Harari", 16.49, NON_FICTION, 13},
        {16, "The Selfish Gene", "Richard Dawkins", 14.00, NON_FICTION, 6},
        {17, "The Road to Serfdom", "F.A. Hayek", 10.50, NON_FICTION, 5},
        {18, "The Wealth of Nations", "Adam Smith", 30.00, NON_FICTION, 8},
        {19, "On the Origin of Species", "Charles Darwin", 24.99, NON_FICTION, 4},
        {20, "The Prince", "Niccolò Machiavelli", 8.99, NON_FICTION, 14},
        {21, "Hamlet", "William Shakespeare", 11.50, THEATER, 6},
        {22, "Macbeth", "William Shakespeare", 9.50, THEATER, 8},
        {23, "Othello", "William Shakespeare", 10.99, THEATER, 7},
        {24, "A Doll's House", "Henrik Ibsen", 12.50, THEATER, 5},
        {25, "Waiting for Godot", "Samuel Beckett", 13.99, THEATER, 4},
        {26, "Death of a Salesman", "Arthur Miller", 14.99, THEATER, 10},
        {27, "The Glass Menagerie", "Tennessee Williams", 11.00, THEATER, 9},
        {28, "Long Day's Journey into Night", "Eugene O'Neill", 19.50, THEATER, 3},
        {29, "The Importance of Being Earnest", "Oscar Wilde", 8.50, THEATER, 15},
        {30, "The Waste Land", "T.S. Eliot", 6.99, POETRY, 10},
        {31, "Paradise Lost", "John Milton", 12.00, POETRY, 7},
        {32, "Beowulf", "Anonymous", 15.00, POETRY, 5},
        {33, "Essays", "Michel de Montaigne", 20.00, ESSAY, 4},
        {34, "Self-Reliance and Other Essays", "Ralph Waldo Emerson", 9.00, ESSAY, 9},
        {35, "Civil Disobedience and Other Essays", "Henry David Thoreau", 7.50, ESSAY, 11},
        {36, "Meditations", "Marcus Aurelius", 11.99, ESSAY, 8},
        {37, "The Federalist Papers", "Alexander Hamilton, James Madison, John Jay", 18.00, ESSAY, 5},
        {38, "The Communist Manifesto", "Karl Marx and Friedrich Engels", 5.99, ESSAY, 12},
        {39, "The Republic", "Plato", 16.00, ESSAY, 6}, 
        {40, "Thus Spoke Zarathustra", "Friedrich Nietzsche", 14.99, ESSAY, 10}
            }; 
       int numero;

        printf("Que quieres hacer?\n 1.Mostrar todos los libros\n 2.Mostrar un libro por id\n 3.Mostrar un libro por stock\n 4.Mostrar un libro por categoría\n 5.Salir\n");    //Esto es el menú que te muestra al principio para que elijas lo que quieres que te muestre.
        scanf("%d",&numero);

        if (numero == 1) {
                mostrarTodosLosLibros(books);
        }
        else if (numero == 2){
        int id;
        printf("Introduce el número del libro que quieres ver (1-40): ");               //Este es el texto que te muestra antes de poner el número del libro que quieres q te muestre.
        scanf("%d", &id);
        mostrarUnLibroPorId(books, id);
}
        else if (numero == 3){
        int id;
        int stock;

        printf("Introduce el id que quieres: ");                //Este es el texto que te muestra antes de poner el id que quieres q te muestre.
        scanf("%d", &id);
        printf("Introduce el aumento de stock que quieres: ");          //Este es el texto que te muestra antes de poner el aumento de stock que quieres q te aumento.
        scanf("%d", &stock);
        aumentarStock(books,id, stock);

        }
        else if (numero == 4){
        int categoria;

        printf("Introduce que categoria quieres: ");            //Este es el texto que te muestra antes de poner la categoria que quieres q te muestre.
        scanf("%d", &categoria);
        mostrarUnLibroPorIdCategoria(books, categoria);

        }

       return 0;
}