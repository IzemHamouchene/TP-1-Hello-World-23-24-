test: 
	cd config/; gcc  config.c assert_with_message.c ../sum.c -o ../result
	./result

clean:
	rm result