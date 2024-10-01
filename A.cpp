#include <stdio.h>

int main() {
   char buffer[50];
int x = 10;
sprintf(buffer, "Nilai x adalah %d", x);  // Menulis ke 'buffer', bukan mencetak ke layar
printf("%s\n", buffer);  // Mencetak isi buffer: "Nilai x adalah 10"


    return 0;
}

