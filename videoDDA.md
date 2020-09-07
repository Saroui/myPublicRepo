# Guión vídeo DDA
##  Introducción
Actualmente existen múltiplos tipos de tecnologías para las memorias que usan la mayoría de dispositivos que tenemos, desde las más simples RAM o ROM, hasta tecnologías actuales como las interfaces DDR o SSD, las cuales permiten una mayoría capacidad y velocidad de ordenamiento, carga, lectura, escritura y almacenamiento de datos y procesos.

En el día del hoy veremos una de las tecnologías con más avance en el ámbito de las memorias RAM y esa no es nada más ni nada menos que la interfaz DDR.

## ¿Que es la interfaz DDRx?
Está interfaz nos nada más ni nada menos que otro tipo derivado de la memoria ram el cual viene en producción y mejoramiento desde el año 2000 y es hija de la tecnología SDRAM, aparte de ser la mayoría de memorias RAM a las que todo el mundo conoce y ve en arquitecturas como computadores de escritorio o portátiles gracias a su encapsulado DIMM (mostrar foto del encapsulado de la ram o de una ram)
### ¿Cómo funciona?
Conociendo a la memoria RAM como la encargada el ordenamiento, almacenamiento y carga de los procesos a realizar por el procesador, valga la redundancia, existen un tipo de estás las cuales al contrario de las clásicas memorias DRAM, cuentan con una sincronización por medio de una señal del reloj en conjunto al procesador, este tipo de RAM son llamadas SDRAM(De las siglas en inglés  de synchronous dynamic random-access memory, ‘memoria de acceso aleatorio síncrona y dinámica’).

Esto hace que la memoria tenga un patrón en dónde divide sus órdenes por medio de una segmentación o pipeline, lo cual permite a la memoria acepte una instrucción antes de acabar de procesar la anterior.

Ahora la DDR RAM, es el resultado de múltiples de estas memorias SDRAM mediante el uso de un canal síncrono(osea que usa la misma señal de reloj) permitiendo así una mayor tasa de frecuencia de escritura/lectura y capacidad de transferencia que las SDR RAM.

Para ejemplificar esto, la máxima frecuencia de e/l de una memoria SDR RAM es de 133 MHz y la máxima de un módulo DDR puede ser hasta de 400 MHz, esto obviamente influyendo en la velocidad con que el reloj se actualiza.

### Estructura 
En su estructura inicial la DDR RAM se organiza en filas o en peceras de memorias, cada una de estas filas se divide en cuatro bancos de memoria. En dónde cada banco tiene un registro teniendo en cuenta su pecera y número propio.

Esto es obviamente algo que va a aumentar con respecto a cada versión nueva de la interfaz, ya que en lo que se centran es en aumentar la capacidad de transferencia y por lo tanto necesitan de muchas más filas y bancos para lograr con estos cometidos.

###¿Cómo accede a la información?
Siguiendo con la estructura y acceso a la información en este tipo de tecnologías, se debe conocer la dirección de la fila y el banco al que uno quiere acceder mediante un registro, aparte de esto el procesador estará conectado al chip de selección qué al final con el antes mencionado registro accederá a la información en un banco. Por lo general estos bancos y registros se organizan de manera contigua o continua  ya que esto permite rapidez al procesador a la hora de buscar la fila y el banco en el que se encuentra la información o proceso que se necesita.

##¿Que diferencia hay entre sus diferentes versiones?



## Conclusiónes