clear
make fclean
rm -r main
make bonus
cc -o main -Wall -Wextra -Werror main.c libft.a
echo "\n_______________________________"
# valgrind --tool=memcheck --leak-check=full --num-callers=20 --track-origins=yes ./main
# bash Libftest-master/grademe.sh -u
./main
echo "\n_______________________________"
make fclean
rm -r main
echo "\n_______________________________"
# ls ft_*.c *.h -X | while read -r file; do norminette "$file"; done