```
mkdir /tmp/42_pool_party

git clone https://github.com/doliG/42_pool_party.git /tmp/42_pool_party

cp /tmp/42_pool_party/j02/ex00/utils.c ./ex00/
cp /tmp/42_pool_party/j02/ex01/utils.c ./ex01/
cp /tmp/42_pool_party/j02/ex02/utils.c ./ex02/
cp /tmp/42_pool_party/j02/ex03/utils.c ./ex03/
cp /tmp/42_pool_party/j02/ex04/utils.c ./ex04/
cp /tmp/42_pool_party/j02/ex05/utils.c ./ex05/
cp /tmp/42_pool_party/j02/ex06/utils.c ./ex06/
cp /tmp/42_pool_party/j02/ex07/utils.c ./ex07/

gcc -o ./ex00/a.out ./ex00/utils.c ./ex00/ft_print_alphabet.c
gcc -o ./ex01/a.out ./ex01/utils.c ./ex01/ft_print_reverse_alphabet.c
gcc -o ./ex02/a.out ./ex02/utils.c ./ex02/ft_print_numbers.c
gcc -o ./ex03/a.out ./ex03/utils.c ./ex03/ft_is_negative.c
gcc -o ./ex04/a.out ./ex04/utils.c ./ex04/ft_print_comb.c
gcc -o ./ex05/a.out ./ex05/utils.c ./ex05/ft_print_comb2.c
gcc -o ./ex06/a.out ./ex06/utils.c ./ex06/ft_putnbr.c
gcc -o ./ex07/a.out ./ex07/utils.c ./ex07/ft_print_combn.c
```
