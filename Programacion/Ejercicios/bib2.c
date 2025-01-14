#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CHARTITULO 80
#define MAX_CHARAUTOR 45
#define MAX_LIBRO 40

typedef enum {
    FICTION,        // 0
    NON_FICTION,    // 1
    THEATER,        // 2
    POETRY,         // 3
    ESSAY           // 4
} genero_literario;

typedef struct {
    int id;
    char nombre[MAX_CHARTITULO];
    char autor[MAX_CHARAUTOR];
    float precio;
    genero_literario categoria;
    int stock;
} Book;

void imprimirLibro(Book libro) {
    const char *categorias[] = {"Fiction", "Non-Fiction", "Theater", "Poetry", "Essay"};
    printf("ID: %d\n", libro.id);
    printf("Nombre: %s\n", libro.nombre);
    printf("Autor: %s\n", libro.autor);
    printf("Precio: %.2f\n", libro.precio);
    printf("Categoria: %s\n", categorias[libro.categoria]);
    printf("Stock: %d\n", libro.stock);
}

void mostrarTodosLosLibros(Book *books, int totalLibros) {
    for (int i = 0; i < totalLibros; i++) {
        imprimirLibro(books[i]);
        printf("------------------\n");
    }
}

void mostrarUnLibroPorId(Book *books, int totalLibros, int id) {
    if (id > 0 && id <= totalLibros) {
        imprimirLibro(books[id - 1]);
    } else {
        printf("ID invalido.\n");
    }
}

void mostrarLibrosPorAutor(Book *books, int totalLibros, const char *autor) {
    for (int i = 0; i < totalLibros; i++) {
        if (strcmp(books[i].autor, autor) == 0) {
            imprimirLibro(books[i]);
            printf("------------------\n");
        }
    }
}

void mostrarLibrosPorCategoria(Book *books, int totalLibros, genero_literario categoria) {
    for (int i = 0; i < totalLibros; i++) {
        if (books[i].categoria == categoria) {
            imprimirLibro(books[i]);
            printf("------------------\n");
        }
    }
}

void inicializarLibro(Book *libro, int id, const char *nombre, const char *autor, float precio, genero_literario categoria, int stock) {
    libro->id = id;
    strncpy(libro->nombre, nombre, MAX_CHARTITULO);
    strncpy(libro->autor, autor, MAX_CHARAUTOR);
    libro->precio = precio;
    libro->categoria = categoria;
    libro->stock = stock;
}

Book *añadirLibro(Book *books, int *totalLibros, int *capacidad, const char *nombre, const char *autor, float precio, genero_literario categoria, int stock) {
    if (*totalLibros >= *capacidad) {
        *capacidad *= 2;
        books = realloc(books, (*capacidad) * sizeof(Book));
        if (!books) {
            printf("Error al redimensionar la memoria.\n");
            exit(1);
        }
    }

    inicializarLibro(&books[*totalLibros], *totalLibros + 1, nombre, autor, precio, categoria, stock);
    (*totalLibros)++;
    printf("Libro añadido correctamente:\n");
    imprimirLibro(books[*totalLibros - 1]);

    return books;
}

int main(int argc, char *argv[]) {
    int capacidad = MAX_LIBRO;
    int totalLibros = 0;
    Book *books = malloc(capacidad * sizeof(Book));
    if (!books) {
        printf("Error al asignar memoria.\n");
        return 1;
    }

        books = añadirLibro(books, &totalLibros, &capacidad, "To Kill a Mockingbird", "Harper Lee", 15.99, FICTION, 10);
        books = añadirLibro(books, &totalLibros, &capacidad, "1984", "George Orwell", 12.49, FICTION, 5);
        books = añadirLibro(books, &totalLibros, &capacidad, "The Great Gatsby", "F. Scott Fitzgerald", 10.99, FICTION, 8);
        books = añadirLibro(books, &totalLibros, &capacidad, "Moby Dick", "Herman Melville", 18.99, FICTION, 12);
        books = añadirLibro(books, &totalLibros, &capacidad, "War and Peace", "Leo Tolstoy", 20.00, FICTION, 7);
        books = añadirLibro(books, &totalLibros, &capacidad, "Pride and Prejudice", "Jane Austen", 14.99, FICTION, 9);
        books = añadirLibro(books, &totalLibros, &capacidad, "The Catcher in the Rye", "J.D. Salinger", 10.00, FICTION, 6);
        books = añadirLibro(books, &totalLibros, &capacidad, "The Odyssey", "Homer", 17.49, FICTION, 4);
        books = añadirLibro(books, &totalLibros, &capacidad, "Ulysses", "James Joyce", 25.00, FICTION, 2);
        books = añadirLibro(books, &totalLibros, &capacidad, "The Divine Comedy", "Dante Alighieri", 22.00, POETRY, 3);
        books = añadirLibro(books, &totalLibros, &capacidad, "Leaves of Grass", "Walt Whitman", 13.00, POETRY, 11);
        books = añadirLibro(books, &totalLibros, &capacidad, "The Iliad", "Homer", 18.50, FICTION, 7);
        books = añadirLibro(books, &totalLibros, &capacidad, "A Brief History of Time", "Stephen Hawking", 15.00, NON_FICTION, 15);
        books = añadirLibro(books, &totalLibros, &capacidad, "The Art of War", "Sun Tzu", 9.99, NON_FICTION, 20);
        books = añadirLibro(books, &totalLibros, &capacidad, "Sapiens: A Brief History of Humankind", "Yuval Noah Harari", 16.49, NON_FICTION, 13);
        books = añadirLibro(books, &totalLibros, &capacidad, "The Selfish Gene", "Richard Dawkins", 14.00, NON_FICTION, 6);
        books = añadirLibro(books, &totalLibros, &capacidad, "The Road to Serfdom", "F.A. Hayek", 10.50, NON_FICTION, 5);
        books = añadirLibro(books, &totalLibros, &capacidad, "The Wealth of Nations", "Adam Smith", 30.00, NON_FICTION, 8);
        books = añadirLibro(books, &totalLibros, &capacidad, "On the Origin of Species", "Charles Darwin", 24.99, NON_FICTION, 4);
        books = añadirLibro(books, &totalLibros, &capacidad, "The Prince", "Niccolò Machiavelli", 8.99, NON_FICTION, 14);
        books = añadirLibro(books, &totalLibros, &capacidad, "Hamlet", "William Shakespeare", 11.50, THEATER, 6);
        books = añadirLibro(books, &totalLibros, &capacidad, "Macbeth", "William Shakespeare", 9.50, THEATER, 8);
        books = añadirLibro(books, &totalLibros, &capacidad, "Othello", "William Shakespeare", 10.99, THEATER, 7);
        books = añadirLibro(books, &totalLibros, &capacidad, "A Doll's House", "Henrik Ibsen", 12.50, THEATER, 5);
        books = añadirLibro(books, &totalLibros, &capacidad, "Waiting for Godot", "Samuel Beckett", 13.99, THEATER, 4);
        books = añadirLibro(books, &totalLibros, &capacidad, "Death of a Salesman", "Arthur Miller", 14.99, THEATER, 10);
        books = añadirLibro(books, &totalLibros, &capacidad, "The Glass Menagerie", "Tennessee Williams", 11.00, THEATER, 9);
        books = añadirLibro(books, &totalLibros, &capacidad, "Long Day's Journey into Night", "Eugene O'Neill", 19.50, THEATER, 3);
        books = añadirLibro(books, &totalLibros, &capacidad, "The Importance of Being Earnest", "Oscar Wilde", 8.50, THEATER, 15);
        books = añadirLibro(books, &totalLibros, &capacidad, "The Waste Land", "T.S. Eliot", 6.99, POETRY, 10);
        books = añadirLibro(books, &totalLibros, &capacidad, "Paradise Lost", "John Milton", 12.00, POETRY, 7);
        books = añadirLibro(books, &totalLibros, &capacidad, "Beowulf", "Anonymous", 15.00, POETRY, 5);
        books = añadirLibro(books, &totalLibros, &capacidad, "Essays", "Michel de Montaigne", 20.00, ESSAY, 4);
        books = añadirLibro(books, &totalLibros, &capacidad, "Self-Reliance and Other Essays", "Ralph Waldo Emerson", 9.00, ESSAY, 9);
        books = añadirLibro(books, &totalLibros, &capacidad, "Civil Disobedience and Other Essays", "Henry David Thoreau", 7.50, ESSAY, 11);
        books = añadirLibro(books, &totalLibros, &capacidad, "Meditations", "Marcus Aurelius", 11.99, ESSAY, 8);
        books = añadirLibro(books, &totalLibros, &capacidad, "The Federalist Papers", "Alexander Hamilton, James Madison, John Jay", 18.00, ESSAY, 5);
        books = añadirLibro(books, &totalLibros, &capacidad, "The Communist Manifesto", "Karl Marx and Friedrich Engels", 5.99, ESSAY, 12);
        books = añadirLibro(books, &totalLibros, &capacidad, "The Republic", "Plato", 16.00, ESSAY, 6);
        books = añadirLibro(books, &totalLibros, &capacidad, "Thus Spoke Zarathustra", "Friedrich Nietzsche", 14.99, ESSAY, 10);


    if (argc < 2) {
        printf("Uso: %s [comando] [argumentos]\n", argv[0]);
        printf("Comandos disponibles:\n");
        printf("  mostrar: Muestra todos los libros\n");
        printf("  mostrar_id [id]: Muestra el libro con el ID especificado\n");
        printf("  categoria [categoria]: Muestra los libros de la categoria especificada\n");
        printf("  autor [nombre]: Muestra los libros del autor especificado\n");
        printf("  añadir [nombre] [autor] [precio] [categoria] [stock]: Añade un nuevo libro\n");
        return 1;
    }

    if (strcmp(argv[1], "mostrar") == 0) {
        mostrarTodosLosLibros(books, totalLibros);
    } else if (strcmp(argv[1], "mostrar_id") == 0) {
        if (argc < 3) {
            printf("Uso: %s mostrar_id [id]\n", argv[0]);
            return 1;
        }
        int id = atoi(argv[2]);
        mostrarUnLibroPorId(books, totalLibros, id);
    } else if (strcmp(argv[1], "categoria") == 0) {
        if (argc < 3) {
            printf("Uso: %s categoria [categoria]\n", argv[0]);
            return 1;
        }
        int categoria = atoi(argv[2]);
        if (categoria >= 0 && categoria <= 4) {
            mostrarLibrosPorCategoria(books, totalLibros, (genero_literario)categoria);
        } else {
            printf("Categoria invalida.\n");
        }
    } else if (strcmp(argv[1], "autor") == 0) {
        if (argc < 3) {
            printf("Uso: %s autor [nombre]\n", argv[0]);
            return 1;
        }
        mostrarLibrosPorAutor(books, totalLibros, argv[2]);
    } else if (strcmp(argv[1], "añadir") == 0) {
        if (argc < 7) {
            printf("Uso: %s añadir [nombre] [autor] [precio] [categoria] [stock]\n", argv[0]);
            return 1;
        }
        const char *nombre = argv[2];
        const char *autor = argv[3];
        float precio = atof(argv[4]);
        int categoria = atoi(argv[5]);
        int stock = atoi(argv[6]);

        if (categoria >= 0 && categoria <= 4) {
            books = añadirLibro(books, &totalLibros, &capacidad, nombre, autor, precio, (genero_literario)categoria, stock);
        } else {
            printf("Categoria invalida. No se pudo añadir el libro.\n");
        }
    } else {
        printf("Comando desconocido: %s\n", argv[1]);
    }

    free(books);
    return 0;
}
