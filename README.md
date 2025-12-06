# Reevaluacion-proyecto-3
# Avance 3 – Herencia, Composición y Agregación

## Herencia
La clase base del sistema es **Animal**, de la cual heredan las clases **Perro** y **Gato**. Esto permite crear tipos específicos de animales manteniendo atributos y métodos comunes.

## Composición y Agregación
El **Refugio** incorpora dos tipos de relaciones:
- **Composición:** El refugio contiene internamente listas de **Animal** y **Adopcion**. Estos objetos existen únicamente dentro del refugio y se gestionan desde la clase.
- **Agregación:** El refugio registra voluntarios externos (**Voluntario\***). Los objetos se crean fuera y solo se enlazan al refugio.

## Correspondencia del UML con el codigo
El diagrama fue actualizado para incluir:
- La herencia entre Animal, Perro y Gato.
- Las relaciones de composición y agregación.
- Los arreglos necesarios en la clase Refugio.

El código implementa exactamente estas relaciones.

## Uso del programa
1. Crear animales, voluntarios y adopciones.
2. Agregarlos al refugio mediante las funciones correspondientes.
3. Consultar la información almacenada (animales, voluntarios y adopciones).

## Limitaciones
- No maneja validación avanzada de datos.
- No trabaja con manejo de memoria complejo.
