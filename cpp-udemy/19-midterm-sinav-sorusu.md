## Soru

`x = 5` ve `y = 10` iken aşağıdaki kodun çıktısı nedir?

```cpp
int x = 5;
int y = 10;

if ((x = 20)) {
    if (y == 10)
        cout << "** ";
} else {
    cout << "*****";
}
```

## Cevap

`x = 20` bir karşılaştırma değil, atamadır. Atama ifadesinin sonucu `20` olduğundan koşul doğrudur; `y == 10` da doğru olduğu için çıktı `** ` olur.
