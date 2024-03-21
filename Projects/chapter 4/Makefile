# echo $1

main: $1
	g++ -g -std=c++20 -Wall -Wextra -Wshadow -pedantic $1 -o main

run : main
	./main

clean:
	rm main