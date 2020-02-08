#include <iostream>

#define PORCENTAJE_IVA 16
#define PORCENTAJE_RETENCION_IVA 10
#define PORCENTAJE_RETENCION_ISR 10

using namespace std;

int main()
{
    int ingreso,iva,subtotal,retencionIsr,retencionIva,total;

    int validar, ingresoDecimal, ivaDecimal, subtotalDecimal, retencionIsrDecimal, retencionIvaDecimal, totalDecimal;

    cout << "CALCULO DE IMPUESTOS" << endl;

    cout << "Dame el ingreso: ";
    cin >>  ingreso;


    validar = ((ingreso*10)*PORCENTAJE_IVA)%1000;

    iva = validar;

    if(validar == 0)
    {
        /**No es decimal**/

        iva = ((ingreso*10)*PORCENTAJE_IVA)/1000;

        subtotal = ingreso + iva;

        retencionIsr = ((ingreso*10)*PORCENTAJE_RETENCION_ISR)/1000;

        retencionIva = ((ingreso*10)*PORCENTAJE_RETENCION_IVA)/1000;

        total = subtotal - retencionIsr - retencionIva;

        cout << "\n****Tabla Recibo de Honorarios****" << endl;
        cout <<"Ingresos\t\t" << ingreso << endl;
        cout <<"(+) IVA\t\t\t" << iva << endl;
        cout <<"(=) Subtotal\t\t" << subtotal << endl;
        cout <<"(-) Retencion ISR\t" << retencionIsr << endl;
        cout <<"(-) Retencion IVA\t" << retencionIva << endl;
        cout <<"(=) Total\t\t" << total << endl;
    }
    else
    {
        /**Es decimal**/

       /*Terminos en Enteros*/

        iva = ((ingreso*10)*PORCENTAJE_IVA)/1000;

        subtotal = ingreso + iva;

        retencionIsr = ((ingreso*10)*PORCENTAJE_RETENCION_ISR)/1000;

        retencionIva = ((ingreso*10)*PORCENTAJE_RETENCION_IVA)/1000;

        total = subtotal - retencionIsr - retencionIva;

        /*Terminos en Decimal*/

        ivaDecimal = ((ingreso*10)*PORCENTAJE_IVA)/1000;

        retencionIsrDecimal = ((ingreso*10)*PORCENTAJE_RETENCION_ISR)/1000;

        retencionIvaDecimal = ((ingreso*10)*PORCENTAJE_RETENCION_IVA)/1000;

        subtotalDecimal = ivaDecimal;

        totalDecimal = subtotalDecimal - retencionIsrDecimal - retencionIvaDecimal;

        int totalDecimalFinal;

        /*Validar si es negativo*/
        if (totalDecimal >= 0)
        {
            cout << "\n****Tabla Recibo de Honorarios****" << endl;
            cout <<"Ingresos\t\t" << ingreso << endl;
            cout <<"(+) IVA\t\t\t" << iva << "." <<  ivaDecimal << endl;
            cout <<"(=) Subtotal\t\t" << subtotal << "." <<  subtotalDecimal << endl;
            cout <<"(-) Retencion ISR\t" << retencionIsr << "." << retencionIsrDecimal << endl;
            cout <<"(-) Retencion IVA\t" << retencionIva << "." << retencionIvaDecimal << endl;
            cout <<"(=) Total\t\t" << total << "." << totalDecimal << endl;
        } else {

            totalDecimalFinal = total -1; // Le restamos 1 al total final
            totalDecimal = 10 - abs(totalDecimal); // Convertimos con el valor absoluto a Decimal positivo y restamos a 10
            cout << "\n****Tabla Recibo de Honorarios****" << endl;
            cout <<"Ingresos\t\t" << ingreso << endl;
            cout <<"(+) IVA\t\t\t" << iva << "." <<  ivaDecimal << endl;
            cout <<"(=) Subtotal\t\t" << subtotal << "." <<  subtotalDecimal << endl;
            cout <<"(-) Retencion ISR\t" << retencionIsr << "." << retencionIsrDecimal << endl;
            cout <<"(-) Retencion IVA\t" << retencionIva << "." << retencionIvaDecimal << endl;
            cout <<"(=) Total\t\t" << total << "." << totalDecimal << endl;

        }
    }



    return 0;
    // Jesus Alejandro Garcia Perez
}




