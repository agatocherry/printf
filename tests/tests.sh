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
cd ../ && make && cd tests/script 

#Search if have argument, which is it
if [ $var = "all" ]
then
	bash char.sh
	bash string.sh
	bash percent.sh
fi

if [ $var = "c" ]
then
	bash char.sh
fi

if [ $var = "s" ]
then
	bash string.sh
fi

if [ $var = "p" ]
then
	bash percent.sh
fi

#Clean all
rm -rf a.out && rm -rf a.out.dSYM
cd ../../ && make fclean -s

#End of file, exit 0 if all is OK :D
exit 0