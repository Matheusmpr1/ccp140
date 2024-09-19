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

    Pessoa* pessoas[2];
    pessoas[0] = &p;
    pessoas[1] = &f;

    for(int i=0;i<2;i++){
       pessoas[i] -> print();
    }


  //  cout << "Dados da funcionario" << endl;
  //    cout << "Nome: " << f.getNome() << " " << f.getSobrenome() << endl;
  //  cout << "CPF: " << f.getCPF() << endl;
  //  cout << "Data de Nascimento: " << f.getNascimento() << endl;
  //  cout << "Endereço: " << f.getEndereco() << endl;


}
