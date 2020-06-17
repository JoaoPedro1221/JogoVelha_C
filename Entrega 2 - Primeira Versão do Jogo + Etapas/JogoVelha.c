#include <stdio.h>
#include <stdlib.h>


char Tabuleiro[3][3];
int xpts=0, opts=0;
bool Marcar ( char Simbolo, int linha, int coluna)
{
    if (Tabuleiro[linha][coluna] == ' ')
    {
        Tabuleiro[linha][coluna] = Simbolo;
        return true;
    }
    return false;
}
void Mostra ()
{
    cout <<" " <<  Tabuleiro[0][0] << " | " << Tabuleiro[0][1] << " | " << Tabuleiro[0][2] << endl
         << "---|---|---" << endl
         <<" " << Tabuleiro[1][0] << " | " << Tabuleiro[1][1] << " | " << Tabuleiro[1][2] << endl
         << "---|---|---" << endl
         <<" " << Tabuleiro[2][0] << " | " << Tabuleiro[2][1] << " | " << Tabuleiro[2][2] << endl;
}

bool VerificaVitoria()
{
    // VERIFICA SE O JOGADOR GANHOU LINHAS
    if (    (Tabuleiro[0][0] == Tabuleiro [0][1] && Tabuleiro[0][1] == Tabuleiro[0][2]&& Tabuleiro[0][0] == 'x') ||
            (Tabuleiro[1][0] == Tabuleiro [1][1] && Tabuleiro[1][1] == Tabuleiro[1][2]&& Tabuleiro[1][0] == 'x') ||
            (Tabuleiro[2][0] == Tabuleiro [2][1] && Tabuleiro[2][1] == Tabuleiro[2][2]&& Tabuleiro[2][0] == 'x') )
    {

            cout << "\nJogador X ganhou\n";
            xpts=xpts+1;
            return true;

    }

    else if((Tabuleiro[0][0] == Tabuleiro [0][1] && Tabuleiro[0][1] == Tabuleiro[0][2]&& Tabuleiro[0][0] == 'o') ||
            (Tabuleiro[1][0] == Tabuleiro [1][1] && Tabuleiro[1][1] == Tabuleiro[1][2]&& Tabuleiro[1][0] == 'o') ||
            (Tabuleiro[2][0] == Tabuleiro [2][1] && Tabuleiro[2][1] == Tabuleiro[2][2]&& Tabuleiro[2][0] == 'o') )
    {
        cout << "\nJogador O ganhou\n";
            opts=opts+1;
            return true;
    }

    //VERIFICA SE O JOGADOR GANHOU COLUNAS
    else if ((Tabuleiro[0][0] == Tabuleiro [1][0] && Tabuleiro[1][0] == Tabuleiro[2][0] && Tabuleiro[0][0] == 'x')||
             (Tabuleiro[0][1] == Tabuleiro [1][1] && Tabuleiro[1][1] == Tabuleiro[2][1] && Tabuleiro[0][1] == 'x')||
             (Tabuleiro[0][2] == Tabuleiro [1][2] && Tabuleiro[1][2] == Tabuleiro[2][2] && Tabuleiro[0][2] == 'x'))
    {


            cout << "\nJogador X ganhou\n";
            xpts=xpts+1;
            return true;

    }
    else if ((Tabuleiro[0][0] == Tabuleiro [1][0] && Tabuleiro[1][0] == Tabuleiro[2][0] && Tabuleiro[0][0] == 'o')||
             (Tabuleiro[0][1] == Tabuleiro [1][1] && Tabuleiro[1][1] == Tabuleiro[2][1] && Tabuleiro[0][1] == 'o')||
             (Tabuleiro[0][2] == Tabuleiro [1][2] && Tabuleiro[1][2] == Tabuleiro[2][2] && Tabuleiro[0][2] == 'o'))
    {

            cout << "\nJogador O ganhou\n";
            opts=opts+1;
            return true;

    }
}
