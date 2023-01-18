# Skaitļu kopas kārtošana

### Saturs rādītājs

- [Apraksts](https://github.com/Kaste245/RTR105/tree/main/Laboratorywork/LD5_LW5#apraksts)
- [Algortima apraksts](https://github.com/Kaste245/RTR105/tree/main/Laboratorywork/LD5_LW5#algoritma-apraksts)
- [Izmantotā iteratūra](https://github.com/Kaste245/RTR105/tree/main/Laboratorywork/LD5_LW5#izmantotā-literatūra)

## Apraksts

Burbuļu kārtošana, dažreiz saukta par kārtošanu, ir vienkāršs kārtošanas algoritms, kas atkārto ievades saraksta elementu pēc elementa, salīdzinot pašreizējo elementu ar nākamo elementu, mainot to vērtības pēc vajadzības. Šīs pārvietošanās caur sarakstu tiek atkārtotas, līdz pārvietošanās laikā netiek veikta mijmaiņa, kas nozīmē, ka saraksts ir pilnībā sakārtots. Algoritms, kas ir salīdzināšanas veids, ir nosaukts par veidu, kā lielākie elementi "burbuļo" līdz saraksta augšdaļai.  

Mīnussi:  

- Galvenais trūkums ir nepieciešamais laiks. Tas ir ļoti neefektīvs lielām datu kopām
- Tai arī palēlināta datu kārtošanu

## Algoritma apraksts

Algoritms sākas, liekot lietotājam ievadīt rakstzīmju virkni, kas tiek saglabāta mainīgajā "array". Pēc tam tas aprēķina virknes garumu un izmanto funkciju qsort, lai kārtotu rakstzīmes masīvā augošā secībā.  

Pēc tam tas atrod minimālo un maksimālo rakstzīmju skaitu masīvā, attiecīgi ņemot pirmo un pēdējo sakārtotā masīva elementus. Tas arī aprēķina visu masīva rakstzīmju summu un dala to ar masīva garumu, lai atrastu rakstzīmju vidējo vērtību.  

Lai atrastu mediānu, tas pārbauda, ​​vai masīva garums ir pāra vai nepāra. Ja tas ir pāra, tas ņem vidējo divu sakārtotā masīva elementu vērtību. Ja tas ir nepāra, tas aizņem sakārtotā masīva vidējo elementu.  

Lai atrastu režīmu, tas saskaita katras masīva rakstzīmes biežumu, izmantojot veselu skaitļu masīvu, ko sauc par "frequency". Pēc tam tas pāriet cauri masīvam, lai atrastu rakstzīmi(-es) ar augstāko frekvenci, kas ir masīva režīms.  

Visbeidzot, programma ieraksta statistisko aprēķinu rezultātus un sakārtoto virkni failā ar nosaukumu "statictic.txt". Tas arī drukā konsolē minimālo, maksimālo, vidējo, vidējo, režīmu, sakārtoto virkni un virknes rakstzīmju ASCII kodus.  
  
Programmas izvade un grafiks  
  
![programma](https://github.com/Kaste245/RTR105/blob/main/Laboratorywork/LD5_LW5/Prog_Streis.png?raw=true)
![grafiks](https://github.com/Kaste245/RTR105/blob/main/Laboratorywork/LD5_LW5/graph5.png?raw=true)

## Izmantotā literatūra

- https://en.wikipedia.org/wiki/Bubble_sort 
- https://www.simplilearn.com/tutorials/data-structure-tutorial/bubble-sort-algorithm
