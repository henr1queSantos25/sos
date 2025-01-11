#include <stdio.h>
#include "pico/stdlib.h"

#define LED_PIN_GREEN 11

void ponto();
void traco();

int main(){
    stdio_init_all();

    gpio_init(LED_PIN_GREEN);
    gpio_set_dir(LED_PIN_GREEN, GPIO_OUT);

    while (true) {

        //LETRA S
        ponto();
        sleep_ms(125);

        ponto();
        sleep_ms(125);

        ponto();
        sleep_ms(250);

        //LETRA O

        traco();
        sleep_ms(125);

        traco();
        sleep_ms(125);

        traco();
        sleep_ms(250);

        //LETRA S

        ponto();
        sleep_ms(125);

        ponto();
        sleep_ms(125);

        ponto();
        sleep_ms(3000);

    }
}

void ponto(){
    gpio_put(LED_PIN_GREEN, true);
    sleep_ms(200);

    gpio_put(LED_PIN_GREEN, false);
}

void traco(){
    gpio_put(LED_PIN_GREEN, true);
    sleep_ms(800);

    gpio_put(LED_PIN_GREEN, false);
}