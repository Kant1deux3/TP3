#include <stdio.h>

int main(void) {
  float Temp[24];
  int i;
  float temperature;
  

  //Demande des températures
  for(i=0; i<24; i++)
  {
    do
    {
      printf("Donnez une température à %dh\n",i);
      scanf("%f", &temperature);
    }while(temperature<-40 || temperature>50);
    Temp[i]=temperature;
  }
    //Afficher les températures

    for(i=0; i<24; i++)
    {
      printf("température à %dh ",i);
      printf("est %f°\n", Temp[i]);
    }
return 0;
}
