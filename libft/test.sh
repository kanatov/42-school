clear
make fclean
rm -r main
make bonus
cc -lbsd -o main -Wall -Wextra -Werror main.c libft.a
echo "\n_______________________________"
# JUST COMPILE AND RUN
./main

# CHECK MEMLEAKS
# valgrind --tool=memcheck --leak-check=full --num-callers=20 --track-origins=yes ./main

# GRADUATE USING Libftest
# bash Libftest-master/grademe.sh -u

# GRADUATE USING libft Unit tests
# cd libft-unit-test-master; make
# ./run_test
# rm run_test
# cd ..

# GRADUATE USING libft Unit tests
# cd libftTester-master; make a
# cd ..

# CLEANING
echo "\n_______________________________"
make fclean
rm -r main
rm a.out
rm libft.so
echo "\n_______________________________"
ls ft_*.c *.h -X | while read -r file; do norminette "$file"; done