#include <unordered_map>
#include "romanos.hpp"

int romanos_para_decimal(char const * num_romano)
{
  int decimalValue = 0;

  // Verifica cada algarismo romano de maneira singular
  for(int i = 0; num_romano[i] != '\0'; i++){  
    // atribui o valor decimal ao caractere atual
    switch (num_romano[i]) {
      case 'I':
        decimalValue += 1;
        break;
      case 'V':
        decimalValue += 5;
        break;
      case 'X':
          decimalValue += 10;
          break;
      case 'L':
          decimalValue += 50;
          break;
      case 'C':
          decimalValue += 100;
          break;
      case 'D':
          decimalValue += 500;
          break;
      case 'M':
          decimalValue += 1000;
          break;
      default:
            // Se o algarismo romano não for válido, retorna -1
          decimalValue = -1;
      }
    }
  return decimalValue;
}
 