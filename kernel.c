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


/* clears the terminal */
void clear_screen(void)
{
    int index = 0;
    /* there are 25 lines each of 80 coloumns each element takes 2 bytes*/
    while (index < 80 * 25 * 2) {
        terminal_buffer[index] = ' ';
        index += 2;
    }
}

// prints the message in one color
void print_string(char *str, unsigned char color)
{
    int index = 0;
    while (str[index]) {
        terminal_buffer[vga_index] = (unsigned short)str[index]|(unsigned short)color << 8;
        index++;
        vga_index++;
    }
}

