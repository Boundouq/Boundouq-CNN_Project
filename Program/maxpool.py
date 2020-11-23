import numpy as np
import matplotlib.pyplot as plt

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
    tab_sortie = np.zeros(dim3*int(dim2/2-1)*int(dim1/2-1))
    l = 0
    v_dim = int((dim2 - 2)/2 + 2)
    zeros = [0 for i in range(v_dim)]
    for k in range(dim3):
        if k!= 0 :
            f.write("\n")
        for elm in zeros:
            f.write(str(elm) + ' ')
        f.write("\n")
        for j in range(0,dim2,2):
            if j!= 0 :
                f.write(' 0')
                f.write("\n")
            f.write('0 ')
            for i in range(0,dim1,2):
                if (i<dim1-2) and (j<dim2-2):
                    tab_sortie[l]= max(tableau3D[k][j][i],tableau3D[k][j][i+1],tableau3D[k][j][i+2],tableau3D[k][j+1][i],tableau3D[k][j+1][i+1],tableau3D[k][j+1][i+2],tableau3D[k][j+2][i],tableau3D[k][j+2][i+1],tableau3D[k][j+2][i+2])
                    if (l%(int(dim1/2-1)) == 0):
                        f.write(str(tab_sortie[l]))
                    else:
                        f.write(" " + str(tab_sortie[l]))
                    l += 1
        for elm in range (v_dim - 1):
            f.write('0' + ' ')
        f.write('\n')
    tab_sortie.resize((dim3,int(dim2/2-1),int(dim1/2-1)))
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
def reshapee(fichier):
    f = open(fichier,"r")
    tab = []

    for k in range(20):
        for j in range(5):
            s= f.readline()
            l = []
            if (j!= 0 and j!=4):
                l= s.split()
                l= l[1:4]
                for elm in l :
                    tab.append(float(elm))           
        f.readline()
    return tab

# Get kernel matrix (biases and weights), for convolution nember "stage"
def get_coeff(kernel, stage, B, W, b, w):
    cnt = 0
    kernel.seek(0,0)
    while(1):
        line = kernel.readline()
        mot = line.split(': ')
        if mot[0] == 'tensor_name':
            cnt += 1
        if cnt == (2*stage) + 1:
            print(str(cnt))
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
            break;  

#muliplication matrice vect
def fully_conn(matrice,vect,bias):
    mat = np.dot(vect,matrice)
    return (mat + bias)


#test
#tabu = reshapee("reshape.txt")
#sortie = fully_conn("180.txt",tabu)
#print(sortie)


#reshape.txt sera le fichier de sortie du dernier maxpool donc 3*3*20
#on va le convertir en vecteur de taille 180
#180.txt sera la matrice de multiplication
#multiplier la matrice par le vecteur
