# Questão 48

Leia um valor inteiro em segundos, e imprima-o em horas, minutos e segundos.

<details>
  <summary>Resposta</summary>

```c
#include <stdio.h>

int main() {
    int segundos;
    scanf("%d", &segundos);
    //conversão de segundos para horas é só dividir por 3600
    int horas = segundos / 3600;
    //os segundos que sobraram das horas são convertidos para minutos(só dividir por 60)
    int minutos = (segundos % 360) / 60;
    //os segundos vão ser atualizados para ser apenas o que sobrou dos minutos
    segundos = (segundos % 360) % 60;
    //print formatado para mostrar HH:MM:SS
    printf("%d:%02d:%02d\n", horas, minutos, segundos);
    return 0;
}
```

</details>

## Casos de Teste

```
>>>>>>>> INSERT
3661
======== EXPECT
1:01:01
<<<<<<<< FINISH

>>>>>>>> INSERT
60
======== EXPECT
0:01:00
<<<<<<<< FINISH

>>>>>>>> INSERT
3600
======== EXPECT
1:00:00
<<<<<<<< FINISH

>>>>>>>> INSERT
0
======== EXPECT
0:00:00
<<<<<<<< FINISH
```

[Código](./C/draft.c)
