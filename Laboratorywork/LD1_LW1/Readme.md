# Tailora Rindas

### Satura rādītājs  
- [Apraksts](https://github.com/Kaste245/RTR105/tree/main/Laboratorywork/LD1_LW1#apraksts)
- [Algoritma apraksts](https://github.com/Kaste245/RTR105/tree/main/Laboratorywork/LD1_LW1#algoritma-apraksts)
- [Izmantotā literatūra](https://github.com/Kaste245/RTR105/tree/main/Laboratorywork/LD1_LW1#izmantotā-literatūra)


## Apraksts

Teilora rinda matemātikā ir funkcijai, kam punktā a eksistē visu kārtu atvasinājumi, piekārtota rinda, kuras parciālsummas ir polinomi.  
  
Mīnuss:  
- Secīgie termini kļūst ļoti sarežģīti un grūti atvasināmi
- Saīsināšanas kļūdai ir tendence strauji augt prom no izplešanās punkta
- Gandrīz vienmēr nav tik efektīva kā līknes pielāgošana vai tieša tuvināšana

## Algoritma apraksts

Šis algoritms aprēķina eksponenciālo funkciju exp(x) noteiktai x vērtībai, izmantojot divas metodes:  
- Iebūvēta funkcija exp() no matemātikas bibliotēkas, kas tieši aprēķina eksponenciālo funkciju. Programma izdrukā exp(x) vērtību, ko aprēķina šī funkcija.
- Teilora sērijas eksponenciālās funkcijas paplašinājums. Šī metode ietver eksponenciālās funkcijas tuvināšanu, izmantojot bezgalīgu terminu virkni, ar x vērtību palielinot līdz pieaugošam pakāpēm un dalot ar atbilstošo pakāpju faktoriāliem. Programma izmanto divas "while" ciklus, lai atkārtotu sērijas nosacījumus, sākot ar k = 0 un palielinot k ar 1 katrā iterācijā. Mainīgo "a" izmanto, lai aprēķinātu katru sērijas terminu, un mainīgo "S" izmanto, lai saglabātu sērijas summu līdz šim terminam. Programma izdrukā sērijas pēdējā termiņa vērtību "a500" un sērijas summu līdz šim termiņam "S500". Turklāt programma arī izdrukā eksponenciālās funkcijas Tailora sērijas paplašināšanas vizuālo attēlojumu.
  
Šeit tiek attēlots, ko programma izvada, kad tiek ievadīta vērtība 5 un 5 funkciju polinomu grafiki, kuri krustojas noteiktā laikā, un kā tās tuvākie polinomi attālinās.  
  
![Programma](https://github.com/Kaste245/RTR105/blob/main/Laboratorywork/LD1_LW1/Streistermanis_Prog.png?raw=true)
![Grafiks](https://github.com/Kaste245/RTR105/blob/main/Laboratorywork/LD1_LW1/graph.png?raw=true)

## Izmantotā literatūra

- https://lv.wikipedia.org/wiki/Teilora_rinda 
 

