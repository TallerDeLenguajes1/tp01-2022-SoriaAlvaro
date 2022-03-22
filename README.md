# tp01-2022-SoriaAlvaro ✨

## 2)
  a) Investigar el archivo _.gitignore_
  * ¿Por qué es conveniente incluirlo?
  * ¿Cuándo se debe hacer?
  * ¿Cómo configurar el archivo .gitignore?
  
Hay veces donde ya no se utilizarn algunos archivos en un proyecto o carpetas que ya no estarán incluidas en una nueva versión, para estos casos es de mucha utilidad usar .gitignore. Con esto evitamos subir archivos o carpetas al repositorio que no estarán en la versión final.

Para inorar archivo, basta crear otro con la extensión ".gitignore". Dentro de este escribieremos el nombre de la carpeta o del archivo (junto a su extensión).

**Ejemplo:**

    _archivo.txt_

    _Nueva Carpeta_

c. Al compilar se creó _tp1_1.exe_, a este archivo no hace falta incluirlo al repositorio. Ya lo incluí en el _.gitignore_. Tambien se creó una carpeta .vscode, la incluí en _.gitignore_.

---
**Nota.** Si resolvió correctamente los puntos ii y iii notará que el resultado es el
mismo. 
* ¿a qué se debe?
* ¿Qué obtiene en el punto 4?
* ¿es igual a los anteriores?
* ¿por qué? Responder en el archivo readme.md

El resultado es el mismo ya que el puntero almacena la dirección de memoria de la variable.

El punto 4 muestra la dirección de memoria del puntero, usando & y %p, se podrá ver la dirección de este mismo. como es la dirección de memoria del puntero, es diferente a los puntos anteriores.

```
printf("Dirección de memoria del puntero: %p\n\n", &p);
```
