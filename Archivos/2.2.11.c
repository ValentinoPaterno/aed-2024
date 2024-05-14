Ambiente
    alumno = registro
        clave = registro 
            sexo: ("M","F")
            carrera: ("ISI","IQ","IEM","LAR")
            nro: N(5)
        finregistro
        fecha_ingreso = registro 
            dd: n(2)
            mm: n(2)
            aaaa: n(4)
        finregistro
        total_materias_aprobadas: N(2)
    finregistro

    arch_alumno: archivo de alumno ordenado por clave
    reg_alum: alumno

    resg_sexo, resg_carrera: alfanumerico 
    tot_mas_20_carrera, tot_men_20_carrera, tot_mas_20_sexo, tot_men_20_sexo, tot_mas_20_gral, total_men_20_gral: entero 
    
    men_20, mas_20: entero

    Procedimiento corte_sexo() es 
        corte_carrera()
        Escribir("La cantidad del sexo:", resg_sexo, " con mas de 20 materias aprobadas es", tot_mas_20_sexo)
        Escribir("La cantidad del sexo:", resg_sexo, " con menos de 20 materias aprobadas es", tot_men_20_sexo)
        tot_mas_20_gral := tot_mas_20_gral + tot_mas_20_sexo
        tot_men_20_gral := tot_men_20_gral + tot_men_20_sexo
        
        tot_mas_20_sexo := 0
        tot_men_20_sexo := 0 
        
        resg_sexo := reg_alum.sexo
    FinProcedimiento

    Procedimiento corte_carrera() es 
        Escribir("La cantidad de alumnos de:", resg_carrera, " con mas de 20 materias aprobadas es", mas_20)
        Escribir("La cantidad de alumnos de:", resg_carrera, " con menos de 20 materias aprobads es", men_20)
        tot_mas_20_sexo := total_mas_20_sexo + mas_20
        tot_men_20_sexo := total_men_20_sexo + men_20
        

        mas_20 := 0
        men_20 := 0

        resg_carrera := reg_alum.carrera
    FinProcedimiento

Proceso
    Abrir/E(arch_alumno)
    Leer(arch_alumno, reg_alum)
    
    resg_sexo := reg_alum.sexo 
    resg_carrera := reg_alum.carrera

    tot_mas_20_gral := 0 
    tot_men_20_gral := 0
    tot_mas_20_sexo := 0 
    tot_men_20_sexo := 0
    mas_20 := 0
    men_20 := 0
    
    Mientras NO FDA (arch_alumno) hacer 
        Si reg_alum.sexo <> resg_sexo entonces 
            corte_sexo()
        Sino
            Si reg_alum.carrera <> resg_carrera entonces 
                corte_carrera()
            FinSi
        FinSi
        // trato corte 
        Si reg_alum.fecha_ingreso.aaaa = 2009 entonces
            Si reg_alum.total_materias_aprobadas > 20 entonces
                mas_20 := mas_20 + 1
            Sino 
                men_20 := men_20 + 1
            FinSi
        FinSi 
        Leer(arch_alumno, reg_alum)
    FinMientras
    
    corte_sexo()
    Escribir("El total general del alummnos con mas de 20 materias aprobadas es:", tot_mas_20_gral)
    Escribir("El total general del alummnos con menos de 20 materias aprobadas es:", tot_men_20_gral)
    Cerrar(arch_alumno)
FinProceso