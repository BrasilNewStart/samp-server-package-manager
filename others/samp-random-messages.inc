// Mensagens aleat�rias no chat

// Isso define quantos MS para uma nova mensagem (10 minutos);
#define     TIMER_REPEAT_NEW_MESSAGE    (10 * 60000)

// Variavel
static const messages_random[][] =
{
	"Para mais informa��es use /ajuda",
	"Precisa de ajuda administrativa? utilize o /atendimento ajuda.",
	"Quer comprar moeda vip? utilize / ajuda para mais informa��es.",
	"Dica: Assim que comprar uma casa, pague as d�vidas na lot�rica!",
	"Aten��o: Comprar ou vender itens  por dinheiro real � contra as regras.",
	"Onde vejo as regras do servidor? voc� tem acesso a elas entrando no nosso f�rum, utilize o /ajuda.",
	"Para entrar em uma organiza��o voc� deve falar com algu�m do /lideres ou /sublideres.",
	"Servidor: N�o cometa atos ANT-RPG como DM, VDM e etc, voc� pode ser punido!",
	"Evite colocar senhas f�ceis na sua conta como 123, o seu nick, sua conta pode ser invadida!"
};

// O timer
task RandomMessageTask[TIMER_REPEAT_NEW_MESSAGE]() 
{
    new rand = random(sizeof(messages_random));

    SendClientMessageToAll(COLOR_SAMP, messages_random[rand]);
}
