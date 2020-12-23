# Welcome to my blog 


## Zgadywanka
Ten materiał powstał z myślą o osobach, które uważają matematykę szkolną za nudną. Zgadzam się z nimi. Przedstawię poniżej ciekawy sposób rozwiązywania równań kwadratowych. Po przepracowaniu tej lektury będziesz w stanie rozwiązać równanie  x^2 - 3x - 40 = 0  bez używania długopisu. Zapraszam do lektury.

### Metoda
Równania będziemy rozwiązywać za pomocą zgadywania. Jest to najprzyjemniejszy i najszybszy sposób otrzymywania wyników. Niestety większość z nas praktykuje monotonne liczenie delty.
Sposób działania jest następujący. Liczby a i b są dowolnymi liczbami których suma daje współczynnik przy pierwszej potędze zmiennej, a iloczyn współczynnik przy potędze zerowej. Wyrażenie:
x^2 + (a+b) x + a * b = 0
Możemy przedstawić w postaci:
(x+a)*(x+b) = 0
Do zadanego równania dobieramy współczynniki i gotowe.

### Przykład  1
Zastosujemy nowo poznaną metodę dla wyrażenia: 
x^2 + 10x + 24 = 0
W tym przypadku a + b = 10 i dodatkowo a * b =24. Liczbami które spełniają te warunki są  6 i 4, więc równanie zapiszemy następująco:
(x+6)(x+4)=0

### Przykład 2
Spróbujmy coś trudniejszego: 
x^2 - 5/2x + 1 = 0
Tutaj nie występują jedynie liczby naturalne. Iloczyn liczb a i b jest równy 1. To znaczy, że te liczby są swoimi odwrotnościami, suma jest ujemna. Rozwiązaniem jest :
(x - 2) * (x - 1/2) = 0

### Zadanie
Rozwiąż za pomocą metody zgadywania:

1.   x^2 + 5x + 6 = 0
2.   x^2 - 5x - 14 = 0
3.   x^2 + 7x + 12 = 0
4.   x^2 - 2x - 63 = 0
5.   x^2 - 3x - 28 = 0
6.   x^2 - x + 6 = 0
7.   x^2 + 11x + 30 = 0
8.   x^2 + 13/4x + 3/4 = 0
9.   x^2 + 1/4x - 1/8 = 0


## Zgadywanka 2

W zgadywance mieliśmy do czynienia z rówaniami kwadratowymi, w których współczynnik przy dugiej potędze był równy 1. Z autopsji wiemy, że nie tylko z takimi równaniami się spotykamy. Musimy więc do przykładu równania dobierać stosowną, optymalną metodę rozwiązania. Po przepracowaniu tego materiału będziesz w stanie szybko rozwiązać równanie x^3 + 11x^2 + 34x + 24 = 0  lub 2x^2 - 3x + 1 = 0


### Metoda 

Na początku przyjrzyjmy się 2 bardzo ciekawym właściwościom wielomianów. Niech W(x) będzie dowolnym wielomianem:

W(1) równa się sumie współczynników w wielomianie.

W(-1) równa się różnicy sumy współczynników na miejscach parzystych potęg i potęg nieparzystych. (to zdanie warto przeczytać 2 razy :))


Analogicznie do metody ze zgadywanki można zapisać schemat rozkładu dla dowolnej liczby współczynników, na razie wystarczy nam schemat dla wielomianu 3 stopnia. Wyrażenie :

x^3 + ( a + b ) x^2 + ( c + a )  x + (  c + d * a )  x + a * c  = 0

możemy zapisać w następującej postaci iloczynowej:

( x + a ) (x^2 + b x +c) = 0

zgadywanie w ten sposób jest łatwiejsze, gdy znamy co najmniej jeden pierwiastek. 


### Przykład  1

Przyjrzyjmy się przykładowi ze wstępu:
x^3 + 11x^2 + 34x + 24 = 0

Na pierwszy rzut oka wydaje się on skomplikowany. Spróbujmy zastosować drugą właściwość wielomianu. Jeśli zsumujemy współczynniki przy potęgach parzystych i odejmiemy od nich współczynniki przy potęgach nieparzystych to jednym z pierwiastków jest liczba -1.  W naszym przypadku ta właściwość zachodzi.  1 + 34 - 24 -11 = 0. Jaki z tego wniosek? Możemy zapisać wielomian w postaci:
(x +1) ( coś co się ustali) = 0

Idąc za ciosem ustalmy co powinno znajdować się w drugim nawiasie. Odwołując się powyższych oznaczeń możemy zauważyć 3 prawidłowości: a =1, a * c = 24,  a + b = 11. Współczynnik a już mamy, z tych równań możemy otrzymać kolejne dwa: c =24 i b =10. Podstawmy więc wartości do współczynników, a otrzymamy: 
(x +1) (x^2 +10x + 24) = 0

Wielomian w takiej postaci możemy już rozwiązać za pomocą zgadywanki, dzięki której otrzymamy:
(x +1) (x +4) (x +6) = 0


### Przykład 2 

Zmierzmy się z trudniejszym przykładem:
5x^3 - 19x^2 + 11x + 3 = 0

W tym przypadku spóbujmy zastosować pierwszą właściwość wielomianu. Suma wszystkich współczynników wielomianu jest równa 0. Możemy więc zapisać wyrażenie w postaci:
(x - 1) (coś co się ustali) = 0

W tym punkcie pojawia się szkopuł. Nie posiadamy na razie narzędzia do ustalenia współczynników przy potęgach w drugim nawiasie. Jesteśmy, można powiedzieć w króliczej norze. Czas na krótką dygresję która pozwoli nam rozwikłać tą zagadkę. 

Wcześniej w poprzednich przykładach stosowaliśmy wzorce rozkładu wielomianów oparte na spostrzeżeniach. Możemy je tworzyć w nieskończoność, natomiast czas dokonać syntezy wszystkich spostrzeżeń. Dość prosto można zauważyć "szkielet" na którym się opierają wszystkie podane przeze mnie wzorce rozkładu wielomianów. Wynika on z faktu, że wyrażenie które zostało zwinięte w postać iloczynową musi po wymnożeniu być tożsame z formą pierwotną. Pozostaje nam więc rozsądne manipulowanie współczynnikami przy potęgach. 

Manipulujmy więc! Aby otrzymać współczynnik przy trzeciej potędze równy 5 współczynnik przy drugiej potędze w drugim nawiasie musi być równy 5. Mamy więc:
(x - 1) (5x^2 + coś się ustali) = 0

Idąc dalej z rozumowaniem, w postaci pierwotnej współczynnik przy drugiej potędze jest równy -19 więc uwglęniając -5x^2, które otrzymamy z mnożenia -1 i 5x^2 musimy w drugim nawiasie dopisać -14x ( -1 * 5x^2 - 14x * x = -19x^2 ).  Mamy:
(x - 1) (5x^2 - 14x + coś się ustali) = 0

Aby ustalić ostatni wpółczynnik musimy skupić się na najniższej potędze. -1 * ( coś co się ustali ) musi być równe 3. Wniosek z tego jest jasny.  ( coś co się ustali ) = -3. Otrzymaliśmy więc:
(x - 1) (5x^2 - 14x - 3) = 0

Aby znaleść pozostałe pierwiastki możemy zastosować standardowe liczenie delty lub jeśli dysponujemy szczęściem, możemy się pokusić o strzał. 





### Zadanie

Rozwiąż stosując 2 poznane właściwośći wielomianów:

1. x^3 - 6x^2 + 12x - 7 = 0

2. 5x^3 - 2x^2 + 6x - 9 = 0

3. x^3 + 2x^2 + x - 4 = 0

4. -6x^3 + 8x^2 + 10x - 4 = 0
