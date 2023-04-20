/*Defina una función que devuelve la cadena de caracteres resultante de reemplazar
todas las ocurrencias de un carácter por otro. Ambos caracteres son pasados por
parámetro, junto a la cadena original.
*/
#include<stdio.h>
char reemplazar(char *, char, char);
int main(){
    char c1, c2, cad[100], *cadptr, *newcad;
    printf("Ingrese una cadena de caracteres:\n");
    gets(cad);
    printf("Ingrese caracter a reemplazar");
    scanf("%c", &c1);
    scanf("Ingrese por cual quiere que sea reemplazado\n");
    scanf("%c", &c2);
    cadptr = &cad;
    *newcad = reemplazar(cadptr, c1, c2);
    printf("La cadena nueva es %s", newcad);
    return 0;
}
char reemplazar(char *cadptr, char c1, char c2){
    char newcad[100];
    int i;
    for(i=0; cadptr[i]!='\0'; i++){
        if(c1>'a' && c1<'z'){
            if(cadptr[i]==c1 || cadptr[i]==c1-32){
                cadptr[i] = c2;
            }
        }else
            if(c1>'A' && c1<'Z'){
                if(cadptr[i]==c1 || cadptr[i]==c1+32){
                    cadptr[i] = c2;
                }
            }
    }
    return cadptr;
}