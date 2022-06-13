#include "ope.hpp"

int main(){
    clase_operacion calculadora;
    calculadora.set_numero1(5);
    calculadora.set_numero2(25);
    float n1 = calculadora.get_numero1();
    float n2 = calculadora.get_numero2();
    std::cout<<"Se obtuveron los numeros "<<calculadora.get_numero1()<<" y "<<calculadora.get_numero2()<<std::endl;    
    std::cout<<n1 <<" + "<<n2<<" = "<<calculadora.suma()<<std::endl;
    std::cout<<n1 <<" - "<<n2<<" = "<<calculadora.resta()<<std::endl;
    std::cout<<n1 <<" x "<<n2<<" = "<<calculadora.multiplicacion()<<std::endl;
    std::cout<<n1 <<" ÷ "<<n2<<" = "<<calculadora.divicion()<<std::endl;
    return 0;
}   