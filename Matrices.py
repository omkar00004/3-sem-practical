
def accept_matrix(M):
    r=int(input("Row: "))
    c=int(input("Col: "))
    for i in range(r):
        temp=[]
        for j in range(c):
            element=int(input(": "))
            temp.append(element)
        M.append(temp)
    
    for i in M:
        print(i)
        
def addition(M1,M2):
    result=[[0,0,0],[0,0,0],[0,0,0]]
    for i in range(len(M1)):
        for j in range(len(M1[0])):
            result[i][j]=M1[i][j] + M2[i][j]
    
    print("Addition of matrix is ")     
    for i in result:
        print(i)
        
def sub(M1,M2):
    result=[[0,0,0],[0,0,0],[0,0,0]]
    for i in range(len(M1)):
        for j in range(len(M1[0])):
            result[i][j]=M1[i][j]-M2[i][j]
            
    print("Substraction of matrix is ")     
    for i in result:
        print(i)

def multi(M1,M2):
    result=[[0,0,0],[0,0,0],[0,0,0]]
    for i in range(len(M1)):
        for j in range(len(M1[0])):
            for k in range(len(M2)):
                result[i][j]=M1[i][k]*M2[k][j]
                
    print("Multiplication of matrix is ")
    for i in result:
        print(i)   

def Transpose(M1,M2):
    result=[[0,0,0],[0,0,0],[0,0,0]]
    for i in range(len(M1)):
        for j in range(len(M1[0])):
            result[j][i]=M1[i][j]
    
    print("Tanspose of matrix is ")   
    for i in result:
         print(i)       
    
# **********************************************************************************************************************

Main1=[]
Main2=[]


end_game=False
while not end_game:
    choice=int(input("*******Operations********\n1.Accept two matrices\n2.Addition of two matrices\n3.Substraction of two matrices\n4.Multiplication of two matrices\n5.Transpose of two matrices\n6.exit\n: "))
    if choice==1:
        accept_matrix(Main1)
        accept_matrix(Main2)
    elif choice==2:
        addition(Main1,Main2)
    elif choice==3:
        sub(Main1,Main2)
    elif choice==4:
        multi(Main1,Main2)
    elif choice==5:
        Transpose(Main1,Main2)
    elif  choice==6:
        end_game=True