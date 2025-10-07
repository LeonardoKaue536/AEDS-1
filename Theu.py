tabela= {1:0.50,2:1.00,3:4.00,5:7.00,9:8.00}

codigo = int(input("codigo do produto:\n"))

while digitado > 0:
    
    if (digitado == 1) or (digitado == 2) or (digitado == 3) or (digitado == 5) or (digitado == 9):
        quantidade = int(input("Quatidade levada do produto:\n"))
        preco = tabela[codigo] * quantidade
    else:
        print("erro")
    digitado = int(input("codigo do produto:\n"))
   


print("Progama finalizado\n")
