#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include "catch.hpp"
#include "romanos.hpp"


TEST_CASE( "Numeros romanos - algarismos �nicos", "[romanos]" ) {
    REQUIRE( romanos_para_decimal("I") == 1 );
    
    REQUIRE( romanos_para_decimal("V") == 5 );

    REQUIRE( romanos_para_decimal("X") == 10 );

    REQUIRE( romanos_para_decimal("L") == 50 );

    REQUIRE( romanos_para_decimal("C") == 100 );

    REQUIRE( romanos_para_decimal("D") == 500 );

    REQUIRE( romanos_para_decimal("M") == 1000 );

}




TEST_CASE( "Numeros romanos - algarismos inv�lidos", "[romanos]" ) {
    REQUIRE( romanos_para_decimal("A") == -1 );

    REQUIRE( romanos_para_decimal("B") == -1 );

    REQUIRE( romanos_para_decimal("E") == -1 );

    REQUIRE( romanos_para_decimal("F") == -1 );

    REQUIRE( romanos_para_decimal("G") == -1 );

    REQUIRE( romanos_para_decimal("H") == -1 );

    REQUIRE( romanos_para_decimal("J") == -1 );

    REQUIRE( romanos_para_decimal("K") == -1 );

    REQUIRE( romanos_para_decimal("N") == -1 );

    REQUIRE( romanos_para_decimal("O") == -1 );

    REQUIRE( romanos_para_decimal("P") == -1 );

    REQUIRE( romanos_para_decimal("Q") == -1 );

    REQUIRE( romanos_para_decimal("R") == -1 );

    REQUIRE( romanos_para_decimal("S") == -1 );

    REQUIRE( romanos_para_decimal("T") == -1 );

    REQUIRE( romanos_para_decimal("U") == -1 );

    REQUIRE( romanos_para_decimal("W") == -1 );

    REQUIRE( romanos_para_decimal("Y") == -1 );
    
    REQUIRE( romanos_para_decimal("Z") == -1 );
    
    REQUIRE( romanos_para_decimal("i") == -1 );

    
}
 
TEST_CASE("Numeros romanos - regra de uso de algarismos", "[romanos]" ){
    REQUIRE( romanos_para_decimal("IIII") == -1 );
    
    REQUIRE( romanos_para_decimal("XXXX") == -1 );
    
    REQUIRE( romanos_para_decimal("VIIII") == -1 );
    
    REQUIRE( romanos_para_decimal("VV") == -1);

}

TEST_CASE("Numeros romanos - regra de uso de algarismos antecessores", "[romanos]"){
    REQUIRE( romanos_para_decimal("IV") == 4);

    REQUIRE( romanos_para_decimal("IX") == 9);

    REQUIRE( romanos_para_decimal("IL") == -1);

    REQUIRE( romanos_para_decimal("IC") == -1);

    REQUIRE( romanos_para_decimal("ID") == -1);

    REQUIRE( romanos_para_decimal("IM") == -1);

    REQUIRE( romanos_para_decimal("ID") == -1);

    REQUIRE( romanos_para_decimal("VX") == -1);

    REQUIRE( romanos_para_decimal("VL") == -1);

    REQUIRE( romanos_para_decimal("VC") == -1);
    
    REQUIRE( romanos_para_decimal("VD") == -1);

    REQUIRE( romanos_para_decimal("VM") == -1);

    REQUIRE( romanos_para_decimal("XL") == 40);

    REQUIRE( romanos_para_decimal("XC") == 90);

    REQUIRE( romanos_para_decimal("XD") == -1);

    REQUIRE( romanos_para_decimal("XM") == -1);

    REQUIRE( romanos_para_decimal("LC") == -1);

    REQUIRE( romanos_para_decimal("XL") == 40);

    REQUIRE( romanos_para_decimal("XC") == 90);
    
    REQUIRE( romanos_para_decimal("LD") == -1);

    REQUIRE( romanos_para_decimal("LM") == -1);
    
    REQUIRE( romanos_para_decimal("ML") == 1050);
    
    REQUIRE( romanos_para_decimal("IX") == 9);
    
    REQUIRE( romanos_para_decimal("CD") == 400);
    
    REQUIRE( romanos_para_decimal("MCMXCIX") == 1999);
    
    REQUIRE( romanos_para_decimal("MD") == 1500);

    REQUIRE( romanos_para_decimal("DM") == -1);
}