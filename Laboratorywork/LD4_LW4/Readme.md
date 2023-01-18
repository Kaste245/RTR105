# Skaitliskā integrēšana

### Satura rādītājs

- [Apraksts](https://github.com/Kaste245/RTR105/tree/main/Laboratorywork/LD4_LW4#apraksts)
- [Algoritma apraksts](https://github.com/Kaste245/RTR105/tree/main/Laboratorywork/LD4_LW4#algoritma-apraksts)
- [Izmantotā literatūra](https://github.com/Kaste245/RTR105/tree/main/Laboratorywork/LD4_LW4#izmantotā-literatūra)

## Apraksts

Skaitliskā integrācija ietver plašu algoritmu saimi noteikta integrāļa skaitliskās vērtības aprēķināšanai, un paplašinot šo terminu dažreiz izmanto arī, lai aprakstītu diferenciālvienādojumu skaitlisko risinājumu.  
  
Mīnussi:  

- Taisnastūra likumam var atšķirties pecizitātē
- Trapeces likumam pie otrās kārtas atvasinājumie var būt problemas ar aprēķiniem tādēļ jaizmanto papildus nosacījumi
- Simpsona likuma pie ceturtās kārtas atvasinājumiem parādīsies problemas ar vērtībām

## Algoritma apraksts

Šis algoritms aprēķina funkcijas f(x) = exp(x) noteikto integrāli, izmantojot trīs dažādas skaitliskās integrācijas metodes: taisnstūra likumu, trapecveida likumu un Simpsona likumu. Funkcijas noteiktais integrālis ir laukuma mērs starp funkcijas līkni un x asi noteiktā intervālā. Algoritms sākas, liekot lietotājam ievadīt integrāļa apakšējo un augšējo robežu "a un b", kā arī vēlamo precizitāti "eps".  

Pēc tam algoritms izmanto precizitāti, lai aprēķinātu intervālu skaitu "num" un katra intervāla platumu "width", kas tiks izmantots aprēķinos. Tālāk algoritms izmanto for cilpu, lai atkārtotu intervālus un aprēķinātu integrāli, izmantojot katru no trim metodēm.  

Taisnstūra noteikums tiek izmantots, lai tuvinātu funkcijas noteikto integrāli, sadalot laukumu zem līknes vienāda platuma taisnstūros. Algoritms aprēķina noteikto integrāli, izmantojot taisnstūra noteikumu, saskaitot katra taisnstūra laukumu, kas tiek aprēķināts kā taisnstūra platuma un funkcijas augstuma reizinājums taisnstūra viduspunktā.  

Trapecveida noteikums ir precīzāka metode, kas tuvina noteikto integrāli, sadalot laukumu zem līknes vienāda platuma trapecēs. Algoritms aprēķina noteikto integrāli, izmantojot trapeces noteikumu, saskaitot katras trapeces laukumu, ko aprēķina kā trapeces platuma un funkcijas vidējā augstuma reizinājumu abos trapeces galapunktos.  

Simpsona noteikums ir precīzāka metode, kas tuvina noteikto integrāli, sadalot laukumu zem līknes paraboliskos segmentos. Algoritms aprēķina noteikto integrāli, izmantojot Simpsona likumu, saskaitot katra paraboliskā segmenta laukumu, ko aprēķina kā segmenta platuma un funkcijas augstuma summas reizinājumu trīs paraboliskā segmenta punktos.  
  
Šeit tiek parādīta ko programma izvada un no WolfromAlpha pierādījums, ka ši vērtība ir patiesa  
  
![Programma](https://github.com/Kaste245/RTR105/blob/main/Laboratorywork/LD4_LW4/Streismanis_inte.png)
![Grafiks](https://github.com/Kaste245/RTR105/blob/main/Laboratorywork/LD4_LW4/WolfromAlpha_Str.png?raw=true)

## Izmantotā literatūra

- https://www.wolframalpha.com/input?i=calculator+integral&assumption=%7B"F"%2C+"Integral"%2C+"rangestart"%7D+->"0"&assumption=%7B"F"%2C+"Integral"%2C+"integrand"%7D+->"exp%28x%29"&assumption=%7B"F"%2C+"Integral"%2C+"rangeend"%7D+->"7"
- https://math.libretexts.org/Bookshelves/Calculus/Book%3A_Calculus_(OpenStax)/07%3A_Techniques_of_Integration/7.06%3A_Numerical_Integration
- https://en.wikipedia.org/wiki/Numerical_integration
 
