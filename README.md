# Домашнее задание к работе 8

## Условие задачи
Составить программу, которая в зависимости от порядкового номера
месяца выводит количество дней в этом месяце. Предусмотреть возможность
выбора года (високосный или не високосный).
---
## 1. Алгоритм и блок схема

### Алгоритм
1. **Начало**
2. Объявить переменные:
   - `nYear` - Год
   - `nMonth` - Месяц
3. Запросить у пользователя номер месяца и год.
4. Соотносим номер месяца с количеством дней в этом месяце. В случае с февралём проверяем с помощью введённого года високосность и вывод соотвественное количество дней.
5. **Конец**

### Блок-схема
![Блок-схема алгоритма](Lab7_schema.png)

 [Ссылка на блок-схему](https://viewer.diagrams.net/?tags=%7B%7D&lightbox=1&highlight=0000ff&edit=_blank&layers=1&nav=1&title=%D0%94%D0%B8%D0%B0%D0%B3%D1%80%D0%B0%D0%BC%D0%BC%D0%B0%20%D0%B1%D0%B5%D0%B7%20%D0%BD%D0%B0%D0%B7%D0%B2%D0%B0%D0%BD%D0%B8%D1%8F.drawio&dark=auto#Uhttps%3A%2F%2Fdrive.google.com%2Fuc%3Fid%3D1hWGmKpKc1DurCsiKvIt4WXXg2ZC40GMI%26export%3Ddownload)

 ## 2. Реализация программы

```c
﻿#include <stdio.h>
int main()
{
	int nYear, nMonth;
	
	puts("Enter year and number of month");
	scanf("%d %d", &nYear, &nMonth);

	switch (nMonth)
	{
		case 1 :
			puts("31 days in January");
			break;
		case 2 :
			if (nYear % 4 == 0 && !(nYear % 100 == 0 && nYear % 400 != 0))
				puts("29 days in February");
				else
				puts("28 days in February");
			break;
		case 3 :
			puts("31 days in March");
			break;
		case 4 :
			puts("30 days in April");
			break;
		case 5 :
			puts("31 days in May");
			break;
		case 6 :
			puts("30 days in Juny");
			break;
		case 7 :
			puts("31 days in July");
			break;
		case 8 :
			puts("31 days in August");
			break;
		case 9 :
			puts("30 days in September");
			break;
		case 10 :
			puts("31 days in October");
			break;
		case 11 :
			puts("30 days in November");
			break;
		case 12 :
			puts("31 days in December");
			break;
	}
	system("pause");
}
```
# 3. Результаты работы программы
Enter year and number of month
2024 2
29 days in February
# 4. Информация о разработчике
Авраменко Дмитрий бИПТ-251
