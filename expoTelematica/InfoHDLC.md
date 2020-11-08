# HDLC - High-Level Data Link Control
Es un protocolo perteneciente a la capa 2, osea a la capa de enlace de datos del esquema OSI y TCP/IP; Que tiene como proposito general el de brindar recuperación de errores en caso de perdidas de datos, por lo que se establecen sesiónes confiables entre los hosts.

Es una evolución de la Tecnologia SDLC, que es un protocolo sincrono de control de datos diseñado por  IBM para el control de la capa dos. Del protocolo HDLC se derivan entonces LAPB(El cual se basa en el modo balanceado asincrono de HDLC pero orientado al control de bits), LAPF(Que es la implementación del sistema anterior, pero teniendo encuenta más modos y hecho para el uso de la capa de datos en Frame Relay), LLC(El cual ya se conoce por que es la subcapa que maneja de manera logica la comunicación de los Dispositivos en Ethernet) y PPP()

Como tal HDLC presenta tres estaciones que trabajan en conjunto para que la tecnologia funcione, dichas tres estaciones abren paso a dos tipos de enlace que puede hacer el protocolo y a tres modos de transferencia de datos.

### Estaciones
* Estación Primaria: Controla el funcionamiento del enlace. Las tramas de esta estación se llaman Ordenes.
* Estación Secundaria: Actua como esclava de la Estación Primaria.Solo se comunica con la estación primaria para enviar tramas generadas por ella que son llamadas Respuestas. No tiene responsabilidades en el control del funcionamiento del enlace. 
* Estacion Combinada:Puede comunicar ordenes y respuesteas, siempre y cuando la comunicación sea con otra cstación combinada.


## Referencias
[1]"Synchronous Data Link Control", Es.wikipedia.org, 2020. [Online]. Available: https://es.wikipedia.org/wiki/Synchronous_Data_Link_Control. [Accessed: 08- Nov- 2020].
[2]"LAPB", Es.wikipedia.org, 2020. [Online]. Available: https://es.wikipedia.org/wiki/LAPB. [Accessed: 08- Nov- 2020].
[3]"Link Access Procedure for Frame Relay", Es.wikipedia.org, 2020. [Online]. Available: https://es.wikipedia.org/wiki/Link_Access_Procedure_for_Frame_Relay. [Accessed: 08- Nov- 2020].
