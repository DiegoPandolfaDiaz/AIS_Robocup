# AIS_Robocup

## Bitácora de Software (AI y PDI):

# Jornada de Trabajo: Sábado 06/05/2017:

-----------------------------------------------------------------------------

	- Se logra correr el simulador completo más las jugadas pre-cargadas del
	mismo en el computador de Max.

	- Se encuentra link del procesamiento digital de imagenes povisto por
	la competencia.

	link: https://github.com/RoboCup-SSL/ssl-vision

	ahi se explica como instalarlo, solo corre en ubuntu.

	- Se instala QtCreator 5 en los pc de Felipe, Max y Diego.

	- Se instala ubuntu 16.04 en el pc de Diego.

	- Se intenta correr SSL-Vision.

	- Se logra correr SSL-Vision en el computador de Max.

	- Se obtienen imagenes de la cámara.

	- Se creó máquina virtual de ubuntu con el simulador instalado.

	- Se subirá a drive para su uso.

-----------------------------------------------------------------------------

# Jornada de Trabajo: Sábado 14/05/2017:

-----------------------------------------------------------------------------
        
	- Se comienza a probar la camara para reconocer los patrones de los robots
	e integrar si funcionamiento al software que controla las jugadas.
	
	- Se analiza el formato para crear nuevas jugadas.
	
	- Se decide utilizar un puerdo COM virtual para probar la lectora de radiofreciencia.
	
	- Se analiza el protocolo y funcionamiento de las antenas de radiofrecuencia. 
	
	
-----------------------------------------------------------------------------

# Jornada de Trabajo: Sábado 11/11/2017:

-----------------------------------------------------------------------------
        
	- Reunión con Prof. Carvajal.

	- Se logra enviar paquetes "hard coded" por medio del ATC220 desde el simulador.
	
	- Se trabaja en el pŕotocolo que RoboJackets genera para ser enviado.
	
	
-----------------------------------------------------------------------------

# Jornada de Trabajo: Sábado 18/11/2017:

-----------------------------------------------------------------------------
        
	- Se trabajó en el paquete.
	
	- Se pudieron obtener las velocidades para cada robot.
	
	- Se logró armar un paquete, pero no se logra enviar por la antena via write. (Write no acepta string, pero si un arreglo de carácteres).
	
	
-----------------------------------------------------------------------------

# Jornada de Trabajo: Sábado 25/11/2017:

-----------------------------------------------------------------------------
        
	- Se siguió trabajando en el paquete.
	
	- Se definió estructura del paquete (3 B por velocidad*1000 en hex).

	- Aún falta determinar si se enviará un solo paquete o uno por robot con ID.
		
	
-----------------------------------------------------------------------------

# Jornada de Trabajo: Sábado 02/12/2017:

-----------------------------------------------------------------------------
        
	- Se siguió trabajando en el paquete.
	
	- Se logra armar un paquete de largo fijo por velocidad.
	
	- Se logra enviar el paquete por RF desde el simulador.
	
	
