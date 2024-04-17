// Ejemplo Secuencia Facturas
// 5546720240321AJuanPerez#273278312344785620240401BJuanaPerez#27415831233

// Ejemplo Secuencia Detalle Facturas
// A1B24BJugoNaranja2080AA554BMedialunas6120!B21B24Cereal5125!


1) Secuencia de salida con Nombre del cliente seguido del código y descripción de cada artículo comprado. Separar cada cliente con una marca “/” nombreclientecodigodescripcionart
2) Contar cantidad de artículos vendidos de todos los artículos cuyos códigos comienzan con un carácter ingresado por el usuario. 


Accion FILA3 es 
    Ambiente
        s_facturas, s_detalles, s_sal: secuencia de caracteres
        v_fact, v_detalles, v_sal: caracter
        cod_ingresado: caracter
        numeros = ("1","2","3","4","5","6","7","8","9")
        i,cantidad: entero 
        bandera: logico
        funcion conv_a_entero(crc:caracter):entero
            ="1": conv_a_entero := 1
            ="2": conv_a_entero := 2
            ="3": conv_a_entero := 3
            ="4": conv_a_entero := 4
            ="5": conv_a_entero := 5
            ="6": conv_a_entero := 6
            ="7": conv_a_entero := 7
            ="8": conv_a_entero := 8
            ="9": conv_a_entero := 9
            ="0": conv_a_entero := 0
        finfuncion
    Proceso
        Arr(s_facturas)
        Arr(s_detalles)
        Crear(s_sal)
        AVZ(s_facturas, v_fact)
        AVZ(s_detalles, v_detalles)
        Escribir("Ingrese el caracter");
        Leer(cod_ingresado) // A
        cantidad := 0 
        Mientras NFDS(s_facturas) hacer 
            bandera := falso
            Para i=1 hasta 14 hacer 
                AVZ(s_facturas, v_fact)
            FinPara
            Mientras (v_fact <> "#") hacer 
                Grabar(s_sal, v_fact)
                AVZ(s_facturas, v_fact)
            FinMientras
            AVZ(s_facturas, v_fact)
            Para (i=1 hasta 11) hacer 
                AVZ(s_facturas, v_fact)
            FinPara
            bandera := cod_ingresado = v_detalles
            Mientras (v_detalles <> "!") hacer 
                    Para i=1 hasta 6 hacer 
                    Grabar(s_sal, v_detalles)
                    AVZ(s_detalles, v_detalles)
                FinPara
                Mientras (v_detalles not en numeros) hacer 
                    Grabar(s_sal, v_detalles)
                    AVZ(s_detalles, v_detalles)
                FinMientras
                Si bandera entonces    
                    cantidad := cantidad + convertir(v_detalles)
                FinSi 
                AVZ(s_detalles, v_detalles)
                Para i=1 hasta 4 hacer 
                    AVZ(s_detalles, v_detalles)
                FinPara
            FinMientras
            Grabar(s_sal, "/")
        FinMientras
        Escribir("La cantidad total de articulos que comienzan con: ", cod_ingresado, " es: ", cantidad)
        Cerrar(s_detalles)
        Cerrar(s_facturas)
        Cerrar(s_sal)
FinAccion    

