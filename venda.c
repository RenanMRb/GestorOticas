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
#include "all.h"


void modulo_venda(void) {
    setlocale(LC_ALL, "Portuguese_Brazil");
    int op;
    do {
        op = menu_venda();
        switch (op) {
            case 1:
                cad_venda();
                break;
            case 2:
                pesq_venda();
                break;
            case 0:
                break;
            default:
                tela_erro();
                break;
        }
    }
    while (op != 0);
}


void cad_venda(void) {
    tela_cad_venda();
    tela_venda_colab();
    ent_cpf();
    tela_cad_venda();
    tela_venda_produt();
    ent_cod_barras();
    tela_cad_venda();
    tela_venda_q_prod();
    ent_quant();
    tela_cad_venda();
    tela_venda_cliente();
    info_cliente_0();
    ent_cpf();
    tela_venda_ok();
}


void pesq_venda(void) {
    tela_pesq_venda();
    ent_id_venda();
    dados_venda();
}