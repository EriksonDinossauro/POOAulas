// Tema 2 - Teste de For�a.
#include <iostream>
#include <string>
#include <ctime>
using namespace std;

int main(int argc, char* args[])
{
   // declarando variaveis
	bool sair = false;
	string jog1, jog2;
	int vida1 = 20, vida2 = 20;
	int A = 4, D = 2;
   
    
	// L� o nome dos jogadores
	cout << "Digite o nome do jogador 1:" << endl;
	cin >> jog1;
	cout << "Digite o nome do jogador 2:" << endl;
	cin >> jog2;

	while (sair == false)
	{
		// Mostra os personagens em tela.
		cout << " o                   o" << endl;
		cout << ".T./               \\.T." << endl;
		cout << " ^                   ^" << endl;
		// Mostra o nome dos jogadores.
		cout << jog1 << "               " << jog2 << endl;
		// Mostrar dano e acertos
		cout << "A: " << A << "          " << "A: " << A << endl;
		cout << "D: " << D << "          " << "D: " << D << endl;
     // Mostra a vida dos personagens.
		cout << "Vida: " << vida1 << "          " << "Vida: " << vida2 << endl;

		// Espera o usu�rio apertar ENTER para iniciar a pr�xima rodada da luta.
		system("pause");

		int dado6;

		// Usa o tempo atual como "semente" do gerador
		srand((int)ctime(0));
		// Gera um n�mero aleat�rio entre 1 e 100
		dado6 = rand() % 6 + 1;
		// Causa dano igual o valor gerado no "dado"
		vida1 = vida1 - dado6;

		// Mesma coisa para o Jogador 2
		dado6 = rand() % 6 + 1;
		vida2 = vida2 - dado6;

		// Se sair n�o limpa a tela
		if (vida1 <= 0 || vida2 <= 0)
		{
			sair = true;
		}
		// Se continuar ent�o limpa a tela
		else system("cls");
	}
    // se o dado for igual a 4 entao teve acertos mas caso contr�rio tiveram erros
   if (dado6 = 4) cout << jog1 << " acertou!" << endl;
   else if (dado6 != 4) cout << jog1 << " errou!" << endl;
	if (dado6 = 4) cout << jog2 << " acertou!" << endl;
    else if (dado6 != 4) cout << jog2 << " errou!" << endl;
    // Verifica quem venceu o jogo.
	if (vida1 > 0) cout << jog1 << " Venceu!" << endl;
	else if (vida2 > 0) cout << jog2 << " Venceu!" << endl;
	// Se a vida dos dois chegar a menos de 0 (zero) quer dizer que os dois perderam.
	else cout << "Os dois perderam!" << endl;

	return 0;
}
