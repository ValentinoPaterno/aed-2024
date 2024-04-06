Ambiente
    sec: secuencia de caracteres
    v: caracter 
    i,cant: entero 
Proceso
    arr(sec)
    AVZ(sec,v)
    Mientras NFDS(sec) hacer
        Para i=1 hasta 12 hacer 
            AVZ(sec,v)
        FinPara
        cant_al := 0 
        Mientras (v <> "%") hacer
            Mientras (v <> "!") hacer
                AVZ(sec,v)
            FinMientras
            AVZ(sec, v)
            Para i=1 hasta 4 hacer 
                AVZ(sec,v) 
            FinPara 
            cant_al := cant_al + 1
        FinMientras
        Escribir("La cantidad de alumnos en la comision es:", cant_al)
    FinMientras
    Cerrar(s)
FinAccion

