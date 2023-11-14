$directory = "C:\sourcelist"
if (Test-Path $directory) {Write-Host "Répertoire OK"} else {New-Item -Path $directory -ItemType Directory | Out-Null}
$url = "https://cdn.cloudflare.steamstatic.com/client/installer/SteamSetup.exe"
$executableName = [System.IO.Path]::GetFileName($url)
$downloadPath = Join-Path $directory $executableName
Write-Host "Nom de l'exécutable : $executableName"
Invoke-WebRequest $url -OutFile $downloadPath
Start-Process -FilePath $downloadPath -ArgumentList '/silent /install'
