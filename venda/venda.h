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
typedef struct venda Vend;

struct venda {
    char cpf_cli[12];
    char cpf_col[12];
    char cod_barras[14];
    char desc[47];
    char quant[9];
    char valor_vend_uni[9];
    char valor_vend_tot[20];
    int id;
    char status;
};


void modulo_venda (void);
Vend* cad_vend (void);
void gravar_vend (Vend* ven);
Vend* pesq_vend (void);
Vend* carregar_vend (int);
void excluir_vend (Vend* ven);
int gera_id_vend (void);