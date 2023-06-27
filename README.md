

##Table of Contents

1. General Info
2. Technologies 
3. Installation
4. Superuser für die Admin-Seite


## 1. General Info

Dieser Code wurde als Prüfungsleistung für das Modul Methoden der Wissensverarbeitung von der Hochschule für Technik und Wirtschaft Berlin entwickelt. 

## 2. Technologies
 - Octopus
 - Adjustable PIR Motion Sensor v1.0
 - Shelly Plug S
 - C++

# Warum wurden diese Technologien verwendet?
OCTOPUS
Octopus ist eine Deployment-Software welche 2012 gegründet wurde. Den Schwerpunkt legt die Firma auf erstklassigem Engineering und Kundenservice.
TeamCity, Azure DevOps und Atlassian Bamboo wären alternativen egwesen, welche (lt. Octopus selber) weitesgehend nicht so Leistungsstark sind.
Darüber hinaus setzt Octopus nicht auf CI/CD "End-to-End" (Hinzufügen von Quellcodeverwaltung, Fehlerverfolgung, Build usw.), sondern mit Bereitstellungen und Vorgängen/Runbook-Automatisierungen. Dieser Bereich, wurde von den wenigsten End-to-End-CI/CD-Tools erkundet.

ADJUSTABLE PIR MOTIOB SENSOR v1.0
Ein einstellbarer PIR-Bewegungssensor ist ein Gerät, das Bewegungen aufgrund von Veränderungen in der Infrarotstrahlung in seinem Erfassungsbereich erkennt. 
Der Sensor hat neben dem in Projekt verwendeten Einstellungen, der empfindlichen Beweglichtkeit, auch weitere Möglichkeiten wie z.B. die Einstellung einer Zeitverzögerung.

SHELLY 
Bei der verwendeten Shelly Plus Plug S handelt es sich um eine intelligente Steckdose, welche die Fernsteuerung von verschiedensten Elektrogeräten ermöglicht. Dabei kann die Shelly sowohl über ein Wi-Fi Netzwerk als auch über einen Cloud-Hausautomatisierungsdienste betrieben werden.
Eine mögliche Alternative zur Shelly wäre der TP-Link Kasa Smart Plug, wobei die Shelly ein kompatibleres Design hat.

C++
C++ ist eine häufig verwendete Programmiersprache für die Entwicklung von Firmware und ermöglicht es, den Code des Geräts anzupassen. C++ hat eine gute Leistung und Effizienz, da es eine niedrige Abstraktionsebene und direkten Zugriff auf die Hardware ermöglicht. Außerdem ist C++ Plattformunabhängig.

Read more: https://de.manuals.plus/shelly/plus-plug-s-wi-fi-smart-plug-manual#ixzz85qrAgqRJ
 
## 3. Installation
$ git remote add origin "gh repo clone Miacaroline/MdWv_Gruppe1 "
$ git push -u origin master
$ git status
$ git add --all
$ git commit -m "Message"
$ git push
