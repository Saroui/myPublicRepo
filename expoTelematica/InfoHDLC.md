# HDLC - High-Level Data Link Control
Es un protocolo perteneciente a la capa 2, osea a la capa de enlace de datos del esquema OSI y TCP/IP; Que tiene como proposito general el de brindar recuperación de errores en caso de perdidas de datos, por lo que se establecen sesiónes confiables entre los hosts.

Es una evolución de la Tecnologia SDLC, que es un protocolo sincrono de control de datos diseñado por  IBM para el control de la capa dos. Del protocolo HDLC se derivan entonces LAPB(El cual se basa en el modo balanceado asincrono de HDLC pero orientado al control de bits), LAPF(Que es la implementación del sistema anterior, pero teniendo encuenta más modos y hecho para el uso de la capa de datos en Frame Relay), LLC(El cual ya se conoce por que es la subcapa que maneja de manera logica la comunicación de los Dispositivos en Ethernet) y PPP()

Como tal HDLC presenta tres estaciones que trabajan en conjunto para que la tecnologia funcione, dichas tres estaciones abren paso a dos tipos de enlace que puede hacer el protocolo y a tres modos de transferencia de datos.

### Estaciones
* Estación Primaria: Controla el funcionamiento del enlace. Las tramas de esta estación se llaman Ordenes.
* Estación Secundaria: Actua como esclava de la Estación Primaria.Solo se comunica con la estación primaria para enviar tramas generadas por ella que son llamadas Respuestas. No tiene responsabilidades en el control del funcionamiento del enlace. 
* Estacion Combinada:Puede comunicar ordenes y respuesteas, siempre y cuando la comunicación sea con otra cstación combinada.

### Configuraciones del enlace
* Configuracion no balanceada o no equilibrada: Es cuando se establece la comunicación entre una estación primaria y una estación secundaria. Las estaciones secundarias pueden ser mas de una, y la comunicación puede ser punto a punto, multipunto, duplex o half-duplex. El funcionamiento consiste en que solo la estación primaria se encarga de el control de los datos que llegan a las estaciones secundarias y de mantener y establecer los enlaces.


![Esta es una imagen ilustrativa de la configuración](https://github.com/Saroui/myPublicRepo/blob/master/expoTelematica/Selecci%C3%B3n_018.png)


* Configuracion balanceada o equilibrada: Es la comunicación entre dos estaciones combinadas. Permite enlace punto a punto, por duplex o half-duplex, ambas estaciones tienen la misma responsabilidad.

![Esta es una imagen ilustrativa de la configuración](https://github.com/Saroui/myPublicRepo/blob/master/expoTelematica/Selecci%C3%B3n_019.png)

A continucación y para mostrar los tres modos de trasnferencia de datos se aprovechara para resumir tambien el modo de operación.

### Modos de operación

#### Modo de iniciar

Depende de la implementación y no hay una inicicación normativa, sin embargo se tiene que tener en cuenta de que solo las estaciones primarias y las estaciones combinadas son las capaces de establecer la iniciación en de la comunicación en los enlaces.

#### Modo de transferencias de datos

* Modo de respuesta normal(NRM): La configuración del enlace para este modo es no balanceada. Se puede usar como punto a punto o Multipunto con transmisiones Duplex o Half-Duplex. Aca la estación primaria es la que inicia la transmisión de datos y la estación secundiara solo puede transmitir datos a partir de las respuestas que genere de las ordenes que llegen de la estacion primaria.

* Modo de respuesta asincrona Balanceada(ABM): La configuración del enlace es balanceada.  El enlace nada más es punto a punto, pero la transmisión puede ser duplex(por defecto) o semiduplex. En este modo cualquier estación combinada puede transmitir sin necesidad de tener una orden o permiso de la otra estación combinada.

* Modo de respuesta asincrona(ARN): 

## Referencias
[1]"Synchronous Data Link Control", Es.wikipedia.org, 2020. [Online]. Available: https://es.wikipedia.org/wiki/Synchronous_Data_Link_Control. [Accessed: 08- Nov- 2020].

[2]"LAPB", Es.wikipedia.org, 2020. [Online]. Available: https://es.wikipedia.org/wiki/LAPB. [Accessed: 08- Nov- 2020].

[3]"Link Access Procedure for Frame Relay", Es.wikipedia.org, 2020. [Online]. Available: https://es.wikipedia.org/wiki/Link_Access_Procedure_for_Frame_Relay. [Accessed: 08- Nov- 2020].

[4]"High-Level Data Link Control", Es.wikipedia.org, 2020. [Online]. Available: https://es.wikipedia.org/wiki/High-Level_Data_Link_Control. [Accessed: 08- Nov- 2020].
