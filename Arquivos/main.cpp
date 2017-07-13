#include <iostream>
#include <string.h>
#include <fstream>

using namespace std;

int main()
{

    fstream out; // arquivo onde os dados serão gravados
    fstream in; // arquivos onde os dados serão lidos

    in.open("input.txt",ios::in);

    string inContent = "";
    string line = "";

    if(in.is_open()){
        while(!in.eof()){
            getline(in,line);
            inContent += line;
        }
        in.close();
    }

    if(inContent.empty()){

        in.open("input.txt",ios::out);
        in << "Título do Documento\n\n";
        in << "Parágrafo 1.\n\n";
        in << "Parágrafo 2.\n";
        in.close();

    }


    out.open("output.txt",ios::out);
    in.open("input.txt",ios::in);

    if(in.is_open()){

        inContent = "";
        line = "";

        while(!in.eof()){
            getline(in,line);
            inContent += line+"\n";
        }

        in.close();
    }

    out << inContent;

    out.close();

    cout << "Arquivo copiado com sucesso!" << endl;





}
