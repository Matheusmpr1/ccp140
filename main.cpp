#include<iostream>
#include "Pessoa.cpp"
#include "MinhasExececoes.cpp"
#include "Funcionario.cpp"
using namespace std;


int main () {
    Endereco e("Rua R", 1, "Bairro B");
    Pessoa p ("Nome", "Sobrenome", 7865270256, 11, 9, 2001, e);
    Funcionario f ("Funcionario","Sobrenome",123456789,18,9,2024,e,100000,1);
    //p.setNome("Nome");
    //p.setSobrenome("Sobrenome");
    //p.setCPF(7865270256);

    cout << "Dados da Pessoa" << endl;
    cout << "Nome: " << p.getNome() << " " << p.getSobrenome() << endl;
    cout << "CPF: " << p.getCPF() << endl;
    cout << "Data de Nascimento: " << p.getNascimento() << endl;
    cout << "Endereço: " << p.getEndereco() << endl;



    cout << "Dados da funcionario" << endl;
    cout << "Nome: " << f.getNome() << " " << f.getSobrenome() << endl;
    cout << "CPF: " << f.getCPF() << endl;
    cout << "Data de Nascimento: " << f.getNascimento() << endl;
    cout << "Endereço: " << f.getEndereco() << endl;


}
