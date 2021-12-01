import csv

with open('espectro.csv') as csvfile:   # Abre el csv
    reader = csv.DictReader(csvfile)    # Devuelve un objeto reader con toda la información del csv como un diccionario
    # Este for es para recorrer cada fila de las que hay en el csv
    lista_de_nombres = []
    nuevo_reader = []
    nombre_de_dic = ["Banda", "Longitud de onda", "Frecuencia", "Uso"]
    contador = 0
    for row in reader:
        nuevo_reader.append(row)
        lista_de_nombres.append((row['Banda']))

    frecuencia = input("Elige la banda que quieras conocer. Para salir escribe EXIT\n")
    while frecuencia != "EXIT":
        if frecuencia in lista_de_nombres:
            for row in nuevo_reader:
                if frecuencia == row['Banda']:
                    for sub_row in row:
                        print(sub_row, end=": ")
                        print(row[nombre_de_dic[contador]])
                        contador += 1

        else:
            print("input erróneo")
        frecuencia = input("\nElige la banda que quieras conocer. Para salir escribe EXIT\n")
        contador = 0
        
        
        # Se nota que no conozco los diccionarios? jaja