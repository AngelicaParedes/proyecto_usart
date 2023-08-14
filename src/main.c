#include <soporte_placa.h>
#include <usart_config.h>

#define LUZ_ON 1
#define LUZ_OFF 0


int main(void){
    SP_init();  //Inicializador
    USART2_Init(115200);
    SP_Pin_setModo(SP_LED, SP_PIN_SALIDA_VA);  
    SP_Pin_write(SP_LED,LUZ_OFF);
    USART2_Write_String("Hola wokwi\n");
    SP_Pin_write(SP_LED,LUZ_ON);
    for (;;);
    return 0;
}