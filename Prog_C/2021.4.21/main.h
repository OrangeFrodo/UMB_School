typedef struct atom {   
    // Data Part
    int num;
    // Connected Part
    struct atom *next;
} ATOM;

void start_add(ATOM **start, int c) ;
void position_add(ATOM *position, int c);
int position_popout(ATOM *position);
ATOM* find(ATOM *start, int c);
