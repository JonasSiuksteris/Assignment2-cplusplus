cmake_minimum_required(VERSION 3.10)
project(Darbas2)

set(CMAKE_CXX_STANDARD 11)

include_directories(includes)

add_executable(Darbas2
    includes/Deque/Atspausdinti.cpp
    includes/Deque/Atspausdinti1.cpp
    includes/Deque/Atspausdinti2.cpp
    includes/Deque/Deque.cpp
    includes/Deque/Kategorija.cpp
    includes/Deque/Mediana.cpp
    includes/Deque/MokinioInfo.cpp
    includes/Deque/SizeP.cpp
    includes/Deque/SizeV.cpp
    includes/Deque/Vidurkis.cpp
    includes/List/Atspausdinti.cpp
    includes/List/Atspausdinti1.cpp
    includes/List/Atspausdinti2.cpp
    includes/List/Kategorija.cpp
    includes/List/Listai.cpp
    includes/List/Mediana.cpp
    includes/List/MokinioInfo.cpp
    includes/List/SizeP.cpp
    includes/List/SizeV.cpp
    includes/List/Vidurkis.cpp
    includes/Vector/Atspausdinti.cpp
    includes/Vector/Atspausdinti1.cpp
    includes/Vector/Atspausdinti2.cpp
    includes/Vector/Kategorija.cpp
    includes/Vector/Mediana.cpp
    includes/Vector/MokinioInfo.cpp
    includes/Vector/SizeP.cpp
    includes/Vector/SizeV.cpp
    includes/Vector/Vektoriai.cpp
    includes/Vector/Vidurkis.cpp
    includes/Includes.cpp
    includes/MokinioInfoA.cpp
    includes/MokinioInfoM.cpp
    includes/Mokinys.h
    includes/Skaityti.cpp
    main.cpp)
