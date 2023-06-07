all:
	git add .
	git commit -m "autoadd"
	git push -u origin main
	gcc *.c -o exe
	./exe
