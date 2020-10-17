 @@
    @@ Instituto Tecnológico de Tijuana
    @@ Depto de Sistemas y Computación
    @@ En g. En Sistemas Computacionales
    @@ Autor: Zazueta Lopez Diana  @ZazuetaDiana
    @@ Repositorio:https://github.com/ZazuetaDiana/MisPracticasCpp/edit/main/Holamundo.cpp
    @@ Fecha de revisión: 16 octubre del 2020
    @@ 
    @
    @ Objetivo del programa:
    @ Mostrar holamundo
    @
    @ Entradas, procesos y salidas:
    @ Pulgar- 2 , ARM64, ...
    @
    @ Errores a reportar / retroalimentar
    @ Para .....
    @
    @ 

ograma en ambiente ( 32 bits) modo ARM, no funciona en AWS aarm64
.sección  .texto
.global _start
.brazo

// Pr
_comienzo:
    mov r0, # 1 @ STDOUT
    adr r1, label @ R1 = dirección de la cadena (cadena)
    mov r2, # 13 @ R2 = tamaño de la cadena
    mov r7, # 4 @ R7 = número de llamada al sistema para 'escribir'
    svc # 0 @ invocar syscall
_salida:
    mov r7, # 1 @ R7 = syscall para salir del sistema 'exit'
    svc # 0 @ invocar syscall
etiqueta:
.string  "Hola Mundo \ n"
