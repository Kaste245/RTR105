# Skaitliskā integrēšana

### Satura rādītājs

-
-
-

## Apraksts

Skaitliskā integrācija ietver plašu algoritmu saimi noteikta integrāļa skaitliskās vērtības aprēķināšanai, un paplašinot šo terminu dažreiz izmanto arī, lai aprakstītu diferenciālvienādojumu skaitlisko risinājumu.  
  
Mīnussi:  

- Taisnastūra likumam var atšķirties pecizitātē
- Trapeces likumam pie otrās kārtas atvasinājumie var būt problemas ar aprēķiniem tādēļ jaizmanto papildus nosacījumi
- Simpsona likuma pie ceturtās kārtas atvasinājumiem parādīsies problemas ar vērtībām

## Algoritma apraksts

Algoritms tika rēķināts pēc funkcijas exp(x). Tajā tiek iegūts intervāls, kur tiks izmantotas skaitlisko metodu likumu, lai aprēķinātu integrāli. Tas strādā tāka, ka algoritms automātīski starp grafiku un X asi zīme noteiktās likuma figūru vai dara ko citu un tad notiek šo daudzstūru kopējo laukumu aprēķināšana  
Šeit tiek parādīta ko programma izvada un no WolfromAlpha Pierādījums, ka ši vērtīb ir patiesa  
  
![Programma](https://github.com/Kaste245/RTR105/blob/main/Laboratorywork/LD4_LW4/Streismanis_inte.png)
![Grafiks]()

## Izmantotā literatūra

- https://www.wolframalpha.com/input?i=calculator+integral&assumption=%7B"F"%2C+"Integral"%2C+"rangestart"%7D+->"0"&assumption=%7B"F"%2C+"Integral"%2C+"integrand"%7D+->"exp%28x%29"&assumption=%7B"F"%2C+"Integral"%2C+"rangeend"%7D+->"7"
- https://math.libretexts.org/Bookshelves/Calculus/Book%3A_Calculus_(OpenStax)/07%3A_Techniques_of_Integration/7.06%3A_Numerical_Integration
- https://en.wikipedia.org/wiki/Numerical_integration
 
