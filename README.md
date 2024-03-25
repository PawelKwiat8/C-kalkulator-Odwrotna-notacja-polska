

# Kalkulator Odwrotnej Notacji Polskiej (ONP) z GUI Qt
 kalkulator został zaprojektowany z myślą o z do wykonywania obliczeń matematycznych w oparciu o odwrotną notację polską (ONP) z pomocą graficznego interfejsu użytkownika (GUI) stworzonego w Qt. Dzięki zastosowaniu ONP, kalkulator pozwala na efektywne przetwarzanie wyrażeń bez konieczności używania nawiasów, co ułatwia obliczenia złożonych wyrażeń matematycznych.
 
![interfejs graficzny](qtfiles%20-%20kalkulator/images/kalkulator.PNG)

## Główne cechy:
- Wsparcie dla działań z nawiasami: Nawiasy są obsługiwane dla ułatwienia wprowadzania wyrażeń, choć dzięki ONP ich użycie jest opcjonalne.
- Znaki działania: Możliwość używania wszystkich standardowych znaków działania matematycznego w dowolnej kolejności.
- Liczby dziesiętne: Kalkulator obsługuje wpisywanie liczb dziesiętnych z użyciem przecinka.
- Liczby wielocyfrowe: Użytkownicy mogą wprowadzać liczby składające się z wielu cyfr.
- Usuwanie elementów: Oferuje możliwość usunięcia pojedynczego elementu lub całego wiersza wprowadzonych danych.
#

## algorytm działania programu:
* Inicjalizacja i wprowadzanie danych: Klasa MainWindow inicjuje interfejs użytkownika i obsługuje interakcje, takie jak naciśnięcia przycisków i wprowadzanie danych z klawiatury. Użytkownik może wprowadzać liczby, operatory arytmetyczne oraz nawiasy, korzystając z przycisków na ekranie lub bezpośrednio z klawiatury.

* Obsługa zdarzeń klawiatury: Metoda keyPressEvent reaguje na naciśnięcia klawiszy, przekierowując akcję do odpowiednich metod obsługujących konkretne przyciski. Na przykład, naciśnięcie klawisza '1' wywołuje metodę on_pushButton_clicked(), która dodaje cyfrę '1' do bieżącego wprowadzania.

* Konwersja do ONP: Po wprowadzeniu całego wyrażenia (zakończonego znakiem równości '=') wyrażenie jest przesyłane do funkcji konwertera, która zamienia notację infixową (standardową) na notację ONP. Dzięki temu możliwe jest efektywne obliczenie wyrażenia bez potrzeby analizowania priorytetów operatorów i nawiasów.

* Obliczenia: Wyrażenie w notacji ONP jest przekazywane do funkcji oblicz(), która oblicza wynik operacji matematycznych. Funkcja ta przetwarza wyrażenie ONP krok po kroku, korzystając ze stosu do tymczasowego przechowywania wyników pośrednich.

* Wyświetlanie wyników: Obliczony wynik jest wyświetlany w polu tekstowym interfejsu użytkownika, umożliwiając użytkownikowi wizualną weryfikację rezultatu.

* Usuwanie danych: Użytkownik ma możliwość usunięcia pojedynczego elementu z aktualnego wyrażenia lub całkowite wyczyszczenie pola wprowadzania, co pozwala na szybkie korygowanie błędów lub rozpoczęcie nowego obliczenia.

* Restart cyklu: Po wyświetleniu wyniku użytkownik może rozpocząć tworzenie nowego wyrażenia, co restartuje cykl obliczeniowy.

* Program zapewnia elastyczne środowisko do wykonywania obliczeń matematycznych, oferując intuicyjny interfejs użytkownika i zaawansowane możliwości obliczeniowe dzięki wykorzystaniu odwrotnej notacji polskiej. Obsługa zdarzeń klawiatury i interaktywne przyciski GUI sprawiają, że wprowadzanie danych jest płynne i efektywne, co znacznie zwiększa użyteczność kalkulatora.

## Ograniczenia:
Po funkcjach trygonometrycznych (np. sin, cos, tg) należy wprowadzić tylko jedną liczbę. Wyrażenia zawierające operacje w nawiasach bezpośrednio po tych funkcjach nie będą prawidłowo przetwarzane.

