/* 
Creare un programma C che gestisca un vettore di MASSIMO 10 stringhe in maniera dinamica. Il programma deve presentare all'avvio due cose:
1. le 10 stringhe presenti nel vettore.
2. un menu a tre voci:
	1. Inserisci
	2. Estrai
	3. USCITA

funzionalità:
1. Se vi è posto disponibile il programma richiede la stringa da inserire e la inserisce in ordine alfabetico crescente.
2. il programma richiede la posizione da libera (oppure la stringa da estrarre), quindi la toglie dal vettore.
3. il programma termina.

ESEMPIO:
[0] ->
[1] ->
[2] ->
[3] ->
[]
[]

Inserisco "Alba"
[0] -> Alba
[1] ->
[2] ->

Inserisco "Dado"
[0] -> Alba
[1] -> Dado
[2] ->
[3] ->

Inserisco "Carta"
[0] -> Alba
[1] -> Carta
[2] -> Dado
[3] ->

Rimuovo 1 oppure "Carta"
[0] -> Alba
[1] -> Dado
[2] -> 
[3] ->

Rimuovo "Bicicletta" oppure indice 3
!Parola non trovata!

Premo 3
Programma Terminato.

 */