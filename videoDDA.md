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
En su estructura inicial la DDR RAM se organiza en filas o en peceras de memoria, cada una de estas filas se divide en cuatro bancos de memoria. En dónde cada banco tiene un registro teniendo en cuenta su pecera y número propio.

Esto es obviamente algo que va a aumentar con respecto a cada versión nueva de la interfaz, ya que en lo que se centran es en aumentar la capacidad de transferencia y por lo tanto necesitan de muchas más filas y bancos para lograr con estos cometidos. Recordemos que todos estas estructuras estaran conectanectadas por un canal dual a una misma señal de reloj.

Si depronto este sistema no es claro, imaginemos a cada uno de las  SD RAM que componen a la interfaz DDR como bibliotecas con multiples estanterias, que para nuestro caso seria estas serian las filas o peceras de memoria, en conjunto a cada cubiculo de la estanteria que serian los bancos, y que cada registro o proceso es un libro al que nuestra CPU querra acceder, por lo que para acceder a esta información el procesador debe saber la ubicación de la bilioteca(SDRAM), estanteria(Fila) y cubiculo(banco). Ahora al igual que cuando nosotros prestamos un libro en la biblioteca sin haber terminado otro, el procesador puede hacer lo mismo y acceder a multiples registros sin necesidad de haber terminado de procesaro otros gracias a la naturaleza sincrona de esta tecnologia.

### ¿Cómo accede a la información?
Siguiendo con la estructura y acceso a la información en este tipo de tecnologías, se debe conocer la dirección de la fila y el banco al que uno quiere acceder mediante un registro, aparte de esto el procesador estará conectado al chip de selección qué al final con el antes mencionado registro accederá a la información en un banco. Por lo general estos bancos y registros se organizan de manera contigua o continua  ya que esto permite rapidez al procesador a la hora de buscar la fila y el banco en el que se encuentra la información o proceso que se necesita.

## ¿Que diferencia hay entre sus diferentes versiones?

Al igual que muchas tecnologias al final esta interfaz tambien a evolucionado y a cada progreso se le ha acompañado de la versión de mejora que es, es decir que la segunda versión de esta intefaz es DDR2, la tercera DDR3 y la que se esta estandarizando actualmente en nuestros computadores que es la DDR4, pero entonces, ¿Cuales son las diferencias ente estas.

Teniendo como base la tecnologia DDR inical, que se expuso anteriormente, se puede decir que la tecnologia DDR2 mejora en el aspecto de velocidad de trasmisión de datos ya que cuenta con una señal para controlar el bus de datos que conecta las multiples tenologias SDRAM, sin embargo en terminos como velocidad de reloj o la capacidad de tranferencia de datos esta versión siguio casi que igual salvo que adaptandose a la rapidez de la trasmisión. Ahora la tecnologia DDR3, añadio un consumo menor a las memorias aparte de mejorar en la capacidad de datos que se podian registrar y aumentando esta cantidad a dia de hoy (siendo la DDR3 de 16 GB de ram una de las más conocidad en el mercado), pero si apartado de tecnologia más imnovador fue el de añadir dos funciones: Auto-Self Refresh y Self-temeprature refresh que sirven para controlar las temperaturas de la memoria, lo que permite que la memoria pueda manejar ciclos de reloj mucho más grandes.

Para terminar y con la versión que esta entrando en la estandarización del mercado la DDR4, esta reduce el consumo a tan solo 1.2V pero llega a las tasas de transferencia y de ciclos de reloj mucho más altas que sus predecesoras, ademas de añadir funciones como un revisor de redundancias de ciclos o un proceso de inversión de datos del bus para garantizar una calidad optima en su señal. A continuación mostraremos una tabla que muestra como es que son las diferencias en algunos parametros entre cada versión de la interfaz. Por ultimo cabe recordar que esta es la interfaz que comunmente viene siendo utilizada en nuestras maquinas como computadores de escritorio y portatiles y que cada vez es una tecnologia que esta al alcance de las personas y los dispositivos.

## Conclusiónes

En este video pudimos ver como es el funcionamiento de la interfaz que la mayoria del mercado para computadores de escritorios y en su versión adptada para computadores portatiles esta utilizando, a dirio utilizamos y consumimos un conjunto de memorias en nuestros dispositivos pero pocas veces son las que conocemos de su funcionamiento y de como es que trabaja en un entorno con otros componentes, este video esta pensado con cumplir con el objetivo de prevenir lo antes dicho y que cada vez más sea accesible el interes y el entendimiento a componenetes que cada vez más son de uso comun, esperamos que el video haya sido agradable para usted, y hasta pronto.
