# Little-Contacts-Adminstration

## Secundo trabalho prático - Estruturas de dados 

2 Administrando os Contatinhos
Essa vida de pessoa linda cansa (´e o que dizem). Depois de um certo tempo,
fica muito difıcil manter tantos contatinhos. Al´em de ter que guardar as
informacoes de cada novo contatinho, ´e preciso conseguir alterar e ainda
lembrar dessas informações. Para piorar, podemos querer esquecer que uma
@ existe. As vezes não dá certo mesmo :(. 
A sua sorte ´e que vocˆe est´a fazendo AED2 e, por isso, aprendeu maneiras muito boas para armazenar e manipular os dados dos seus contatinhos.
Agora, a sua miss˜ao ´e construir uma agenda de contatos.
Entrada
A entrada cont´em a descri¸c˜ao de v´arias opera¸c˜oes. Cada uma dessas opera¸c˜oes
´e apresentada em uma ´unica linha, iniciada por um caractere, que define qual
´e a opera¸c˜ao a ser realizada. A seguir, ´e apresentado um nome (com at´e 10
caracteres, sem espa¸co em branco). Nas opera¸c˜oes de inser¸c˜ao e altera¸c˜ao,
tamb´em ´e apresentado um n´umero de telefone, composto por um n´umero de
nove d´ıgitos. A exceção é a operação representada pela letra ‘S’, que se refere
ao fim do programa.
Especificamente, as operações são apresentadas no seguinte formato:
• I nome 123456789 - inserir um novo contato com nome ‘nome’ e telefone
‘123456789’
• P nome - pesquisar por um contato
• R nome - remover um contato com nome ‘nome’
• A nome 987654321 - alterar o telefone de um contato com nome ‘nome’
para ‘987654321’
• 0 - sair do programa
Considere que seu programa pode receber at´e 109 opera¸c˜oes.

## Saída

A saıda do programa deve conter feedbacks de cada uma das opera¸c˜oes descritas anteriormente.
A inser¸c˜ao n˜ao deve inserir pessoas com nomes iguais. Caso isso seja tentado, seu programa deve imprimir ‘Contatinho ja inserido’. Caso contrario,
nada deve ser impresso na tela.
Para a remo¸c˜ao e a altera¸c˜ao, s´o deve ser produzida sa´ıda quando um
contato n˜ao for encontrado. Em ambos os casos, o programa deve imprimir
‘Operacao invalida: contatinho nao encontrado’.
Na pesquisa, caso o contato com nome ‘nome’ seja encontrado, o programa
deve imprimir a frase ‘Contatinho encontrado: telefone 123456789’, em que
‘123456789’ deve ser substitu´ıdo pelo n´umero armazenado na agenda. Caso
n˜ao seja encontrado, o programa deve imprimir ‘Contatinho nao encontrado’.
N˜ao esque¸ca de pular de linha (‘\n’) ao final de cada linha.


## Exemplo de entrada
I dolores 159753456
I maria 784512369
P francisca
A dolores 543216987
P dolores
R francisca
I dolores 123456789
0

Saıda esperada para esse exemplo:

Contatinho nao encontrado
Contatinho encontrado: telefone 543216987
Operacao invalida: contatinho nao encontrado
Contatinho ja inserido
