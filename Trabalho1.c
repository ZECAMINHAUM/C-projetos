#include<stdio.h>
#include<stdlib.h>
#include<math.h>

typedef struct ponto{
  float x,y;
}PONTO;

typedef struct circulo{
  float raio;
}CIRCULO;

void Distancia(PONTO p1,PONTO p2, CIRCULO c);
void CalArea (CIRCULO c);
void Perimetro(CIRCULO c);
void tadentro(float resu, float raio);

main(){

  CIRCULO c;
  PONTO p1;
  PONTO p2;

  printf("digite o raio do CIRCULO\n");
  scanf("%f", &c.raio);
  fflush(stdin);
  printf("Digite o X do ponto A\n");
  scanf("%f", &p1.x);
  fflush(stdin);
  printf("Digite o Y do ponto A\n");
  scanf("%f", &p1.y);
  fflush(stdin);
  printf("Digite o X do ponto B\n");
  scanf("%f", &p2.x);
  fflush(stdin);
  printf("Digite o Y do ponto B\n");
  scanf("%f", &p2.y);
  fflush(stdin);

  CalArea(c);
  Perimetro(c);
  Distancia(p1,p2,c);
  getchar();


}
  void Distancia(PONTO p1,PONTO p2, CIRCULO c){

    float resu;
    float raio = c.raio;

    p1.x = p1.x - p2.x;
    p1.y = p1.y - p2.y;

    resu = pow(p1.x, 2) + pow(p1.y, 2);
    resu = sqrt(resu);
    printf("Distancia: %f\n", resu);

    tadentro(resu, raio);

  }

  void CalArea (CIRCULO c){
    float resu;
    resu = pow(c.raio, 2)*3.14;
    printf("A area do circulo:%f\n",resu);
  }

  void Perimetro(CIRCULO c){
    float resu;
    resu = pow(3.14, 2)*c.raio;
    printf("O perimetro do circulo:%f\n", resu);
  }

  void tadentro(float resu, float raio){
    if(resu > raio){
      printf("O ponto B não esta dentro do Circulo\n");
    }else{
      printf("O ponto B esta dentro do Circulo\n");
    }
  }
