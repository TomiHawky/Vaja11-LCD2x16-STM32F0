# Vaja11-LCD2x16-STM32F0

## Cilj naloge: S pomočjo STM32CubeIDEinHAL knjižnicami sprogramirajte STM32F0 Discovery tako, da bo preko 4bitnega vodila komuniciral z 2x16 LCD prikazovalnikomHD44780.

      - RS: PD11, E: PD13
      - D4: PD14,      D5: PD12,    D6: PD10,       D7: PD8 
      - 168Mhz   
      - low    
      - X= 0-16, Y=0-2
      - Spremeni ##int## na ##string## ,       
         TM_HD44780_PUT vzame string zato ga moramo spremeniti iz številke,
         z zadnjo vrednost določimo vrsto, 10 pomeni desetiško, 2 binarno, 16 heksadecimalno
         
## Pinout
![Pinout]()

## Vezje
![Vezje]()

##Komentat

- Naloga je bila namenjena za Nucleo razvojo ploščo, ampak dana knjižnica ne podpirna stm32-L serije procesorje #to sem odkril po četrti uri#
- Uporabil sem stm32f4 discovery razvojno plošto, nastavimo v tm_stm32_disco.h
- 5v tolerantne pine sem našel na [tej](https://www.espruino.com/ReferenceSTM32F4DISCOVERY) spletni strani
- Nisem imel dovlj časa da bi dokončal nalogo, zato lcd samo kaže beseda
