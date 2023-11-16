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
typedef struct fornecedor Fornec;

struct fornecedor {
    char cnpj[15];
    char email[47];
    char cel[12];
    char nome[47];
    char status;
};

//Declaração das funções do arquivo fornecedor.c
//
void modulo_fornecedor (void);
Fornec* cad_fornec (void);
Fornec* pesq_fornec (void);
void excluir_fornec (char*);
void remove_fornec (Fornec*);
void gravar_fornec (Fornec*);
Fornec* carregar_fornec (char*);
int verify_cnpj_dat_fornec (char*);
void regravar_fornec (Fornec*, char);
void edit_cad_fornec (Fornec*, char);