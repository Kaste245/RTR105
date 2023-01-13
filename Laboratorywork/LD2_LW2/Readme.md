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

Algoritms tika veidots uz exp(x) funkcijas. Tas sākuma veido dialogu ar lietotāju, kur lietotājs sniedz intervālu, precizitāti, vērtību kuru vēlas aprēķināt pēc dihotomijas metodes. Šis algortms izpilda dihotomijas metodi un tad salīdzina vērtības vai tās ir vienādas.  
Tas strādā tikai tad, kad nav pārū saknes un grafiks ir krustojis x asi, tādēļ man arī nācās pārvietot grafiku mazliet zemāk, lai tas iegūtu patiesas vērtības  
Tālāk būs parādīt ko izvada programma un kāds grafiks sanāk.  
  
![Programma](https://github.com/Kaste245/RTR105/blob/main/Laboratorywork/LD2_LW2/Streistermanis_diho.png?raw=true)  
![Grafiks](https://github.com/Kaste245/RTR105/blob/main/Laboratorywork/LD2_LW2/graph2.png?raw=true)  
Grafika tiek parādīts krustpunkts ar X asi, kas ir svarīgs šai metodei.  

## Izmantotā literatūra 

- https://www.codesansar.com/numerical-methods/bisection-method-disadvantages.htm
- https://en.wikipedia.org/wiki/Bisection_method
 
 

