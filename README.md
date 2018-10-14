# IFJ
World's best compiler!

HouseStyle - IFJ Master Race
----------------------------

1) Pojmenovani funkci:
	 void pref_nazevFunkce();
	
	 nazevFunkce = Camel-Case s malym pocatecnim pismenem
         pref_ = Pokud existuje vice f-ci, ktere spolu nejak souviseji
                 oznaci se kratkym prefixem.
	
	 Priklad:
	 math_sectiDveCisla(int a, int b);
	 math_odectiDveCisla(int a, int b);
	 math_vynasobDveCisla(int a, int b);

2) Pojmenovani promennych:
	 int nazev_promenne; <= slova oddelovat '_', mala pismena

	 int priklad_ptr;    <= Ukazatel konci priponou _ptr
	 int priklad_fd;     <= File descriptor konci priponou _fd	    
	 int priklad_g;      <= Globalni promenne konci priponou _g

3) Pojmenovani struktur:
	
	 typedef struct priklad {
	 	 int prvni_promenna;
		 int druha_promenna;
	 } priklad_t;	    <= Novy datovy typ s priponou _t 

4) Pojmenovani konstant:
	 #define KONSTANTA 256	<= Definice pomoci maker, velke pismena

5) Pouzivani slozenych zavorek:
	- Vzdy zvlast na novem radku tzn.:
	  while(i != 21)
	  {
		    if(i > 10)
        {
			     int tortuga = 24;
			     i++;
		    }
    }

6) Komentare:
	a) Komentovani funkci pomoci Doxygen komentaru
           /**
            * @brief Funkce pricita hodnotu druheho cisla (b) k prvnimu (a). <= Co funkce dela?
            * @pre   Ukazatele *a a *b nesmi byt NULL a meli by ukazovat na  <= Pouze u komplikovanych f-ci.
            *        hodnoty int.                                               (Co musi byt splneno pred 
            *                                                                    volanim?)
            * @post  Hodnota na kterou ukazuje *b je prictena k hodnote, na  <= Pouze u komplikovanych f-ci.
            *        kterou ukazuje *b.                                         (Co se zmeni po zavolani f-ce?)
            * @param   *a     Ukazatel na hodnotu, ke ktere ma byt prictena  <= Jake prijima parametry?
            *                 druha hodnota (*b).
            *          *b     Ukazatel na hodnotu, ktera bude prictena k 
            *                 prvni hodnote (*a).
	          * @return void						     <= Co funkce vraci?
	          */
	   void math_PrictiCislo(int *a, int *b)
	   {
		    *a = *a + *b; 
     }

7) Pouzivany jazyk:
	 Anglictina (v komentarich i v kodu)
