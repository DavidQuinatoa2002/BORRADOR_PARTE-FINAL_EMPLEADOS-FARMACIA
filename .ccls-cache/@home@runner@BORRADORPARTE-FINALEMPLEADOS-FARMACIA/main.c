#include <stdio.h>

int main() {
    float horas_trabajadas, valor_hora, monto_ventas, salario_bruto, bonificaciones, salario_neto, horas_extra;
    int op=1;

    while(op==1){
    printf("\nIngrese el total de horas trabajadas: ");
    scanf("%f", &horas_trabajadas);
    printf("Ingrese el valor por hora: ");
    scanf("%f", &valor_hora);
    printf("Ingrese el monto de ventas: ");
    scanf("%f", &monto_ventas);
    if (horas_trabajadas <= 40) {
        salario_bruto = horas_trabajadas * valor_hora;
    } else if (horas_trabajadas > 40 && horas_trabajadas <= 50) {
        horas_extra = horas_trabajadas - 40;
        salario_bruto = (40 * valor_hora) + (horas_extra * (valor_hora * 1.1));
    } else if (horas_trabajadas > 50 && horas_trabajadas <= 55) {
        horas_extra = horas_trabajadas - 50;
        salario_bruto = (40 * valor_hora) + (10 * (valor_hora * 1.1)) + (horas_extra * (valor_hora * 1.15));
    } else {
        horas_extra = horas_trabajadas - 55;
        salario_bruto = (40 * valor_hora) + (10 * (valor_hora * 1.1)) + (5 * (valor_hora * 1.15)) + (horas_extra * (valor_hora * 1.2));
    }
    if (monto_ventas <= 800) {
        bonificaciones = monto_ventas * 0.02;
    } else if (monto_ventas > 800 && monto_ventas <= 1500) {
        bonificaciones = monto_ventas * 0.04;
    } else if (monto_ventas > 1500 && monto_ventas <= 3000) {
        bonificaciones = monto_ventas * 0.06;
    } else {
        bonificaciones = monto_ventas * 0.08;
    }
    salario_neto = salario_bruto - (salario_bruto * 0.0945) + bonificaciones;
    printf("\nEl salario bruto es: %.2f\n", salario_bruto);
    printf("El valor de las bonificaciones es: %.2f\n", bonificaciones);
    printf("El salario neto es: %.2f\n", salario_neto);

  printf("\nQuieres volver a ingresas valores?");
  printf("\nPresiona 1, si quieres volver a ingresar");
  printf("\nPresiona 2, si ya no quieres ingresar datos nuevamente");
  printf("\nTu opcion es:");
  scanf("%d",&op);
  }
  printf("\nCHAO");
    return 0;
}
