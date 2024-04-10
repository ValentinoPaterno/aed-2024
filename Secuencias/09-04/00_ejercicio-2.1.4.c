Accion
    Ambiente
        s_chr, s_sal: secuencia de caracteres
        s_int: secuencia de enteros
        v_chr: caracter
        v_int: entero
    Proceso
        ARR(s_chr)
        ARR(s_int)
        Crear(s_sal)
        AVZ(s_chr, v_chr)
        AVZ(s_int, v_int)
        Mientras NFDS (s_chr) y NFDS(s_int) hacer 
            Grabar(s_sal, v_char)
            Grabar(s_sal, v_int)
            AVZ(s_chr, v_chr)
            AVZ(s_int, v_int)
        FinMientras
        Mientras NFDS(s_chr) hacer 
            Grabar(s_sal, v_char)
            AVZ(s_chr, v_chr)
        FinMientras
    
        Mientras NFDS(s_int) hacer 
            Grabar(s_sal, v_int)
            AVZ(s_int, v_int)
        FinMientras
        FinSi
        Cerrar(s_chr)
        Cerrar(s_int)
        Cerrar(s_sal)
        
FinAccion