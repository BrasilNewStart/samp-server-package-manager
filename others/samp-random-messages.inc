// Mensagens aleatórias no chat

// Isso define quantos MS para uma nova mensagem (10 minutos);
#define     TIMER_REPEAT_NEW_MESSAGE    (10 * 60000)

// Variavel
static const messages_random[][] =
{
	"Para mais informações use /ajuda",
	"Precisa de ajuda administrativa? utilize o /atendimento ajuda.",
	"Quer comprar moeda vip? utilize / ajuda para mais informações.",
	"Dica: Assim que comprar uma casa, pague as dívidas na lotérica!",
	"Atenção: Comprar ou vender itens  por dinheiro real é contra as regras.",
	"Onde vejo as regras do servidor? você tem acesso a elas entrando no nosso fórum, utilize o /ajuda.",
	"Para entrar em uma organização você deve falar com alguém do /lideres ou /sublideres.",
	"Servidor: Não cometa atos ANT-RPG como DM, VDM e etc, você pode ser punido!",
	"Lembre-se de sempre tirar print do seu RG, Inventário, baú e de bens essenciais para caso de bug.",
	"Evite colocar senhas fáceis na sua conta como 123, o seu nick, sua conta pode ser invadida!"
};

// O timer
task RandomMessageTask[TIMER_REPEAT_NEW_MESSAGE]() 
{
    new rand = random(sizeof(messages_random));

    SendClientMessageToAll(COLOR_SAMP, messages_random[rand]);
}
