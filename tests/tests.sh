#Compile
cd .. && Make && cd tests

#Announce what type of test is being done
echo -e "\033[3;37mSimple test (without any argument)\033[0m"

#Compile the test
gcc simple.c -D PRINT=printf && ./a.out > ./log/printf.log
gcc simple.c ../libftprintf.a -D PRINT=ft_printf -Wall -Werror -Wextra -fsanitize=address -g3 && ./a.out > ./log/ft_printf.log
diff ./log/printf.log ./log/ft_printf.log > ./log/diff.log

#Check if the diff file is ok or not
if [ -s ./log/diff.log ]
then
	echo -e "\033[1;31mK.O\033[2;37m" && cat ./log/diff.log
	rm -rf a.out && rm -rf a.out.dSYM && cd .. && Make fclean && exit 1
else
	echo -e "\033[1;32mOK :D\033[0m"
fi

#Announce what type of test is being done
echo -e "\033[3;37mPercent test\033[0m"

#Compile the test
gcc percent.c -D PRINT=printf && ./a.out > ./log/printf.log
gcc percent.c ../libftprintf.a -D PRINT=ft_printf -Wall -Werror -Wextra -fsanitize=address -g3 && ./a.out > ./log/ft_printf.log
diff ./log/printf.log ./log/ft_printf.log > ./log/diff.log

#Check if the diff file is ok or not
if [ -s ./log/diff.log ]
then
	echo -e "\033[1;31mK.O\033[2;37m" && cat ./log/diff.log
	rm -rf a.out && rm -rf a.out.dSYM && cd .. && Make fclean && exit 1
else
	echo -e "\033[1;32mOK :D\033[0m"
fi

#Announce what type of test is being done
echo -e "\033[3;37mChar test\033[0m"

#Compile the test
gcc char.c -D PRINT=printf && ./a.out > ./log/printf.log
gcc char.c ../libftprintf.a -D PRINT=ft_printf -Wall -Werror -Wextra -fsanitize=address -g3 && ./a.out > ./log/ft_printf.log
diff ./log/printf.log ./log/ft_printf.log > ./log/diff.log

#Check if the diff file is ok or not
if [ -s ./log/diff.log ]
then
	echo -e "\033[1;31mK.O\033[2;37m" && cat ./log/diff.log
	rm -rf a.out && rm -rf a.out.dSYM && cd .. && Make fclean && exit 1
else
	echo -e "\033[1;32mOK :D\033[0m"
fi

#Clean all
rm -rf a.out && rm -rf a.out.dSYM
cd .. && Make fclean

#End of file, exit 0 if all is OK :D
exit 0