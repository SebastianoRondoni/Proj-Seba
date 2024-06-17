#include<stdio.h>
#include<stdlib.h>

enum classe_giocatore{
    barbaro,
};

enum Tipo_zona{
   corridoio, 
};

enum Tipo_tesoro{
    nessun_tesoro
};

enum Tipo_porta{
    nessuna_porta
};

typedef enum classe_giocatore classe_giocatore;
typedef enum Tipo_zona tipo_zona;
typedef enum Tipo_tesoro tipo_tesoro;
typedef enum Tipo_porta tipo_porta;

struct Zona_segrete{
    /* data */
};

typedef struct Zona_segrete zona_segrete;

struct Giocatore{
    
};

typedef struct Giocatore giocatore;