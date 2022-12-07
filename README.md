# RTR105
Datormāciba  
Satura rāditājs  
- [Saglabāšana](https://github.com/Kaste245/RTR105#saglabāt)
- [Sakums](https://github.com/Kaste245/RTR105#sakums_linux) 
- [Pārvietošanās](https://github.com/Kaste245/RTR105#p%C4%81rvieto%C5%A1anas)
- [Linux II](https://github.com/Kaste245/RTR105#linux-ii)
- [Linux III](https://github.com/Kaste245/RTR105#linux-ii)
- [C valoda](https://github.com/Kaste245/RTR105#c-valoda)
- [C valoda II](https://github.com/Kaste245/RTR105#c-valoda-ii)
- [C valoda Mainīgie](https://github.com/Kaste245/RTR105#c-valoda-mainīgie)
- [Debug](https://github.com/Kaste245/RTR105#debug)
- [Taylor](https://github.com/Kaste245/RTR105#taylor)
- [Gnuplot](https://github.com/Kaste245/RTR105#gnuplot)
## Github  
[ text ](link)  
Bilde ![ text ](links)

## Sakums_linux  

Ctrl + alt + T  
Ctrl + shift + T  
Ctrl + alt + F1-F7  
Shift + ins  
cp - kopēt  

## Saglabāt  
git clone  
git config --global user.name.email  
git commit -m "name"  
git push origin main  
git pull  

# Pārvietošanas 
~ - Sakums   
pwd - kur atrodies    
ls -alt  
man- komandas  
cd . - ši direktorija  
cd . . - limeni augstāk  
cd ~ - sākums   
mkdir - mapes izveidot  
nano - rakstīt linux  
cat - read only mode  
rm - dzēšana  
rmdir - direktorijas dzēšana  
rm -rf name - dzesana bez jautajumiem  
mv ~/name ./kur - parvietot  

# Linux II  
uname - operetajsistema  
firefox & - var turpinat procesus  
echo $0 - shell  
ps -aux - kadi procrsi palaisti  
ps -aux | grep firefox - procesi  
Kill numurs - apturet procesu  
history > filename.txt  
git clone links  

# Linux III    
Driver - iekārtu pārvaldīšana, datu glabāšana  
whereis  
-rwxr-xr-x - izpildīšanas tiesības  
lrwxr-xr-x - links saīsinājums  
chmod 764 - dot iespēju izpildīt komandu  
history | grep  
PATH=$PATH:  
git-upload commitName  
mv - parvietot / nosaukt  

# C valoda

Pirmkoda rakstisana  
gcc- partulkot pirmkodu  
tree - viegla saredzet kas mape  
() - funkcijas pazimes  
{} - ko daris  
echo $? - darbibas rezultats kluda  
-0 - pieskirs savu faila nosaukumu  
gcc name -o name_new - redzet starp rezultatus bez komentariem  
hexdump -C - hex ciparos kods  

# C valoda II  
 
0x - hex dec  
0 - oct  
%10d - atstarpēm  
%d... - dažādi formāti  
1.5e-13 -> 1.5x10-13 - mantiss  

# C valoda mainīgie  

char(8B), int(32B), long long(64B) . . .  
https://www.geeksforgeeks.org/data-types-in-c/  
float, double, long double-robežu vidu būs 0  
Ctrl + C - rindiņas Nr.  
Alt + U - Undo  
Alt + E - Redo  

# Debug

gcc -g name - atvert  
info break - informacija par break pointiem  
b line, funkcija - ievietot break pointu  
c - nakamo break point  
r - runnot programmu  
q - quit  
d - dzēst break pointus  

# Taylor
gcc name -lm  

# GNUplot

gnuplot  
plot intervāls izteiksme - ievadit grafiku  
replot - velviena  
f1()  
pakāpē celt **  
set grid replot  
file.gp  
load "exaple.gp"  
gnuscript.gp  
