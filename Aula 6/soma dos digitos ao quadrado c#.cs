using System;
class HelloWorld
{
    static void Main()
    {
        int num;
        int numquadrado;
        int soma = 0;
        int sobra;
        Console.Write("Insira um número: ");
        num = Convert.ToInt32(Console.ReadLine());
        
        numquadrado = num * num;
        while (numquadrado > 0)
        {
        sobra = numquadrado % 10;
        soma += sobra;
        numquadrado /= 10;
        }
        Console.WriteLine("A soma dos dígitos do quadrado de " + num + " é " + soma);
    }
}