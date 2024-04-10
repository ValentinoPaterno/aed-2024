Ejemplo Secuencia Facturas
5546720240321AJuanPerez#273278312344785620240401BJuanaPerez#27415831233
Ejemplo Secuencia Detalle Facturas
A1B24BJugoNaranja!2080#AA554BMedialunas6120#!B21B24Cereal5125#!

1) Secuencia de salida con Nombre del cliente seguido del código y descripción de cada artículo comprado. Separar cada cliente con una marca “/” nombreclientecodigodescripcionart
2) Contar cantidad de artículos vendidos de todos los artículos cuyos códigos comienzan con un carácter ingresado por el usuario. 


Accion FILA 3 es 
    Ambiente
        s_facturas, s_detalles, s_sal: secuencia de caracteres
        v_fact, v_detalles, v_sal: caracter
        cod_ingresado: caracter
        numeros = ("1","2","3","4","5","6","7","8","9")
    Proceso
        Arr(s_facturas)
        Arr(s_detalles)
        Crear(s_sal)
        AVZ(s_facturas, v_fact)
        AVZ(s_detalles, v_detalles)
        Escribir("Ingrese el caracter"); Leer(cod_ingresado)
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
            Para (i=1 hasta 8) hacer 
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
                Para i=1 hasta 3 hacer 
                    AVZ(s_detalles, v_detalles)
                FinPara
            FinMientras
            Grabar(s_sal, "/")
            cantidad := 0
        FinMientras
        Cerrar(s_detalles)
        Cerrar(s_facturas)
        Cerrar(s_sal)
FinAccion

