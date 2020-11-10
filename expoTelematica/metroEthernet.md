# METRO ETHERNET

Metro Ethernet es una arquitectura dedicada a la conectividad en redes de area metropolitana(MAN), a traves de interfaces Etherne, esto quiere decir que obviamente Ethernet hace parte de la capa numero 2 de la arquitectura OSI. 

Las redes MetroEthernet son consideradas redes multiservicio, ya que pueden ofrecer soporte para multiples aplicaciónes y serviciós, siendo uno de los más destacados RTP.Como tal es un servicio de conectividad de Banda Ancha y por lo general los proveedores de internet lo usan para interconectar redes LAN pero para abarcar areas de largo alcance y que necesiten de conectividad con redes WAN de gran capacidad como internet.

## Transmisión de Metro Ethernet

Las redes Metro Ethernet suelen utilizar principalmente medios de transmisión guiados, como son el cobre (MAN BUCLE) y la fibra óptica, existiendo también soluciones de radio licenciada, los caudales proporcionados son de 10 Mbit/s, 20 Mbit/s, 34 Mbit/s, 100 Mbit/s, 1 Gbit/s y 10 Gbit/s.

La tecnología de agregación de múltiples pares de cobre, (MAN BUCLE), permite la entrega de entre 10 Mbit/s, 20 Mbit/s, 34 Mbit/s y 100 Mbit/s, mediante la transmisión simultánea de múltiples líneas de cobre, además esta técnica cuenta con muy alta disponibilidad ya que es casi imposible la rotura de todas las líneas de cobre y en caso de rotura parcial el enlace sigue transmitiendo y reduce el ancho de banda de forma proporcional.

La fibra óptica y el cobre, se complementan de forma ideal en el ámbito metropolitano, ofreciendo cobertura total a cualquier servicio a desplegar. 

![Conectividad de Ethernet](https://github.com/Saroui/myPublicRepo/blob/master/expoTelematica/Selecci%C3%B3n_036.png)

## Modelo basico de conexión en Metro Ethernet

Se compone de una red de que funciona con dispositivos de capa dos osea Switches que es la que intercomunica las distintas interfaces Ethernet, esta red por lo general esta compuesta de Switches y se llama MEN, los usuarios pueden acceder a esta red por medio de sus dispositivos a la diferentes velocidades que se describieron anterirmente. 

![Conectividad de Ethernet](https://github.com/Saroui/myPublicRepo/blob/master/expoTelematica/Selecci%C3%B3n_037.png)

La cantidad de interfaces que podemos tener conectados al MEN, no tiene un numero especifico.Cuando nosotros unimos mas de una interfaz realizamos una conexión virtual entre Ethernet y las caracteristicas de esta conexión son las siguientes:

### Ethernet Virtual Conection

Se podria decir que es un tubo virtual que proporciona varios servicios de extremo a extremo a los usuarios, llendo estos servicios a traves de las redes MEN, sus principales funciones son :

* Conectar dos o más interfaces Ethernet habilitando la trama de tranferencias Ethernet entre ellos.

* Impedir la transferencia de datos entre los usuarios que no sean parte del mismo MEN, mejorando asi la seguridad y la privacidad, como prueba de esto por medio de un EVC se puede hacer un VPN de nivel 2.

Existen dos tipos de EVC y estos son:

* E-LINE(Conexión Punto a Punto): Se usa para establecer conexión Ethernet entre dos interfaces, Dentro de esta gama de EVC hay bastantes tipos de servicios, pero el más sencillo consiste en un ancho de banda simétrico para transmisión de datos en ambas direcciones y no fiable, entre dos interfaces UNI a 10 Mbit/s.

* E-LAN(Conexión Multipunto a Multipunto): Conecta dos o más interfaces UNI (User Network Interface). Los datos enviados desde un UNI llegarán a 1 ó más UNI destino. Cada uno de ellos está conectado a un EVC multipunto. A medida que va creciendo la red y se van añadiendo más interfaces UNI, éstos se conectarán al mismo EVC multipunto, simplificando enormemente la configuración de la misma. Desde el punto de vista del usuario, la E-LAN se comporta como una LAN.

![Conectividad de Ethernet](https://github.com/Saroui/myPublicRepo/blob/master/expoTelematica/Selecci%C3%B3n_038.png)

#### Respecto a las interfaces o UNIS

Segun el foro que realizo la tecnologia eternet una interfaz o UNI es cualquier nodo bidireccional en una red que este dispueto a la entrega o servicios Ethernet.

Los atributos que presentan las UNI por lo general son los siguientes:

* Medio físico: son los especificados en el estándar 802.3 – 2000. Ejemplos de medios físicos incluye 10Base-T, 100Base-T, 1000 Base-SX.
* Velocidad: las velocidades son las especificadas en el estándar Ethernet son las características de la "negociación" ethernet, añadiéndose algunos valores intermedios: 10 Mbit/s, 20 Mbit/s, 45 Mbit/s, 100 Mbit/s, 1 Gbit/s y 10 Gbit/s.
* Modo: un enlace puede soportar Full Duplex, Half Duplex o auto negociación.
* Capa MAC: las especificadas en IEEE 802.3 – 2000.

## Beneficios del Metro Ethernet

* Presencia y capilaridad prácticamente universal en el ámbito metropolitano tiene una disponibilidad en las líneas de cobre, con cobertura universal en el ámbito del urbano.

* Tiene una alta fiabilidad, ya que los enlaces de cobre certificados Metro Ethernet, están constituidos por múltiples pares de en líneas de cobre ( MAN BUCLE) y los enlaces de fibra óptica se configuran mediante spanning tree ( activo- pasivo) o LACP ( caudal aceptado).

* La interconexión en Ethenernet presenta de que sea una tecnologia de facil uso, facilitando los manejos y operaciones de la red.

* Genera mayor uso que la tecnologia Ethernet Connvencional ya que esta pensado para redes metropolitanas.

* Presenta un menor costo para el usuario para acceder a Ancho de banda ya que para eso es que esta pensado la tecnologia, para generar conexiónes de ancho de banda en areas metropolitanas.

* Gracias a los EVC y a las tecnologías y servicios presentes en las UNIS, hay mayor flexibilidad respecto a la manera en que se puede manipular el ancho de banda y las conexiónes de los usuarios.


## Referencias
[1]"Metro Ethernet", Es.wikipedia.org, 2020. [Online]. Available: https://es.wikipedia.org/wiki/Metro_Ethernet. [Accessed: 10- Nov- 2020].

[2]A. Castro, G. Gonzalez, R. Montenegro and E. Fuentemayor, "REDES DE BANDA ANCHA: METROETHERNET", Urbe.edu, 2020. [Online]. Available: https://www.urbe.edu/info-consultas/web-profesor/12697883/articulos/ensayos/RedesdeBandaAnchaMetro%20Ethernet.pdf. [Accessed: 10- Nov- 2020].

[3]"4.5.4. Metro Ethernet - Redes Telemáticas 2º STI", Redes Telematicas 2° STI, 2020. [Online]. Available: https://sites.google.com/site/redestelematicas2sti/2a-evaluacion/tema-4-wan/4-5-conexion-a-internet/4-5-4-metro-ethernet. [Accessed: 10- Nov- 2020].

[4]"Cómo Metro Ethernet garantiza la calidad de la telefonía IP a través de la WAN - Leader Network", Leader Network, 2020. [Online]. Available: https://leader-network.com/tendencias-tic/como-metro-ethernet-garantiza-la-calidad-de-la-telefonia-ip-a-traves-de-la-wan/. [Accessed: 10- Nov- 2020].

[5]E. Schmidberg, "MetroEthernet - Seminario Tecnico", 2009.Available: http://www.ieee.org.ar/downloads/metroethernet.pdf

[6]"User–network interface", En.wikipedia.org, 2020. [Online]. Available: https://en.wikipedia.org/wiki/User%E2%80%93network_interface. [Accessed: 10- Nov- 2020].

[7]E. Zuleika and R. Hyelene, "Metro Ethernet", Redesgrupodiez.blogspot.com, 2020. [Online]. Available: http://redesgrupodiez.blogspot.com/. [Accessed: 10- Nov- 2020].
