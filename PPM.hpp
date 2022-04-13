#ifndef PPM_H_INCLUDED
#define PPM_H_INCLUDED

#include <string>
#include <fstream>

class PPM
{
public:
    PPM();
    ~PPM();

    bool ler(std::string caminho);
    bool gravar(std::string caminho);

    //retorna o vetor de pixels por referência! As alteraçõe realizadas fora da classe serão gravadas no vetor!
    unsigned char* & getPixels();

    //atribui uma cor a um quadro sem preenchimento
    void Quadro(int x1, int y1, int x2, int y2,unsigned char corR, unsigned char corG, unsigned char corB);
    //cria uma imagem da cor preta com a altura e largura passada
    void CriaFundo(int x, int y);
    //pega um quadro de uma imagem passando as coordenadas do quadro
    void PegaQuadro( int x1, int y1, int x2, int y2);
    //gravar o quadro salvo e uma imagem
    void GravaQuadro();
    //inverte as cores para cinza
    void InverterCores();
    //adicionar uma linha de cor aleatoria em uma imagem
    void LinhaAleatoria(int x, int y, unsigned char corR, unsigned char corG, unsigned char corB);
    
    void getPixel(int x, int y, unsigned char *corR, unsigned char *corG, unsigned char *corB);

    void setPixel(int x, int y, unsigned char corR, unsigned char corG, unsigned char corB);

    int getLargura();
    int getAltura();


private:
    bool lerDado(std::ifstream &arq, std::string *dado);

    std::string tipo;
	int larg;
	int alt;
	int vmax;
	unsigned char* pixels; // unsigned char -> 0 a 255
    unsigned char* pixelsQuadro; // auxiliar para guardar o quadro

};

#endif