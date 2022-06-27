# out will be the main executable and depends of the Product.o, 
# ProductManager.o and run.o files. To create an executable out 
# we compile all the files with to and exe file named run (-o run)

out: Product.o ProductManager.o run.o 
	g++ Product.o ProductManager.o run.o -o out

# We create a Product.o when Product.cc or Product.h have been modified.
# -c does not create an exe file, just compiles the file.
Product.o: Product.cc Product.h
	g++ -c Product.cc

ProductManager.o: ProductManager.cc ProductManager.h
	g++ -c ProductManager.cc

run.o: run.cc
	g++ -c run.cc

clean: 
	rm *.o out