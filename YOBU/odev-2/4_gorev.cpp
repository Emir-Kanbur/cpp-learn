/*
4. Teorik Sorular ve Cevapları

Soru 1: min3 fonksiyonunda neden karşılaştırma (if/else) yapılmak zorundadır?
Cevap: Bilgisayar hangi sayının daha küçük olduğunu bilemez. 
Sayıları birbiri ile karşılaştırarak sonuçlar elde eder. Bunu yaparken matematiksel operatörler kullanır.
Bu yüzden if-else gibi karar yapıları kullanılmaktadır. Hatta her sayının birbiri ile karşılaştırılması gerekmektedir.


Soru 2: sort3 fonksiyonunda referans (int &a) kullanmanın avantajı nedir?
Cevap: Referans kullanıldığında fonksiyon ana programdaki main değişkenlerin adresini alır. 
Fonksiyon içinde yapılan değişiklikler doğrudan ana programdaki orijinal değişkenleri değiştirir. 
Bu sayede fonksiyon bir değer döndürmek zorunda kalmadan birden fazla değişkeni kalıcı olarak düzenleyebilir.


Soru 3: Değer parametre (int a) kullansaydık ne olurdu?
Cevap: Değer paramatre kullanılsaydı fonksiyon çağrıldığında maindeki değişkenlerin sadece birer kopyası oluşturulurdu. 
Fonksiyon içinde yapılan sıralama ve yer değiştirme işlemleri bu kopyalar üzerinde gerçekleşirdi. 
Fonksiyon bittiğinde kopyalar silinir main içindeki orijinal değişkenler ise sırasız ve değişmemiş olarak kalırdı.


Soru 4: Bu yöntemle 3–4 sayı yerine 100 sayıyı sıralamak kolay olur muydu? Neden?
Cevap: Hayır. 3-4 sayı sıralanabilecek düzeydedir. Çünkü elimizdeki veri diğerine oranla azdır.
100 tane birbirinden farklı değişken tanımlamak zorunda kalabiliriz.
If-else kullanarak 100 tane sayıyı sıralamak için çok fazla karar yapısı kullanmamız gerekirdi. 
Bu da kodun yazılmasını ve okunabilirliğini azaltırdı. 
Bu tür yapılar için döngüler kullanılabilir.If-else karar yapısına oranla yazılması ve okunması daha kolay olur.
*/
