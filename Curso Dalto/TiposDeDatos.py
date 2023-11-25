# Tipos de datos en el lenguaje Python

'''
# *lISTAS
#? Las listas pueden tener de todo tipos de valores
#? lista = ["Predrito","Lucas",1.85,true]
'''

'''
#* TUPLAS
#? Pueden tener cualquier tipo de dato pero no pueden se modificadas
#? tupla = ("Pedrito","Lucas",1.85,true)
'''

'''
#* CONJUTOS
#? Los conjuntos no se les accede por el índice y tampoco haceotan duplicados
#? conjunto = {"Pedrito","Lucas",1.85,true}
'''

'''
#* DICCIONARIOS
#? Son como los JSON de JavaScript: en lugar de usar el índice utilizamos el nombre
#? diccionario ={
#?       'nombre' : 'Pedrito'
#?       'edad' : 15
#?       'estatura' : 1.60
#?       'feliz' : true
#?}
'''

'''
#* DIVISIÓN BAJA
#? Nos devuelve el entero de la división solamente, sin la parte decimal
#? división = 91 // 9  => 10
'''

#.. ---------------------------------------------------------------------------- #
#..                              Métodos de cadenas                              #
#.. ---------------------------------------------------------------------------- #

cadena1 = "Hola soy Dalto"
cadena2 = "Bienvenido Maquinola"

'''
#* DIR
#* UPPER
#* LOWER
#* CAPITALIZE
#* FIND
#* INDEX
#* ISNUMERIC
#* ISALPHA
#* COUNT
#* LEN
#* ENDSWITH
#* STARTSWITH
#* REPLACE
#* SPLIT
'''

print(cadena1.islower())
print(cadena1.find("soy"))

#.. ---------------------------------------------------------------------------- #
#..                               Métodos de listas                              #
#.. ---------------------------------------------------------------------------- #

'''
#* list    ()=> Crea una lista a partir de otra lista o una tupla             
#* len     ()=> Muestra la cantidad de elementos de la lista             

#* append  ()=> Agrega al final                
#* insert  ()=> Inserta un dato en un índice específico sin borrar el número anterior                
#* extend  ()=> Agrega una lista al final de la misma lista                  

#* pop     ()=> Elimina un elemento en un índice específico
#?              lista.pop(0)             
#?              lista.pop(-1)             
#* remove  ()=> Elimina un elemento por valor
#?              lista.remove("Toma mama")                
#* clear   ()=> Elimina por completo la lista(La deja vacía)                

#* sort    ()=> Ordena los elementos de menor a mayor
#?              lista.sort()
#?              lista.sort(reverse=true)              
#* reverse ()=> Invierte los elementos de una lista                  
'''

print('Hola Python')


#.. ---------------------------------------------------------------------------- #
#..                           Métodos para diccionarios                          #
#.. ---------------------------------------------------------------------------- #
'''
#* Keys()
#? Devuelve las llaves 
#? Tambien nos sirven para iterar
#* get
#? Devuelve el valor de una clave 
#? En caso de no encontrar el valor buscado lanza un NONE pero no una EXCEPCION
#? clave = diccionario.get("sfsdfsdfs") ()=> Lo de adentro no existe, pero no detiene el programa solo lanza un NONE
#* clear()
#? Elimina todos los elementos 
#* pop()
#? Elimina un elemento 
#? diccionario.pop("nombre") ()=> Elimina un elemento del diccionario de acuerdo al índice que en este caso es un string
#* items()
#? Para iterar el diccionario 
#? Lo vuelve un tipo de dato iterable
'''

#.. ---------------------------------------------------------------------------- #
#..                                    inputs                                    #
#.. ---------------------------------------------------------------------------- #
'''
numero = int(input("Dame un Número:\n"))
print(numero * 2)
'''

#.. ---------------------------------------------------------------------------- #
#..                       Calcular promedio de otros cursos                      #
#.. ---------------------------------------------------------------------------- #
otros_cursos_min= 2.5
otros_cursos_max= 7
otros_cursos_promedio= 4
dalto_curso= 1.5


#.. ---------------------------------------------------------------------------- #
#..                                   Conjuntos                                  #
#.. ---------------------------------------------------------------------------- #
#* Creando un conjunto con un set:
conjunto = set(["Dato 1"])

#Metiendo un conjunto adentro de otro
conjunto1 = frozenset(["dato 1","dato2"])
conjunto2 = {conjunto1,"dato 3"}
print(conjunto2)

#* ---------------------------- teoria de conjutos ---------------------------- #