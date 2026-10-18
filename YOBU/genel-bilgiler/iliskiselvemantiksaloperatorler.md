## İLİŞKİSEL ve MANTIKSAL OPERATÖRLER ve ŞARTLI DEYİMLER

## Eşittir ve Eşit Değildir Operatörleri

    Değişkenler, bir programlama dilindeki temel yapı taşlarıdır. İki değişkenin değerlerini karşılaştırmak için C++'da "==" (eşittir) ve != (eşit değildir) operatörleri kullanılır.

    int x=5 , y=5 z=6;

    if (x==y)
        cout << "x ve y değerleri eşittir." << endl;
    if (x!=z)
        cout << " x ve z değerleri eşit değildir." << endl;

## İlişkisel Operatörler

    İlişkisel İfadeler, bir koşulun doğruluğunu kontrol etmek için kullanılır. C++'da bu ifadeler için dört operatör bulunur.
    Bu operatörler: " > ", " >= ", " < ", " <= " .

    int x=5 , y=3 z=5;

    if (x>y)
        cout << "x'ye den büyüktür." << endl;

    if (x>=z)
        cout << "x z'ye eşit ya da büyük << endl;

## Mantıksal Operatörler

    Daha karmaşık koşulları değerlendirmek için mantıksal operatörler kullanılır:
    "&&" (VE), "||" (VEYA), "!" (DEĞİL).

    int a = 5, b = 10;

    if (a < 10 && b > 5)
        cout << "Hem a'nın değeri 10'dan küçük, hem de b'nin değeri 5'ten büyük." << endl;

## Koşul Kavramı ve If Şartlı Deyimi

    Programın akışını yönetmek için koşullu ifadeler kullanılır.
    Bu ifadelerle belirli koşullarda farklı kod blokları çalıştırılabilir.
    int ortalama = 85;

    if (ortalama >= 90)
        cout << "A" << endl;
    else if (ortalama >= 80)
        cout << "B" << endl;
    else if (ortalama >= 70)
        cout << "C" << endl;
    else
         cout << "D" << endl;

## İç İçe if-else Yapıları

    Karmaşık koşulları değerlendirmek için iç içe if-else yapıları kullanılır.
    int x = 15;

     if (x > 10) {
     if (x < 20)
         cout << "x, 10 ile 20 arasında bir değere sahip." << endl;
     else
        cout << "x, 20'den büyük." << endl;
    }

## Switch-Case Yapıları

    Bir değişkenin alabileceği değerlere göre farklı işlemler yapmak için kullanılır.

     char grade = 'B';

     switch(grade) {
     case 'A':
         cout << "Mükemmel!";
     break;
     case 'B':
         cout << "Çok iyi!";
     break;
     default:
      cout << "Geçerli bir not girmediniz.";

}

## Ternary Operatörü

    Kısa if-else yapısı olarak kullanılır.

    int age = 22;
        string status = (age >= 18) ? "Yetişkin" : "Çocuk";
        cout << status << endl;
