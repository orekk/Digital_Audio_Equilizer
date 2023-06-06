# Digital_Audio_Equilizer
👋
**Overview**
The "DIY Digital Audio Equalizer with DSP" is a project that introduces you to the world of Digital Signal Processing (DSP) through the creation of a basic audio equalizer. An audio equalizer is a device or software that allows you to adjust the balance between frequency components within an audio signal. In this project, you'll use a DSP to alter different frequency bands in real time, changing the sound output to suit your preferences.

For the purposes of this project I intend to cut background noises and boost a specific range of frequencies to improve sound quality. 

**Roadmap**
1. Identify the frequency (or frequency range) we want to isolate and boost the amplitude of this when outputting into the speaker 
2. Create a digital bandpass filter such that the waves with a differing frequency are squashed
    - This can be done by running an fft and squashing the noise components that are not at the fundamental frequency or its range and then running the reverse fft that the new signal may then be outputted into the speaker 
    - Also attempt to make this process instantaenous so that the delay is not noticed


**Hardware Components:**
1. **Microphone:** To capture audio input.
2. **Audio Interface/ADC:** To convert analog audio signals from the microphone into digital signals.
3. **DSP Processor or Microcontroller:** To process audio data. A Raspberry Pi or Arduino could work for this.
4. **Speaker or Headphones:** To output the processed audio.
5. **Power Supply:** To power your components.

**Steps:**
1. **Set Up Hardware:** Connect your microphone to your audio interface, then connect your audio interface to your DSP processor. Connect your DSP to your output device (speaker or headphones).
2. **Develop Software:** Write a program for your DSP to apply an equalizer to the audio signal. This could involve applying different gain values to different frequency bands in the audio signal. For example, you could boost the bass frequencies and reduce the treble frequencies.
3. **Test:** Record some audio with your microphone, apply the equalizer with your DSP, and then play the processed audio with your speaker. Adjust the parameters of your equalizer and see how they affect the audio output.

This project should give you a good introduction to audio processing with a DSP. While it's much simpler than the voice recognition project, it still provides a practical application of DSP in audio processing.



**IDEA** An Idea for later is to output the user's words into a text file - this can be used as a conversational assist [For example - Siri] (https://www.geeksforgeeks.org/performing-google-search-using-python-code/)






STEPS AS ILLUSTRATED 
# STEP 1 - Creating and Reading the Audio file [Part1]
First create the wave file using Arduino then python will read the file and convert it into a signal array 


The following link gives suggestions in Python in reading the wave signal and graphing it: 
https://www.geeksforgeeks.org/plotting-various-sounds-on-graphs-using-python-and-matplotlib/


# STEP 2 - Run the fft on the sinal and detect the correct frequency [Part2]
After running the fft of the signal detect the Frequency or frequency range of which the user is speaking at (man - 80 to 180 Hz, woman - 165 to 255 Hz), can ask user questions in order to correctly detect what range to output or consider. 

After detecting the correct frequency of the user squash the other frequencies and output the user's speaking. 

**NOTE** what happens if some noise exists at the frequency the frequency rangetthe user is speaking in [ConsiderFilters]