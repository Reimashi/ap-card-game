/* 
 * Tipos de datos definidos por/para SGE
 */

#include <opencv/cv.h>

#ifndef SGE_TYPES_H
#define	SGE_TYPES_H

#ifndef NULL
/**
 * Tipo de dato NULL.
 */
#define NULL ((void*)0)
#endif

#ifndef SGE_DEBUG
/**
 * Flag para activar/desactivar los mensajes de debug.
 */
#define SGE_DEBUG 1
#endif

/**
 * Estructura que representa las dimensiones y posicion de una estructura restangular
 */
typedef struct SGE_Rectangle {
    int width;          /**< Ancho de la estructura */
    int height;         /**< Alto de la estructura */
    int pos_x;          /**< Coordenada x donde comienza la estructura */
    int pos_y;          /**< Coordenada y donde comienza la estructura */
} SGE_Rectangle;

/**
 * Estructura que representa el color de un pixel
 */
typedef struct SGE_Color {
    char red;           /**< Valor del color rojo de un pixel */
    char green;         /**< Valor del color verde de un pixel */
    char blue;          /**< Valor del color azul de un pixel */
    char alpha;         /**< Valor del canal alpha de un pixel */
} SGE_Color;

/**
 * Estructura que representa una superficie de dibujo
 */
typedef struct SGE_Surface {
    IplImage* imgData;          /**< Imagen en formato OpenCv */
    SGE_Rectangle dimensions;   /**< Dimensiones de la superficie */
} SGE_Surface;

/**
 * Estructura que representa una ventana  
 */
typedef struct SGE_Window {
    SGE_Surface imgWindow;        /**< Imagen que se muestra por pantalla */
    SGE_Surface imgBuffer;        /**< Superficie de dibujado del proximo frame */
    char* title;                /**< Titulo de la ventana */
} SGE_Window;

/**
 * Tipo de dato boleano
 */
typedef unsigned int boolean;

#endif	/* SGE_TYPES_H */

