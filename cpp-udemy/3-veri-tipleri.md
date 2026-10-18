## Veri Tipleri

# Yerleşik Veri Türleri

Türlerin boyutu platforma ve derleyiciye göre değişebilir. `sizeof` sonucu bayt cinsindendir.

- `int`: Tam sayılar için kullanılır; çoğu güncel sistemde 4 bayttır.
- `char`: En az 1 bayttır. Karakter sabitleri tek tırnakla yazılır (`'A'`).
- `bool`: `true` veya `false` değerini tutar.
- `float`: Ondalıklı sayılar için tek duyarlıklı türdür.
- `double`: Ondalıklı sayılar için genellikle daha yüksek duyarlıklıdır.

## Diğer türler

- `std::string`: Metin tutar; `<string>` başlık dosyasıyla kullanılır. Yerleşik tür değil, standart kütüphane türüdür.
- `void`: Değer taşımayan türdür; örneğin değer döndürmeyen fonksiyonlarda kullanılır.
