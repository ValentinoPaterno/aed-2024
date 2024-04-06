Ambiente
    s, s2: secuencia de enteros
    v, v2: entero
    validos = {0,1,2,3}
Proceso
    ARR(s)
    avz(s,v)
    crear(s2)
    Mientras (v <> 0) hacer
        Si ((v div 10) mod 10) en validos entonces
            Grabar(s2, v2)
        FinSi
        avz(s,v)
    FinMientras
    Cerrar(s)
    Cerrar(s2)
FinAccion