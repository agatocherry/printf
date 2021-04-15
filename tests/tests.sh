#Announce what type of test is being done
echo -e "\033[3;37mSimple test (without any argument)\033[0m"

gcc simple.c -D PRINT=printf && ./a.out > printf.log
# gcc simple.c -D PRINT=ft_printf && ./a.out > ft_printf.log
diff printf.log ft_printf.log > diff.log

if [ -s diff.log ]
then
	echo -e "\033[1;31mK.O\033[2;37m" && cat diff.log && exit 1
else
	echo -e "\033[1;32mOK :D\033[0m"
fi

#End of file, exit 0 if all is OK :D
exit 0