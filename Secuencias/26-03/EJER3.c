Un importante banco del pais posee la informacion de los resumenes de las tarjetas de credito (del ultimo mes) de sus clientes en una secuencia de caracteres, con el siguiente formato:
- CategoriaNomApCliente#CantMovimientosDetalle%RubroImporte

1) 
- Listado de todos los clientes con su respectivo total a pagar 
- Cantidad de ventas por cada rubro
2) 
- Secuencia de salida, con el apellido y nombre de todos los clientes de la categoria Black
- Cantidad de ventas totales
3)
- Listado de todos los clientes, que pertenecen a una categoria en particular (elegida por el usuario) con su respectivo importe total.
- Importe total vendido de la categoria supermercado.

CategoriaNomApCliente#CantMovimientosDetalle%RubroImporte

Ambiente
    s_clientes: secuencia de caracteres 
    categoria, resg_categoria, v_cliente: caracter 
    importe_super, importe_total: real
Proceso
    ARR(s_clientes)
    AVZ(s_clientes, v_cliente)
    Escribir("Ingrese la categoria de los clientes a conocer:"); Leer(categoria)
    Mientras NFDS(s_clientes) hacer 
        Si (categoria = v_cliente) entonces 
            Mientras (v_cliente <> "%") hacer 
                
        Sino 

        FinSi     
    FinMientras

FinAccion