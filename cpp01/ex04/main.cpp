#include <fstream>
#include <iostream>
#include <string>

std::string ft_replace(const std::string &texto,
	const std::string &palavraAntiga, const std::string &palavraNova)
{
	size_t	posInicial;
	size_t	posEncontrada;

	std::string resultado;
	posInicial = 0;
	posEncontrada = texto.find(palavraAntiga, posInicial);
	while (posEncontrada != std::string::npos)
	{
		resultado.append(texto, posInicial, posEncontrada - posInicial);
		resultado += palavraNova;
		posInicial = posEncontrada + palavraAntiga.length();
		posEncontrada = texto.find(palavraAntiga, posInicial);
	}
	resultado.append(texto, posInicial, texto.length() - posInicial);
	return (resultado);
}
bool	palavraContida(const std::string &linha, const std::string &palavra)
{
	return (linha.find(palavra) != std::string::npos);
}
int	main(int ac, char **av)
{
	if (ac == 4)
	{
		std::ifstream inputFile(av[1]);
		if (!inputFile.is_open())
		{
			std::cerr << "Error: file not found" << std::endl;
			return (1);
		}
		std::string line;

		std::ofstream outputFile("newfile.replace");

		if (!outputFile.is_open())
		{
			std::cerr << "Error: could not create output file" << std::endl;
			inputFile.close();
			return (1);
		}
		std::string line1;
		while (std::getline(inputFile, line1))
		{
			line1 = ft_replace(line1, av[2], av[3]);
			outputFile << line1 << std::endl;
		}
		outputFile.close();

		inputFile.close();

		return (0);
	}
	else
	{
		std::cout << "invalid args" << std::endl;
		return (0);
	}
}