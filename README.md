napisi program u koji se unosi string od minimum 2 recenice. Ako ima manje od 2 recenice ispisi "Neispravan unos." i ponovi unos. Nakon toga program ispituje svaku rijec recenice te ako je prvo slovo rijeci veliko treba ga pretvoriti u malo. 

Za izvrsenje programa treba koristit 2 funkcije:
1. funkcija int preboji(cahr* s) koja prebrojava recenice i vraca tu vrijednsot
2. funkcija char* promjeni(cahr*s) koja mijenja prvo veliko slovo svake rijeci u malo slovo 
   i vraca pointer na taj promjenjeni string

u: Bok! Bok, kako si?
i: 2
   bok! bok, kako si?

u: Danas je jedan jako lijep dan.
   Danas je jedan jako lijep dan. Zar NE?
i: Neispravan unos.
   2
   danas je jedan jako lijep dan. zar nE?

u: Danas Je jedAn jako Lijep DAN za programiranje! Zar ne? ProgramirajmO!
i: 3
   danas je jedAn jako lijep dAN za programiranje! zar ne? programirajmO!
