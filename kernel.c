// assigns the start address
// resets terminal location
#define VGA_ADDRESS 0xB8000 /*video memory begins here */

/* VGA provides support for 16 colours */
#define BLACK 0 
#define GREEN 2
#define RED 4
#define YELLOW 14
#define WHITE_COLOR 15 

unsigned short *terminal_buffer;
unsigned int vga_index;