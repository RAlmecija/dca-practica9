# dca-practica9
Repositorio usado para la practica 9 de la asignatura de DCA


# Alias creados 

Con el comando `git config --global --get-regexp alias` listamos los creados.

```
alias.last log -1 HEAD
alias.p push
alias.lb branch -a

```

## git last

Indica el última commit en la rama

## git p

Hace simplemente 'push'

## git lb

Lista todas las ramas remotas

# Git bisect

Primero he ejecutado `git bisect start` para marcar el inicio.

Después , he puesto la HEAD como `git bisect bad` , ya que entiendo que el
error de contar palabras está propagado en esta versión actual.

En el siguiente paso, he puesto `git bisect good 55eab241873eae373304f3d51fcbc5d37973531c`,
he usado ese SHA por que se que es uno donde funcionaba el programa según lo esperado.


En la terminal sale por pantalla:

```
Biseccionando: faltan 3 revisiones por probar después de esto (aproximadamente 2 pasos)
[8129bd505107b955f9d9cc2aa657eb1d5becdd68] Añadido ejecutable

```

He ido pasando los commits con el comando `git bisect good` para ver cual era el que fallaba.


# Git Hooks


## pre-commit

Realizo un pre-commit que busco en todos los archivos alguna de mis palabras prohibidas.
El archivo se puede ver que se ejecuta al hacer commit al haber puesto un echo
Se puede ver mas en detalle en './git/hooks/pre-commit

### Ejemplo de salida por pantalla

```
Ejecutando pre-commit...
    std::cout << _("Ingresa el texto de ejemplo, rOma: ");
ERROR: Palabra no permitida "rOma" en el fichero: cuentapalabras.cpp

```

*He puesto r0ma para que no lo coja el readme como mala palabra


