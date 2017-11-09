#include <read.h>

void read(int in_id, char * buffer, int qty_to_read) {
    if(in_id == KEYBOARD_IN_ID) {
        if(qty_to_read < 0)
            return;
        while(qty_to_read > 0) {
            *buffer = getchar();
            qty_to_read--;
            buffer++;
        }
    }
}