# TP3

PréAlgo :

Demande à l'tilisateur les 24 températures entre -40° et +50°
Mémoriser les 24 tempértures
Afficher les 24 températures

Données :

1 tableau pour les températures -> 24 réels
1 variable i -> entier



Algo :


Programme météo (néant) : néant
Début

  Temp[24]:réels;
  i:entier;
  température : réel;
  
  //Demande des températures
  
  Pour i<-0 à i=23 par pas de 1 faire
  Début
  
    Répéter
    Début
    
      afficher("Donnez une température");
      température <- saisieclavier();
      
    Jusqu'à ce que(température>-40 et température<50)
   
    Temp[i]<-température;
    
  Fin
  
  //Afficher les températures
  
   Pour i<-0 à i=23 par pas de 1 faire
   
   Début
   
      Afficher("température à",i, "est",Temp[i]);
      
   Fin
   
Fin
