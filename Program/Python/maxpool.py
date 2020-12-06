import numpy as np
import matplotlib.pyplot as plt
from math import exp

#fonction qui prend en entrée un fichier texte (image à la sortie de la conv) et le transforme en tableau (il faut préciser la taille de la 3eme dim en param)
def convert2array(fichier,taille):
    f = open(fichier,"r")
    dim = len((f.readline()).split())
    #print(dim)
    f.seek(0,0)
    tab = np.zeros(taille*dim*dim)
    tab.resize((taille,dim,dim))
    for k in range(taille):
        if k != 0 :
            f.readline()
        for j in range(dim):
            s= f.readline()
            l= s.split()
            for i in range(dim):
                tab[k][j][i]= l[i]
    f.close()
    return tab

#print(convert2array("Desktop/matrice.txt"))

#fonction maxpool, on lui donne en param le tableau qu'on vient de convertir et aussi le nom du fichier ou on veut écrire
def maxpool(tableau3D,nom_fichier):
    f = open(nom_fichier,"w")
    dim3 = len(tableau3D)
    dim2 = len(tableau3D[0])
    dim1 = len(tableau3D[0][0])
    v_dim = int((dim2)/2 + 2)
    if dim2 == 6 : v_dim = 3

    tab_sortie = np.zeros(dim3*v_dim*v_dim)
    tab_sortie.resize((dim3,v_dim,v_dim))
    zeros = [0 for i in range(v_dim)]
    for k in range(dim3):
        l = 0
        if dim2 != 6 :
            l = 1
            for y in range (v_dim):
                tab_sortie[k][0][y] = 0.0
        for j in range(0,dim2,2):
            c = 0
            if dim2 != 6 :
                c = 1
                tab_sortie[k][l][0] = 0.0
            for i in range(0,dim1,2):
                if (i<dim1-2) and (j<dim2-2):
                    tab_sortie[k][l][c] = (max(tableau3D[k][j][i],tableau3D[k][j][i+1],tableau3D[k][j][i+2],tableau3D[k][j+1][i],tableau3D[k][j+1][i+1],tableau3D[k][j+1][i+2],tableau3D[k][j+2][i],tableau3D[k][j+2][i+1],tableau3D[k][j+2][i+2]))
                elif (i==dim1-2) and (j == dim2-2):
                    tab_sortie[k][l][c] = (max(tableau3D[k][j][i],tableau3D[k][j][i+1],tableau3D[k][j+1][i],tableau3D[k][j+1][i+1]))
                elif (i == dim1-2):
                    tab_sortie[k][l][c] = (max(tableau3D[k][j][i],tableau3D[k][j][i+1],tableau3D[k][j+1][i],tableau3D[k][j+1][i+1],tableau3D[k][j+2][i],tableau3D[k][j+2][i+1]))
                elif (j == dim2-2):
                    tab_sortie[k][l][c] = (max(tableau3D[k][j][i],tableau3D[k][j][i+1],tableau3D[k][j][i+2],tableau3D[k][j+1][i],tableau3D[k][j+1][i+1],tableau3D[k][j+1][i+2]))

                c += 1
            if dim2 != 6 : tab_sortie[k][l][v_dim - 1] = 0.0
            l += 1
            if dim2 != 6 :
                for y in range (v_dim):
                    tab_sortie[k][v_dim - 1][y] = 0.0

    for y in range(dim3):
        for i in range(v_dim):
            for j in range(v_dim):
                f.write(str(tab_sortie[y][i][j]) + ' ')
            f.write('\n')
        f.write('\n')
    f.close()
    return tab_sortie

#test
#tab = convert2array("matrice.txt",64)
#matrice.txt fichier txt à la sortie de la conversion
#print(tab)
#tab2 = maxpool(tab,"max.txt")
#max.txt sera le fichier d'écriture à la sortie de maxpool
#print(tab2)



#c= max(tab[0][0][0],tab[0][0][1],tab[0][0][2],tab[0][1][0],tab[0][1][1],tab[0][1][2],tab[0][2][0],tab[0][2][1],tab[0][2][2])
#print(c)


# fonction qui tranforme un fichier texte de la matrice à la sortie du maxpool 3*3*20 en vecteur de taille 180
def reshapee(tab):
    # f = open(fichier,"r")
    # tab = []
    #
    # for k in range(20):
    #     for j in range(3):
    #         s= f.readline()
    #         l = []
    #         #if (j!= 0 and j!=4):
    #         l= s.split()
    #             #l= l[1:4]
    #         for elm in l :
    #             tab.append(float(elm))
    #     f.readline()
    return tab.reshape(180)

# Get kernel matrix (biases and weights), for convolution nember "stage"
def get_coeff(kernel, stage, B, W):
    b = []
    w = []
    cnt = 0
    kernel.seek(0,0)
    while(1):
        line = kernel.readline()
        mot = line.split(': ')
        if mot[0] == 'tensor_name':
            cnt += 1
        if cnt == (2*stage) + 1:
            # get biases
            for i in range (B[stage] // 6 + 1):
                line = kernel.readline()
                line = line[2:len(line)]
                mot = line.split()
                if line[len(line) - 2] == ']':
                    line = line[:len(line) - 2]
                    mot = line.split()
                for elm in mot:
                    b.append(float(elm))
            #get weights
            line = kernel.readline()
            for l in range (W[stage]):
                z = []
                for i in range (B[stage] // 4 + 1):
                    line = kernel.readline()
                    line = line[3:]
                    mot = line.split()
                    index = line.find(']')
                    if index != -1:
                        line = line[:index]
                        mot = line.split()
                    for elm in mot:
                        z.append(float(elm))
                w.append(z)
            return(b , w)

#muliplication matrice vect
def fully_conn(matrice,vect,bias):
    list = []
    conn = []
    prov = []
    sum = 0
    c = 0
    for i in range (10):
        sum = 0
        for j in range (180):
            sum += matrice[j][i] * vect[j]
        list.append(sum)
    for i in range (10):
        conn.append(list[i] + bias[i])
        sum += exp(conn[i])
    ###
    for i in range (10):
        prov.append(exp(conn[i]) / sum)
        c += prov[i]
    print ("SoftMax : " + str(prov))
    print ("Sum SoftMax " +str(c))
    tab = []
    for elm in prov:
        tab.append(elm)
    t = []
    for i in range (9):
        a = float(max(tab))
        t.append(tab.index(a))
        tab[tab.index(a)] = -100
    print ("Ordre SM : " + str(t))
    ###
    #mat = np.dot(vect,matrice)
    return (conn)


#test
#tabu = reshapee("reshape.txt")
#sortie = fully_conn("180.txt",tabu)
#print(sortie)


#reshape.txt sera le fichier de sortie du dernier maxpool donc 3*3*20
#on va le convertir en vecteur de taille 180
#180.txt sera la matrice de multiplication
#multiplier la matrice par le vecteur
