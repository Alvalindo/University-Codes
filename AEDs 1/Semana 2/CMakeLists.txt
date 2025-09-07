cmake_minimum_required(VERSION 3.10)

# Nome do projeto
project(LAB_de_AEDS1_semana_2 C)

set(CMAKE_C_STANDARD 11)

# Adiciona os arquivos fonte
add_executable(Banco ContaBancaria.c main.c)
