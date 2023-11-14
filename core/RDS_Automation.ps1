# Liste d'utilisateurs
$prenoms = @("alpha","bravo","charlie","delta","echo","foxtrot","golf","hotel","india","juliett","kilo","lima","mike","november","oscar")
Set-ExecutionPolicy Unrestricted
# Boucle connexion RDS
	foreach ($prenom in $prenoms) {
    $prenom = Get-Random -InputObject $prenoms;$prenom
    cmdkey.exe /generic:remote /user:$prenom /pass:Lbi@2022
    mstsc /v:remote
    cls
    echo "Vous etes sur le serveur";hostname
    echo =========;Get-Date
    echo ======================================	
    echo "connection vers : $prenom"
    sleep 300
}