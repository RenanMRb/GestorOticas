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


/////
//Criação da struck
//
typedef struct colaborador Colab;

struct colaborador {
    char cpf[12];
    char email[47];
    char cel[12];
    char nome[47];
    char status;
};

//Declaração das funções do arquivo colaborador.c
//
void modulo_colaborador (void);
Colab* cad_colab (void);
Colab* pesq_colab (void);
void excluir_colab(char*);
void remove_colab(Colab*);
void gravar_colab (Colab*);
Colab* carregar_colab (char*);
int verify_cpf_dat_colab (char*);
void regravar_colab(Colab*, char);
void edit_cad_colab (Colab*, char);