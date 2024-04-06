Ambiente 
    s: secuencia de entero
    v: entero 
    s2: secuencia de caracteres 
    v2: caracter 
    validos = {0,1,2,3}
Proceso
    arr(s)
    avz(s,v)
    crear(s2)
    Mientras (v <> 0) hacer 
        Si ((v DIV 10) MOD 10 ) en validos entonces 
        /* Proceso de grabar la secuencia de forma como caracter*/
        FinSi 
        avz(s,v) 
    FinMientras
FinAccion