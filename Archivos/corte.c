Ambiente
    alumno = registro 
        comision = N(1)
        condicion = AN(5)
        legajo = N(5)
        nom = AN(20)
    finregistro
    
    arch_alumno: archivo de alumno ordenado por comision, condicion 
    reg_alumno, resg_alumno: alumno
    cant_total, cant_alumnos_com, cant_alumnos_cond: entero 

    
    Procedimiento corte_condicion() es 
        // 1 - Llamo al corte del anterior nivel
        // 2 - Mostrar totales a nivel corte
        Escribir("En la comision: ", resg_com, " hay: ", cant_alumnos_com, " en la condicion:", resg_cond)
        // 3 - Acumulo para el corte de mayor nivel
        cant_alumnos_com := cant_alumnos_com + cant_alumnos_cond
        // 4 - Reseteo contadores del corte y actualizo resguardo del nivel del corte
        cant_alumnos_cond := 0
        resg_cond := reg.condicion 
    FinProcedimiento

    Procedimiento corte_comision() es 
        corte_condicion()
        Escribir("En la comision:", resg_com, " hay:", cant_alumnos_com)
        cant_total := cant_total + cant_alumnos_com

        cant_alumnos_com := 0 
        resg_com := reg.comision
    FinProcedimiento

Proceso
    Abrir/E(arch_alumno) 
    Leer(arch_alumno, reg_alumno)
    resg_cond := reg.cond
    resg_com := reg.comision
    Mientras NO FDA(arch_alumno) hacer 
        // tratar corte
        Si resg_com <> reg.comision entonces 
            corte_comision()
        Sino 
            Si resg_cond <> reg.condicion entonces 
                // corte por condicion
                corte_condicion()
            FinSi
        FinSi
        // tratar registro
        cant_alumnos_cond := cant_alumnos_cond + 1
        Leer(arch_alumno, reg_alumno)
    FinMientras
    corte_comision()

    Cerrar(arch_alumno)
    Escribir("La cantidad total de alumnos es: ", cant_total)
FinProceso

2.2.11
2.2.12
2.2.14
