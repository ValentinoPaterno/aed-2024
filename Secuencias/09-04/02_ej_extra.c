// Desarrollar una subacción que transforme cada dígito de un número, ingresado por el usuario, en los caracteres equivalentes. Además, se pide desarrollar un algoritmo, que use la subacción, y almacene estos caracteres en una secuencia de salida, al terminar un número separar con el carácter “#”. Agregue los parámetros que considere necesario .
// Ejemplo:
// dado el entero 355. Se guarda en la secuencia de salida: |"3"|"5"|"5"|#
Accion Extra es 
    Ambiente
        funcion conv_a_crc (digito:entero):caracter
            segun digito hacer 
                =0: conv_a_crc := 0
                =1: conv_a_crc := 1
                =2: conv_a_crc := 2
                =3: conv_a_crc := 3
                =4: conv_a_crc := 4
                =5: conv_a_crc := 5
                =6: conv_a_crc := 6
                =7: conv_a_crc := 7
                =8: conv_a_crc := 8
                =9: conv_a_crc := 9
            fin_segun
        fin_funcion
        s_sal: secuencia de caracteres
        v_sal: caracter
        opcion, dig, i: entero
    Proceso
        i := 1
        Crear(s_sal)
        Mientras (opcion = 1) 
            Escribir("Ingrese el digito numero: ", i)
            Leer(dig)
            v_sal := conv_a_crc(dig)
            Grabar(s_sal, v_sal)
            i := i + 1
            Escribir("Presione 1 para continuar.")
            Leer(opcion)
        Fin_Mientras
        Grabar(s_sal, "#")
        Cerrar(s_sal)
Fin_Accion
