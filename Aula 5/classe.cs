using System;
class HelloWorld {
  static void Main() {
      
      int classe;
      
     Console.WriteLine("Escreva um numero para escolher uma classe sendo elas 1-Ladino, 2-Sorcerer, 3-Monge");
     classe = Convert.ToInt32(Console.ReadLine());
     
     switch (classe) {
         case 1:
         Console.WriteLine("Sua classe é Ladino");
         Console.WriteLine("Suas habilidades são: Ataque furtivo, Wails from the Grave e Esquiva");
         break;
         
         case 2:
         Console.WriteLine("Sua classe é Sorcerer");
         Console.WriteLine("Suas habilidades são: Bola de Fogo, Banimento, fey step");
         break;
         
         case 3:
         Console.WriteLine("Sua classe é Monge");
         Console.WriteLine("Suas habilidades são: Golpes multiplos, defesa paciente, ki");
         break;
     }
  }
}