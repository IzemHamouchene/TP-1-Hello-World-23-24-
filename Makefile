test: 
	gcc  config\config.c config\assert_with_message.c sum.c -o result
	./result

clean:
	rm result