#include <stdio.h>

int main(void) {
  float Temp[5];
  int i;
  float temperature;
  

  //Demande des températures
  for(i=0; i<5; i++)
  {
    do
    {
      printf("Donnez une température à %dh\n",i);
      scanf("%f", &temperature);
    }while(temperature<-40 || temperature>50);
    Temp[i]=temperature;
  }
    //Afficher les températures

    for(i=0; i<5; i++)
    {
      printf("température à %dh ",i);
      printf("est %f°\n", Temp[i]);
    }
return 0;
}
