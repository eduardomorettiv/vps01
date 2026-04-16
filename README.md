# vps01
# Título: VPS01
## Subtítulo descrição: Verificação Prática Somativa 01
Arquivos gerados durante a avaliação de Lógica de Programação, algoritmos e fluxogramas

## Tecnologias

|Tecnologia|Utilizade|
|:-:|-|
|Linguágem **C**|Desenvolvimento|
|IDE|Embarcadero **DevC++**|
|[Draw.io](https://app.diagrams.net/)|Desenhar os *fluxogramas*|
|Bloco de notas|*portugol* lógica|

## Como testar
- 1 Clone este repositório
- 2 Abra os arquivos .c com o DevC++
- 3 Pressione F11 para compilar executar

    ```c
    #include<stdio.h>
    #include<windows.h>
    void main(){
        SetConsoleOutputCP(CP_UTF8);
        char nome[20], sexo;
        int idade;
        printf("Digite seu nome, sexo m/f e idade\n");
        scanf(" %s %c %d", &nome, &sexo, &idade);
        if(sexo == 'm'){
            if(idade > 65){
                printf("O atendimento do paciente %s é prioritário", nome);
            }else{
                printf("O atendimento do paciente %s é normal", nome);
            }
    }else{
        if(idade > 60){
            printf("O atendimento do paciente %s é prioritário", nome);
        }else{
            printf("O atendimento do paciente %s é normal", nome);
        }
        }
        getch();
    }
    ```
![Fluxograma](./atendimento.png)

## Expressões matemáticas

|Operação|Código Markdown|Visão|
|-|-|-|
|Multiplicação|`$2 \times 3 = 6$`|$2 \times 3 = 6$|
|Divisão|`$6 \div 2 = 3$`|$6 \div 2 = 3$|
|Fração|`$\frac{1}{2}$`|$\frac{1}{2}$|
|Raiz quadrada|`$\sqrt{4} = 2$`|$\sqrt{4} = 2$|
|Exponenciação|`$2^3 = 8$`|$2^3 = 8$|
|Logaritmo|`$\log_{10} 100 = 2$`|$\log_{10} 100 = 2$|
