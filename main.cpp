//Hiago Rafael de Souza
//72918
//Engenharia de Computação


#include <iostream>
#include <string>
#include <unordered_map> //padronizado

int main()
{

    std::string buffer;
    std::string digito;
    std::string nome;
    std::string telefone;
    std::unordered_map<std::string, std::string> hash;
    std::unordered_map<std::string, std::string>::iterator it;

    for (;;)
    {
        std::getline(std::cin, buffer);
        buffer = buffer.substr(0, buffer.length() - 1);
        size_t inicio = 0;
        size_t fim = buffer.find(" ");
        digito = buffer.substr(inicio, fim - inicio);
        inicio = fim + 1;
        fim = buffer.find(" ", inicio);
        nome = buffer.substr(inicio, fim - inicio);
        inicio = fim + 1;
        fim = buffer.find(" ", inicio);
        telefone = buffer.substr(inicio);
        if (digito == "I")
        {
            it = hash.find(nome);
            if (it == hash.end())
                hash[nome] = telefone;
            else
                std::cout << "Contatinho ja inserido" << "\n";
        }
        else if (digito == "P")
        {
            it = hash.find(nome);
            if (it != hash.end())
                std::cout << "Contatinho encontrado: telefone " + it->second << "\n";
            else
                std::cout << "Contatinho nao encontrado" << "\n";
        }
        else if (digito == "R")
        {
            if (hash.erase(nome) == 0)
                std::cout << "Operacao invalida: contatinho nao encontrado" << "\n";
        }
        else if (digito == "A")
        {
            it = hash.find(nome);
            if (it != hash.end())
                it->second = telefone;
            else
                std::cout << "Operacao invalida: contatinho nao encontrado" << "\n";
        }
        else
        {
            exit(0);
        }
    }

    return 0;
}
