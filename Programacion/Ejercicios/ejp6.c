
        #include<stdio.h>
        #include<stdlib.h> 
        #include<string.h>

        #define MAX_CHARTITULO 80
        #define MAX_CHARAUTOR 45

        int MAX_LIBRO = 40; // Variable GLOBAL

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
        } Book;

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
void aumentarStock(Book * books, int id, int stock){                        
    if (id >= 1 && id <= 40) {              
        // Accedemos directamente al libro en el arreglo
        Book *libroseleccionado = &books[id - 1];  // Usamos un puntero al libro

        printf("\nDetalles del libro seleccionado anteriores:\n");
        imprimirLibro(*libroseleccionado);  // Desreferenciamos para pasar el valor de libro

        libroseleccionado->stock += stock;   // Modificamos directamente el stock
        printf("\nStock actualizado a: %d\n", libroseleccionado->stock);         
}
}


        void mostrarUnLibroPorIdCategoria(Book * books, genero_literario categoria_a_buscar){         //Esto te permite que tu puedas buscar todos los libros que tengan la categoria que tu pongas.
                if ( categoria_a_buscar >= 0 && categoria_a_buscar <= 4) {             //Esto sirve para que el número que introduzcamos este en este rango de numeros.
                for(int i = 0; i <40 ; i++){                                            //Esto sirve para hacer un bucle y la aplicacion vaya de uno en uno comprobando haber si tiene la categoria que has puesto q te muestre.
                        if( (books[i]).categoria ==  categoria_a_buscar){               //Esto sirve para que si la categoria a buscar esta en esa función te lo imprima.
                                imprimirLibro(books[i]);                
                        }
                }      
        }
}
Book *inicializarLibro(Book *direccion_donde_guardar, int id, char* titulo, char* autor, float precio, int genero_literario, int stock){
   direccion_donde_guardar[id - 1].id = id;
   strncpy(direccion_donde_guardar[id - 1].nombre, titulo, MAX_CHARTITULO);
   strncpy(direccion_donde_guardar[id - 1].autor, autor, MAX_CHARAUTOR);
   direccion_donde_guardar[id - 1].precio = precio;
   direccion_donde_guardar[id - 1].categoria = genero_literario;
   direccion_donde_guardar[id - 1].stock = stock;

   return direccion_donde_guardar;
}




int main(int argc, char **argv){

    Book* books = (Book*) malloc(sizeof(Book));

     
    books = inicializarLibro(books, 1, "To Kill a Mockingbird", "Harper Lee", 15.99, FICTION, 10);
    books = inicializarLibro(books, 1, "To Kill a Mockingbird", "Harper Lee", 15.99, FICTION, 10);
    books = inicializarLibro(books, 2, "1984", "George Orwell", 12.49, FICTION, 5);
    books = inicializarLibro(books, 3, "The Great Gatsby", "F. Scott Fitzgerald", 10.99, FICTION, 8);
    books = inicializarLibro(books, 4, "Moby Dick", "Herman Melville", 18.99, FICTION, 12);
    books = inicializarLibro(books, 5, "War and Peace", "Leo Tolstoy", 20.00, FICTION, 7);
    books = inicializarLibro(books, 6, "Pride and Prejudice", "Jane Austen", 14.99, FICTION, 9);
    books = inicializarLibro(books, 7, "The Catcher in the Rye", "J.D. Salinger", 10.00, FICTION, 6);
    books = inicializarLibro(books, 8, "The Odyssey", "Homer", 17.49, FICTION, 4);
    books = inicializarLibro(books, 9, "Ulysses", "James Joyce", 25.00, FICTION, 2);
    books = inicializarLibro(books, 10, "The Divine Comedy", "Dante Alighieri", 22.00, POETRY, 3);
    books = inicializarLibro(books, 11, "Leaves of Grass", "Walt Whitman", 13.00, POETRY, 11);
    books = inicializarLibro(books, 12, "The Iliad", "Homer", 18.50, FICTION, 7);
    books = inicializarLibro(books, 13, "A Brief History of Time", "Stephen Hawking", 15.00, NON_FICTION, 15);
    books = inicializarLibro(books, 14, "The Art of War", "Sun Tzu", 9.99, NON_FICTION, 20);
    books = inicializarLibro(books, 15, "Sapiens: A Brief History of Humankind", "Yuval Noah Harari", 16.49, NON_FICTION, 13);
    books = inicializarLibro(books, 16, "The Selfish Gene", "Richard Dawkins", 14.00, NON_FICTION, 6);
    books = inicializarLibro(books, 17, "The Road to Serfdom", "F.A. Hayek", 10.50, NON_FICTION, 5);
    books = inicializarLibro(books, 18, "The Wealth of Nations", "Adam Smith", 30.00, NON_FICTION, 8);
    books = inicializarLibro(books, 19, "On the Origin of Species", "Charles Darwin", 24.99, NON_FICTION, 4);
    books = inicializarLibro(books, 20, "The Prince", "Niccolò Machiavelli", 8.99, NON_FICTION, 14);
    books = inicializarLibro(books, 21, "Hamlet", "William Shakespeare", 11.50, THEATER, 6);
    books = inicializarLibro(books, 22, "Macbeth", "William Shakespeare", 9.50, THEATER, 8);
    books = inicializarLibro(books, 23, "Othello", "William Shakespeare", 10.99, THEATER, 7);
    books = inicializarLibro(books, 24, "A Doll's House", "Henrik Ibsen", 12.50, THEATER, 5);
    books = inicializarLibro(books, 25, "Waiting for Godot", "Samuel Beckett", 13.99, THEATER, 4);
    books = inicializarLibro(books, 26, "Death of a Salesman", "Arthur Miller", 14.99, THEATER, 10);
    books = inicializarLibro(books, 27, "The Glass Menagerie", "Tennessee Williams", 11.00, THEATER, 9);
    books = inicializarLibro(books, 28, "Long Day's Journey into Night", "Eugene O'Neill", 19.50, THEATER, 3);
    books = inicializarLibro(books, 29, "The Importance of Being Earnest", "Oscar Wilde", 8.50, THEATER, 15);
    books = inicializarLibro(books, 30, "The Waste Land", "T.S. Eliot", 6.99, POETRY, 10);
    books = inicializarLibro(books, 31, "Paradise Lost", "John Milton", 12.00, POETRY, 7);
    books = inicializarLibro(books, 32, "Beowulf", "Anonymous", 15.00, POETRY, 5);
    books = inicializarLibro(books, 33, "Essays", "Michel de Montaigne", 20.00, ESSAY, 4);
    books = inicializarLibro(books, 34, "Self-Reliance and Other Essays", "Ralph Waldo Emerson", 9.00, ESSAY, 9);
    books = inicializarLibro(books, 35, "Civil Disobedience and Other Essays", "Henry David Thoreau", 7.50, ESSAY, 11);
    books = inicializarLibro(books, 36, "Meditations", "Marcus Aurelius", 11.99, ESSAY, 8);
    books = inicializarLibro(books, 37, "The Federalist Papers", "Alexander Hamilton, James Madison, John Jay", 18.00, ESSAY, 5);
    books = inicializarLibro(books, 38, "The Communist Manifesto", "Karl Marx and Friedrich Engels", 5.99, ESSAY, 12);
    books = inicializarLibro(books, 39, "The Republic", "Plato", 16.00, ESSAY, 6); 
    books = inicializarLibro(books, 40, "Thus Spoke Zarathustra", "Friedrich Nietzsche", 14.99, ESSAY, 10);

    if(argc == 2){
        if(strcmp(argv[1],"todo") == 0){
                int numero;
                printf("Que quieres hacer?\n 1.Mostrar todos los libros\n 2.Mostrar un libro por id\n 3.Mostrar un libro por stock\n 4.Mostrar un libro por categoría\n 5.Salir\n");
                scanf("%d",&numero);
                if (numero == 1) {
                        mostrarTodosLosLibros(books);
                }
                else if (numero == 2){
                        int id;
                        printf("Introduce el número del libro que quieres ver (1-40): ");
                        scanf("%d", &id);
                        mostrarUnLibroPorId(books, id);
                }
                else if (numero == 3){
                        int id, stock;
                        printf("Introduce el id que quieres: ");
                        scanf("%d", &id);
                        printf("Introduce el aumento de stock que quieres: ");
                        scanf("%d", &stock);
                        aumentarStock(books, id, stock);  // Llamada corregida
                }
                else if (numero == 4){
                        int categoria;
                        printf("Introduce que categoria quieres: ");
                        scanf("%d", &categoria);
                        mostrarUnLibroPorIdCategoria(books, categoria);
                }
        } else {
                printf("Error. Instrucción no reconocida\n");
        }       
    } else {
        printf("Error\n");
    }

    free(books);
    return 0;
} 