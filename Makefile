test_hello: 
	cd config/; gcc  main_hello.c assert_with_message.c ../hello.c -o ../result
	./result

test_sum: 
	cd config/; gcc  main_sun.c assert_with_message.c ../sum.c -o ../result
	./result

clean:
	rm result