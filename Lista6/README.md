# Exercícios – Conceitos Básicos da Linguagem C (Lista 6)

18) Escreva um programa em C para armazenar o nome completo, o salário e o número
de matrícula de 3 funcionários. O nome deve ser armazenado no vetor nomeFunc, o salário
no vetor salarioFunc e a matrícula no vetor matriculaFunc. Quando o usuário informar via
teclado os dados referentes ao nome, salário e matrícula, os respectivos vetores devem
receber tais dados. Exemplo:
Digite sua matricula: 124 -> armazenar no vetor matriculaFunc
Digite seu nome: Maria das Couves -> armazenar no vetor nomeFunc
Digite seu salário: 1500.00 -> armazenar no vetor salarioFunc
Após a digitação dos dados pelo usuário, os mesmos devem ser gravados no arquivo
funcionarios.dat, de modo que as informações de um funcionário ocupe uma linha deste
arquivo. Exemplo:
124 Maria das Couves 1500.00
234 José Afrânio Silva 1780.00
119 Azambuja Costa 2123.00
Para ler o conteúdo do arquivo após a gravação dos dados, acesse o arquivo
funcionarios.dat no modo leitura e imprima na tela. 

19) Reescreva o programa feito no exercício anterior, de modo que ele passe a utilizar
estrutura (struct) para manipular os dados de um funcionário (inclusive a leitura do teclado e
a manipulação do arquivo funcionarios.dat).
