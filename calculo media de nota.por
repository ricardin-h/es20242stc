programa {
  funcao inicio() {
    inteiro n1, n2
    real media, frequencia 
    escreva(" me fale sua primeira nota: ")
    leia(n1)
    escreva("me fale sua segunda nota: ")
    leia(n2)
    escreva(" escreva sua frequencia ")
    leia(frequencia)
    media = (n1 + n2) / 2
    frequencia = (frequencia/80)*100
    

    se((media >= 6) e (frequencia >=60 )){
      escreva(" sua media final eh ", media, " e sua frequencia eh ", frequencia , "% você ta aprovado " )
    }senao{
      escreva(" sua media final eh ", media," e sua frequencia eh ",frequencia, "% você ta reprovado ")
    }
  }
}
