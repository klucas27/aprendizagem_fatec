# Instale o pacote ggplot2 se ainda não tiver
# install.packages("ggplot2")

# Carregue o pacote
library(ggplot2)

# Criando um dataframe para exemplo
dados <- data.frame(
  x = c(1, 2, 3, 4, 5),
  
  y = c(2, 3, 5, 7, 11)

)

# Gerando o gráfico
  ggplot(dados, aes(x = x, y = y)) +
  geom_point() +          # Adiciona pontos
  geom_line() +           # Adiciona linhas conectando os pontos
  ggtitle("Gráfico Simples de Teste") +  # Título do gráfico
  xlab("Eixo X") +        # Rótulo do eixo X
  ylab("Eixo Y")          # Rótulo do eixo Y
