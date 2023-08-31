/*  +=========================================================================+
    |                                                                         |
    |             Universidade Federal do Rio Grande do Norte                 |
    |                                                                         |
    |                 Centro de Ensino Superior do Seridó                     |
    |                                                                         |
    |           Aluno -- Renan Missias Rodrigues Alves da Costa               |
    |                                                                         |
    |                  Disciplina DCT1106 -- Programação                      |
    |                                                                         |
    |                Projeto Sistema de Gestão para Óticas                    |
    |                                                                         |
    |             Developed by @RenanMRb - since august, 2023                 |
    |                                                                         |
    +=========================================================================+ */


#include <stdio.h>
#include <stdlib.h>


/////
//Assinaturas das funções
void tela_apresentacao(void);
void tela_sobre(void);
int tela_menu_principal(int op);
int tela_administrativo(int op);
int tela_fornecedor(int op);
int tela_produto(int op);
int tela_colaborador(int op);
int tela_cliente(int op);


/////
//Programa principal
int main(void) {
    int op;
    char cpf, re_cpf, nome, re_nome, dat_nasc, re_dat_nasc, cel, re_cel, endereco, re_endereco, email;
    tela_apresentacao();
    tela_sobre();
    tela_menu_principal(op);
    tela_administrativo(op);
    tela_fornecedor(op);
    tela_produto(op);
    tela_colaborador(op);
    tela_cliente(op);
    return 0;
}


/////
//Funções telas
//Apresentação
void tela_apresentacao(void) {
    system("clear");
    printf("+=========================================================================+\n");
    printf("|0123456789 0123456789 012345678|||||||||||9 0123456789 012346789 01234567|\n");
    printf("|                                                                         |\n");
    printf("|               Universidade Federal do Rio Grande do Norte               |\n");
    printf("|                                                                         |\n");
    printf("|                   Centro de Ensino Superior do Seridó                   |\n");
    printf("|                                                                         |\n");
    printf("|             Aluno -- Renan Missias Rodrigues Alves da Costa             |\n");
    printf("|                                                                         |\n");
    printf("|                    Disciplina DCT1106 -- Programação                    |\n");
    printf("|                                                                         |\n");
    printf("|                  Projeto Sistema de Gestão para Óticas                  |\n");
    printf("|                                                                         |\n");
    printf("|               Developed by @RenanMRb - since august, 2023               |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");  
    getchar();
}


//Sobre
void tela_sobre(void) {
    system("clear");
    printf("+=========================================================================+\n");
    printf("|0123456789 0123456789 012345678|||||||||||9 0123456789 012346789 01234567|\n");
    printf("|                                                                         |\n");
    printf("|         O projeto EAGLE EYES é um projeto de gestão de óticas .         |\n");
    printf("|                                                                         |\n");
    printf("|            Tem o objetivo de gerir e administrar uma ótica .            |\n");
    printf("|                                                                         |\n");
    printf("|                             > > ATENÇÃO < <                             |\n");
    printf("|                                                                         |\n");
    printf("|                   Este NÃO é um programa comercial .                    |\n");
    printf("|                                                                         |\n");
    printf("|       O desenolvedor não se responsabiliza por quaisquer danos !        |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
    getchar();
}


//Menu principal
int tela_menu_principal(int op) {
    system("clear");
    printf("+=========================================================================+\n");
    printf("|0123456789 0123456789 012345678|||||||||||9 0123456789 012346789 01234567|\n");
    printf("|                                                                         |\n");
    printf("|                       Menu principal - EAGLE EYES                       |\n");
    printf("|                                                                         |\n");
    printf("|                         1 -> Administrativo <-                          |\n");
    printf("|                                                                         |\n");
    printf("|                          2 -> Fornecedores <-                           |\n");
    printf("|                                                                         |\n");
    printf("|                            3 -> Produtos <-                             |\n");
    printf("|                                                                         |\n");
    printf("|                          4 -> Colaboradores <-                          |\n");
    printf("|                                                                         |\n");
    printf("|                            5 -> Clientes <-                             |\n");
    printf("|                                                                         |\n");
    printf("|                         0 -> Fechar programa <-                         |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
    printf("Selecione uma opção: \n");
    scanf("%d\n", &op);
    return op;
}


//Caminho administrativo
int tela_administrativo(int op) {
    system("clear");
    printf("+=========================================================================+\n");
    printf("|0123456789 0123456789 012345678|||||||||||9 0123456789 012346789 01234567|\n");
    printf("|                                                                         |\n");
    printf("|                       Administrativo - EAGLE EYES                       |\n");
    printf("|                                                                         |\n");
    printf("|                     1 -> Cadastrar administrador <-                     |\n");
    printf("|                                                                         |\n");
    printf("|                     2 -> Pesquisar admnistrador <-                      |\n");
    printf("|                                                                         |\n");
    printf("|                    3 -> Relatorio administradores <-                    |\n");
    printf("|                                                                         |\n");
    printf("|                     4 -> Relatorio fornecedores <-                      |\n");
    printf("|                                                                         |\n");
    printf("|                       5 -> Relatorio produtos <-                        |\n");
    printf("|                                                                         |\n");
    printf("|                     6 -> Relatorio colaboradores <-                     |\n");
    printf("|                                                                         |\n");
    printf("|                       7 -> Relatorio clientes <-                        |\n");
    printf("|                                                                         |\n");
    printf("|                     0 -> Voltar ao menu anterior <-                     |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
    printf("Selecione uma opção: \n");
    scanf("%d\n", &op);
    return op;
}


//Cadastrar administrador
int cadastro_cliente() {
    printf("+=========================================================================+\n");
    printf("|0123456789 0123456789 012345678|||||||||||9 0123456789 012346789 01234567|\n");
    printf("|                                                                         |\n");
    printf("|                     Cliente - Cadastro - EAGLE EYES                     |\n");
    printf("|                                                                         |\n");
    printf("|                        1 -> Cadastrar cliente <-                        |\n");
    printf("|                                                                         |\n");
    printf("|                        2 -> Pesquisar cliente <-                        |\n");
    printf("|                                                                         |\n");
    printf("|                     0 -> Voltar ao menu anterior <-                     |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
}


int tela_fornecedor(int op) {
    system("clear");
    printf("+=========================================================================+\n");
    printf("|0123456789 0123456789 012345678|||||||||||9 0123456789 012346789 01234567|\n");
    printf("|                                                                         |\n");
    printf("|                        Fornecedores - EAGLE EYES                        |\n");
    printf("|                                                                         |\n");
    printf("|                      1 -> Cadastrar fornecedor <-                       |\n");
    printf("|                                                                         |\n");
    printf("|                      2 -> Pesquisar fornecedor <-                       |\n");
    printf("|                                                                         |\n");
    printf("|                     0 -> Voltar ao menu anterior <-                     |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
    printf("Selecione uma opção: \n");
    scanf("%d\n", &op);
    return op;
}


int tela_produto(int op) {
    system("clear");
    printf("+=========================================================================+\n");
    printf("|0123456789 0123456789 012345678|||||||||||9 0123456789 012346789 01234567|\n");
    printf("|                                                                         |\n");
    printf("|                          Produtos - EAGLE EYES                          |\n");
    printf("|                                                                         |\n");
    printf("|                        1 -> Cadastrar produto <-                        |\n");
    printf("|                                                                         |\n");
    printf("|                        2 -> Pesquisar produto <-                        |\n");
    printf("|                                                                         |\n");
    printf("|                     0 -> Voltar ao menu anterior <-                     |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
    printf("Selecione uma opção: \n");
    scanf("%d\n", &op);
    return op;
}


int tela_colaborador(int op) {
    system("clear");
    printf("+=========================================================================+\n");
    printf("|0123456789 0123456789 012345678|||||||||||9 0123456789 012346789 01234567|\n");
    printf("|                                                                         |\n");
    printf("|                        Colaboradores - EAGLE EYE                        |\n");
    printf("|                                                                         |\n");
    printf("|                      1 -> Cadastrar colaborador <-                      |\n");
    printf("|                                                                         |\n");
    printf("|                      2 -> Pesquisar colaborador <-                      |\n");
    printf("|                                                                         |\n");
    printf("|                     0 -> Voltar ao menu anterior <-                     |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
    printf("Selecione uma opção: \n");
    scanf("%d\n", &op);
    return op;
}


int tela_cliente(int op) {
    system("clear");
    printf("+=========================================================================+\n");
    printf("|0123456789 0123456789 012345678|||||||||||9 0123456789 012346789 01234567|\n");
    printf("|                                                                         |\n");
    printf("|                          Clientes - EAGLE EYES                          |\n");
    printf("|                                                                         |\n");
    printf("|                        1 -> Cadastrar cliente <-                        |\n");
    printf("|                                                                         |\n");
    printf("|                        2 -> Pesquisar cliente <-                        |\n");
    printf("|                                                                         |\n");
    printf("|                     0 -> Voltar ao menu anterior <-                     |\n");
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
    printf("Selecione uma opção: \n");
    scanf("%d\n", &op);
    return op;
}


/////
//Telas universais
//CPF
char cpf(char cpf) {
    printf("+=========================================================================+\n");
    printf("|0123456789 0123456789 012345678|||||||||||9 0123456789 012346789 01234567|\n");
    printf("|                                                                         |\n");
    printf("|                               Eagle Eyes                                |\n");
    printf("|                                                                         |\n");
    scanf("%c|                             Digite o CPF :                              |\n", &cpf);
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
    return cpf;
}


//Reentrada CPF
char re_cpf(char re_cpf) {
    printf("+=========================================================================+\n");
    printf("|0123456789 0123456789 012345678|||||||||||9 0123456789 012346789 01234567|\n");
    printf("|                                                                         |\n");
    printf("|                               Eagle Eyes                                |\n");
    printf("|                                                                         |\n");
    printf("|                           CPF inválido ! ! !                            |\n");
    printf("|                                                                         |\n");
    scanf("%c|                             Digite o CPF :                              |\n", &re_cpf);
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
    return re_cpf;
}


//Nome
char nome(char nome) {
    printf("+=========================================================================+\n");
    printf("|0123456789 0123456789 012345678|||||||||||9 0123456789 012346789 01234567|\n");
    printf("|                                                                         |\n");
    printf("|                               Eagle Eyes                                |\n");
    printf("|                                                                         |\n");
    scanf("%c|                             Digite o nome :                             |\n", &nome);
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
    return nome;
}


//Reentrada nome
char re_nome(char re_nome) {
    printf("+=========================================================================+\n");
    printf("|0123456789 0123456789 012345678|||||||||||9 0123456789 012346789 01234567|\n");
    printf("|                                                                         |\n");
    printf("|                               Eagle Eyes                                |\n");
    printf("|                                                                         |\n");
    printf("|                           Nome inválido ! ! !                           |\n");
    printf("|                                                                         |\n");
    scanf("%c|                             Digite o nome :                             |\n", &re_nome);
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
    return re_nome;
}


//Cel
char cel(char cel) {
    printf("+=========================================================================+\n");
    printf("|0123456789 0123456789 012345678|||||||||||9 0123456789 012346789 01234567|\n");
    printf("|                                                                         |\n");
    printf("|                               Eagle Eyes                                |\n");
    printf("|                                                                         |\n");
    scanf("%c|                           Digite o celular :                            |\n", &cel);
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
    return cel;
}


//Reentrada cel
char re_cel(char re_cel) {
    printf("+=========================================================================+\n");
    printf("|0123456789 0123456789 012345678|||||||||||9 0123456789 012346789 01234567|\n");
    printf("|                                                                         |\n");
    printf("|                               Eagle Eyes                                |\n");
    printf("|                                                                         |\n");
    printf("|                           Nome inválido ! ! !                           |\n");
    printf("|                                                                         |\n");
    scanf("%c|                           Digite o celular :                            |\n", &re_cel);
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
    return re_cel;
}


//Data de nascimento
char dat_nasc(char dat_nasc) {
    printf("+=========================================================================+\n");
    printf("|0123456789 0123456789 012345678|||||||||||9 0123456789 012346789 01234567|\n");
    printf("|                                                                         |\n");
    printf("|                               Eagle Eyes                                |\n");
    printf("|                                                                         |\n");
    scanf("%c|                      Digite a data de nascimento :                      |\n", &dat_nasc);
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
    return dat_nasc;
}


//Reentrada data de nascimento
char re_dat_nasc(char re_dat_nasc) {
    printf("+=========================================================================+\n");
    printf("|0123456789 0123456789 012345678|||||||||||9 0123456789 012346789 01234567|\n");
    printf("|                                                                         |\n");
    printf("|                               Eagle Eyes                                |\n");
    printf("|                                                                         |\n");
    printf("|                    Data de nascimento inválida ! ! !                    |\n");
    printf("|                                                                         |\n");
    scanf("%c|                      Digite a data de nascimento :                      |\n", &re_dat_nasc);
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
    return re_dat_nasc;
}


//Email
char email(char email) {
    printf("+=========================================================================+\n");
    printf("|0123456789 0123456789 012345678|||||||||||9 0123456789 012346789 01234567|\n");
    printf("|                                                                         |\n");
    printf("|                               Eagle Eyes                                |\n");
    printf("|                                                                         |\n");
    scanf("%c|                           Digite o email :                              |\n", &email);
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");
    return email;
}


//Reentrada email
char re_email(char re_email) {
    printf("+=========================================================================+\n");
    printf("|0123456789 0123456789 012345678|||||||||||9 0123456789 012346789 01234567|\n");
    printf("|                                                                         |\n");
    printf("|                               Eagle Eyes                                |\n");
    printf("|                                                                         |\n");
    printf("|                          Email inválido ! ! !                           |\n");
    printf("|                                                                         |\n");
    scanf("%c|                            Digite o email :                             |\n", &re_email);
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");   
    return re_email;
}


//Entrada CEP
char cep(char cep) {
    printf("+=========================================================================+\n");
    printf("|0123456789 0123456789 012345678|||||||||||9 0123456789 012346789 01234567|\n");
    printf("|                                                                         |\n");
    printf("|                               Eagle Eyes                                |\n");
    printf("|                                                                         |\n");
    scanf("%c|                             Digite o CEP :                              |\n", &cep);
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");   
    return cep;
}


//Reentrada CEP
char re_cep(char re_cep) {
    printf("+=========================================================================+\n");
    printf("|0123456789 0123456789 012345678|||||||||||9 0123456789 012346789 01234567|\n");
    printf("|                                                                         |\n");
    printf("|                               Eagle Eyes                                |\n");
    printf("|                                                                         |\n");
    printf("|                           CEP inválido ! ! !                            |\n");
    printf("|                                                                         |\n");
    scanf("%c|                             Digite o cep :                              |\n", &re_cep);
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");   
    return re_cep;
}


/////Entrada endereço
//Estado
char estado(char estado) {
    printf("+=========================================================================+\n");
    printf("|0123456789 0123456789 012345678|||||||||||9 0123456789 012346789 01234567|\n");
    printf("|                                                                         |\n");
    printf("|                               Eagle Eyes                                |\n");
    printf("|                                                                         |\n");
    scanf("%c|                            Digite o estado :                           |\n", &estado);
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");   
    return estado;
}


//Reentrada estado
char re_estado(char re_estado) {
    printf("+=========================================================================+\n");
    printf("|0123456789 0123456789 012345678|||||||||||9 0123456789 012346789 01234567|\n");
    printf("|                                                                         |\n");
    printf("|                               Eagle Eyes                                |\n");
    printf("|                                                                         |\n");
    printf("|                          Estado inválido ! ! !                          |\n");
    printf("|                                                                         |\n");
    scanf("%c|                            Digite o estado :                            |\n", &re_estado);
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");   
    return re_estado;
}


//Cidade
char cidade(char cidade) {
    printf("+=========================================================================+\n");
    printf("|0123456789 0123456789 012345678|||||||||||9 0123456789 012346789 01234567|\n");
    printf("|                                                                         |\n");
    printf("|                               Eagle Eyes                                |\n");
    printf("|                                                                         |\n");
    scanf("%c|                            Digite a cidade :                            |\n", &cidade);
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");   
    return cidade;
}


//Reentrada cidade
char re_cidade(char re_cidade) {
    printf("+=========================================================================+\n");
    printf("|0123456789 0123456789 012345678|||||||||||9 0123456789 012346789 01234567|\n");
    printf("|                                                                         |\n");
    printf("|                               Eagle Eyes                                |\n");
    printf("|                                                                         |\n");
    printf("|                          Cidade inválida ! ! !                          |\n");
    printf("|                                                                         |\n");
    scanf("%c|                            Digite a cidade :                            |\n", &re_cidade);
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");   
    return re_cidade;
}


//Bairro
char bairro(char bairro) {
    printf("+=========================================================================+\n");
    printf("|0123456789 0123456789 012345678|||||||||||9 0123456789 012346789 01234567|\n");
    printf("|                                                                         |\n");
    printf("|                               Eagle Eyes                                |\n");
    printf("|                                                                         |\n");
    scanf("%c|                           Digite o bairro :                             |\n", &bairro);
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");   
    return bairro;
}


//Reentrada bairro
char re_bairro(char re_bairro) {
    printf("+=========================================================================+\n");
    printf("|0123456789 0123456789 012345678|||||||||||9 0123456789 012346789 01234567|\n");
    printf("|                                                                         |\n");
    printf("|                               Eagle Eyes                                |\n");
    printf("|                                                                         |\n");
    printf("|                          Bairro inválido ! ! !                          |\n");
    printf("|                                                                         |\n");
    scanf("%c|                           Digite o bairro :                             |\n", &re_bairro);
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");   
    return re_bairro;
}


//Rua
char rua(char rua) {
    printf("+=========================================================================+\n");
    printf("|0123456789 0123456789 012345678|||||||||||9 0123456789 012346789 01234567|\n");
    printf("|                                                                         |\n");
    printf("|                               Eagle Eyes                                |\n");
    printf("|                                                                         |\n");
    scanf("%c|                             Digite a rua :                              |\n", &rua);
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");   
    return rua;
}


//Reentrada rua
char re_rua(char re_rua) {
    printf("+=========================================================================+\n");
    printf("|0123456789 0123456789 012345678|||||||||||9 0123456789 012346789 01234567|\n");
    printf("|                                                                         |\n");
    printf("|                               Eagle Eyes                                |\n");
    printf("|                                                                         |\n");
    printf("|                           Rua inválida ! ! !                            |\n");
    printf("|                                                                         |\n");
    scanf("%c|                             Digite a rua :                              |\n", &re_rua);
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");   
    return re_rua;
}


//Entrada número
char numero(char numero) {
    printf("+=========================================================================+\n");
    printf("|0123456789 0123456789 012345678|||||||||||9 0123456789 012346789 01234567|\n");
    printf("|                                                                         |\n");
    printf("|                               Eagle Eyes                                |\n");
    printf("|                                                                         |\n");
    scanf("%c|                            Digite o numero :                            |\n", &numero);
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");   
    return numero;
}


//Reentrada número
char re_numero(char re_numero) {
    printf("+=========================================================================+\n");
    printf("|0123456789 0123456789 012345678|||||||||||9 0123456789 012346789 01234567|\n");
    printf("|                                                                         |\n");
    printf("|                               Eagle Eyes                                |\n");
    printf("|                                                                         |\n");
    printf("|                          Número inválido ! ! !                          |\n");
    printf("|                                                                         |\n");
    scanf("%c|                            Digite o número :                            |\n", &re_rua);
    printf("|                                                                         |\n");
    printf("+=========================================================================+\n");   
    return re_rua;
}
