clear
rm -r ./git/libft/
~/Documents/libft/make fclean
rsync -ru --progress --exclude=.git ~/Documents/libft/ ~/Documents/git/libft/
git add *
git commit -m "sync update"
git push
