#include "romanos.hpp"

int romanos_para_decimal(char const * num_romano)
{
  int decimalValue = 0;
  


  // Verifica cada algarismo romano de maneira singular
  char prev_symbol = num_romano[0];
  int contador = 1;
  for(int i = 0; num_romano[i] != '\0'; i++){  
    // atribui o valor decimal ao caractere atual
    switch (num_romano[i]) {
      case 'I':
        decimalValue += 1;
        break;
      case 'V':
        if(prev_symbol == 'I'){
          decimalValue += 3; //Subtrai 2 por conta do +1 do I
        }else{
          decimalValue += 5;
        }
        break;
      case 'X':
        if (prev_symbol == 'I'){
          decimalValue += 8; //Subtrai 2 por conta do +1 do I
        }else{
          decimalValue += 10;
        }
        break;  
      case 'L':
        if (prev_symbol == 'X'){
          decimalValue += 30; //Subtrai 20 pois tem o 10 do X
        }else{
          decimalValue +=50;
        }
        if(prev_symbol == 'I' || prev_symbol == 'V'){
          decimalValue = -1;
        }
        break;
      case 'C':
        if(prev_symbol == 'L' || prev_symbol == 'I' || prev_symbol == 'V'){ // se precedido por L, V ou I da erro
          decimalValue = -1;
        }else if (prev_symbol == 'X'){  //Subtrai 10
          decimalValue += 80; // Soma 80 pois tem o +10 do X
        }else{
          decimalValue += 100;
        }  
        break;
      case 'D':
        if (prev_symbol == 'I' || prev_symbol == 'V' || prev_symbol == 'X'){
          decimalValue = -1;
        }else if (prev_symbol == 'C'){ // Subtrai 200
          decimalValue += 300;
        }else{
          decimalValue += 500;
        }
        break;
      case 'M':
        if (prev_symbol == 'I' || prev_symbol == 'V' || prev_symbol == 'X' || prev_symbol == 'L' || prev_symbol == 'D'){
          decimalValue = -1;
        }else if (prev_symbol == 'C'){ //Subtrai 100
          decimalValue += 800;  
        }else{
          decimalValue += 1000;
        }
        break;
      default:
            // Se o algarismo romano não for válido, retorna -1
          decimalValue = -1;
    }
    //verifica se há mais de tres simbolos repetidos consecutivamente
    if (num_romano[i] == prev_symbol) {
      if (prev_symbol == 'V' || prev_symbol == 'L') {
        return -1; // V e L não podem ser repetidos consecutivamente
      }
      contador++;
      if (contador > 3) return -1; // Mais de três símbolos retorna -1
      }else {
        prev_symbol = num_romano[i];
        contador = 1;
      }
    }
  return decimalValue;
}
 