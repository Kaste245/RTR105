# Dihotomijas metode

### Satura rādītājs

- [Apraksts](https://github.com/Kaste245/RTR105/tree/main/Laboratorywork/LD2_LW2#apraksts)
- [Algoritma apraksts](https://github.com/Kaste245/RTR105/tree/main/Laboratorywork/LD2_LW2#algoritma-apraksts)
- [Izmantotā literatūra](https://github.com/Kaste245/RTR105/tree/main/Laboratorywork/LD2_LW2#izmantotā-literatūra)

## Apraksts

Matemātikā bisekcijas metode ir sakņu noteikšanas metode, kas attiecas uz jebkuru nepārtrauktu funkciju, kurai ir zināmas divas vērtības ar pretējām zīmēm. Metode sastāv no šo vērtību definētā intervāla atkārtotas sadalīšanas uz pusēm un pēc tam atlasot apakšintervālu, kurā funkcija maina zīmi, un tāpēc tai ir jābūt saknei. Tā ir ļoti vienkārša un izturīga metode, taču tā ir arī salīdzinoši lēna.  

Mīnussi:  

- Lēns konverģences ātrums
- Nevar atrast dažu vienādojumu sakni. Piemēram: f(x) = x*x
- Tas nespēj noteikt sarežģītas saknes.

## Algoritma apraksts

Dihotomijas metode, kas pazīstama arī kā binārā meklēšanas metode, ir saknes meklēšanas algoritms, lai atrastu x vērtību, kas atbilst noteiktam vienādojumam ar noteiktu precizitāti. Tas darbojas, atkārtoti sadalot intervālu uz pusēm un pārbaudot, kurā intervāla pusē ir sakne. Algoritms sākas ar intervālu [a,b], kurā funkcija maina zīmi un x vērtība tiek aprēķināta kā šī intervāla viduspunkts. Pēc tam funkcija tiek novērtēta šajā viduspunktā, un intervāls tiek atkārtoti definēts kā puse, kurā funkcija maina zīmi. Šo procesu atkārto, līdz x vērtība intervāla viduspunktā apmierina vienādojumu vēlamajā precizitātē vai tiek sasniegts maksimālais iterāciju skaits. Šim algoritmam tiek garantēta konverģence uz sakni, kamēr funkcija ir nepārtraukta intervālā un funkcijas vērtībām beigu punktā ir pretējas zīmes.  
  
Tālāk būs parādīt ko izvada programma un kāds grafiks iznāk.  
  
![Programma](https://github.com/Kaste245/RTR105/blob/main/Laboratorywork/LD2_LW2/Streistermanis_diho.png?raw=true)  
![Grafiks](https://github.com/Kaste245/RTR105/blob/main/Laboratorywork/LD2_LW2/graph2.png?raw=true)  
Grafika tiek parādīts krustpunkts ar X asi, kas ir svarīgs šai metodei.  

## Izmantotā literatūra 

- https://www.codesansar.com/numerical-methods/bisection-method-disadvantages.htm
- https://en.wikipedia.org/wiki/Bisection_method
 
 

