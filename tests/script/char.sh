#Announce what type of test is being done
echo -e "\033[0m\033[3;37mChar test\033[0m"

#Compile the test
gcc ../src/char.c -D PRINT=printf && ./a.out > ../log/printf.log
gcc ../src/char.c ../../libftprintf.a -D PRINT=ft_printf -Wall -Werror -Wextra -fsanitize=address -g3 && ./a.out > ../log/ft_printf.log
diff ../log/printf.log ../log/ft_printf.log > ../log/diff.log

#Check if the diff file is ok or not
if [ -s ../log/diff.log ]
then
	echo -e "\033[1;31mK.O 😔\033[2;37m" && cat ../log/diff.log
	rm -rf a.out && rm -rf a.out.dSYM && cd ../../ && Make fclean && exit 1
else
	echo -e "\033[1;32mOK 😁\033[0m\033[2;37m"
fi