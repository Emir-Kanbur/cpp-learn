## DONGULER

Bir programın verimliliği ve akıcılığı, çoğu zaman kodun tekrar kullanılabilirliğine bağlıdır.
İşte döngüler, tekrar eden işlemleri kolaylaştırarak programlamada bu verimliliği sağlar.

## ARTTIRMA VE AZALTMA OPERATÖRLERİ

Operatörler, C++'da matematiksel, ilişkisel ve mantıksal işlemleri gerçekleştirmek için kullanılan özel sembol
Operatörlerin işlev gösterebilmesi için işlenenlere ihtiyaç duyarlar.
Tekli (unary), ikili (binary), üçlü (ternary) olmak üzere farklı tiplere ayrılırlar.
Döngülerde sıkça karşılaştığımız bir durum, döngü sayacının arttırılması veya azaltılması gerektiğidir.

## ARTTIRMA VE AZALTMA OPERATÖRLERİNİN KULLANIMI

Döngü sayacını arttırmak için "sayac = sayac + 1;" ifadesi kullanılabilir.
Ancak C++'da bu işlemi daha kısa yoldan yapabilmemiz için ++ (arttırma) ve -- (azaltma) operatörleri bulunur.

-> int counter = 0;
-> counter++; // counter'ı 1 artırır
-> counter--; // counter'ı 1 azaltır

## ÖNCE ARTTIR/AZALT VE SONRA ARTTIR/AZALT

Bu operatörler, değişkenin önünde veya sonunda kullanılabilirler, bu da farklı işlem sırası ve sonuçlar doğurur.

## DİKKAT EDİLMESİ GEREKENLER

Arttırma ve azaltma operatörlerinin ifade içinde kullanıldığı zaman dikkatli olunmalıdır.
Cünkü ++(a \* b) gibi yanlış kullanımlar derleyici hatalarına yol açabilir.

Bu operatörler ilişkisel operatörlerle birlikte kullanıldığında öncelik sıralamasına dikkat etmek önemlidir.

Arttırma ve azaltma operatörleri, döngülerde ve diğer tekrar eden yapılar içinde çok önemli rol oynarlar.
Kullanımları, program akışını doğrudan etkileyebileceğinden, bu operatörlerin doğru ve etkin şekilde kullanılması programın başarısını belirler.

## BİLEŞİK ATAMA OPERATÖRLERİ

Programlama yaparken, bir değişkenin değerini güncellemek için genellikle "a = a + 3;" gibi ifadeler kullanılır.
Bu ifadeler ilk bakışta karmaşık görünebilir, ama aslında çok basit bir işlemi ifade eder: değişkenin mevcut değerini güncellemek.

## BİLEŞİK ATAMA OPERATÖRLERİNİN AMACI

Bu tip ifadelerin daha basit ve anlaşılır hale getirilmesi için C++ programlama dilinde bileşik atama operatörleri bulunur.
Bunlar sayesinde değişkenlerin değerleri daha kısa ve temiz bir sintaks kullanılarak güncellenebilir.

## BİLEŞİK ATAMA OPERATÖRLERİ \VE KULLANIMLARI

Bileşik atama operatörleri, temel atama operatörü olan "=" ile diğer matematiksel operatörlerin kombinasyonundan oluşur.

## DÖNGÜ OLUŞTURMA KURALLARI

Döngüler, belirli bir sayıda veya bir koşul sağlandığında çalıştırılan komutlar bütünüdür. Sayaç kontrollü veya şartlı kontrollü döngüler olarak iki temel döngü türü vardır.

## SAYAÇ KONTROLLÜ DÖNGÜLER İÇİN KURALLAR

Kontrol değişkeni tanımlanır.
Kontrol değişkeninin başlangıç ve bitiş değerleri belirlenir.
Kontrol değişkeninin bitiş değerine ulaşıp ulaşmadığı her iterasyonda kontrol edilir.
İstenen komut veya komut grubu çalıştırılır.
Kontrol değişkeninin değeri güncellenir.

## ŞARTLI KONTROLLÜ DÖNGÜLER İÇİN KURALLAR

Döngüyü sonlandıracak şartlı bir ifade oluşturulur.
Şartlı ifade her iterasyonda kontrol edilir.
Eğer şart doğruysa, komut grubu çalıştırılır.
Eğer şart yanlışsa, döngü sonlandırılır.
--- Dikkat ---
Şartlı bir döngü içinde, beklenen durum gerçekleşirse şartlı ifadeyi yanlış yapacak bir güncelleme yapılmalıdır.
Aksi takdirde sonsuz döngüye girilir.
