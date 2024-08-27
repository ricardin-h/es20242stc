programa {
  funcao inicio() {
    real salario, desconto, saldesc,saldesc2,saldesc3,saldesc4
    escreva(" informe seu salario ")
    leia (salario)
    se (salario<= 2259.20){
    escreva(" voce nao pagara nada de imposto ")
    }senao 
    se(salario<=2826.65) {
    saldesc = salario - 169.44
    escreva(" voce pagara R$169.44 de imposto seu salario vai ser " ,saldesc  )
    }senao
    se(salario<=3751.05) {
    saldesc2 = salario - 381.44
    escreva(" voce pagara R$381.44 de imposto seu salario vai ser " ,saldesc2)
    }senao
    se(salario<=4664.68){
      saldesc3 = salario - 662.77
      escreva(" voce pagara R$662.77 de imposto seu salario vai ser " ,saldesc3)
    }senao
    se(salario>4664.68)
    saldesc4 = salario - 896.00
     escreva(" voce pagara R$896.00 de imposto seu salario vai ser " ,saldesc4)

  }
}
