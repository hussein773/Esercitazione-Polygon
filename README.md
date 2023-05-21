# Esercitazione-Polygon

Questo repository contiene un codice in c++ che implementa diverse classi per rappresentare poligoni come rettangoli, rombi e trapezi isosceli. 
Ogni classe è in grado di calcolare l'area e il perimetro della figura corrispondente.

## Classi implementate

### Polygon (classe base)
La classe `Polygon` è una classe di base astratta che rappresenta un poligono generico. Ogni poligono ha un numero di lati e una lunghezza per ogni lato. 
Questa classe fornisce metodi per calcolare l'area e il perimetro del poligono.

### Rectangle (classe derivata)
La classe `Rectangle` è una classe derivata da Poligono che rappresenta un rettangolo. La classe implementa i metodi per calcolare l'area e il perimetro del rettangolo.

### Rhombus (classe derivata)
La classe `Rhombus` è una classe derivata da Poligono che rappresenta un rombo. Un rombo ha tutti i lati uguali tra loro. 
La classe implementa i metodi per calcolare l'area e il perimetro del rombo.

### Trapezio isoscele (classe derivata)
La classe `isotrapezoid` è una classe derivata da Poligono che rappresenta un trapezio isoscele. 
Un trapezio isoscele ha due lati adiacenti uguali (paralleli) e le basi sono inclinate rispetto alla base maggiore. 
La classe implementa i metodi per calcolare l'area e il perimetro del trapezio isoscele.

## Utilizzo:
Per utilizzare le classi fornite, seguire i seguenti passaggi:

1. Clonare questo repository o scaricare il file sorgente.
2. Includere le librerie nel proprio progetto: es `#include <Rectangle.h>`
3. Creare oggetti delle classi desiderate, come ad esempio un rettangolo: rettangolo = Rectangle(5, 10).
4. Utilizzare i metodi GetArea() e GetPerimeter() per calcolare l'area e il perimetro della figura corrispondente.

