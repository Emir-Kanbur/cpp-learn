## Soru 1

```cpp
int x = 5, y = 9, z = 7.4, w;

w = (z > x) - (y <= 11);
cout << w;
```

`z` bir `int` olduğundan `7.4`, `7` olarak saklanır. İki karşılaştırma da `true` (`1`) olduğundan `w` değeri `0` olur.

## Soru 2

```cpp
int x = 5, y = 9, z = 7.4, w;

w = z > x - y <= 11;
cout << w;
```

`z` burada da `7` değerini alır. Karşılaştırmalar soldan sağa gruplanır ve çıkarma önce yapılır: `(z > (x - y)) <= 11`. Sonuç `1` olur.
