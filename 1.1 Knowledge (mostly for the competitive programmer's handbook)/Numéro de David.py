    #Un certain nombre, si on lui retire un chiffre, devient 1/9 du nombre initial. Puis, si on lui retire un autre fchiffre, on obtient 1/81 du nombre initialfor number in range(0, 9999):
for number in range(100,1000000):
    
    for remove_position in range (0, len(str(number))):

        #voici comment retirer un caractere dans un string, ou même dans un int! (juste crée un nouveau string)
        new_number = ""
        for char in range(0,len(str(number))):
            if char != remove_position: new_number = new_number + str(number)[char]
        #print("number: ", number, "new_number: ", new_number)

        if int(new_number) == int(number)/9:
            for remove_position in range (0, len(str(new_number))):
                new_new_number = ""
                for char in range(0,len(str(new_number))):
                    if char != remove_position: new_new_number = new_new_number + str(new_number)[char]
                #print("number: ", number, "new number: ", new_number, "new_new_number: ", new_new_number)
                if int(new_new_number) == int(number)/81:
                    print("Number: ", number, " New Number: ", new_number, " New New number: ", new_new_number)

                        