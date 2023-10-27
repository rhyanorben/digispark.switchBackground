# Switch Backgound - DigiSpark
## Digispark - Trocar Plano de Fundo do PC

Compilando este código a um arduíno, neste caso o utilizado foi o Digispark. É possível acessar o powershell e realizar a troca do plano de fundo do computador.

Isso é realizado por conta dos seguintes comandos:

#### - $client = new-object System.Net.WebClient

Cria um "browser" no powershell, necessário para o próximo passo.

#### - $client.DownloadFile("https://i.imgur.com/fVivgSZ.png" , "background.jpg") 

Utiliza o browser criado para realizar o download de uma imagem e armazenar no computador. O DigiSpark não tem a capacidade de "armazenamento", por conta disso é necessário realizar o comando e baixar no próprio computador.

OBS: Utilizado site imgur.io para upar a imagem e ter a URL.

#### -  reg add "HKCU\Control Panel\Desktop" /v WallPaper /t REG_SZ /d "" /f

Neste comando é acessado o CMD e alterado o WallPaper para "valor nenhum" ou simplesmente "". 

Observações:
1. /v WallPaper: define o que será acessado no local "HKCU\Control Panel\Desktop", neste caso "WallPaper";
2. /t REG_SZ: Define o tipo de dados do valor que será criado. Neste caso, é do tipo REG_SZ, que é uma cadeia de caracteres (string);
3. /d "": Informa o dado que será adicionado, neste caso uma string "sem nada";
4. /f: Utilizado para finalizar o comando sem ser necessário nenhuma confirmação no prompt.

#### -  reg add "HKCU\Control Panel\Desktop" /v WallPaper /t REG_SZ /d "%USERPROFILE%\background.jpg" /f

utiliza os mesmos passos do comando anterior, mas dessa vez adicionando a imagem armazenada no PC.

#### -  reg add "HKCU\Control Panel\Desktop" /v WallPaperStyle /t REG_SZ /d 2 /f

Essa entrada altera o estilo de WallPaper para "Esticado", apenas modificando a forma de visualização do conteúdo no plano de fundo.

Tipos de estilo: 
1. /d 0 = Centralizar
2. /d 1 = Lado a Lado
3. /d 2 = Ampliar/Esticado
4. /d 3 = Ajustado
5. /d 4 = Preencher
6. /d 5 = Span

#### - RUNDLL32.EXE USER32.DLL,UpdatePerUserSystemParameters ,1 ,True

Força a atualização das informações do computador, sem ter que reiniciar o mesmo para ser aplicado.
