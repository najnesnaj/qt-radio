a qt-webradio player

I used QT-creator to create a GUI. (it is qt4 based)

In drukknop.cpp I use the system-command ("radio1") when the button "radio1" is clicked

The radiostation starts playing and the music-info (artist, song) is displayed in the GUI 



the system-command is a script I made for radiostation : radio1

it uses a named pipe "/tmp/testpipe" from which the song-info is read by the application




script:
-------
killall mplayer
echo "radio1" > /tmp/testpipe
mplayer -ao alsa:device=hw=2 http://mp3.streampower.be/radio1-high.mp3 2>&1 | sed -une 's/ICY Info: StreamTitle=//p'i |sed  -une 's/'\''//gp'|sed -une 's/'\;'//p' > /tmp/testpipe &

