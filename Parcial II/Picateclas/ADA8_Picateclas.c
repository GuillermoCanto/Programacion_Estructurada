/*
Nombre Equipo: Picateclas
Autores:
Dur�n Matos Juan Jos�
Gonz�lez Bautista No� Alejandro
L�pez Madera Fernanda Jacqueline
Versi�n: 2.0
Descripci�n: Que genere un vector que contenga las enfermedades, otro vector que contenga los s�ntomas y una matriz de
enteros que contenga las referencias (posici�n) de cada enfermedad con sus s�ntomas. Se pide imprimir los s�ntomas
de cada enfermedad, de acuerdo a la informaci�n proporcionada por el usuario. La consulta concluir� con S (salir).
Fecha de creaci�n: 24/mar/2019
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
	/*Aqui se definen los arreglos donde representan cadenas de strings donde cada 
	string tiene un arreglo m�ximo de 200 caracteres*/
	
	//Se define el arreglo de enfermedades y sus elementos.
	char enfermedades[89][200] = {"RINITIS_ALERGICA","SINUSITIS","FARINGITIS","AMIGDALITIS","GRIPE", "LARINGITIS",
	"TUMOR_DE_LARINGE", "BRONQUITIS_AGUDA", "BRONQUITIS_CRONICA", "ASMA", "ENFISEMAS", "NEUMONIA", "PLEURESIA", "NEUMOTORAX",
    "BRONQUIECTASIAS", "ABSCESO_DE_PULMON", "NEUMOCONIOSIS", "CANCER_DE_PULMON", "FIBROSIS_INTERSTICIAL", "EDEMA_PULMONAR",
	"GASTRITIS", "HERNIA_DE_HIATO", "ULCERA_PEPTICA-DUODENAL", "ENFERMEDAD_DIVERTICULAR", "ENFERMEDAD_DE_CROHN", 
	"OBSTRUCCION_INTESTINAL", "APENDICITIS", "ENVENENAMIENTO_POR_ALIMENTOS", "GASTROENTERITIS", "CALCULOS_RENALES", 
	"PIELONEFRITIS_AGUDA", "LITIASIS_VESICULAR", "COLECISTITIS", "HERPES_ZOSTER", "TROMBOSIS_VENOSA_PROFUNDA", 
	"ARTRITIS_REUMATOIDE", "FALLO_CARDIACO", "ANSIEDAD", "DEPRESION", "TROMBOSIS_CORONARIA", "ANGINA", "EMBOLISMO_PULMONAR",
	"ICTUS", "ATAQUE_ISQUEMICO_TRANSITORIO", "TUBERCULOSIS", "HEMORROIDES", "HIPOTIROIDISMO", "COLON_IRRITABLE", 
	"CANCER_DE_INTESTINO_GRUESO", "COLITIS_ULCEROSA", "ENFERMEDAD_DE_MENIERE_(VERTIGO)", "ESPONDILOSIS_CERVICAL", "HEMORRAGIA_SUBDURAL", 
	"TUMOR_CEREBRAL", "MENINGITIS", "HEMORRAGIA_SUBARACNOIDEA", "GLAUCOMA_AGUDO", "ARTERITIS_TEMPORAL", "DISPEPSIA", "BLOQUEO_CARDIACO", 
	"ANEMIA_PERNICIOSA", "MIGRA�A", "HIPERTENSION", "ECZEMA", "URTICARIA", "SARNA", "SARAMPION", "RUBEOLA", "VARICELA", "PSORIASIS", 
	"PITIRIASIS_ROSADA", "ACNE_ROSACEA", "TIROTOXICOSIS", "DIABETES_MELLITUS", "CANCER_DE_ESTOMAGO", "FIBRILACION_AURICULAR", 
	"ENFERMEDAD_DE_HODGKIN", "MONONUCLEOSIS_INFECCIOSA", "LINFOMA", "PAROTIDITIS", "PARALISIS_DE_BEL", "ENFERMEDAD_DE_PARKINSON", 
	"FIEBRE_REUMATICA", "CISTITIS", "TUMOR_RENAL", "TUMOR_DE_VEJIGA", "IRITIS", "HEPATITIS_AGUDA", "CANCER_DE_PANCREAS"};
	
	//Se define el arreglo de sintomas y sus elementos
	char sintomas[144][200] = {"0","ESTORNUDA MUCHO", "TIENE DOLOR DE OJOS O LAGRIMEA MUCHO", "TIENE MAL LA GARGANTA", "TIENE LA VOZ RONCA",
	"TOSE MUCHO", "TIENE LA NARIZ CONGESTIONADA", "TIENE DOLOR DE CABEZA O SUFRE GENERALMENTE DE DOLORES DE CABEZA",
	"TIENE TEMPERATURA ALTA(POR ENCIMA DE 38 GRADOS)", "PERMANECE MUCHO TIEMPO EN ATMOSFERAS CARGADOS DE POLVO", "LE PICA LA PIEL", 
	"TIENE LA GARGANTA SECA", "ES SU RESPIRACION SILBANTE", "ESTA SU NARIZ MUY BLOQUEADA", "HA TENIDO UN RESFRIADO O INFECCION SIMILAR RECIENTEMENTE", 
	"SE ENCUENTRA GENERALMENTE ENFERMO", "TIENE ALTERACIONES EN LA DEGLUCION", "LE DUELEN LOS MUSCULOS", "TIENE ALGUN DOLOR EN EL TORAX (PECHO)", 
	"HA SIDO OPERADO DE ANGINAS", "TIENE ALGUN SINTOMA QUE TIENDA A PRODUCIRSE EN ATAQUES EN VEZ DE CONTINUAMENTE", 
	"TIENE TOS PRODUCTIVA UNA TOS EN LA QUE EXPULSA ALGO", "TIENE FATIGA AL RESPIRAR", 
	"SUDA MUCHO (NO CUANDO HACE EJERCICIO SINO CUANDO ESTA APARENTEMENTE RELAJADO)", 
	"TIENE SU PULSO UN RITMO ALTO NORMALMENTE DEBERIA ESTAR ALREDEDOR DE 60-80", 
	"HA TENIDO ATAQUES SEVEROS DE FATIGA LO SUFICIENTE COMO PARA PREOCUPARLE SERIAMENTE", "TIENE SU PIEL UN TINTE CEREO", 
	"CUANDO TOSE ESTA SU FLEMA TENIDA DE SANGRE", "ESTA CONFUSO ACERCA DE LO QUE LE ESTA OCURRIENDO", 
	"TIENE DELIRIOS. HABLANDO INCOHERENTEMENTE CON DEFICIENTE COORDINACION MUSCULAR", "TIENE TOS SECA (NO PRODUCTIVA)", "LE DUELE CUANDO TOSE O RESPIRA", 
	"TIENE ALGUNA VEZ UN DOLORES FUERTES EN EL PECHO", "SUDA CUANDO SE ENCUENTRA ENTRE RESFRIADO Y ENFEBRECIDO", 
	"TIENE ALGUN SINTOMA QUE HAYA ESTADO PRESENTE POR ALGUN TIEMPO (SEIS SEMANAS O MAS)", "TIENE DEDOS DE PENE ESTOS SON DEDOS PALILLOS DE TAMBOR", 
	"TIENE ALGUN SINTOMA QUE APAREZCA PRINCIPALMENTE CUANDO HACE ALGUN ESFUERZO", "FUMA", "SUFRE SENSACION DE VERTIGO", "TIENE PALPITACIONES", 
	"TIENE ALGUNO DE SUS TOBILLOS INDEBIDAMENTE HINCHADO", "VOMITA O SIENTE DESEOS DE HACERLO", 
	"SIENTE ALGUN DOLOR ABDOMINAL ENTRE EL FONDO DE LA CAJA TORACICA Y LAS INGLES", "SUFRE DE DIARREAS", "LE HAN EXTIRPADO EL APENDICE", "ESTA ICTERICO", 
	"SE ENCUENTRA UN POCO TENSO Y APRENSIVO", "LE CUESTA DORMIR O SE DESPIERTA A MITAD DE LA NOCHE", "TIENE ALGUNA CONTRACCION O TEMBLOR INVOLUNTARIO",
    "SUFRE DE ESTRENIMIENTO HACE LA DEPOSICION INFRECUENTEMENTE O CON DIFICULTAD", 
	"TIENE POCA MEMORIA DIFICULTAD EN REMEMORAR HECHOS REGULAR U OCASIONALMENTE", "TIENE PERDIDA DE VOZ EN PEQUENA CUANTIA O TOTALMENTE", 
	"SANGRA CON LAS DEPOSICIONES", "ES HOMBRE", "TIENE EL CUELLO RIGIDO O CON DOLORES", 
	"HA SOPORTADO ALGUN TIPO DE GOLPE EN LA CABEZA EN LAS ULTIMAS SEMANAS", "HA TENIDO DEPOSICIONES ANORMALES RECIENTEMENTE",
	"EFECTUA LA DEPOSICION CON GRAN CANTIDAD DE VIENTOS TANTO POR INFLAZON O FLATULENCIA",
	"HA TENIDO REPENTINAS SENSACIONES DE DESMAYO, DEBILIDAD O PERDIDAS DE CONCIENCIA",
	"TIENE PICOR EN ALGUNA PARTE DE SU CUERPO. CON O SIN LA PRESENCIA DE ERUPCION",
	"TIENE ERUPCION EN SU PIEL O ALGUNA OTRA CLASE DE LESION",
	"TIENE ALGUNA PARTE DE SU CUERPO ENTUMECIDA (PARALIZADA) O TIENE PINCHAZOS",
	"TIENE PESO EXCESIVO O BAJO RESPONDA 5 SI PESO EXCESIVO, -5 PARA BAJO, 0 SI NORMAL.",
	"TIENE ALGUN DOLOR EN SU CARA O FRENTE", "TIENE ALGUNA TUMORACION BAJO LA PIEL", "TIENE SU ORINA UN COLOR ANORMAL",
	"TIENE QUE ORINAR FRECUENTEMENTE","TIENE DOLOR CUANDO ORINA", 
	"EMPEORA SU VISION EN ALGUNA OCASION CON VISION BORROSA, DOBLE O RELAMPAGUEOS","NO TIENE NINGUN SINTOMA", 
	"LE PRODUCE ACCESOS DE TOS EL RESPIRAR AIRE FRIO, HUMO O POLVO", "AL TOSER SE CONGESTIONA Y LLEGA A PERDER EL CONOCIMIENTO",
	"TIENE INSPIRACION VIGOROSA Y RAPIDA Y ESPIRACION RUIDOSA Y PROLONGADA", 
	"ADOPTA ALGUNA POSTURA ESPECIAL PARA PODER RESPIRAR MEJOR (INCLINADA HACIA DELANTE Y CON LOS BRAZOS",
	"SE FATIGA AL REALIZAR CUALQUIER ESFUERZO COMO VESTIRSE, AGACHARSE, HABLAR, ETC.",
	"TIENE DIFICULTAD PARA EXPULSAR ALGO CON LA EXPECTORACION", "TIENE EL TORAX ABOMBADO Y RIGIDO",
    "NO PUEDE APAGAR UNA CERILLA A 20 CMS DE SU BOCA", "HA PERDIDO LA CONCIENCIA BRUSCAMENTE TRAS UN PERIODO DE ATONTAMIENTO Y CONFUSION",
	"EXPULSA ESPUTOS MUY ABUNDANTES Y PURULENTOS QUE SALEN MAS FACILMENTE CON DETERMINADAS POSTURAS",
	"TIENE TOS IRRITATIVA, FATIGANTE Y MAS MARCADA POR LAS NOCHES", "TIENE LAXITUD, FALTA DE APETITO Y HA PERDIDO PESO",
	"PRESENTA DOLORES EN SUS ARTICULACIONES",
	"TIENE SENSACION AL RESPIRAR HONDO DE QUE SE LE PARA EL AIRE ANTES DE LLEGAR AL FINAL COMO SI ESTE F",
	"TIENE OPRESION EN EL TORAX", "SE SIENTE ANGUSTIADO, TENSO O APRENSIVO",
	"PRESENTA DOLOR EN EL ABDOMEN, MAS EN LA PARTE INFERIOR IZQUIERDA", "PRESENTA DOLOR EN EL ABDOMEN, ALREDEDOR DE SU OMBLIGO O MAS EN EL LADO INFERIOR DERECHO",
	"TIENE ARDORES O SENSACION DE URENCIA EN EL TORAX, ABDOMEN O TRAS EL ESTERNON", "AUMENTAN SUS ARDORES AL TUMBARSE",
	"HA OBSERVADO LA PRESENCIA DE SANGRE EN SUS VOMITOS O DEPOSICIONES (ROJO O ANORMALMENTE NEGRO)",
	"TIENE FALTA DE APETITO CON REPUGNANCIA DE LOS ALIMENTOS", "ESTA SU LENGUA SUCIA Y LE HUELE EL ALIENTO",
	"LE DUELE EL ABDOMEN EN SU PORCION CENTRAL Y SUPERIOR COMO UNA SENSACION DE HAMBRE DOLOROSA QUE SE", "ESTA INFLAMADO ALGUNO DE SUS TESTICULOS",
	"NOTA INFLAZON ABDOMINAL CON FLATULENCIA Y GASES", "TIENE ALGUN BULTO ANORMAL EN SU ABDOMEN", 
	"TIENE DOLOR ABDOMINAL EN FORMA DE RETORTIJONES CON RUIDOS ABDOMINALES AUMENTADOS",
	"ESTA SU ABDOMEN DISTENTIDO Y TIMPANIZADO (COMO UN TAMBOR)", "TIENE ALGUN DOLOR ABDOMINAL QUE AUMENTE CON LOS ESFUERZOS, LA TOS O AL ANDAR",
	"TIENE DOLOR EN SUS RINONES, QUE SE BAJA HASTA LOS GENITALES (COMO ALGO QUE SE RETUERCE O DESGARRA", "TIENE ESCALOFRIOS",
	"TIENE DOLOR ABDOMINAL LOCALIZADO EN LA PORCION SUPERIOR DERECHA (DEBAJO DE LAS COSTILLAS)",
	"TARDA MUCHO EN HACER SUS DIGESTIONES ENCONTRANDOSE PESADO Y CON ERUPTOS FRECUENTES",
	"TIENE ALGUNA DE SUS PIERNAS INDEBIDAMENTE HINCHADA",  "TIENE DOLOR A LO LARGO DE LA PIERNA O EN LA PANTORRILLA",
	"TIENE ALGUNA DE SUS ARTICULACIONES TUMEFACTA, CALIENTE Y DOLOROSA (MAS EN MUNECAS Y DEDOS BILATERAL)",
	"TIENE LOS DEDOS HINCHADOS Y FUSIFORMES Y LE IMPIDEN DORMIR",
	"ESTA TRISTE, SOMBRIO, FALTO DE ILUSIONES, PESIMISTA CON IMPOTENCIA PARA OBRAR Y PENSAR Y DESEA MORIR",
	"TIENE EL PULSO MAS LENTO DE LO NORMAL", "TIENE SENSACION DE MUERTE INMINENTE",
	"HA SIDO INTERVENIDO QUIRURGICAMENTE RECIENTEMENTE",
	"TIENE O NOTA UNA TUMEFACCION BLANDA EN LA REGION ANAL QUE SE LE SALE CON LA DEPOSICION Y LE PRODUCE",
	"TIENE SU PIEL ASPECTO SECO, ASPERO, DURA, ESCAMOSA Y FRIA (MAS EN LA CARA, NUCA Y DORSO DE MANOS)",
	"TIENE O SIENTE UNA SENSACION DE FRIO MAS ACUSADA DE LO NORMAL",
	"TIENE SUS UNAS QUEBRADIZAS Y SU PELO ES RALO Y ESCASO CON CAIDA DEL MISMO DE LA COLA DE LA CEJA",
    "SE ENCUENTRA SOMNOLIENTO, APATICO, CON LENGUAJE LENTO Y GRAN FATIGABILIDAD", "ESTA SU LENGUA AUMENTADA DE TAMANO", "ESTA NERVIOSO, INQUIETO E INESTABLE",
	"SE SIENTE INSATISFECHO AL HACER LA DEPOSICION CON DESEOS DE VOLVER A EVACUAR", "TIENE ZUMBIDOS DE OIDOS",
	"TIENE SOMNOLENCIA PROGRESIVA CON CONFUSION MENTAL, CAMBIO DE CARACTER Y DELIRIO HASTA PERDER LA CONCIENCIA", 
	"TIENE DOLORES DE CABEZA LATERALES, PULSATILES Y FUERTES QUE LE IMPIDEN APOYAR LA CABEZA EN LA ALMOHADA",
	"ESTA SU LENGUA ARDIENTE, DOLOROSA, ROJA Y LISA EN BORDES Y PUNTAS CON PERDIDA DE LAS RUGOSIDADES", "LE MOLESTA LA LUMINOSIDAD",
    "SE SUELE DESPERTAR CON DOLOR DE CABEZA Y CON LA SENSACION DE QUE EL SUENO NO HA SIDO REPARADOR",
	"TIENE ALGUNA MANCHA BLANQUECINA (COMO CALCAREA EN LA CARA INTERNA DE LA MEJILLA)", 
	"TIENE MUCHO APETITO Y COME MUCHO PERO A PESAR DE ELLO PIERDE PESO Y SE ENCUENTRA DEBIL",
	"ESTA SU FIEL FINA, ROJA, CALIENTE Y SUDOROSA (MAS EN LA PALMA DE LAS MANOS)",
	"TIENE GRAN APETITO, MUCHA SED Y ORINA MUCHO SOBRETODO POR LAS NOCHES",
	"SE LE INFECTAN CON FACILIDAD LAS HERIDAS O LE TARDAN MUCHO EN CICATRIZAR",
	"ES SU PULSO IRREGULAR, CAMBIANDO SU VOLUMEN Y AMPLITUD DE LATIDO EN LATIDO",
	"TIENE LA BOCA SECA Y LE DUELE AL MASTICAR",
	"ESTA SU BOCA TORCIDA HACIA UN LADO CON DIFICULTAD PARA CERRAR EL OJO DEL MISMO LADO Y NO PUEDE FRUN",
	"ESTAN SUS MUSCULOS RIGIDOS Y ENVARADOS, LO QUE LE HACE ADOPTAR UNA POSTURA DE PROYECCION HACIA ADELANTE",
	"COMIENZA A ANDAR LENTAMENTE, VA CADA VEZ MAS DEPRISA CON PASOS CORTOS Y CAE AL SUELO",
	"ES SU LENGUAJE DEBIL CON TONOS UNIFORMES Y A VECES INCOMPRENSIBLES", 
	"TIENE DOLORES EN LAS ARTICULACIONES Y QUE VAN DE UNA ARTICULACION A OTRA",
	"TIENE DOLORES ABDOMINALES POR DEBAJO DEL OMBLIGO Y POR ENCIMA DEL PUBIS",
	"SE QUEDA CON MAS GANAS DE ORINAR DESPUES DE HABER ORINADO", "ESTA SU ORINA TENIDA DE SANGRE",
	"TIENE PICORES EN AXILAS, INGLES, COSTADOS, ENTRE LOS DEDOS FUNDAMENTALMENTE NOCTURNOS",
	"TIENE PICORES EN SU CUERPO Y ADEMAS HAY EN SU ENTORNO ALGUIEN IGUAL (FAMILIAR O AMIGO)", "TIENE DOLORES EN LOS HUESOS"};
	
	/*La matriz de abajo representa las relaciones con respecto a las enfermedades
	cada enfermedad tiene un m�ximo de 10 relaciones*/
	int relaciones[89][10]={{1,2,3,5,6,7,8,15,17,34},{1,2,6,10,11,12,20,0,0,0},{5,14,13,15,7,22,2,6,63,0},{3,16,8,11,37,64,0,0,0,0},{3,7,15,16,19,8,34,64,0,0},
	{3,1,6,7,8,15,17,18,34,0},{4,8,15,16,37,0,0,0,0,0},{4,34,37,0,0,0,0,0,0,0},{5,8,12,15,18,21,31,34,70,0},{5,12,14,21,22,34,36,37,71,0},
	{12,20,22,23,24,25,26,31,72,73},{22,5,26,12,21,37,74,75,76,77},{5,8,15,18,22,23,24,29,27,31},{31,32,22,5,8,15,34,0,0,0},{5,18,22,23,31,32,0,0,0,0},
	{21,27,5,14,15,34,35,80,0,0},{8,14,15,33,18,21,27,80,0,0},{18,22,36,21,9,0,0,0,0,0},{5,21,27,22,18,12,37,81,82,0},{22,35,21,141,81,83,0,0,0,0},
	{5,22,24,25,27,26,12,84,85,0},{41,43,42,8,37,91,92,0,0,0},{18,32,42,57,16,41,88,89,90,0},{20,37,41,90,93,0,0,0,0,0},{42,43,41,8,49,86,95,96,0,0},
	{42,43,15,8,62,81,82,87,99,0},{24,42,41,49,97,98,0,0,0,0},{24,42,41,44,87,92,99,142,0,0},{42,41,43,7,56,97,0,0,0,0},{41,42,43,8,91,92,0,0,0,0},
	{42,66,98,100,101,0,0,0,0,0},{42,8,41,66,67,100,101,0,0,0},{42,41,57,102,103,0,0,0,0,0},{42,8,41,45,102,103,0,0,0,0},{42,18,60,59,2,46,64,85,0,0},
	{24,40,104,105,142,0,0,0,0,0},{15,17,40,81,82,106,107,0,0,0},{22,24,36,25,12,18,40,42,47,141},{46,28,47,39,23,48,16,43,22,50},{47,7,49,50,15,62,95,108,0,0},
	{18,32,20,36,38,22,23,41,15,110},{37,18,36,22,23,38,41,85},{22,18,21,27,25,26,85,110,111},{28,38,51,58,61},{28,38,51,34,20,58,61},
	{7,8,12,15,18,5,30,27,22,81},{52,49,56,59,112},{49,17,50,62,113,114,115,116,117,136},{43,49,42,41,56,57,97,116},{43,49,52,42,56,62,81,97,117},
	{42,43,52,23,41,8,34,56,81,118},{38,41,34,20,109,120},{54,7,38,58,61},{55,28,7,41,38,109,50,54,121},{7,41,38,50,34,109,121,50},
	{8,7,41,28,54,2,60,109,101,121},{7,54,38,28,4,2,78,109},{2,7,41,20,34,63,68},{7,17,2,23,63,81,122},{18,57,42,41,46,20,95,118,43,103},
	{22,58,39,18,109},{22,58,39,36,45,42,50,28,123},{7,15,41,43,2,20,34,63,122,124},{7,24,38,39,15,34,50,58,125},{59,60},
	{59,60,46},{59,60,141,142},{15,8,6,2,11,5,43,60,7,126},{1,2,8,60,54,64,124},{60,59,8,7,15,34},
	{46,3,60,59},{60,59,34},{60,2,34},{46,47,48,23,39,43,2,24,127,128},{62,61,2,66,68,129,130},
	{16,41,42,62,52,56,81,90,91},{24,39,38,42,58,131},{8,23,46,59,63,64,81,143},{8,7,3,15,17,64,54,45,60,109},{64,54,15,62,8,23,59},
	{64,8,15,16,54,3,132,94},{51,63,13},{48,51,42,50,28,134,135,136},{3,15,8,23,24,64,60,48,106,137},{66,65,67,8,138,139},
	{8,42,65,96,100,140},{65,42,66,67,8,139,140},{2,68,124},{8,15,17,42,45,41,59,65,81,102}};
	
	char opcion; //opci�n del men�
	char linea[100]; //Linea que se ingresa en la b�squeda de la enfermedad
	int banderaSalida = 0; //Bandera que determina si la selecci�n en el menu a terminado su proceso
	
	
	printf("\n\tHOSPITAL PICATECLAS\t\n");
	
	while(banderaSalida!=1){
	printf("\nBienvenido, �en qu� te puedo ayudar?");
	printf("\n1. Consultar la lista de enfermedades.");
	printf("\n2. Hacer una b�squeda de alguna enfermedad.");
	printf("\n3. Instrucciones del programa.");
	printf("\n4. Pulse 4 o la letra S para salir.");
	printf("\n\n   Ingrese la opci�n que desea realizar: ");
	scanf(" %c", &opcion);
	system("cls");
	
	int bandera;
	switch(opcion){
		case '1':
			//imprime las enfermedades almacenadas
			printf("Lista de enfermedades: \n");
			for(int i=0;i<89;i++){
				printf("%i. ", i+1);
				for(int j=0;j<200;j++){
					printf("%c", enfermedades[i][j]);
				}
				printf("\n");
			}
			getch();
			system("cls");
		break;
		
		case '2':
			do{
				printf("\nIngrese el nombre de la enfermedad que desea investigar: ");
				scanf("%s", linea);
				//busca la enfermedad ingresada
				for(int i=0;i<89;i++){
					if (strcmp(enfermedades[i],linea)==0)
					{
						//imprime los s�ntomas de la enfermedad si se encuentra
						printf("Los s�ntomas de la enfermedad %s son:\n\n",enfermedades[i]);
						bandera=1;
						for(int j=0;j<10;j++){
							for(int m=0; m<200; m++){
								if(relaciones[i][j]!=0){
									printf("%c", sintomas[relaciones[i][j]][m]);
								}
							}
							printf("\n");
						}
						break;
					}else{
						bandera=0;
					}
				}
				if(bandera==0){
					printf("\nLa enfermedad no pudo ser encontrada, o no est� escrita correctamente (s�lo may�sculas y espacios con gui�n bajo _)");
					printf("\nPor favor presione Enter e ingrese la enfermedad nuevamente.");
					getch();
					system("cls");
				}
			} while(bandera==0);
			
		getch();	
		system("cls"); //Limpia consola	
	    break;
	    case '3':
			//instrucciones
			printf("\nNavegue en el men� ingresando el n�mero de la opci�n que desea.");
			printf("\nPresione 4 para salir del sistema, sino, tambi�n puede presionar la tecla S.");
			printf("\nCuando ingrese alguna enfermedad deber� ingresarlo s�lo con letras may�sculas.");
			printf("\nTambi�n tendra que hacer uso del gui�n bajo (_) en vez del espacio.");
			getch();
			
			system("cls"); //Limpia consola
		break;
		
	    case '4':
		case 'S':
		case 's':
			//mensaje de salida del programa
			printf("\nGracias por la consulta, esperamos verlo pronto");
			banderaSalida = 1;
		break;
		
	    default:
			printf("Opci�n no v�lida\n");
			getch();
			system("cls"); //Limpia pantalla
		break;
	}
	}
	return 0;
    
}
/*
REVISI�N:
-El programa funciona correctamente.
-La codificaci�n es bastante clara.
-Bien documentado, solo falto colocar en que
parte del codigo se encuentra la salida de datos.
-Valida correctamente en cada opci�n.
-La creaci�n de la matriz y los vectores es 
bastante �ptima.
-La opci�n de salir del programa funciona correctamente.
-Los sintomas concuerdan con la enfermedad.
-Buena idea el colocar una gu�a para el uso del 
programa.
-Es posible comfundirse en algunas enfermedades donde 
los sintomas tienen casi la misma extension de letras,
por lo que ser�a pr�ctico colocar un s�mbolo (o agregar un espacio) que anteceda
a la l�nea de c�digo para enlistar mejor los sintomas.
-Las variables son bastante representativas.
--------------------------------------------------
Revis�:Punto C.
*/