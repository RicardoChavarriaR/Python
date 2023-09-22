my_variable = [2,3,4,5,6]

print(reversed('Reverso'))
print('Arreglo: ', my_variable)

print('LLaves del arreglo: ', len(my_variable))

# Variables en una sola línea 
name, surname, alias, edad = 'Ricardo', 'Chavarria', 'Cogelón 9000', 21

arreglo1 = [
    'Ricardo',
    'Chavarria',
    'Cogelón 007',
    21
]

print(arreglo1[1])

#Inputs
"""""
first_name = input('¿Cuál es tu nombre?\n')
age = input('¿Cuál es tu edad?\n')
print(first_name)
print(age)
"""""

# Python tiene un tipado débil
"""
name = 35
age = 'Ricardo'
print (name, age)
"""

# Forzamos el tipado
address: str = 'Mi dirección'
address: int = 32
print(type(address))