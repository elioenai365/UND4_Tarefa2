#include <stdio.h>
#include "pico/stdlib.h"

#define LED_GREEN 11
#define LED_BLUE 12
#define LED_RED 13
#define BUZZER 21

void init_gpio() {
    gpio_init(LED_GREEN);
    gpio_set_dir(LED_GREEN, GPIO_OUT);
    gpio_init(LED_BLUE);
    gpio_set_dir(LED_BLUE, GPIO_OUT);
    gpio_init(LED_RED);
    gpio_set_dir(LED_RED, GPIO_OUT);
    gpio_init(BUZZER);
    gpio_set_dir(BUZZER, GPIO_OUT);
}

void control_leds(int green, int blue, int red) {
    gpio_put(LED_GREEN, green);
    gpio_put(LED_BLUE, blue);
    gpio_put(LED_RED, red);
}

void buzz() {
    gpio_put(BUZZER, 1);
    sleep_ms(2000);
    gpio_put(BUZZER, 0);
}

int main() {
    stdio_init_all();
    init_gpio();
    char command[20];

    while (true) {
        printf("Enter command: ");
        scanf("%s", command);
        if (strcmp(command, "green") == 0) {
            control_leds(1, 0, 0);
        } else if (strcmp(command, "blue") == 0) {
            control_leds(0, 1, 0);
        } else if (strcmp(command, "red") == 0) {
            control_leds(0, 0, 1);
        } else if (strcmp(command, "white") == 0) {
            control_leds(1, 1, 1);
        } else if (strcmp(command, "off") == 0) {
            control_leds(0, 0, 0);
        } else if (strcmp(command, "buzz") == 0) {
            buzz();
        } else if (strcmp(command, "exit") == 0) {
            printf("Rebooting...\n");
            reset_usb_boot(0, 0);
        } else {
            printf("Invalid command\n");
        }
    }
}
