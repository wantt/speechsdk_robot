# wantongtang@foxmail.com 20190410
main:ALSADevices.o
	g++   ALSADevices.o  play_plain_audio.cpp  -lasound  -o test -I../../include
#	g++   ALSADevices.o  play_plain_audio.cpp ALSADevices.hpp -lasound  -o test -I../../include
#	g++ -std=c++11  ALSADevices.o  play_plain_audio.cpp ALSADevices.hpp  -lasound  -o test
ALSADevices.o:
	g++ -c ALSADevices.cpp -I../../include
#	g++ -c ALSADevices.cpp -lasound
clean:
	rm -rf *.o test	
