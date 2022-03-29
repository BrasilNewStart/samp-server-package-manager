// Mensagens aleatórias no chat

// Isso define quantos MS para uma nova mensagem (10 minutos);
#define     TIMER_REPEAT_NEW_MESSAGE    (10 * 60000)

// Caso aumentar, aumente o [4].
static const messages_random[4][] =
{
	"Para mais informações use /ajuda",
	"Para mais informações use /ajuda2",
	"Para mais informações use /ajuda3",
	"Para mais informações use /ajuda4"
};

// O timer
task RandomMessageTask[TIMER_REPEAT_NEW_MESSAGE]() 
{
    new rand = random(sizeof(messages_random));

    SendClientMessageToAll(COLOR_SAMP, messages_random[rand]);
}