build:
	g++ -Wfatal-errors \
	./*.cpp	\
	Entities/*.cpp \
	-I"C:\SFML\include" \
	-L"C:\SFML\lib"	\
	-lmingw32	\
	-lsfml-graphics \
	-lsfml-window \
	-lsfml-system	\
	-o app.exe
