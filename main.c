/*  ("+=========================================================================+\n")
    ("|                                                                         |\n")
    ("|               Universidade Federal do Rio Grande do Norte               |\n")
    ("|                                                                         |\n")
    ("|                   Centro de Ensino Superior do Seridó                   |\n")
    ("|                                                                         |\n")
    ("|             Aluno -- Renan Missias Rodrigues Alves da Costa             |\n")
    ("|                                                                         |\n")
    ("|                    Disciplina DCT1106 -- Programação                    |\n")
    ("|                                                                         |\n")
    ("|                  Projeto Sistema de Gestão para Óticas                  |\n")
    ("|                                                                         |\n")
    ("|               Developed by @RenanMRb - since august, 2023               |\n")
    ("|                                                                         |\n")
    ("+=========================================================================+\n")  */


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "telas_princip.h"
#include "telas.h"
#include "ent_dados.h"
#include "menus.h"
#include "administrativo.h"
#include "fornecedor.h"


/////
//Programa principal
int main(void) {
    setlocale(LC_ALL, "Portuguese_Brazil");
    int op0;
    {
    tela_sobre();
    tela_apresentacao();
    do {
        op0 = menu_principal();
        switch (op0) {
            case 1:
                modulo_administrativo();
                break;
            case 2:
                modulo_fornecedor();
                break;
            case 3:
                //modulo_produto();
                break;
            case 4:
                //modulo_colaborador();
                break;
            case 5:
                //modulo_cliente();
                break;
            case 0:
                 break;
            }
        }
    while (op0 != 0);
    return 0;
    }
}