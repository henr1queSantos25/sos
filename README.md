
# Projeto: Sinal SOS com LED usando Raspberry Pi Pico

Este projeto implementa o envio do sinal SOS em código Morse utilizando um LED conectado ao pino GPIO 11 do Raspberry Pi Pico. O código foi desenvolvido em C utilizando a biblioteca pico/stdlib.h.

O LED reproduz o sinal SOS repetidamente, seguindo as regras do código Morse. Cada ciclo do sinal SOS é separado por um intervalo de 3 segundos antes de reiniciar.





## Regras do Sinal

O caractere S ("...") é representado por três "pontos". Cada ponto é um pulso de luz com duração de 0,2 segundos.

O caractere O ("---") é representado por três "traços". Cada traço é um pulso de luz com duração de 0,8 segundos.

Intervalo entre pontos e traços na mesma letra: 0,125 segundos.

Intervalo entre letras (S e O): 0,25 segundos.

Intervalo entre ciclos completos de SOS: 3 segundos.


# Projeto: Sinal SOS com LED usando Raspberry Pi Pico

Este projeto implementa o envio do sinal SOS em código Morse utilizando um LED conectado ao pino GPIO 11 do Raspberry Pi Pico. O código foi desenvolvido em C utilizando a biblioteca pico/stdlib.h.

O LED reproduz o sinal SOS repetidamente, seguindo as regras do código Morse. Cada ciclo do sinal SOS é separado por um intervalo de 3 segundos antes de reiniciar.




