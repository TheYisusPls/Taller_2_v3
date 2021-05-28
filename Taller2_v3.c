/*integrantes: Esteban Garces
               Jesus Medina
  Compilador: clang version 7.0.0-3~ubuntu0.18.04.1 linux
*/ 


//librerias estandar
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LONGITUD 30

char pausa[LONGITUD];

//declaracion de funcion fruta
float total_por_kilos(float kilos_pedidos, int valor_total);
void system_pause();

//programa principal
int main()
{ 
  int q,s;


  //opcion de menu´s
  int opcion;

  //menu de seleccion, frutas o verduras
  int opcion2;
  float kilos_pedidos;
  int valor_total;

  //calculo de valores
  int resultado=0;
  int costo_de_envio;
  
  //variables de texto
  char nombre[LONGITUD];
  char celular[LONGITUD];
  char direccion[LONGITUD];
  char rut[LONGITUD];
  
  //pedir al usuario interaccion
  printf("\n \n \n \n \n \n \n \n \n \n \n \n");
  printf("<---- porfavor deslice la consola hacia\n\t   la izquierda al ejecutar\n \n \n \n \n \n \n \n \n \n \n \n");
  system_pause();
 
  //menu de datos personales
  system("clear");
  printf("\t       *                                       \n");
  printf("\t     * * *                          * * * *    \n");
  printf("\t   * Bienvenid@ al Mercado!         * * * *    \n");
  printf("\t * * * * * * *______________        * * * *    \n");
  printf("\t   * * * * *                        * * * *    \n");
  printf("\t     * * *                      *              \n");
  printf("\t       *                      * *              \n");
  printf("\t                            * * *              \n");
  printf("Ingrese sus datos             * * * *            \n");
  printf("\t Nombre y Apellido: ");                      
  fgets(nombre, LONGITUD, stdin);
  printf("\t   Celular:(+56) 9 ");                      
  fgets(celular, LONGITUD, stdin); 
  printf("\t     Direccion: ");                      
  fgets(direccion, LONGITUD, stdin);  
  printf("\t       RUT: ");                      
  fgets(rut, LONGITUD, stdin);                     
  system_pause();
  
  //menu de seleccion de comuna y valor de envio
  system("clear");
  printf("\t            * * _____________________________           \n");
  printf("\t          * * *|*                            |          \n");
  printf("\t          * * *|*    Hola %s", nombre);
  printf("\t            * *|____________________________*|* *       \n");
  printf("      _______________________________________   * * *     \n");
  printf("     |                                       |  * * *     \n");
  printf("* * *|    Por favor seleccione el numero     |            \n"); 
  printf("* * *| de su comuna en el siguiente listado: |            \n");
  printf("* * *|_______________________________________|            \n");
  printf("\t* * *    _____________________________________          \n");
  printf("\t* * *   |                                     |*        \n");
  printf("\t* * *   | 1.- la florida \t 2.- peñalolen    |* *       \n");
  printf("\t        | 3.- las condes \t 4.- lo barnechea |* * *     \n");
  printf("\t        | 5.- la dehesa  \t 6.- ñuñoa        |* * * *   \n");
  printf("\t        | 7.- la reina   \t 8.- macul        |* * * * * \n");
  printf("\t        |_____________________________________|         \n");
  printf(" seleccion: ");
  scanf("%i",&q);

if (q>0 && q<5)
    {
        costo_de_envio= 1500;
    }else{
        if (q>4 && q<7)
        {
            costo_de_envio= 2000;
        }else{
            if (q>6 && q<9)
            {
                costo_de_envio= 2500;
            }else {
                printf("El numero escogido del menu no es valido");
            }
        }
    }
    
   do{
    //menu principal  
    system("clear");
    printf("\t       *                                       \n");
    printf("\t     * * *                          * * * *    \n");
    printf("\t   * Bienvenid@ al Mercado!         * * * *    \n");
    printf("\t * * * * * * *______________        * * * *    \n");
    printf("\t   * * * * *                        * * * *    \n");
    printf("\t     * * *                      *              \n");
    printf("\t       *                      * *              \n");
    printf("\t                            * * *              \n");
    printf("\t                          * * * *              \n");
    printf("Seleccione una opcion       * * * * *            \n");
    printf(" ___________________      * * * * * *            \n");
    printf("|(1) Frutas         |     ____________________   \n");
    printf("|(2) Verduras       |    |Carrito             |  \n");
    printf("|(9) Pasar por caja |    |Productos: $%i         \n",resultado);       
    printf("|___________________|    |Envio: $%i        |    \n", costo_de_envio);
    printf("                         |Total: $%i             \n",resultado+costo_de_envio);
    printf("                         |____________________|  \n");
    printf("        * * * *                  * * * * * *     \n");
    printf("       * * * *                  * * * * *        \n");
    printf("      * * * *                  * * * *           \n");
    printf("     * * * *                  * * *              \n");
    printf("                             * *                 \n");
    printf("                            *                    \n");
    printf("opcion: ");
    scanf("%i", &opcion);


    
//menu de frutas
if(opcion == 1)
{ 
  system("clear");
  printf("***************\n");
  printf("Frutas Disponibles: \n");
  printf("(1): Manzanas\n");
  printf("(2): Naranjas\n");
  printf("(3): Platanos\n");
  printf("(4): Duraznos\n");
  printf("(5): Uvas\n");
  printf("***************\n");
  printf("¿Cual desea llevar?: \n");
  scanf("%i", &opcion2);
  
  //opcion de frutas -------->
  switch(opcion2)
    {
        case 1: system("clear");
                valor_total = 1990;
                printf(" ________________________                      \n");
                printf("|Ha seleccionado Manzanas|                     \n");
                printf("|________________________|___________________  \n");
                printf("|el valor del kilogramo de Manzanas es: $%i|   \n",valor_total);
                printf("|____________________________________________| \n");
                printf("|¿Cuantos kilos desea llevar?|                 \n");
                printf("|____________________________|                 \n");
                printf("         :kg ");
                scanf("%f",&kilos_pedidos);     
                break;
        case 2: system("clear");
                valor_total = 1590;
                printf(" ________________________                       \n");
                printf("|Ha seleccionado Naranjas|                      \n");
                printf("|________________________|___________________   \n");
                printf("|el valor del kilogramo de Naranjas es: $%i|    \n",valor_total);
                printf("|____________________________________________|  \n");
                printf("|¿Cuantos kilos desea llevar?|                  \n");
                printf("|____________________________|                  \n");
                printf("         :kg ");
                scanf("%f",&kilos_pedidos);
                break;
        case 3: system("clear");
                valor_total = 1050;
                printf(" ________________________                       \n");
                printf("|Ha seleccionado Platanos|                      \n");
                printf("|________________________|___________________   \n");
                printf("|el valor del kilogramo de Platanos es: $%i|    \n",valor_total);
                printf("|____________________________________________|  \n");
                printf("|¿Cuantos kilos desea llevar?|                  \n");
                printf("|____________________________|                  \n");
                printf("         :kg ");
                scanf("%f",&kilos_pedidos);
                break;
        case 4: system("clear");
                valor_total = 2400;
                printf(" ________________________                       \n");
                printf("|Ha seleccionado Duraznos|                      \n");
                printf("|________________________|___________________   \n");
                printf("|el valor del kilogramo de Duraznos es: $%i|    \n",valor_total);
                printf("|____________________________________________|  \n");
                printf("|¿Cuantos kilos desea llevar?|                  \n");
                printf("|____________________________|                  \n");
                printf("         :kg ");
                scanf("%f",&kilos_pedidos);
                break;
        case 5: system("clear");
                valor_total = 3580;
                printf(" ________________________                       \n");
                printf("|Ha seleccionado Uvas    |                      \n");
                printf("|________________________|___________________   \n");
                printf("|el valor del kilogramo de Uvas es: $%i  |      \n",valor_total);
                printf("|____________________________________________|  \n");
                printf("|¿Cuantos kilos desea llevar?|                  \n");
                printf("|____________________________|                  \n");
                printf("         :kg ");
                scanf("%f",&kilos_pedidos);
                break;
        default:printf("\n\n Opcion ingresada no es valida, reintente.");
                break;
    }
                system("clear");
                printf("El valor total seria de: $%.1f, ¿Desea llevar algo mas?\n", total_por_kilos(kilos_pedidos,valor_total));
                system_pause();
                resultado = total_por_kilos(kilos_pedidos, valor_total) + resultado;
}   

//menu de verduras
if(opcion == 2)
{
  printf("***************\n");
  printf("Verdudas Disponibles: \n");
  printf("(1): Lechugas\n");
  printf("(2): Repollos\n");
  printf("(3): Zanahorias\n");
  printf("(4): Cebollas\n");
  printf("(5): Papas\n");
  printf("***************\n");
  printf("¿Cual desea llevar?: \n");
  scanf("%i", &opcion2);

	
  switch(opcion2)
    { 
        case 1: valor_total = 1150;
                printf("Ha seleccionado Lechugas, el valor de la unidad de Lechugas es $1.150 \n");
                printf("¿Cuantas desea llevar? \n");
                scanf("%f",&kilos_pedidos);
                break;
        case 2: valor_total = 1190;
                printf("Ha seleccionado Repollos, el valor de la unidad de Repollos es $1.190 \n");
                printf("¿Cuantas desea llevar? \n");
                scanf("%f",&kilos_pedidos);
                break;
        case 3: valor_total = 890;
                printf("Ha seleccionado Zanahorias, el valor de un kilogramo de zanahorias es $890 \n");
                printf("¿Cuantos kilos desea llevar? \n");
                scanf("%f",&kilos_pedidos);
                break;
        case 4: valor_total = 990;
                printf("Ha seleccionado Cebollas, el valor del kilogramo de Cebollas es $990 \n");
                printf("¿Cuantos kilos desea llevar? \n");
                scanf("%f",&kilos_pedidos);
                break;
        case 5: valor_total = 1290;
                printf("Ha seleccionado Papas, el valor del kilogramo de Papas es $1.290\n");
                printf("¿Cuantos kilos desea llevar? \n");
                scanf("%f",&kilos_pedidos);
                break;
        default:printf("\n\n Opcion ingresada no es valida, reintente.");
        break;
    }    
        printf("El valor total seria de: $%.1f, ¿Desea llevar algo mas?\n",total_por_kilos(kilos_pedidos,valor_total));
        system_pause();
        resultado = total_por_kilos(kilos_pedidos, valor_total) + resultado;        
}


//fin de programa
}while(opcion!=9);
  system("clear");
  printf("\t      **********************\n");
  printf("\t        El total es: $%i\n", resultado+costo_de_envio);
  printf("\t   Muchas gracias por su compra! \n");
  printf("\t      **********************\n");
  printf("presione una tecla para continuar");
  fgets(pausa, LONGITUD, stdin);


  return 0;
}


// funcion de precio para frutas
float total_por_kilos(float kilos_pedidos, int valor_total)
{
  float x;
  x = kilos_pedidos*valor_total;
  return x;
}

void system_pause()
{ char a;
  printf("Presione ENTER para continuar\n"); 
  scanf("%c", &a);
}


