/*  ----------------------------------------------------------------------------------------------------------------------------------------

        Sistema de eventos
                            v0.63
                            Theus_Crazzy (wearLyS)

 ----------------------------------------------------------------------------------------------------------------------------------------- */

#include <YSI_Coding\y_hooks>

// ---------------------------------------------------------------------------------
// Include <samp-random-events>

#if defined _INC_samp_random_event
	#if INC_samp_random_event_version < (5)
		#error Install version 5 or greater of the <samp-random-events> library
	#else
		#if !defined QUIZ_EVENT
			#define QUIZ_EVENT true
			#define QUIZ_EVENT_ID 3
			#define COLOR_QUIZ_EVENT 0xFFF000AA
		#endif
	#endif
#endif

// ---------------------------------------------------------------------------------

enum quizEnum
{
    question[128],
    answers[128]
};

new QUIZ_QUESTION;

new QUIZ_Event[][quizEnum] = 
{
	{ "Qual o menor e o maior pais do mundo?", "Vaticano e Russia" },
	{ "Qual o nome do presidente do Brasil que ficou conhecido como Jango?", "Joao Goulart" },
	{ "Qual o livro mais vendido do mundo apos a Biblia?", "Dom Quixote" },
	{ "Quantas casas decimais tem o número pi?", "Infinitas" },
	{ "Atualmente, quantos elementos químicos a tabela periódica possui?", "118" },
    { "Quais os países que têm a maior expectativa de vida do mundo?", "Japao" },
    { "Qual o número mínimo de jogadores numa partida de futebol?", "7" },
    { "Quanto tempo a luz do Sol demora para chegar à Terra?", "8 minutos" },
    { "Que seleção ganhou a Copa do Mundo da África do Sul?", "Espanha" },
    { "Que time europeu ganhou a Liga dos Campeões da UEFA na temporada 2009-2010?", "Inter de milao" },
    { "Que time brasileiro que ganhou o brasileirão de 2010?", "Fluminense" },
    { "Que time brasileiro que ganhou o brasileirão de 2005?", "Corinthians" },
    { "Quem foi o primeiro time campeão brasileiro?", "Atletico Mineiro" },
    { "Qual personagem folclórico costuma ser agradado pelos caçadores com a oferta de fumo?", "Caipora" },
    { "Em que período da pré-história o fogo foi descoberto?", "Paleolitico" },
    { "Qual a montanha mais alta do Brasil?", "Pico da neblina" },
    { "Em qual cidade da China o português é língua oficial?", "Macau" },
    { "Quem é o autor de ?O Príncipe??", "Maquiavel" },
    { "Quem descobriu o Brasil?", "Pedro Alvares Cabral" },
    { "Qual o maior planeta do sistema solar?", "Jupiter" },
    { "Qual o planeta mais quente do sistema solar?", "Venus" },
    { "Qual o nome do Deus dos mares, grego?", "Poseidon" },
    { "Qual a religião com mais seguidores no mundo?", "Cristianismo" },
    { "Quem foi o primeiro homem a pisar na lua?", "Neil Armstrong" },
    { "Quantas pessoas morreram na Batalha de Stalingrado?", "Mais de um milhão" },
    { "Quais vítimas do holocausto?", "Judeus" },
    { "Nome do evento que barbarizou a ucrânia?", "holodomor" },
    { "Qual livro de platão que fala sobre imortalidade da alma", "República" },
    { "Qual era o melhor jogador da polônia?", "Zbigniew Boniek" },
    { "Quem venceu a guerra civil na china?", "Comunistas" },
    { "Qual a moeda meme?", "Dogecoin" },
    { "Que nome foi dado a remodelação mealheira união sovietica", "Perestroika" },
    { "Míssil do iraque na guerra do golfo com alcance menos de 700KM", "al-hussein" },
    { "Onde as bases americanas estavam na guerra do golfo?", "Arábia Saudita" },
    { "Qual a justificativa do material usado no muro de berlim?", "Dificultar a escalada" },
    { "Com oque o topo do muro de berlim estava alinhado", "Cano liso" }
};

hook OnPlayerText(playerid, text[])
{
	new string[128];

	if (EVENT[ev_started] && EVENT[ev_type] == QUIZ_EVENT_ID)
	{
        if (strlen(text) > 50) return 1;

        if (strdistance(QUIZ_Event[QUIZ_QUESTION][answers], text) < 5)
        {
            if (gettime() < GetPVarInt(playerid, #varFloodRespostas))
                return SendClientMessage(playerid, -1, "Vá com calma! Você não é o Einstem... Responda sem robos...");

            SetPVarInt(playerid, #varFloodRespostas, gettime() + 2);

            EVENT[ev_score][playerid]++;
            EVENT[ev_bonus][playerid] += 500;

            SendMsgAllF(EVENT[ev_color], "[EVENTO QUIZ]: {FFFFFF}%s acertou a resposta, {FFFFFF}adicionado {00AA00}+$500", PlayerName[playerid]);

            PlayerTextDrawChangeString(string, playerid, "%s", event_ptextdraw[0][playerid], PlayerName[playerid]);
            PlayerTextDrawChangeString(string, playerid, "%d acertos", event_ptextdraw[1][playerid], EVENT[ev_score][playerid]);

            EVENT_UpdateRanks();

            QUIZ_QUESTION = random(sizeof(QUIZ_Event));
		    SendMsgAllF(EVENT[ev_color], "[EVENTO QUIZ]: {00FF00}%s", QUIZ_Event[QUIZ_QUESTION][question]);
        }
	}
	return 1;
}