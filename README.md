## Inhaltsverzeichnis

1. Allgemeine Inforamtionen
2. Technologien
3. Arbeitsschritte
4. Problembehandlung
5. Installation
6. Quellen


## 1. Allgemeine Informationen

<p>
Der vorliegende Code wurde als Teil der Projektarbeit für das Fach "Methoden der Wissensverarbeitung" im Masterstudiengang Wirtschaftsinformatik an der HTW Berlin entwickelt. Das Hauptziel dieses Codes ist es, eine Verbindung zwischen Open-Source-Hardware und dem Internet der Dinge (IoT) herzustellen. Konkret handelt es sich in diesem Projekt um die Implementierung eines Bewegungsmelders, der mit einer Shelly-Steckdose und einem Sensor interagiert, um ein bestimmtes Verhalten zu erreichen.
</p>

## 2. Technologien
 - IoT Octopus
 - Adjustable PIR Motion Sensor v1.0
 - Shelly Plug S
 - C++

<p>
<b>2.1. IoT OCTOPUS:</b> <br>
Der IoT Octopus ist eine Open-Source-Hardware, welcher speziell für das Internet der Dinge (IoT) entwickelt wurde. Er bietet digitale und analoge Ports zur einfachen Verbindung von Sensoren und Aktoren. Die Entwicklungsplattform ist ein guter Einstieg für Anfänger und ermöglicht erfahrenen Entwicklern schnelle Projektumsetzung. Mit dem Octopus können innovative IoT-Projekte in verschiedenen Bereichen wie Smart Home, Umweltüberwachung und Industrieautomatisierung realisiert werden.

![octopus1](https://github.com/Miacaroline/MdWv_Gruppe1/assets/66673347/fdc4dbeb-bf53-4a8f-b2df-2b9420e384d6)  ![octopus2](https://github.com/Miacaroline/MdWv_Gruppe1/assets/66673347/4c282ccb-35b1-4e0d-a7cb-7c4dc41b918f)
 
Weitere Informationen zum Octopus und dessen Aufbau: https://www.lehrerfortbildung-bw.de/st_digital/medienwerkstatt/dossiers/co2ampel/3_materialien/1_board/   
 
<b>2.2. ADJUSTABLE PIR MOTIOB SENSOR v1.0: </b> <br>
Ein einstellbarer PIR-Bewegungssensor ist ein Gerät, das Bewegungen aufgrund von Veränderungen in der Infrarotstrahlung in seinem Erfassungsbereich erkennt. 
Der Sensor hat neben dem in Projekt verwendeten Einstellungen, der empfindlichen Beweglichtkeit, auch weitere Möglichkeiten wie z.B. die Einstellung einer Zeitverzögerung.

<table><tr>
<td> <img src="https://github.com/Miacaroline/MdWv_Gruppe1/assets/66673347/19629a37-3386-4048-9663-cc745bf003d1" alt="Sensor" style="width: 250px;"/> </td>
<td> <img src="https://github.com/Miacaroline/MdWv_Gruppe1/assets/66673347/04a19a77-b0d9-4a4e-8efe-d249cfc8f04b" alt="Sensor" style="width: 250px;"/> </td>
</tr></table>

Weitere Informationen zur PIR und dessen Aufbau: https://learn.adafruit.com/pir-passive-infrared-proximity-motion-sensor/overview  

<b>2.3. SHELLY: </b> <br>
Bei der verwendeten Shelly Plus Plug S handelt es sich um eine intelligente Steckdose, welche die Fernsteuerung von verschiedensten Elektrogeräten ermöglicht. Dabei kann die Shelly sowohl über ein Wi-Fi Netzwerk als auch über einen Cloud-Hausautomatisierungsdienste betrieben werden.
Eine mögliche Alternative zur Shelly wäre der TP-Link Kasa Smart Plug, wobei die Shelly ein kompatibleres Design hat.

![shelly](https://github.com/Miacaroline/MdWv_Gruppe1/assets/66673347/19200f25-bf8d-4eca-9caa-27e4566038d6)

Weitere Informationen zur Shelly: https://de.manuals.plus/shelly/plus-plug-s-wi-fi-smart-plug-manual#ixzz85qrAgqRJ

<b>2.4. C++: </b><br>
C++ ist eine häufig verwendete Programmiersprache für die Entwicklung von Firmware und ermöglicht es, den Code des Geräts anzupassen. C++ hat eine gute Leistung und Effizienz, da es eine niedrige Abstraktionsebene und direkten Zugriff auf die Hardware ermöglicht. Außerdem ist C++ Plattformunabhängig.<br>

<p><br><p/> 
Verbindungskabel vom Rechner zum Octopus: MicroUSB zu USB 

 ![image](https://github.com/Miacaroline/MdWv_Gruppe1/assets/66125838/25fe93d6-67d4-4111-ab69-61652a39ca13)


Verbindungskabel vom Octopus zur Shelly: Grove Kabel <br>
<table><tr>
<td> <img src="https://github.com/Miacaroline/MdWv_Gruppe1/assets/66673347/89dd57f5-6e38-496a-b843-1752231ce577" alt="Sensor" style="width: 250px;"/> </td>
</tr></table>

</p>

## 3. Arbeitsschritte

<p> 
<b></b>3.1. Verbindung zum Octopus </b><br>
Um eine Verbindung zum Octopus herzustellen, müssen Sie zunächst die Arduino IDE herunterladen. Dies kann unter folgendem Link erfolgen: https://www.arduino.cc/en/software. Sobald die Arduino IDE installiert ist, können Sie mit dem nächsten Schritt fortfahren.<br>

<b>3.2. Octopus mit dem Gerät verbinden</b><br>
Nachdem Sie die Arduino IDE installiert haben, verbinden Sie den Octopus mit Ihrem Gerät. Stellen Sie sicher, dass der Octopus ordnungsgemäß angeschlossen ist und eine stabile Verbindung besteht.<br>

<b>3.3. Beispielcode ausprobieren </b><br>
Öffnen Sie die Arduino IDE und klicken Sie auf "Datei" > "Beispiele" > "0.1 Basics". Dort finden Sie einen Beispielcode namens "Blink". Dieser Code kann verwendet werden, um die Verbindung zwischen Ihrem Gerät und dem Octopus zu testen. Laden Sie den Beispielcode hoch und führen Sie ihn aus.<br>

<b>3.4. Verbindung zum Sensor herstellen </b><br>
Nachdem die Verbindung zum Octopus erfolgreich hergestellt wurde, können Sie den PIR Motion Sensor anschließen. Verwenden Sie die entsprechenden Kabel, um den Sensor mit dem Octopus zu verbinden. Um die Funktionalität des Sensors zu überprüfen, können Sie einen Beispielcode von der DFRobot-Website verwenden. Die Ausgaben in der Konsole können Ihnen helfen, die Verbindung und Funktionalität des Sensors zu überprüfen. Beachten Sie, dass es möglicherweise zu Problemen kommen kann, die im nächsten Unterpunkt erklärt werden. Wir haben den Sensor übe den Analogen Port verbunden. Wie auf dem Bild zu erkenn ist, ist dies der Rechte. 
![image](https://github.com/Miacaroline/MdWv_Gruppe1/assets/66673347/6865b036-e233-430d-a028-ba9b7a95410a)
![image](https://github.com/Miacaroline/MdWv_Gruppe1/assets/66673347/677aaad5-db29-41d2-8f79-184c8ab8a408)

<br>
<b>3.5. Problembehandlung </b><br>
Während des Verbindungs- und Testvorgangs können Probleme auftreten. Wenn Sie auf Probleme stoßen, lesen Sie die detaillierten Erklärungen in der Problembehandlung, um mögliche Lösungen zu finden. <br> Für weitere Informationen siehe im nächste Gliederungspunkt 4 - Problembehandlung.

<b>3.6. Verbindung mit der Shelly herstellen </b><br>
Um eine Verbindung mit der Shelly herzustellen, stecken Sie das Gerät in eine Steckdose. Stellen Sie sicher, dass die Shelly mit dem WLAN verbunden ist. Kopieren Sie die IP-Adresse des Shelly-Geräts, normalerweise "192.168.33.2". Öffnen Sie einen Webbrowser und ersetzen Sie die letzte Zahl der IP-Adresse durch eine 1, z. B. "192.168.33.1". Suchen Sie nach dieser Adresse, um die Shelly-Einstellungen zu öffnen. Dort können Sie die Verbindung mit Wlan herstellen. <br>

![image](https://github.com/Miacaroline/MdWv_Gruppe1/assets/66125838/f131cfeb-719d-4c8b-92a9-c842b2f67624)
![image](https://github.com/Miacaroline/MdWv_Gruppe1/assets/66125838/1cb68264-1a0e-4494-b3e8-4353dabababc)

<b>3.7. Verbindung zwischen der Shelly und dem Sensor </b><br>
Die Verbindung zwischen der Shelly und dem Sensor erfolgt über WLAN. Verwenden Sie die ESP8266 HTTPClient Library for HTTPS, um die Verbindung herzustellen. Diese Library bietet die erforderlichen Funktionen, um Daten zwischen der Shelly und dem Sensor auszutauschen. </p>

<b>3.8. Compelierung des Codes </b><br>
Drücken Sie auf das oben links angeordnete "Häckchen"-Symbol zur Überprüfung des Codes. Mit dieser Ausführung wird der Code kompiliert, somit in Maschinensprache übersetzt.

<b>3.9. Hochladen des Codes </b><br>
Im Anschluss klicken Sie auf das oben angeordnete "Pfeil"-Symbol, um den Code hochzuladen und schließlich auszuführen. Dabei wird der Code in die Prozessor Platfform eingefügt und das Programm läuft durch. Mit dieser Ausführung wird bei Erfassung einer Bewegung vom "Adjustable PIR Motion Sensor v1.0" ein Signal an die "Shelly Plug S"gesendet und leuchtet "grün". 


## 4. Problembehandlung
<p>
<b>4.1. Fehlercode nicht lesbar: </b><br>
Falls der Fehlercode nicht lesbar ist, kann der Einsatz des Analog Discovery 2 zur Fehlerdiagnose hilfreich sein.
Schließe den Analog Discovery 2 an den entsprechenden Port an und verwende die zugehörige Software, um die Signale zu überwachen.
Analysiere die Signale und vergleiche sie mit den erwarteten Werten, um mögliche Abweichungen zu identifizieren.

![image](https://github.com/Miacaroline/MdWv_Gruppe1/assets/66125838/e85dde18-904c-4557-8c91-eb041b135c7c)

<b>4.2. Veränderung des Baud-Werts: </b><br>
Sollte die Ausgabe im seriellen Monitor (Console) in Arduino falsch oder mit zusammenhangslosen Zeichen ausgegeben werden, kann die Veränderung des Baud Werts in den Arduino Einstellung eine Lösung darstellen. Dieser benannte Baud-Wert bezieht sich auf die Übertragungsrate oder Symbolrate in dem Kommunikationssystem. Es gibt an, wie viele Signalwechsel pro Sekunde übertragen werden.
![image](https://github.com/Miacaroline/MdWv_Gruppe1/assets/66673347/43acea47-26e8-4269-b0b9-94516b7a3d54)


<b>4.3. Sensoranpassung für erhöhte Distanz: </b><br>
Wenn der Sensor nicht den erwarteten Abstand erfasst hat, kann es erforderlich sein, ihn anzupassen.
Überprüfe die Dokumentation des Sensors, um herauszufinden, wie die Empfindlichkeit oder Reichweite des Sensors erhöht werden kann.
Passe den Sensor entsprechend an und aktualisiere den Code, um den neuen Abstandswert zu berücksichtigen. <br>
![pir2](https://github.com/Miacaroline/MdWv_Gruppe1/assets/66673347/a6a550aa-6400-4e3c-89c7-6b09606731ca)


<b>4.4. Digitale und analoge Ports: </b><br>
Beim Octopus-Gerät ist es wichtig zu beachten, dass sowohl digitale als auch analoge Ports vorhanden sind. Dies ermöglicht eine vielseitige Verbindung mit verschiedenen Sensoren, Aktoren und externen Geräten.
Digitale Ports ermöglichen die Kommunikation mit anderen digitalen Geräten und arbeiten mit binären Signalen (HIGH oder LOW). Diese Ports sind ideal, um digitale Sensoren anzuschließen oder Steuersignale an Aktoren zu senden.
Analoge Ports hingegen ermöglichen die Messung oder Erzeugung kontinuierlicher Werte innerhalb eines bestimmten Spannungsbereichs. Dies ist besonders nützlich, um analoge Sensoren wie Temperatursensoren oder Lichtsensoren auszulesen.
Es ist wichtig, die Unterschiede zwischen digitalen und analogen Ports zu beachten, um sicherzustellen, dass die richtigen Ports für die jeweiligen Anwendungen verwendet werden.
</p>

## 5. Installation
<p>
$ git remote add origin "gh repo clone Miacaroline/MdWv_Gruppe1 " <br>
$ git push -u origin master <br>
$ git status <br>
$ git add --all <br>
$ git commit -m "Message" <br>
$ git push <br>
</p>

## 6. Quellen
<p>
Erklärung PIR Sensor: <br>
https://wiki.dfrobot.com/PIR_Motion_Sensor_V1.0_SKU_SEN0171 <br>
Wlan Verbindung: <br>
https://forum.arduino.cc/t/esp8266-httpclient-library-for-https/495245 <br>
http://stefanfrings.de/esp8266/ <br>
https://wiki.dfrobot.com/PIR_Motion_Sensor_V1.0_SKU_SEN0171<br>
IoT Octopus: <br>
https://www.thethingsnetwork.org/community/rottal-inn/post/iot-octopus-das-perfekte-gerat-fur-einsteiger <br>
https://www.heise.de/select/make/2016/14/1481540099093747 <br>
https://www.lehrerfortbildung-bw.de/st_digital/medienwerkstatt/dossiers/co2ampel/3_materialien/1_board/
</p>
