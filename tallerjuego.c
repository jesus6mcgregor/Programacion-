#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  int situaciones, FERXXOS, Hobbits, Chuchovenitez, Montapuercos, Shakira,  HP, opcion, arma, dano, ataque, uno;
  char nombre[100];
  HP=400;
  printf("Bienvenido viajero, cual es tu nombre?\n");
  scanf("%s", nombre);
  printf("%s escoge tu arma:\n", nombre);
  printf("1-Ironheart(Daño=45)\n");
  printf("2-guanteletedelinfinito(Daño=67)\n");
  printf("3-escopeta(Daño=32)\n");
  scanf("%d",&arma);
  switch(arma){
    case 1:
    dano=45;
    break;

    case 2:
    dano=67;
    break;
    case 3:
    dano=32;
    break;
  }

  for(int x = 0; x < 2; x++){
    srand(time(NULL)); //Generamos número aleatorio en base al tiempo
	  situaciones = rand() % 5 + 1;
    if(x==0){
      uno=situaciones;
    }
    else{
      if(situaciones==uno){
        situaciones++;
      }
    }
    if(HP>0){
    switch(situaciones){
      case 1:
        printf("Estas en un mundo paralelo en donde te encuentras con personajes famosos, y te encuentras con varios de estos personajes que amenazan la realidad, este mundo esta siendo destruido por estos personajes, y muchas de las personas que viven en ese mundo estan capturadas que haces? \n 1-ayudar a salvar al mundo \n 2-abandonarlos y uir  \n");
        scanf("%d", &opcion);
        switch(opcion){
          case 1:
          printf("Decides ayudar al mundo, cada vez mas cerca estan las personas capturadas, los FERXXOS no eran rivales tan poderosos asi que logras deshacerte de ellos sin problemas, pero un FERXXO logró MALDECIRTE por el resto de tu aventura \n -15 HP \n");
          HP-=15;
          printf("Como recompensa a tu heroismo, una de las personas te comenta que esa maldicion te dara mas poder Daño + 15 \n");
          dano+=15;
          break;

          case 2:
          printf("No tienes tiempo para pelear con mas FERXXOS, tu camino no ha terminado y decides seguir, pero sientes un poco extraño, como si alguien hubiera puesto una maldiciondentro de ti, no tienes fuerzas para utilizar tu arma. \n -10 Daño \n");
          dano-=10;
          break;
        }
      break;
      case 2:
        Hobbits=150;
        printf("Estas caminando y escuchas muchos minipasos como si alguien estubiera marchando. Al voltear a ver, te encuentras con varios hobbits. Sabes que tienes que actuar con rapidez si quieres sobrevivir. \n Los hobbits avanzan rapidamente, levantando sus armas al aire. Tienes que decidir qué hacer:\n 1-Esquivar a los hobbits \n 2-atacar \n");
        scanf("%d", &opcion);
        switch(opcion){
          case 1:
            printf("Te deslizas para un lado para esquivar a los hobbits. Sin embargo, los hobbits son rapidos e inteligentes, y de pronto es una batalla campal.\n");
          break;
          case 2:
          printf("Te perapras para atacar a los hobbits sacando tu arma. Los hobbits son rapidos y agiles, pero tu arma logra causarles daño. La pelea se es epica, con ambos luchadores cansados y heridos.\n");
          break;
        }
        while(Hobbits>0){

	        ataque = rand() %  20+1;
          if(ataque<20){
            Hobbits-=dano;
            printf("Has golpeado a los hobbits! \n Daño-> %d\n", dano);
          }
          printf("Los hobbits te golpearon! \n HP - %d\n", ataque);
          HP-=ataque;
          if(HP<=0){
            break;
          }
        }
        printf("Finalmente, logras asestar un ataque preciso sobre los hobbits, lo que los hace tener miedo. Te alejas de los hobbits, sintiendo la adrenalina correr por tu cuerpo. Has sobrevivido a la pelea con éxito, pero sabes que tienes que tener más cuidado la próxima vez que te aventures por el salvaje planeta.\n");

      break;
      case 3:
        printf("Estas explorando un antiguo estadio de futbol cuando te encuentras con chuchovenitez fuerte y determinado, y te habla con sabiduria e ira: \n-Te haré una pregunta, jedi. Si respondes correctamente, te dejaré pasar. Si no, tendrás que ganarme un partido a muerte\n");

        printf("¿Quien gano el mundial 2014?\n Tienes que decidir qué responder:\n 1-Brazil \n 2-Alemania \n 3- Francia \n 4- no lo se \n");
        scanf("%d",&opcion);
        switch(opcion){
          case 1:
          printf("Respondes que gano alemania. Chuchovenitez asiente con aprobación y te deja pasar.\n");
          break;
          case 2:
          printf("Al responder, escuchas a chuchovenitez hacer un sonido de furia, y sientes como se lanza contra ti, logras escapar, pero el Dios logró hacer mucho daño \n HP - 40\n");
          HP=40;
          break;
          case 3:
          printf("Chuchovenitez parece enojada, pero agradece tu honestidad, te deja pasar pero te garantiza que no todo en la vida va a ser tan facil.\n Daño - 5 \n");
          dano-=5;
          break;

        }
      break;
      case 4:
       Montapuercos=300;

        printf("Te aventuras en un pueblo hermoso lleno de vida y de repente te encuentras con una manada de montapuercos. El montapuerco lider te mira con ojos furia y empieza a mover a su tremento puerco, listo para atacarte. Pero antes de que puedas hacer algo, el montapuerco te habla seriamente:\n");
        printf("¿Qué haces aquí, jedi? ¿Vienes a destruir todo lo que eh creado?\n Tienes que decidir qué hacer:\n 1- Mentir \n 2- Confesar\n");
        scanf("%d", &opcion);
        switch(opcion){
          case 1:
          printf("El montapuerco te deja visitar sus tierras, pero tu conoces que si el se entera que vas a ir a destruirlos, se acaba todo, ve con cuidado, recolectando cosas que te serviran\n ");
          break;

          case 2:
          printf("El montapuerco te confiesa que nadie ha salido con vida, y nadie puede vencerlo, panico entra en ti, sabes que llega el momento de pelear\n");
          while(Montapuercos>0){

	        ataque = rand() %  20+1;
          if(ataque<20){
            Montapuercos-=dano;
            printf("Has golpeado al montapuerco \n Daño-> %d\n", dano);
          }
          printf("El montapuerco te hizo daño! \n HP - %d\n", ataque);
          HP-=ataque;
            if(HP<=0){
            break;
          }
          }
          break;
        }

      break;
      case 5:
        Shakira=600;
      printf("Has viajado por mucho tiempo, y te preocupa que no termines de salvar ha este mundo, mientras piensas en todo esto, te acercas a un escenario abandonado a descansar, sin embargo, oyes un cantico y una Shakira aparece en donde se supone que no hay nadie\n observas a Shakira y te das cuenta que tiene una voz selestial, levanta sus enormes manos, pensando que estas haciendo un concierto\n Qué decides hacer?\n 1-atacar a Shakira\n 2-observar y ver que pasa\n");
      scanf("%d",&opcion);
      switch(opcion){
        case 1:
        printf("Shakira es demasiado fuerte, su vos destruye tu arma con facilidad. Ves el final acercandose, pero decides seguir fuerte y continuar peleando \n");
        while(Shakira>0){
	        ataque = rand() %  100+1;
          if(ataque<90){
            Shakira-=dano;
            printf("Has golpeado a Shakira \n Daño-> %d\n", dano);
          }
          printf("Shakira te golpeado con su voz! \n HP - %d\n", ataque);
          HP-=ataque;
          if(HP<=0){
            break;
          }
          }
        break;
        case 2:
        printf("Ves a Shakira finalmente conquistar oidos con su cantico, se contenta y a ti te causa gracia su alegria, lo aplaudes y a Shakira le gusta, se acerca a ti lentamente, y te entrega el microfono, que de repente te hace sentir mucho mas fuerte \n HP + 35\n");
        HP+=35;
        break;

      }




    }
    }
    else{
      printf("Has sido derrotado, GAME OVER\n");
      printf("Intentar de nuevo %s", nombre);
    }


  }
  if(HP>0){
      printf("Felicidades %s has ganado!\n", nombre);

    printf("HP: %d", HP);
    }
    else{
      printf("Has sido derrotado, GAME OVER\n");
      printf("Intentar de nuevo %s", nombre);
    }


  return 0;
}
