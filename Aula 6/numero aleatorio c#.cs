using System;
class HelloWorld {
  static void Main() {
      int chute;
      int tentativas = 0;
      Random numAleatorio = new Random();
      int valorInteiro = numAleatorio.Next(1, 100);
      
        do {
        Console.WriteLine("Escreva um número de 1 a 100 para ver se você acerta ou não: ");
        chute = Convert.ToInt32(Console.ReadLine());
      
        if (chute > valorInteiro) 
        {
        Console.WriteLine("O número sorteado é menor digite outro numero");
        } 

        else if (chute < valorInteiro) 
        {
        Console.WriteLine("O número sorteado é maior digite outro numero");
        }

        tentativas++;

        }   
        while (chute != valorInteiro);
        Console.WriteLine("voce acertou");
        Console.WriteLine("voce precisou de " + tentativas + " tentativas para acertar");
  }
}