# ------------------------------------ for ----------------------------------- #
animales = ["vaca","perro","loro","sardina"]
numeros = [2,45,65,34]

#* Recorriendo una lista con bucle for
# for X in animales:
#     print(X)

# for Y in numeros:
#     print(Y)


#* Recorriendo dos listas con un for
# for X,Y in zip(animales,numeros):
#     print(f'Animales: {X}')
#     print(f'Números: {Y}')
#for X,Y in zip(animales,numeros):
#    print(f'Animales: {X} Números: {Y}')

#* Recorrer una lista con su índice
# for num in enumerate(numeros):
#     #print(num)
#     print(f'índice: {num[0]}, Número: {num[1]}')

#* Forma elegante
# for i,num in enumerate(numeros):
#     print(f'{i},{num}')


#.. ---------------------------------------------------------------------------- #
#..                           recorriendo diccionarios                           #
#.. ---------------------------------------------------------------------------- #

# diccionario = {
#     "nombre" : "Lucas",
#     "apellido" : "Dalto",
#     "subs" : 1000000
# }


for datos in diccionario.items():
    key = datos[0]
    value = datos[1]
    print(f'La clave es: {key},         el valor es: {value}')

#* for en una sola línea:
numeros = [x*2 for x in numeros]
print(numeros)

#.. ---------------------------------------------------------------------------- #
#..                                mas iteraciones                               #
#.. ---------------------------------------------------------------------------- #
# frutas = ["banana","pera","manazana","ciruela","durazno","granada"]

# #* Evitando que se coma una manzana:
# for fruta in frutas:
#     if fruta == 'manzana':
#         continue
#     print(fruta) 

numero = [1,2,3,4,5]

if numero[0] >= 20:
    print