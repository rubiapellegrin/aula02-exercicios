#include <iostream>
#include "PPM.hpp"

using namespace std;

int main(void)
{
	setlocale(LC_ALL, "Portuguese");
	
	PPM *img = new PPM();

	//exercicio 1
	img->ler("numeros.ppm");
	//SET
	//img->setPixel(1, 0, 0, 128, 128); // pixel(1, 0), RGB(0, 128, 128)
	//GET
	unsigned char r=255, g=0, b=0;
	//int x = 0, y=0;
	//img->getPixel(x, y, &r, &g, &b);
	//cout << "A cor do pixel(" << x << ", " << y << ") é " << "[" << (int) r << ", " << (int) g << ", " << (int) b << "]\n";
	img->Quadro( 204, 24, 374, 279, r, g, b);
	//Gravar
	img->gravar("saida.ppm");
	delete img;


	//exercicio2
	PPM *img2 = new PPM();
	r=0;
	img2->CriaFundo(500, 500);
	img2->LinhaAleatoria(500, 500, r, g, b);
	img2->gravar("saidaFundoPreto.ppm");
	delete img2;



	//exercicio3
	PPM *img3 = new PPM();
	img3->ler("numeros.ppm");
    int largura = img3->getLargura();
    int altura = img3->getAltura();
	img3->PegaQuadro(136,304,386,552);
	img3->CriaFundo(largura, altura);
	img3->GravaQuadro();
	img3->gravar("saidaFundoPretoLetras.ppm");
	delete img3;

	//exercicio4
	PPM *img4 = new PPM();
	img4->ler("spider.ppm");
	img4->InverterCores();
	img4->gravar("saidaSpider.ppm");
	delete img4;

	
	return EXIT_SUCCESS; 
}
