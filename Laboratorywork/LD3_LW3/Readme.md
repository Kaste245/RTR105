# Skaitliskā diferencēšana

### Satura rādītājs
- [Apraksts](https://github.com/Kaste245/RTR105/tree/main/Laboratorywork/LD3_LW3#apraksts)
- [Algoritma apraksts](https://github.com/Kaste245/RTR105/tree/main/Laboratorywork/LD3_LW3#algoritma-apraksts)
- [Izmantotā literatūra](https://github.com/Kaste245/RTR105/tree/main/Laboratorywork/LD3_LW3#izmantotā-literatūra)

## Apraksts
Skaitliskās diferenciācijas algoritmi novērtē matemātiskās funkcijas vai funkcijas apakšprogrammas atvasinājumu, izmantojot funkcijas vērtības un, iespējams, citas zināšanas par funkciju.  
  
Mīnussi:
  
- Tie nav tik vienkārši kā analītiskie risinājumi
- Precīza vērtība var nebūt skaidra
- Daži kompilātori nespēj precīzi izreiķinat vērtības var izkrist kādi punkti

## Algoritma apraksts
Šis algoritms tiek izmantots, lai aprēķinātu eksponenciālās funkcijas exp(x) pirmo un otro atvasinājumu noteiktā diapazonā "a un b", izmantojot attiecīgi galīgās starpības un centrālās atšķirības metodes. Tā arī ieraksta rezultātus failā tabulas formātā.  
Algoritmam ir šādas darbības:
  
- Tas atver failu ar nosaukumu "derivative.dat" rakstīšanas režīmā un piešķir faila rādītāju mainīgajam fptr.
- Pēc tam lietotājam tiek piedāvāts ievadīt a, b un delta_x vērtības, kas attiecīgi atspoguļo novērtējamo x vērtību diapazonu un aprēķinu precizitāti.
- Programma inicializē mainīgos lielumus pirmajam un otrajam atvasinājumam "c un d" un iestata x uz a sākotnējo vērtību.
- Tas ievada kamēr cikls, kurā atkārtoti novērtē funkciju exp(x) un tās atvasinājumus, izmantojot galīgās atšķirības metodi pirmajam atvasinājumam un centrālās atšķirības metodi otrajam atvasinājumam.
- Tas palielina x par delta_x katras iterācijas beigās un ieraksta katras iterācijas rezultātus failā "derivative.dat" tabulas formātā.
- Cikls "while" turpinās, līdz x ir lielāks vai vienāds ar b.
  
Grafiks kur attēlots visas līknes, bet vērtības ir tik precīzas, ka izskatās, ka viena līkne.  
  
![grafiks](https://github.com/Kaste245/RTR105/blob/main/Laboratorywork/LD3_LW3/graph3.png?raw=true)  

## Izmantotā literatūra
- https://en.wikipedia.org/wiki/Numerical_differentiation


