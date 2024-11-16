# Proyecto de Comunicación con Módulos LoRa E22

Este repositorio contiene el código fuente para implementar un sistema de comunicación inalámbrica utilizando módulos **LoRa Ebyte E22**. La configuración incluye un **emisor** y un **receptor**, desarrollados con microcontroladores **ESP32** y **ESP8266**, respectivamente.

## Descripción del Proyecto

El objetivo de este proyecto es establecer una comunicación inalámbrica de largo alcance entre dos dispositivos mediante tecnología LoRa. Este sistema es ideal para aplicaciones en entornos donde las redes tradicionales no están disponibles o son costosas.

### Características del Proyecto
- **Emisor:**
  - Envío de datos autogenerados (número incremental).
  - Configuración de parámetros de transmisión mediante software.
  - Implementación con **ESP32**.

- **Receptor:**
  - Recepción de los datos enviados por el emisor.
  - Visualización de los datos a través de la consola serial.
  - Implementación con **ESP8266**.

### Hardware Utilizado
- **Módulo LoRa Ebyte E22-900T30D**
  - Frecuencia de operación: **868 MHz / 915 MHz**.
  - Comunicación UART para integración con microcontroladores.
- **Microcontroladores:**
  - **ESP32** como emisor.
  - **ESP8266** como receptor.
- **Convertidor USB-TTL (CP2102):**
  - Para la configuración y depuración del módulo LoRa.

## Prerrequisitos

1. **Hardware necesario:**
   - Módulos LoRa Ebyte E22.
   - Convertidor USB-TTL para configuración inicial.
   - ESP32 y ESP8266.

2. **Software necesario:**
   - **Arduino IDE**: Para cargar los códigos en los microcontroladores.
   - **CoolTerm**: Para monitorear la comunicación serial en la PC.
   - **RF_Setting V3.3** (opcional): Para configurar parámetros avanzados en los módulos LoRa.

## Estructura del Repositorio

- `codigo/`: Contiene el código fuente para el microcontrolador ESP32 que envía datos.
- `codigo/`: Contiene el código fuente para el microcontrolador ESP8266 que recibe datos.

## Cómo Usar el Proyecto

1. **Configuración del Hardware:**
   - Conecta el módulo LoRa al ESP32 (emisor) y al ESP8266 (receptor).
   - Configura los pines M0 y M1 para el modo de transmisión estándar.

2. **Carga del Código:**
   - Abre los archivos del emisor y receptor en Arduino IDE.
   - Carga el código correspondiente en cada microcontrolador.

3. **Prueba del Sistema:**
   - Inicia la comunicación entre los dispositivos.
   - Monitorea los datos recibidos utilizando una consola serial.

## Estado Actual
- No funcional, en las pruebas realizadas no conseguimos enviar ni recivir datos.
- Pendiente de depuración para solucionar problemas de comunicación detectados en pruebas iniciales.

## Contribuciones

Este proyecto está en desarrollo. Se aceptan contribuciones para mejorar el código y documentar configuraciones más avanzadas.
