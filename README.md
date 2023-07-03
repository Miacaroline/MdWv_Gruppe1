## Table of Contents

1. General Info
2. Technologies
 2.1 Warum wurden diese Technologien verwendet?
3. Installation
4.  Arbeitsschritte
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

<p>1. Verbindung zum Octopus <br>
 
Um eine Verbindung zum Octopus herzustellen, müssen Sie zunächst die Arduino IDE herunterladen. Dies kann unter folgendem Link erfolgen: https://www.arduino.cc/en/software. Sobald die Arduino IDE installiert ist, können Sie mit dem nächsten Schritt fortfahren.<br>

3. Octopus mit dem Gerät verbinden<br>

Nachdem Sie die Arduino IDE installiert haben, verbinden Sie den Octopus mit Ihrem Gerät. Stellen Sie sicher, dass der Octopus ordnungsgemäß angeschlossen ist und eine stabile Verbindung besteht.<br>

4. Beispielcode ausprobieren <br>

Öffnen Sie die Arduino IDE und klicken Sie auf "Datei" > "Beispiele" > "0.1 Basics". Dort finden Sie einen Beispielcode namens "Blink". Dieser Code kann verwendet werden, um die Verbindung zwischen Ihrem Gerät und dem Octopus zu testen. Laden Sie den Beispielcode hoch und führen Sie ihn aus.<br>

5. Verbindung zum Sensor herstellen <br>
Nachdem die Verbindung zum Octopus erfolgreich hergestellt wurde, können Sie den PIR Motion Sensor anschließen. Verwenden Sie die entsprechenden Kabel, um den Sensor mit dem Octopus zu verbinden. Um die Funktionalität des Sensors zu überprüfen, können Sie einen Beispielcode von der DFRobot-Website verwenden. Die Ausgaben in der Konsole können Ihnen helfen, die Verbindung und Funktionalität des Sensors zu überprüfen. Beachten Sie, dass es möglicherweise zu Problemen kommen kann, die im nächsten Unterpunkt erklärt werden. ![image](https://github.com/Miacaroline/MdWv_Gruppe1/assets/66673347/6865b036-e233-430d-a028-ba9b7a95410a) <br>

6. Problembehandlung <br>

Während des Verbindungs- und Testvorgangs können Probleme auftreten. Wenn Sie auf Probleme stoßen, lesen Sie die detaillierten Erklärungen in der Problembehandlung, um mögliche Lösungen zu finden. <br>

7. Verbindung mit der Shelly herstellen <br>

Um eine Verbindung mit der Shelly herzustellen, stecken Sie das Gerät in eine Steckdose. Stellen Sie sicher, dass die Shelly mit dem WLAN verbunden ist. Kopieren Sie die IP-Adresse des Shelly-Geräts, normalerweise "192.168.33.2". Öffnen Sie einen Webbrowser und ersetzen Sie die letzte Zahl der IP-Adresse durch eine 1, z. B. "192.168.33.1". Suchen Sie nach dieser Adresse, um die Shelly-Einstellungen zu öffnen. Dort können Sie die Verbindung mit Wlan herstellen. <br>

8. Verbindung zwischen der Shelly und dem Sensor <br>

Die Verbindung zwischen der Shelly und dem Sensor erfolgt über WLAN. Verwenden Sie die ESP8266 HTTPClient Library for HTTPS, um die Verbindung herzustellen. Diese Library bietet die erforderlichen Funktionen, um Daten zwischen der Shelly und dem Sensor auszutauschen. </p>

## 5. Problembehandlung

## 6. Quellen
Erklärung PIR Sensor:
https://wiki.dfrobot.com/PIR_Motion_Sensor_V1.0_SKU_SEN0171 
Wlan Verbindung: 
https://forum.arduino.cc/t/esp8266-httpclient-library-for-https/495245
http://stefanfrings.de/esp8266/
