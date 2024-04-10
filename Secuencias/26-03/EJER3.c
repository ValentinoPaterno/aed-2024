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
- Importe total vendido del rubro supermercado.

CategoriaNomApCliente#CantMovimientosDetalle%RubroImporte

Ambiente
    s_clientes: secuencia de caracteres 
    categoria, resg_categoria, v_cliente: caracter 
    importe_super, importe_total: real
    cant_movs: entero
    numeros = (0,1,2,3,4,5,6,7,8,9)
    funcion conv_a_ent(char:caracter):entero 
        Según char hacer 
        ="0": conv_a_car := 0
        ...
        ="9": conv_a_car := 9
    finfuncion
Proceso
    ARR(s_clientes)
    AVZ(s_clientes, v_cliente)
    Escribir("Ingrese la categoria de los clientes a conocer:"); Leer(categoria)
    Mientras NFDS(s_clientes) hacer 
        Si categoria = v_cliente entonces
            resg_categoria = v_cliente
        FinSi
        Mientras (v <> #) hacer 
            Escribir(v)
            AVZ(s_clientes, v_cliente)
        FinMientras
        AVZ(s_clientes, v_cliente)
        cant_movs = conv_a_ent(v_cliente)
        Para i=1 hasta cant_movs hacer
            Mientras (v_cliente <> "%") hacer 
                AVZ(s_clientes, v_cliente)
            FinMientras
            AVZ(s_clientes, v_cliente)
            Según v_cliente hacer 
                ="S":
                    importe_super := importe_super + conv_a_ent(v_cliente) * 1000
                    AVZ(s_clientes, v_cliente)
                    importe_super := importe_super + conv_a_ent(v_cliente) * 100
                    AVZ(s_clientes, v_cliente)
                    importe_super := importe_super + conv_a_ent(v_cliente) * 10
                    AVZ(s_clientes, v_cliente)
                    importe_super := importe_super + conv_a_ent(v_cliente) * 1
                =resg_categoria: 
                    importe_total := importante_total + conv_a_ent(v_cliente) * 1000
                    AVZ(s_clientes, v_cliente)
                    importe_total := importante_total + conv_a_ent(v_cliente) * 100
                    AVZ(s_clientes, v_cliente)
                    importe_total := importante_total + conv_a_ent(v_cliente) * 10
                    AVZ(s_clientes, v_cliente)
                    importe_total := importante_total + conv_a_ent(v_cliente) * 1
            FinSegun   
        FinPara 
    FinMientras

FinAccion