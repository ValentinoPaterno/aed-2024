Dada una secuencia de ventas de productos que ocupan 8 caracteres para la fecha y 1 caracter para la cantidad vendida:
1 - Generar una secuencia de enteros con todas las unidades vendidas en meses pares
2 - Contabilizar unidades vendidas para un mes en particular que ingresa un usuario 
3 - Contabilizar en cuantas transacciones se vendieron mas de 3 unidades

Ambiente
    sec_ventas: secuencia de caracteres
    sec_s: secuencia de enteros  
    v_ventas: caracter 
    v_sal: entero 
    // contadores
    dig1, dig2, mes, cant_transac, cant_mes, cant_u, i: entero 
    Funcion conv_numero(crc:caracter):entero 
        Según crc hacer 
            ="0": conv_numero := 0
            ="1"  conv_numero := 1
            ="2"  conv_numero := 2
            ="3"  conv_numero := 3
            ="4"  conv_numero := 4
            ="5"  conv_numero := 5
            ="6"  conv_numero := 6
            ="7"  conv_numero := 7
            ="8"  conv_numero := 8
            ="9"  conv_numero := 9
        FinSegun
    FinFuncion
Proceso
    ARR(sec_ventas)
    Crear(s_sal)
    cant_transac := 0
    AVZ(sec_ventas, v_ventas)
    Escribrir("Ingrese el mes: "); 
    Leer(mes) 
    Mientras NFDS(sec_ventas) hacer 
        Para i=1 hasta 8 hacer 
            Según i hacer 
            =2: 
                dig1 := conv_numero(v_ventas)
            =3: 
                dig2 := conv_numero(v_ventas)                   
            FinSegun     
            AVZ(sec_ventas, v_ventas) 
        FinPara
        nro := dig1 * 10 + dig2  
        Si (nro = mes) entonces 
            cant_mes := cant_mes + v_ventas
        FinSi 
        Si (nro MOD 2 = 0) entonces
            x := conv_numero(v_ventas)
            Grabar(s_sal, v_sal)
        FinSi 
        Si (conv_numero(v_ventas) >= 3) entonces 
            cant_transac := cant_transac + 1
        FinSi
        AVZ(sec_ventas, v_ventas) 
    FinMientras
    Cerrar(sec_ventas)
FinAccion
