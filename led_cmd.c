#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>

int fd;

int main(int argc, char *argv[])
{
    int i, len;
    unsigned char led_data = 0x00;
    char write_data[4];

    if (argc != 2) {
        printf("./led_cmd leddata\n");
        exit(1);
    }

    led_data = atoi(argv[1]);

    //LEDデバイスドライバのオープン
    if (fd = open("/sys/class/"))
}
