#Welcome message
echo -e "\033[0mWelcome 👋\033[2;37m"

#Check if have argument
if [ $# -eq 0 ]
then
	echo -e "\033[2;37mPlease, tape an argument cspdiuxX% or all\033[2;37m"
	read var
else
	var=$1
fi

#Compile
cd ..
make
cd tests/script

#Search if have argument, which is it
if [ $var = "all" ]
then
	bash char.sh
	exit_status=$?
	if [ $exit_status = 1 ]
	then
		rm -rf a.out && rm -rf a.out.dSYM 
		cd ../.. && make fclean
		exit 1
	fi
	bash string.sh
	exit_status=$?
	if [ $exit_status = 1 ]
	then
		rm -rf a.out && rm -rf a.out.dSYM 
		cd ../.. && make fclean
		exit 1
	fi
	bash pointer.sh
	exit_status=$?
	if [ $exit_status = 1 ]
	then
		rm -rf a.out && rm -rf a.out.dSYM 
		cd ../.. && make fclean
		exit 1
	fi
	bash int.sh
	exit_status=$?
	if [ $exit_status = 1 ]
	then
		rm -rf a.out && rm -rf a.out.dSYM 
		cd ../.. && make fclean
		exit 1
	fi
	bash unsigned.sh
	exit_status=$?
	if [ $exit_status = 1 ]
	then
		rm -rf a.out && rm -rf a.out.dSYM 
		cd ../.. && make fclean
		exit 1
	fi
	bash hexa.sh
	exit_status=$?
	if [ $exit_status = 1 ]
	then
		rm -rf a.out && rm -rf a.out.dSYM 
		cd ../.. && make fclean
		exit 1
	fi
	bash percent.sh
	exit_status=$?
	if [ $exit_status = 1 ]
	then
		rm -rf a.out && rm -rf a.out.dSYM 
		cd ../.. && make fclean
		exit 1
	fi
fi

if [ $var = "c" ]
then
	bash char.sh
	exit_status=$?
	if [ $exit_status = 1 ]
	then
		rm -rf a.out && rm -rf a.out.dSYM 
		cd ../.. && make fclean
		exit 1
	fi
fi

if [ $var = "s" ]
then
	bash string.sh
	exit_status=$?
	if [ $exit_status = 1 ]
	then
		rm -rf a.out && rm -rf a.out.dSYM 
		cd ../.. && make fclean
		exit 1
	fi
fi

if [ $var = "p" ]
then
	bash pointer.sh
	exit_status=$?
	if [ $exit_status = 1 ]
	then
		rm -rf a.out && rm -rf a.out.dSYM 
		cd ../.. && make fclean
		exit 1
	fi
fi

if [ $var = "d" ]
then
	bash int.sh
	exit_status=$?
	if [ $exit_status = 1 ]
	then
		rm -rf a.out && rm -rf a.out.dSYM 
		cd ../.. && make fclean
		exit 1
	fi
fi

if [ $var = "i" ]
then
	bash int.sh
	exit_status=$?
	if [ $exit_status = 1 ]
	then
		rm -rf a.out && rm -rf a.out.dSYM 
		cd ../.. && make fclean
		exit 1
	fi
fi

if [ $var = "u" ]
then
	bash unsigned.sh
	exit_status=$?
	if [ $exit_status = 1 ]
	then
		rm -rf a.out && rm -rf a.out.dSYM 
		cd ../.. && make fclean
		exit 1
	fi
fi

if [ $var = "x" ]
then
	bash hexa.sh
	exit_status=$?
	if [ $exit_status = 1 ]
	then
		rm -rf a.out && rm -rf a.out.dSYM 
		cd ../.. && make fclean
		exit 1
	fi
fi

if [ $var = "X" ]
then
	bash hexa.sh
	exit_status=$?
	if [ $exit_status = 1 ]
	then
		rm -rf a.out && rm -rf a.out.dSYM 
		cd ../.. && make fclean
		exit 1
	fi
fi

if [ $var = "%" ]
then
	bash percent.sh
	exit_status=$?
	if [ $exit_status = 1 ]
	then
		rm -rf a.out && rm -rf a.out.dSYM 
		cd ../.. && make fclean
		exit 1
	fi
fi

#Clean all
rm -rf a.out && rm -rf a.out.dSYM
cd ../../ && make fclean -s

#End of file, exit 0 if all is OK :D
exit 0