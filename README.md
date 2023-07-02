## Table of Contents

1. General Info
2. Technologies
 2.1 Warum wurden diese Technologien verwendet?
3. Installation
4. Arbeitsschritte
5. Problembehandlung
6. Quellen


## 1. General Info

Der vorliegende Code wurde im Rahmen der Projektarbeit für das Fach Methoden der Wissensverarbeitung im Masterstudiengang Wirtschaftsinformatik an HTW Berlin entwickelt. Das Ziel des Code ist es, mittels einer Open-Source Hardware und der IoT zu implementieren, welcher beides miteinander vereint. Dabei handelt es sich in diesem Projekt um ein Bewegungsmelder über eine Shelly Steckdose und einem Sensor, diese zielführend miteinander reagieren.

## 2. Technologies
 - Octopus
 - Adjustable PIR Motion Sensor v1.0
 - Shelly Plug S
 - C++

# 2.1 Warum wurden diese Technologien verwendet?
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

## 4. Arbeitsschritte
![image](https://github.com/Miacaroline/MdWv_Gruppe1/assets/66673347/6865b036-e233-430d-a028-ba9b7a95410a)
## 5. Problembehandlung

## 6. Quellen
Erklärung PIR Sensor:
https://wiki.dfrobot.com/PIR_Motion_Sensor_V1.0_SKU_SEN0171 
Wlan Verbindung: 
https://forum.arduino.cc/t/esp8266-httpclient-library-for-https/495245
http://stefanfrings.de/esp8266/
