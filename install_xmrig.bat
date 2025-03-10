@echo off
setlocal

:: Defina a URL do arquivo a ser baixado
set URL=https://github.com/xmrig/xmrig/releases/download/v6.22.2/xmrig-6.22.2-msvc-win64.zip

:: Defina o nome do arquivo zip
set ZIP_NAME=xmrig-6.22.2-msvc-win64.zip

:: Defina o nome da pasta extraída
set FOLDER_NAME=xmrig-6.22.2

:: Baixa o arquivo ZIP usando powershell
echo Baixando o arquivo...
powershell -Command "Invoke-WebRequest -Uri %URL% -OutFile %ZIP_NAME%"

:: Extraia o arquivo ZIP
echo Extraindo o arquivo ZIP...
powershell -Command "Expand-Archive -Path %ZIP_NAME% -DestinationPath ."

:: Muda para o diretório extraído
cd %FOLDER_NAME%

:: Execute o programa xmrig com o comando desejado
echo Executando xmrig...
.\xmrig.exe -a rx -o stratum+ssl://rx.unmineable.com:443 -u LTC:ltc1qt0wrnem8ufxxh8h7dgm5c7daddgu9nfkur9us4.unmineable_worker_kswzynig -p x

:: Pausa para manter a janela aberta
pause

endlocal