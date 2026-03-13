#include <stdio.h>

int main() {
    int hora, minuto, segundo, duracao;
    scanf("%d %d %d %d", &hora, &minuto, &segundo, &duracao);

    int total_segundos = (hora * 3600) + (minuto * 60) + segundo + duracao;

    // Usamos o módulo 24 (% 24) para o caso de a experiência passar das 23:59:59 
    // e virar o dia. Se der 26 horas, o resultado volta para 2 horas da manhã!
    int h = (total_segundos / 3600) % 24;
    int m = (total_segundos % 3600) / 60;
    int s = total_segundos % 60;

    printf("%02d:%02d:%02d\n", h, m, s);

    return 0;
}