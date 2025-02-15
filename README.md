# Машина времени
Ограничение | Значение
--- | ---
Ограничение времени | 1 секунда
Ограничение памяти | 64Mb
Ввод | стандартный ввод или input.txt
Вывод | стандартный вывод или output.txt

Свершилось! Институт Пространственно-Временных Отношений имени Альберта Эйнштейна выпустил первый опытный экземпляр машины времени, которая работает на антиматерии!

Пульт управления машиной очень прост –- на нем находится только табло и четыре кнопки. На табло высвечивается целое число, которое указывает, на какое количество лет вперед отправится экспериментатор после нажатия кнопки «Пуск». Изначально это число равно 1. При нажатии первой кнопки число на табло увеличивается вдвое, при нажатии второй –- втрое, а при нажатии третьей увеличивается на 1. Четвертая же кнопка –- это как раз и есть кнопка «Пуск».

Поскольку машина пока что не умеет возвращать людей назад, конструкторы машины не планировали тестировать ее на живых людях. Однако тут к ним прибежал какой-то депутат и стал умолять их дать ему воспользоваться изобретением как можно быстрее (пока его не поймали), обещая большие деньги. Ученые решили, что им выпал шанс увеличить финансирование науки, и согласились (естественно, с предоплатой). Теперь им нужно переместить депутата на N лет вперед, причем как можно быстрее (а то депутата поймают, а их сделают соучастниками).

Помогите ученым определить такой порядок нажатий кнопок 1–3, чтобы суммарное число нажатий было минимальным.

### Формат ввода
Во входном файле написано натуральное число N, не превосходящее 106.

### Формат вывода
В первой строке выходного файла выведите минимальное количество операций. Во второй строке выведите числа, последовательно получающиеся при выполнении операций. Первое из них должно быть равно 1, а последнее N.

## Пример

Ввод | Вывод
--- | ---
32718 |  <ul><li>17</li><li>1 3 9 27 28 84 85 170 340 680 681 1362 1363 2726 5452 5453 16359 32718</li></ul>
