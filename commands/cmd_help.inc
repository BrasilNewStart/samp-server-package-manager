// Includes necessárias
#include < YSI_Coding\y_hooks >

// Defina;
#define         HELP_FAZENDA                1
#define         HELP_COZINHA                2
#define         HELP_LIDER                  3
#define         HELP_CELULAR                4
#define         HELP_FORUM                  5
#define         HELP_DISCORD                6
#define         HELP_ATUALIZACAO            7
#define         HELP_COMPRAR_CASH           8
#define         HELP_GERAL                  9
#define         HELP_ORG                    10
#define         HELP_EMPREGO                11
#define         HELP_HOUSE                  12
#define         HELP_VEHICLE                13
#define         HELP_VIP                    14
#define         HELP_RADIO                  15
#define         HELP_CAIXA                  16
#define         HELP_CAIXA2                 17
#define         HELP_DROGAS                 18
#define         HELP_SACOLAS                19
#define         HELP_PROPRIEDADES           20
#define         HELP_REGRAS                 21
#define         HELP_ALUGUEL                22
#define         HELP_PRIMEIROS_PASSOS       23
#define         OPC_01_PRIMEIROS_PASSOS     24


// Função;
stock Help_List(playerid, helpid = 0, const title_help[]="default") {

    MEGAString[0] = EOS;

    switch(helpid) {

        // /ajuda (Começa pelo ID 0, ou seja, "Atualizações" é o ID 0...)
        case 0: {
            strcat(MEGAString, " {FFFFFF}» {00AAFF}Ajuda {FFFFFF}» Atualizações\n");
            strcat(MEGAString, " {FFFFFF}» {00AAFF}Ajuda {FFFFFF}» Fórum\n");
            strcat(MEGAString, " {FFFFFF}» {00AAFF}Ajuda {FFFFFF}» TeamSpeak & Discord\n");
            strcat(MEGAString, " {FFFFFF}» {00AAFF}Ajuda {00FF00}» Comprar Cash\n");
            strcat(MEGAString, " {FFFFFF}» {00AAFF}Ajuda {FFFFFF}» Documentos\n");
            strcat(MEGAString, " {FFFFFF}» {00AAFF}Ajuda {FFFFFF}» Comandos em Geral\n");
            strcat(MEGAString, " {FFFFFF}» {00AAFF}Ajuda {FFFFFF}» Organização\n");
            strcat(MEGAString, " {FFFFFF}» {00AAFF}Ajuda {FFFFFF}» Empregos\n");
            strcat(MEGAString, " {FFFFFF}» {00AAFF}Ajuda {FFFFFF}» Celular\n");
            strcat(MEGAString, " {FFFFFF}» {00AAFF}Ajuda {FFFFFF}» Casas\n");
            strcat(MEGAString, " {FFFFFF}» {00AAFF}Ajuda {FFFFFF}» Empresas\n");
            strcat(MEGAString, " {FFFFFF}» {00AAFF}Ajuda {FFFFFF}» Carros\n");
            strcat(MEGAString, " {FFFFFF}» {00AAFF}Ajuda {FFFFFF}» Regras\n");
            strcat(MEGAString, " {FFFFFF}» {00AAFF}Ajuda {FFFFFF}» Cozinha\n");
            strcat(MEGAString, " {FFFFFF}» {00AAFF}Ajuda {FFFFFF}» Aluguel\n");
            strcat(MEGAString, " {FFFFFF}» {00AAFF}Ajuda {FFFFFF}» Líder\n");
            strcat(MEGAString, " {FFFFFF}» {00AAFF}Ajuda {FFFFFF}» GPS\n");
            strcat(MEGAString, " {FFFFFF}» {00AAFF}Ajuda {FFFFFF}» Benefícios de Sócios\n");
            strcat(MEGAString, " {FFFFFF}» {00AAFF}Ajuda {FFFFFF}» JBL\n");
            strcat(MEGAString, " {FFFFFF}» {00AAFF}Ajuda {FFFFFF}» Fazendas\n");
            strcat(MEGAString, " {FFFFFF}» {00AAFF}Ajuda {FFFFFF}» Caixas Surpresa\n");
            strcat(MEGAString, " {FFFFFF}» {00AAFF}Ajuda {FFFFFF}» Drogas\n");

            return ShowPlayerDialog(playerid, DIALOG_ID_HELP, DIALOG_STYLE_LIST, "{FFFFFF}» {00AAFF}Ajuda do Servidor", MEGAString, "Selecionar", "Cancelar");
        }
        case HELP_FAZENDA: {
            strcat(MEGAString, "\n\n{FF0000}________________________| AJUDA FAZENDA |________________________\n");

            strcat(MEGAString, "\n{8B8A8A}Comandos disponíveis:\n");

            strcat(MEGAString, "\n{FFFFFF}• /minhasfazendas 			{8B8A8A}(Para ver suas fazendas)\n");
            strcat(MEGAString, "{FFFFFF}• /fazenda info 				{8B8A8A}(Para ver as informações de sua fazenda)\n");
            strcat(MEGAString, "{FFFFFF}• /fazenda nome 			{8B8A8A}(Para alterar o nome da sua fazenda)\n");
            strcat(MEGAString, "{FFFFFF}• /fazenda extorsao 			{8B8A8A}(A pessoa que for a 'extorsão' ganhará um lucro por minuto)\n");
            strcat(MEGAString, "{FFFFFF}• /fazenda precoproduto 		{8B8A8A}(Quantos pagará por produto na fazenda)\n");
            strcat(MEGAString, "{FFFFFF}• /fazenda pedirprodutos 		{8B8A8A}(Para pedir para algum caminhoneiro lhe trazer produtos)\n");
            strcat(MEGAString, "{FFFFFF}• /chave 				{8B8A8A}(Para abrir/fechar sua fazenda)\n");
            strcat(MEGAString, "{FFFFFF}• /fazenda vender 			{8B8A8A}(Para vender sua fazenda)\n");
            strcat(MEGAString, "{FFFFFF}• /fazenda sacar 			{8B8A8A}(Para sacar os lucros da sua fazenda)\n");
            strcat(MEGAString, "{FFFFFF}• /fazenda depositar 			{8B8A8A}(Para depositar na sua fazenda para pagar por produtos)\n");
            strcat(MEGAString, "{FFFFFF}• /fazenda melhorarcofre 			{8B8A8A}(Para melhorar o cofre de sua fazenda)\n");

            strcat(MEGAString, "\n{8B8A8A}Funcionamento:\n");

            strcat(MEGAString, "\n{FFFFFF}• A fazenda recebe $50.000 a cada 1 minuto, ou seja, $25.000 cada produto.\n");
            strcat(MEGAString, "• A fazenda usa 2 de produtos a cada 1 minuto.\n");
            strcat(MEGAString, "• A 'Extorsão' da fazenda recebe na conta $200 por minuto\n");

            strcat(MEGAString, "\n{8B8A8A}Dicas:\n");

            strcat(MEGAString, "\n{FFFFFF}• De acordo com os ganhos o total que você deverá pagar por produto é:\n");
            strcat(MEGAString, "de $14.500 á $18.000 por produto para os Caminhoneiros\n");
            strcat(MEGAString, "* OBS: Retire sempre a grana da sua fazenda para evitar roubos de criminosos\n");

            strcat(MEGAString, "\n{FF0000}_________________________________________________________________\n\n");
        }
        case HELP_COZINHA: {
            SendClientMessage(playerid, -1,"_______________________________________");

            SendClientMessage(playerid, 0x00FF00AA,"Ajuda cozinha");
            SendClientMessage(playerid, COLOR_GRAD3,"Para cozinhar você precisa ficar de frente para um fogão e usar...");
            SendClientMessage(playerid, COLOR_GRAD3,"...em seu inventário, uma comida (Carne Crua ou Pizza Congelada).");

            SendClientMessage(playerid, -1,"_______________________________________");

            return 1;
        }
        case HELP_LIDER: {
            SendClientMessage(playerid, -1,"___________________________________ Ajuda Líder ___________________________________");

            // Caso seja líder
            if (IsLeaderOrg(playerid))
            {
                SendClientMessage(playerid, COLOR_GRAD2,"- AJUDA LIDER - Comandos Disponiveis:");
                SendClientMessage(playerid, COLOR_GRAD2,"- LIDER - /convidar /demitir /promover /L");
                SendClientMessage(playerid, COLOR_YELLOW,"- OUTROS - /ajudaaluguel /ajudaempresa /ajudalider /ajudapesca /ajudacozinha");

                // Caso seja líder do governo
                if(IsLeaderOrg(playerid) == ID_ORG_GOVERNO)
                {
                    SendClientMessage(playerid, COLOR_GRAD3,"- PREFEITO - (/pre)feito /setartaxa (Taxa somente para Oficiais)");
                    SendClientMessage(playerid, COLOR_YELLOW,"- OUTROS - /ajudaaluguel /ajudaempresa /ajudalider /ajudapesca /ajudacozinha");
                }
            }
            else
            {
                SendClientMessage(playerid, -1, "Você não e um lider!");
                SendClientMessage(playerid, COLOR_YELLOW,"- OUTROS - /ajudaaluguel /ajudaempresa /ajudalider /ajudapesca /ajudacozinha");
            }

            return 1;
        }
        case HELP_CELULAR: {
            SendClientMessage(playerid, -1,"__________ Ajuda Celular __________");

            if (PlayerInfo[playerid][numeroCelular] > 0)
            {
                SendClientMessage(playerid, COLOR_GRAD2,"- AJUDA CELULAR - Comandos Disponiveis:");
                SendClientMessage(playerid, COLOR_GRAD2,"- CELULAR - /ligar /sms (/at)ender (/des)ligar /telefone /agenda /agendatel");
            }
            else
            {
                SendClientMessage(playerid, -1,"Você não possui um celular compre um na 24-7");
            }

            return 1;
        }
        case HELP_FORUM: {
            return ShowPlayerDialog(playerid, 0, DIALOG_STYLE_MSGBOX, "Fórum do: {FFFF00}"SERVER_NAME"", "Entre em nosso fórum: {FFFF00}"SERVER_SITE"", "Informado","");
        }
        case HELP_DISCORD: {
            return ShowPlayerDialog(playerid, 8724, DIALOG_STYLE_MSGBOX, "{00FF00}Discord & TeamSpeak", "\n\n{8B8A8A}TeamSpeak do servidor: {FFFFFF}"SERVER_TEAMSPEAK3"\n{8B8A8A}Discord do servidor: {FFFFFF}"SERVER_DISCORD"\n\n", "Informado","");
        }
        case HELP_ATUALIZACAO: {
            strcat(MEGAString, "\n{EA3D3D}OBS: A melhor forma de relatar um BUG de até 100 caracteres (digite abaixo):");

            new conteudo[120];
            format(conteudo, 120, "%s - %s", SERVER_VERSION, SERVER_VERSION_DATE);
            return ShowPlayerDialog(playerid, 70, DIALOG_STYLE_INPUT, conteudo, MEGAString, "Enviar", "Cancelar");
        }
        case HELP_COMPRAR_CASH: {
            strcat(MEGAString, "{49E468}FAQ: {DBDCE0}COMPRAR CASH\n");

            strcat(MEGAString, "\n\n	{DBDCE0}PERGUNTA: {7D8084}Qual o valor do cash?\n");
            strcat(MEGAString, "	{49E468}RESPOSTA: {7D8084}O valor é R$1,00 cada ?1.000 cash.\n\n");

            strcat(MEGAString, "	{DBDCE0}PERGUNTA: {7D8084}Como eu faço para receber o cash após pagamento?\n");
            strcat(MEGAString, "	{49E468}RESPOSTA: {7D8084}Use o link: http://ativacao.brasilnewstart.com.br\n\n");

            strcat(MEGAString, "	{DBDCE0}PERGUNTA: {7D8084}Há como pagar via boleto?\n");
            strcat(MEGAString, "	{49E468}RESPOSTA: {7D8084}Sim, via PagSeguro e MercadoPago.\n\n");

            strcat(MEGAString, "	{DBDCE0}PERGUNTA: {7D8084}Há como pagar via cartão de crédito?\n");
            strcat(MEGAString, "	{49E468}RESPOSTA: {7D8084}Sim, via PagSeguro, MercadoPago, PayPal e PicPay.\n\n");

            strcat(MEGAString, "	{DBDCE0}PERGUNTA: {7D8084}Como faz depósito bancário?\n");
            strcat(MEGAString, "	{49E468}RESPOSTA: {7D8084}Melhor método, pegue os dados, marque no papel e pague na loterica.\n\n");

            strcat(MEGAString, "	{DBDCE0}PERGUNTA: {7D8084}Quando tem promoção de cash?\n");
            strcat(MEGAString, "	{49E468}RESPOSTA: {7D8084}As promoções raramente são anunciadas com antecedencia, veja no /bonuscash.\n\n");

            strcat(MEGAString, "	{DBDCE0}PERGUNTA: {7D8084}Quais os métodos de pagamento que há no servidor?\n");
            strcat(MEGAString, "	{49E468}RESPOSTA: {7D8084}Depósito Bancário, PagSeguro, PayPal, Mercado Pago, PicPay e PaySafeCard.\n\n");

            strcat(MEGAString, "	{49E468}https://brasilnewstart.com.br/forum/index.php?/forum/195-loja-cash-servidor/\n");

            strcat(MEGAString, "	{DBDCE0}Acesse o link acima para entender melhor sobre comprar cash no servidor!\n\n");
        }
        case HELP_GERAL: {
            SendClientMessage(playerid, COLOR_GRAD2, "|______________________ [Ajuda em Geral] ______________________|");

            SendClientMessage(playerid, COLOR_GRAD2, "*** GERAL *** /rg /animlist /animlist2 /orgs /horas /pagar");
            SendClientMessage(playerid, COLOR_GRAD2, "*** GERAL *** /comprar galao /beber /mostrarlicencas /sublideres");
            SendClientMessage(playerid, COLOR_GRAD2, "*** GERAL *** /trancar /habilidades /minhaslicencas /loteria");
            SendClientMessage(playerid, COLOR_GRAD2, "*** GERAL *** /relatorio /cancelar /aceitar /ejetar /usardrogas /contrato /lideres /abastecer");
            SendClientMessage(playerid, COLOR_GRAD2, "*** GERAL *** /anuncio (/f)amilia /eu /servico /meuskin /guardararma");
            SendClientMessage(playerid, COLOR_GRAD2, "*** BANCO *** /sacar /transferir /comprarouros /venderouros");
            SendClientMessage(playerid, COLOR_GRAD2, "*** OUTROS *** /trocarnick livrararmas /largararma /noob");

            //----- Orgs -------------
            if(GetPlayerOrg(playerid) > 0)
            {
                if(GetPlayerOrg(playerid) == 9 || GetPlayerOrg(playerid) == 32)
                {
                    SendClientMessage(playerid, COLOR_GRAD2, "*** San News *** /aovivo /noticias [Texto] /ga /pReporter ");
                }
                if(GetPlayerOrg(playerid) == 5 || GetPlayerOrg(playerid) == 6 || GetPlayerOrg(playerid) == 14 || GetPlayerOrg(playerid) == 17 || GetPlayerOrg(playerid) == 18
                || GetPlayerOrg(playerid) == 19 || GetPlayerOrg(playerid) == 21
                || GetPlayerOrg(playerid) == 26|| GetPlayerOrg(playerid) == 27|| GetPlayerOrg(playerid) == 28 || GetPlayerOrg(playerid) == 29)
                {
                    SendClientMessage(playerid, COLOR_GRAD2, "*** Gang *** /tr (/ga)ngue /sequestrar /amarrar /refemliberar /desamarrar /bq /rbq /equipargang");
                }
                if(GetPlayerOrg(playerid) == 15 || GetPlayerOrg(playerid) == 23)
                {
                    SendClientMessage(playerid, COLOR_GRAD2, "*** Terroristas *** (/ga) /sequestrar /amarrar /refemliberar /guerra /equipar ");
                }
                if(GetPlayerOrg(playerid) == 25)
                {
                    SendClientMessage(playerid, COLOR_GRAD2, "*** Sons Of Anarchy *** /mercenario /laptop (/f)amilia /meucontrato /secreto /largarcontrato ");
                }
                if(GetPlayerOrg(playerid) == 21)
                {
                    SendClientMessage(playerid, COLOR_GRAD2, "*** Seville Boulevard - Portões *** /ppcc1 /ppcc2");
                }
                if(GetPlayerOrg(playerid) == 7)
                {
                    SendClientMessage(playerid, COLOR_GRAD2, "*** Governo *** /menugoverno /dartaxa /dartaxaorg /m /algemar /desalgemar /su");
                    SendClientMessage(playerid, COLOR_GRAD2, "*** Governo *** /pre /r /d /bolsafamilia /procurados /imo /taser /toquerecolher");
                }
                if(GetPlayerOrg(playerid) == 8)
                {
                    SendClientMessage(playerid, COLOR_GRAD2, "*** Hitmans *** /laptop (/f)amilia /meucontrato /secreto /largarcontrato");
                }
                if(GetPlayerOrg(playerid) == 12)
                {
                    SendClientMessage(playerid, COLOR_GRAD2, "*** Máfia *** /ga /tr /sequestrar /amarrar /refemliberar /bq /rbq");
                }
                if(GetPlayerOrg(playerid) == 16)
                {
                    SendClientMessage(playerid, COLOR_GRAD2, "*** P.R.F *** /r /d /br /rbr /cone /rcone /rconeall /verificar /pdetran /multarcarro");
                    SendClientMessage(playerid, COLOR_GRAD2, "*** P.R.F *** /gov /ang /prego /rpr /apreendercarro /taser /equipar");
                }
                if(GetPlayerOrg(playerid) == 20)
                {
                    SendClientMessage(playerid, COLOR_GRAD2, "*** Terroristas *** (/ga) /tr /sequestrar /amarrar /refemliberar /guerra");
                }

                if(GetPlayerOrg(playerid) == 24)
                {
                    SendClientMessage(playerid, COLOR_GRAD2, "*** Máfia *** /ga /tr /sequestrar /amarrar /refemliberar /bq /rbq");
                    SendClientMessage(playerid, COLOR_GRAD2, "*** Máfia *** /pcn");
                }
                if(GetPlayerOrg(playerid) == 13)
                {
                    SendClientMessage(playerid, COLOR_GRAD2, "*** Máfia *** /ga /tr /sequestrar /amarrar /refemliberar /bq /rbq");
                    SendClientMessage(playerid, COLOR_GRAD2, "*** Máfia *** /pyakuza1 /pyakuza2 /pyakuza3");
                }
                if(GetPlayerOrg(playerid) == 22)
                {
                    SendClientMessage(playerid, COLOR_GRAD2, "*** The Triads *** /laptop (/f)amilia /meucontrato /secreto /largarcontrato");
                }
                if (IsACop(playerid))
                {
                    SendClientMessage(playerid, COLOR_GRAD2, "*** POLICIAIS *** /dp - Para ver todos os Comandos Úteis");
                }
                if(GetPlayerOrg(playerid) == 35)
                {
                    SendClientMessage(playerid, COLOR_GRAD2, "*** BTI *** /pbti1 /pbti2");
                }
                SendClientMessage(playerid, COLOR_LIGHTRED, "*** NOVO COMANDO*** /ang /reforco");
            }
            
            if (PlayerInfo[playerid][pAdmin] > 0)
                SendClientMessage(playerid, COLOR_NEWS, "*** ADMIN *** /aa (admin ajuda) /jogar");

            SendClientMessage(playerid, COLOR_YELLOW, "*** OUTROS *** /ajudacasa /ajudaaluguel /ajudaempresa /ajudalider");

            return 1;
        }
        case HELP_ORG: {
            SendClientMessage(playerid, COLOR_GRAD2, "____________________ Ajuda organização ____________________");
            if(GetPlayerOrg(playerid) > 0)
            {
                if(GetPlayerOrg(playerid) == 9)
                {
                    SendClientMessage(playerid, 0x9C9C9CAA, "/aovivo (id) (valor) {FFFFFF}(Fazer aovivo com outro jogador, por um valor)");
                    SendClientMessage(playerid, 0x9C9C9CAA, "/noticias (texto da noticia) {FFFFFF}(Fazer noticias que irá aparecer para todos com noticias ativa)");
                    SendClientMessage(playerid, 0x9C9C9CAA, "/f {FFFFFF}(Chat da organização) {9C9C9C}/preporter {FFFFFF}(Comando do portão)");
                }

                if(GetPlayerOrg(playerid) == 11)
                {
                    SendClientMessage(playerid, 0xFFF000AA, "*** CARRO FORTE *** {FFFFFF}/recolherdinheiro /entregardinheiro");
                }

                if(GetPlayerOrg(playerid) == 12 || GetPlayerOrg(playerid) == 13 || GetPlayerOrg(playerid) == 24)
                {
                    SendClientMessage(playerid, COLOR_GRAD2, "*** Máfia *** /ga /tr /sequestrar /amarrar /refemliberar /bq /rbq");

                    SendClientMessage(playerid, 0xFFF000AA, "*** CARRO FORTE *** {FFFFFF}/roubarcarroforte");
                }

                if(GetPlayerOrg(playerid) == 5 || GetPlayerOrg(playerid) == 6 || GetPlayerOrg(playerid) == 14 || GetPlayerOrg(playerid) == 17 || GetPlayerOrg(playerid) == 18
                || GetPlayerOrg(playerid) == 19 || GetPlayerOrg(playerid) == 21
                || GetPlayerOrg(playerid) == 26|| GetPlayerOrg(playerid) == 27|| GetPlayerOrg(playerid) == 29)
                {
                    SendClientMessage(playerid, COLOR_GRAD2, "*** Gang *** /tr (/ga)ngue /sequestrar /amarrar /refemliberar /desamarrar /bq /rbq /equipargang /invadirhq /iniciartreinamento");
                }
                if(GetPlayerOrg(playerid) == 15 || GetPlayerOrg(playerid) == 23 || GetPlayerOrg(playerid) == 20)
                {
                    SendClientMessage(playerid, COLOR_GRAD2, "*** Terroristas *** (/ga) /tr /sequestrar /amarrar /refemliberar /guerra /acordo");
                }
                if(GetPlayerOrg(playerid) == 25)
                {
                    SendClientMessage(playerid, COLOR_GRAD2, "*** Sons Of Anarchy *** /acordo /cancelar ajuda /f");
                }
                if(GetPlayerOrg(playerid) == 28)
                {
                    SendClientMessage(playerid, COLOR_GRAD2, "*** Warlocks *** /acordo /cancelar ajuda /ga");
                }
                if(GetPlayerOrg(playerid) == 21)
                {
                    SendClientMessage(playerid, COLOR_GRAD2, "*** Seville Boulevard - Portões *** /ppcc1 /ppcc2");
                }
                if(GetPlayerOrg(playerid) == 7)
                {
                    SendClientMessage(playerid, COLOR_GRAD2, "*** Governo *** /menugoverno /dartaxa /dartaxaorg /m /algemar /desalgemar /su");
                    SendClientMessage(playerid, COLOR_GRAD2, "*** Governo *** /pre /r /d /bolsafamilia /procurados /imo /taser /toquerecolher");
                }
                if(GetPlayerOrg(playerid) == 8)
                {
                    SendClientMessage(playerid, COLOR_GRAD2, "*** Hitmans *** /laptop (/f)amilia /meucontrato /secreto /largarcontrato");
                }
                if(GetPlayerOrg(playerid) == 24)
                {
                    SendClientMessage(playerid, COLOR_GRAD2, "*** Máfia *** /pcn");
                }
                if(GetPlayerOrg(playerid) == 13)
                {
                    SendClientMessage(playerid, COLOR_GRAD2, "*** Máfia *** /pyakuza1 /pyakuza2 /pyakuza3");
                }
                if(GetPlayerOrg(playerid) == 22)
                {
                    SendClientMessage(playerid, COLOR_GRAD2, "*** The Triads *** /laptop (/f)amilia /meucontrato /secreto /largarcontrato");
                }
                if(GetPlayerOrg(playerid) == 16)
                {
                    SendClientMessage(playerid, COLOR_GRAD2, "*** P.R.F *** /r /d /br /rbr /cone /rcone /rconeall /verificar /pdetran /multarcarro");
                    SendClientMessage(playerid, COLOR_GRAD2, "*** P.R.F *** /gov /ang /prego /rpr /apreendercarro /taser /equipar");
                }
                if (IsACop(playerid))
                {
                    SendClientMessage(playerid, COLOR_GRAD2, "*** POLICIAIS *** /dp - Para ver todos os Comandos Úteis");
                }
                SendClientMessage(playerid, COLOR_LIGHTRED, "*** NOVO COMANDO*** /ang /reforco");

                if (isOrgSeq(playerid))
                {
                    SendClientMessage(playerid, COLOR_GRAD2, "*** SEQUESTROS *** Sua organização tem permissão para fazer sequestros");
                    SendClientMessage(playerid, COLOR_GRAD2, "Comandos: {F0EDED}/sequestrar /refemliberar /arrastarrefem /retirarorgaos /cancelarorgaos /cativeiros");
                }

                SendClientMessage(playerid, 0x9C9C9CAA, "/localizarcarros {FFFFFF}(Localiza os veículos da organização)");

            } else {
                SendClientMessage(playerid, -1, "Você não pertence a nenhuma organização !");
            }

            SendClientMessage(playerid, COLOR_YELLOW, "*** OUTROS *** /ajudacasa /ajudaaluguel /ajudaempresa /ajudalider");

            return 1;
        }
        case HELP_EMPREGO: {
            strcat(MEGAString, "{9C9C9C}Como pegar um emprego?\n");
            strcat(MEGAString, "{FFFFFF}Detetive\n");
            strcat(MEGAString, "{FFFFFF}Designer de interiores\n");
            strcat(MEGAString, "{FFFFFF}Bandido\n");
            strcat(MEGAString, "{FFFFFF}Fabricante de Materiais\n");
            strcat(MEGAString, "{FFFFFF}Advogado\n");
            strcat(MEGAString, "{FFFFFF}Caminhoneiro\n");
            strcat(MEGAString, "{FFFFFF}Gari\n");
            strcat(MEGAString, "{FFFFFF}Taxista\n");
            strcat(MEGAString, "{FFFFFF}Médico\n");
            strcat(MEGAString, "{FFFFFF}Minerador\n");
            strcat(MEGAString, "{FFFFFF}Mecânico\n");
            strcat(MEGAString, "{FFFFFF}Fazendeiro\n");

            ShowPlayerDialog(playerid, 80, DIALOG_STYLE_LIST, "{DFD136}Ajuda - Empregos", MEGAString, "Prosseguir", "Cancelar");
        }
        case HELP_HOUSE: {
            strcat(MEGAString, "\n{F8973F}Funções da casa:\n");
            strcat(MEGAString, "        {797978}1. {FFFFFF}Alugar para alguém.\n");
            strcat(MEGAString, "        {797978}2. {FFFFFF}Cozinhar em um fogão.\n");
            strcat(MEGAString, "        {797978}3. {FFFFFF}Decorar ela ou contratar um Designer de Interiores\n");
            strcat(MEGAString, "        {FF0000}OBS: {FFFFFF}Estamos desenvolvendo mais funções.\n\n");

            strcat(MEGAString, "{F8973F}Comprando uma casa:\n");
            strcat(MEGAString, "        {797978}1. {FFFFFF}Você pode encontrar casas a venda pelo /gps » Casas » Localizar casas a venda.\n");
            strcat(MEGAString, "        {797978}2. {FFFFFF}Use o comando /casa comprar para adquirir uma casa a venda.\n");
            strcat(MEGAString, "        {797978}3. {FFFFFF}Você precisa ter o nível, dinheiro ou cash necessário definido na casa para compra-la.\n\n");

            strcat(MEGAString, "{F8973F}Vendendo uma casa:\n");
            strcat(MEGAString, "        {797978}1. {FFFFFF}Para vender sua casa, você precisa anunciar para outros players ou ir até o governo ou uma imobiliária).\n");
            strcat(MEGAString, "        {797978}2. {FFFFFF}Você não conseguirá vender de imediato, o governo ou a imobiliária precisa aceitar sua propósta.\n\n");

            strcat(MEGAString, "{F8973F}Móveis: \n{FFFFFF}Use o comando /moveis ajuda\n\n");
        }
        case HELP_VEHICLE: {
            SendClientMessage(playerid, -1, " ");
            SendClientMessage(playerid, -1, "Algumas informações:");
            SendClientMessage(playerid, -1, "Ao comprar um carro, o valor de revenda é {FFFF00}3 vezes menor{FFFFFF} que o preço original");
            SendClientMessage(playerid, -1, "O tunning do carro salva automaticamente, basta ir em alguma loja {FFFF00}TransFender {FFFFFF}e tuná-lo");
            SendClientMessage(playerid, -1, "Caso você não estacione o carro em algum local, ele será salvo na {FFFF00}ultima posição {FFFFFF}que foi encontrado");
            SendClientMessage(playerid, -1, "Você pode ter no máximo {FFFF00}5 (Cinco){FFFFFF} carros");
            SendClientMessage(playerid, -1, "Os carros serão criados quando você logar, e destruidos ao desconectar do servidor");
            SendClientMessage(playerid, -1, "Comandos que podem ser utilizados:");
            SendClientMessage(playerid, -1, "/veiculo ajuda | /veiculo comprar | /veiculo revender | /veiculo localizar | /veiculo removertunning");
            SendClientMessage(playerid, -1, "/veiculo estacionar | /veiculo seguro | /trancar");

            return 1;
        }
        case HELP_VIP: {
            strcat(MEGAString, "{7D8084}Beneficios do\t{A4CCC3}Sócio Comum\n");
            strcat(MEGAString, "{7D8084}Beneficios do\t{DBB960}Sócio Power\n");
            strcat(MEGAString, "{7D8084}Beneficios do\t{1EE878}Sócio Supreme\n");
            strcat(MEGAString, "{7D8084}Beneficios do\t{DC0139}Sócio Extreme\n");

            ShowPlayerDialog(playerid, 8742, DIALOG_STYLE_TABLIST, "{DBDCE0}Beneficios", MEGAString, "Ver", "Cancelar");
        }
        case HELP_RADIO: {
            SendClientMessage(playerid, 0xA9A6A6FF, "___________ Ajuda Caixa de Som ___________");
            SendClientMessage(playerid, -1, "Pegar o rádio {A9A6A6}(basta clicar em 'usar' no inventário)");
            SendClientMessage(playerid, -1, "/guardarradio {A9A6A6}(para guardar no inventário)");
            SendClientMessage(playerid, -1, "/tocarsom {A9A6A6}(para colocar um link para tocar)");
            SendClientMessage(playerid, -1, "/volumeradio {A9A6A6}(volume do radio de 10 á 120)");

            SendClientMessage(playerid, 0xFF0000FF, "Observação: {A9A6A6}Para pegar o rádio do chão, aperte ENTER.");
            #if !defined LAG_SHOT
                SendClientMessage(playerid, 0xFF0000FF, "Observação: {A9A6A6}Atire no rádio para destrui-lo.");
            #endif

            return 1;
        }
        case HELP_CAIXA: {
            strcat(MEGAString, "\n\n	{DBDCE0}PERGUNTA: {7D8084}Como pegar uma caixa surpresa?\n");
            strcat(MEGAString, "	{49E468}RESPOSTA: {7D8084}Abra seu (/gps), clique em Locais Importantes, depois, Presentes.\n\n");

            strcat(MEGAString, "	{DBDCE0}PERGUNTA: {7D8084}Como funciona?\n");
            strcat(MEGAString, "	{49E468}RESPOSTA: {7D8084}Cada pagamento horário (payday) você vai buscar seu presente.\n\n");

            strcat(MEGAString, "{FFBB00}Caixa Surpresa Pequena	{7D8084}Conteúdo: {DBDCE0}$25 a $125 e 1 a 2 respeitos\n");
            strcat(MEGAString, "{FFBB00}Caixa Surpresa Média		{7D8084}Conteúdo: {DBDCE0}$50 a $200 e 1 a 3 respeitos\n");
            strcat(MEGAString, "{FFBB00}Caixa Surpresa Grande		{7D8084}Conteúdo: {DBDCE0}$80 a $310 e 2 a 5 respeitos\n");
            strcat(MEGAString, "{FFBB00}Caixa Surpresa Gigante	{7D8084}Conteúdo: {DBDCE0}$120 a $470 e 3 a 6 respeitos\n\n");

            strcat(MEGAString, "{FEE73A}Caixa Surpresa Gold		{7D8084}(uso apenas de jogadores NÃO-SÓCIO)\n");
            strcat(MEGAString, "{7D8084}Conteúdo normal: 		{DBDCE0}$600 a $3.000 e 4 a 8 respeitos\n");
            strcat(MEGAString, "{7D8084}Conteúdo extra: 		{DBDCE0}Um item da loja cash aleatório (use /lojacash)\n");
            strcat(MEGAString, "{7D8084}Conteúdo extra: 		{DBDCE0}0,001 a 0,100 cash, 1 a 2 dias sócio acrescentado\n\n");

            strcat(MEGAString, "{556B2F}Caixa Surpresa Org		{7D8084}(ganha na votação organização do mês)\n");
            strcat(MEGAString, "{7D8084}Conteúdo normal: 		{DBDCE0}$1.000 a $5.000 e 5 a 12 respeitos e armas aleatórias\n");
            strcat(MEGAString, "{7D8084}Conteúdo extra: 		{DBDCE0}Um item da loja cash aleatório (use /lojacash)\n");
            strcat(MEGAString, "{7D8084}Conteúdo extra: 		{DBDCE0}0,001 a 0,200 cash, 3 a 6 dias sócio acrescentado e laser aleatório\n\n");

            strcat(MEGAString, "{1EE878}Caixa Surpresa Supreme		{7D8084}(precisa ser Sócio Supreme para pegar)\n");
            strcat(MEGAString, "{7D8084}Conteúdo normal: 		{DBDCE0}$1.000 a $10.000 e 5 a 10 respeitos e armas aleatórias\n");
            strcat(MEGAString, "{7D8084}Conteúdo extra: 		{DBDCE0}Um item da loja cash aleatório (use /lojacash)\n");
            strcat(MEGAString, "{7D8084}Conteúdo extra: 		{DBDCE0}0,001 a 0,300 cash, 1 a 3 dias sócio acrescentado\n");
            strcat(MEGAString, "{7D8084}Conteúdo raro:			{DBDCE0}O conteúdo raro está logo abaixo, apenas 1 aleatório\n");
            strcat(MEGAString, "{EBE2E2}Cerca de Vidro			{DBDCE0}(probabilidade de conseguir 1/15) | {924A7E}Épico\n");

            strcat(MEGAString, "\n{7D8084}Página 2:			{00FF00}/infocaixa2\n\n");

            strcat(MEGAString, "{FFF000}____________________________________________________________________________________________________________");
        }
        case HELP_CAIXA2: {
            strcat(MEGAString, "\n\n{49E468}CAIXAS DISPONÍVEIS:\n\n");

            strcat(MEGAString, "{7D8084}Conteúdo normal: 		{DBDCE0}$10.000 a $20.000 e 15 a 25 respeitos e armas aleatórias\n");
            strcat(MEGAString, "{7D8084}Conteúdo raro:			{86A2CA}1 veículo de inventário aleatório (exceto Helicopteros, Aviões, Barcos, Trens)\n");
            strcat(MEGAString, "{7D8084}Informações:			{00FF00}Agora possui sacolas extremes com cores pré-definidas, exemplo: Sacola Extreme Yellow\n\n");

            strcat(MEGAString, "{FDC945}Sacola de Previsões		{7D8084}(precisa ter 100+ jogadores, ser nível 10+ e ter menos de 6 cadeias admin)\n");
            strcat(MEGAString, "{7D8084}Conteúdo normal: 		{DBDCE0}$100.000 a $500.000 e 7 a 12 respeitos\n");
            strcat(MEGAString, "{7D8084}Conteúdo extra: 		{DBDCE0}Um dos itens da loja cash aleatório\n");
            strcat(MEGAString, "{7D8084}Conteúdo extra: 		{DBDCE0}0,001 a 0,050 cash, 1 a 2 dias sócio acrescentado (se não for sócio, será DIAMANTE)\n\n");

            strcat(MEGAString, "{D7DF6F}Mochila Premiada		{7D8084}(precisa ter 100+ jogadores, ser nível 10+ e ter menos de 6 cadeias admin)\n");
            strcat(MEGAString, "{7D8084}Conteúdo normal: 		{DBDCE0}$100.000 a $500.000 e 7 a 12 respeitos\n");
            strcat(MEGAString, "{7D8084}Conteúdo extra: 		{DBDCE0}Um dos itens da loja cash aleatório\n");
            strcat(MEGAString, "{7D8084}Conteúdo extra: 		{DBDCE0}0,001 a 0,050 cash, 1 a 2 dias sócio acrescentado (se não for sócio, será DIAMANTE)\n\n");

            /*strcat(MEGAString, "{B538C3}Sacola Carnaval		{7D8084}(disponível do dia 17/02/2021 a 25/02/2021)\n");
            strcat(MEGAString, "{7D8084}Conteúdo normal: 		{DBDCE0}$1.000.000 a $2.000.000 e 5 a 15 respeitos\n");
            strcat(MEGAString, "{7D8084}Conteúdo extra: 		{DBDCE0}Itens da loja cash aleatório (incluindo Paleta Weak Yellow)\n");
            strcat(MEGAString, "{7D8084}Conteúdo extra: 		{DBDCE0}1,000 de cash, 3 dias SÓCIO-OURO ou acrescenta no seu VIP\n");
            strcat(MEGAString, "{7D8084}Conteúdo médio:		{DBDCE0}Combat Shotgun (acessório), Cadeira de Rodas (acessório)\n\n");*/

            strcat(MEGAString, "{FFF000}____________________________________________________________________________________________________________");
        }
        case HELP_DROGAS: {
            ShowPlayerDialog(playerid, 0, DIALOG_STYLE_MSGBOX, "Informação das Drogas", 
                "{F4E134}Maconha\n\n\
                {FFFFFF}Consumo: 3 gramas\n\
                Duração: 30 segundos\n\
                40% de chance de reduzir o dano causado em 15%\n\
                70% de chance de reduzir o dano recebido\n\
                Porcentagens de dano:\n\
                -> 50% de chance de reduzir 40% do dano recebido\n\
                -> 20% de chance de reduzir 60% do dano recebido\n\n\
                {F4E134}Cocaína\n\n\
                {FFFFFF}Consumo: 9 gramas\n\
                Duração: 30 segundos\n\
                80% de chance de aumentar o dano em até 30%\n\n\
                {F4E134}Crack\n\n\
                {FFFFFF}Consumo: 15 gramas\n\
                Duração: 40 segundos\n\
                90% de chance de zerar de 1 a 3 tiros fatais\n\n\n\
                {F4E134}Heroína\n\n\
                {FFFFFF}Consumo: 10 gramas\n\
                Duração: 2 minutos\n\
                Oculta o nick e some do /procurar de todos os jogadores\n\n\n\
                {F4E134}Metanfetamina\n\n\
                {FFFFFF}Consumo: 12 gramas\n\
                Duração: 60 segundos\n\
                20% de chance de não sofrer um headshot de sniper\n\
                Minimiza o dano causado em quedas e por fogo", "Fechar", "");
            return 1;
        }
        case HELP_SACOLAS: {
            strcat(MEGAString, "Nome da sacola\tOnde conseguir\n");

            strcat(MEGAString, "{F4E134}Sacola da Sorte {849AB0}Remington\t{FFFFFF}Presentes (/gps)\n");
            strcat(MEGAString, "{ACABAB}Sacola de Skins {7D7E7E}Mendigos\t{FFFFFF}Loja de Cash (/menu)\n");
            strcat(MEGAString, "{ACABAB}Sacola de Veiculos {F62525}Bikes\t{FFFFFF}Loja de Cash (/menu)\n");
            strcat(MEGAString, "{ACABAB}Sacola de Veiculos {77B4CD}Sport Vehicles\t{FFFFFF}Loja de Cash (/menu)\n");
            strcat(MEGAString, "{ACABAB}Sacola de Veiculos {C0BFBF}Saloons\t{FFFFFF}Loja de Cash (/menu)\n");
            strcat(MEGAString, "{ACABAB}Sacola de Veiculos {BE4602}Industrial\t{FFFFFF}Loja de Cash (/menu)\n");
            strcat(MEGAString, "{ACABAB}Sacola de Veiculos {939EFC}Airplane\t{FFFFFF}Loja de Cash (/menu)\n");
            
            inline D_InfosSacola(djsid, djsdialogid, djsresponse, djslistitem, string:djstext[])
            {
                #pragma unused djsid, djsdialogid, djstext
                if (!djsresponse) return true;

                switch (djslistitem)
                {
                    case 0: 
                    {
                        MEGAString[0] = EOS;

                        strcat(MEGAString, "\n{FFFFFF}Requisitos para abrir a sacola:\n");
                        strcat(MEGAString, "    {7D8084}1. {DBDCE0}Você precisa ter 3 slots disponíveis em seu inventário\n");

                        strcat(MEGAString, "\n{FFFFFF}Conteúdo da sacola:\n");
                        strcat(MEGAString, "    {7D8084}Você ganha aleatóriamente um dos itens abaixo:\n\n");

                        strcat(MEGAString, "    {4F6CE1}RARO: {DBDCE0}Remington {DBDCE0}(chances: 2/100)\n");
                        strcat(MEGAString, "    {28F236}COMUM: {DBDCE0}Respawn Carros Org\n");
                        strcat(MEGAString, "    {28F236}COMUM: {DBDCE0}Limpar procurado\n");
                        strcat(MEGAString, "    {28F236}COMUM: {DBDCE0}Blindar veículo\n");
                        strcat(MEGAString, "    {28F236}COMUM: {DBDCE0}Ir para HQ\n");
                        strcat(MEGAString, "    {7F390D}LIXO: {FF0000}Farelos de pão\n");

                        strcat(MEGAString, "\n{FFFFFF}Como ganhar essa sacola?\n");
                        strcat(MEGAString, "    {00FF00}R: {DBDCE0}Você consegue uma se tiver sorte ao pegar uma caixinha de presente aleatoria.\n");

                        strcat(MEGAString, "{FFF000}____________________________________________________________________________________________________________");

                        ShowPlayerDialog(playerid, 0, DIALOG_STYLE_MSGBOX, "{F4E134}Sacola da Sorte {849AB0}Remington", MEGAString, "Fechar", "");
                    }
                    case 1: 
                    {
                        MEGAString[0] = EOS;

                        strcat(MEGAString, "\n{FFFFFF}Requisitos para abrir a sacola:\n");
                        strcat(MEGAString, "    {7D8084}1. {DBDCE0}Você precisa ter 3 slots disponíveis em seu inventário\n");

                        strcat(MEGAString, "\n{FFFFFF}Conteúdo da sacola:\n");
                        strcat(MEGAString, "    {7D8084}Você ganha aleatóriamente um dos itens abaixo:\n\n");

                        strcat(MEGAString, "    {DC9315}LENDÁRIO: {DBDCE0}Skin 230 {DBDCE0}(chances: 5/100)\n");
                        strcat(MEGAString, "    {8E03AB}RARO: {DBDCE0}Skin 134 {DBDCE0}(chances: 10/100)\n");
                        strcat(MEGAString, "    {8E03AB}RARO: {DBDCE0}Skin 137 {DBDCE0}(chances: 10/100)\n");
                        strcat(MEGAString, "    {8E03AB}RARO: {DBDCE0}Skin 212 {DBDCE0}(chances: 10/100)\n");
                        strcat(MEGAString, "    {4F6CE1}COMUM: {DBDCE0}Skin 135 {DBDCE0}(chances: 30/100)\n");
                        strcat(MEGAString, "    {28F236}COMUM: {DBDCE0}Skin 239 {DBDCE0}(chances: 30/100)\n");
                        strcat(MEGAString, "    {7F390D}LIXO: {FF0000}Farelos de pão {DBDCE0}(chances: 5/100)\n");

                        strcat(MEGAString, "\n{FFFFFF}Como ganhar essa sacola?\n");
                        strcat(MEGAString, "    {00FF00}R: {DBDCE0}Essa sacola está disponível na /lojacash do servidor.\n");

                        strcat(MEGAString, "{FFF000}______________________________________________________________________");

                        ShowPlayerDialog(playerid, 0, DIALOG_STYLE_MSGBOX, "{ACABAB}Sacola de Skins {7D7E7E}Mendigos", MEGAString, "Fechar", "");
                    }
                    case 2: 
                    {
                        MEGAString[0] = EOS;

                        strcat(MEGAString, "\n{FFFFFF}Requisitos para abrir a sacola:\n");
                        strcat(MEGAString, "    {7D8084}1. {DBDCE0}Você precisa ter 3 slots disponíveis em seu inventário\n");

                        strcat(MEGAString, "\n{FFFFFF}Conteúdo da sacola:\n");
                        strcat(MEGAString, "    {7D8084}Você ganha aleatóriamente um dos itens abaixo:\n\n");

                        strcat(MEGAString, "    {DC9315}LENDÁRIO: {DBDCE0}NRG-500 {DBDCE0}(chances: 2/100)\n");
                        strcat(MEGAString, "    {8E03AB}ÉPICO: {DBDCE0}FCR-900 {DBDCE0}(chances: 4/100)\n");
                        strcat(MEGAString, "    {8E03AB}ÉPICO: {DBDCE0}PCJ-600 {DBDCE0}(chances: 4/100)\n");
                        strcat(MEGAString, "    {8E03AB}ÉPICO: {DBDCE0}BF-400 {DBDCE0}(chances: 4/100)\n");
                        strcat(MEGAString, "    {4F6CE1}RARO: {DBDCE0}Sanchez {DBDCE0}(chances: 8/100)\n");
                        strcat(MEGAString, "    {4F6CE1}RARO: {DBDCE0}Freeway {DBDCE0}(chances: 8/100)\n");
                        strcat(MEGAString, "    {4F6CE1}RARO: {DBDCE0}Quad {DBDCE0}(chances: 8/100)\n");
                        strcat(MEGAString, "    {28F236}COMUM: {DBDCE0}Faggio {DBDCE0}(chances: 10/100)\n");
                        strcat(MEGAString, "    {28F236}COMUM: {DBDCE0}BMX {DBDCE0}(chances: 10/100)\n");
                        strcat(MEGAString, "    {28F236}COMUM: {DBDCE0}Mountain Bike {DBDCE0}(chances: 10/100)\n");
                        strcat(MEGAString, "    {28F236}COMUM: {DBDCE0}Bike {DBDCE0}(chances: 15/100)\n");
                        strcat(MEGAString, "    {7F390D}LIXO: {FF0000}Farelos de pão {DBDCE0}(chances: 5/100)\n");

                        strcat(MEGAString, "\n{FFFFFF}Como ganhar essa sacola?\n");
                        strcat(MEGAString, "    {00FF00}R: {DBDCE0}Essa sacola está disponível na /lojacash do servidor.\n");

                        strcat(MEGAString, "{FFF000}______________________________________________________________________");

                        ShowPlayerDialog(playerid, 0, DIALOG_STYLE_MSGBOX, "{ACABAB}Sacola de Veiculos {F62525}Bikes", MEGAString, "Fechar", "");
                    }
                    case 3: 
                    {
                        MEGAString[0] = EOS;

                        strcat(MEGAString, "{FFFFFF}Como conseguir essa sacola?\n");
                        strcat(MEGAString, "	{00FF00}R: {9C9C9C}Você precisa adquirir ela na loja de cash (/menu)\n");

                        strcat(MEGAString, "\n{FFFFFF}Conteúdo da sacola: (Organizado por nível de raridade)\n");
                        strcat(MEGAString, "		{DC9315}1	{9C9C9C}Infernus\n");
                        strcat(MEGAString, "		{DC9315}2	{9C9C9C}Turismo\n");
                        strcat(MEGAString, "		{DC9315}3	{9C9C9C}Bullet\n");
                        strcat(MEGAString, "		{8E03AB}4	{9C9C9C}Super GT\n");
                        strcat(MEGAString, "		{8E03AB}5	{9C9C9C}Cheetah\n");
                        strcat(MEGAString, "		{8E03AB}6	{9C9C9C}Jester\n");
                        strcat(MEGAString, "		{4F6CE1}7	{9C9C9C}Banshee\n");
                        strcat(MEGAString, "		{4F6CE1}8	{9C9C9C}ZR-350\n");
                        strcat(MEGAString, "		{4F6CE1}9	{9C9C9C}Euros\n");
                        strcat(MEGAString, "		{4F6CE1}10	{9C9C9C}Uranus\n");
                        strcat(MEGAString, "		{4F6CE1}11	{9C9C9C}Flash\n");
                        strcat(MEGAString, "		{28F236}12	{9C9C9C}Alpha\n");
                        strcat(MEGAString, "		{28F236}13	{9C9C9C}Buffalo\n");
                        strcat(MEGAString, "		{28F236}14	{9C9C9C}Phoenix\n");
                        strcat(MEGAString, "		{28F236}15	{9C9C9C}Sabre\n");
                        strcat(MEGAString, "		{28F236}16	{9C9C9C}Blista Compact\n");
                        strcat(MEGAString, "		{7F390D}17	{9C9C9C}Farelos de pão\n");

                        strcat(MEGAString, "\n{FFFFFF}Legenda de cores e porcentagem de chance:\n");
                        strcat(MEGAString, "		{DC9315}Lendário	{9C9C9C}(5%)\n");
                        strcat(MEGAString, "		{8E03AB}Épico	{9C9C9C}(10%)\n");
                        strcat(MEGAString, "		{4F6CE1}Raro	{9C9C9C}(15%)\n");
                        strcat(MEGAString, "		{28F236}Comum	{9C9C9C}(70%)\n");
                        strcat(MEGAString, "		{7F390D}Lixo	{9C9C9C}(5%)\n");

                        strcat(MEGAString, "\n{9C9C9C}-------------------------------------------------------------");

                        ShowPlayerDialog(playerid, 0, DIALOG_STYLE_MSGBOX, "{ACABAB}Sacola de Veiculos {77B4CD}Sport Vehicles", MEGAString, "Fechar", "");
                    }
                    case 4: 
                    {
                        MEGAString[0] = EOS;

                        strcat(MEGAString, "{FFFFFF}Como conseguir essa sacola?\n");
                        strcat(MEGAString, "	{00FF00}R: {9C9C9C}Você precisa adquirir ela na loja de cash (/menu)\n");

                        strcat(MEGAString, "\n{FFFFFF}Conteúdo da sacola: (Organizado por nível de raridade)\n");
                        strcat(MEGAString, "		{DC9315}1	{9C9C9C}Sultan\n");
                        strcat(MEGAString, "		{DC9315}2	{9C9C9C}Elegy\n");

                        strcat(MEGAString, "		{8E03AB}3	{9C9C9C}Stafford\n");
                        strcat(MEGAString, "		{8E03AB}4	{9C9C9C}Bloodring Banger\n");
                        strcat(MEGAString, "		{8E03AB}5	{9C9C9C}Sunrise\n");
                        strcat(MEGAString, "		{8E03AB}6	{9C9C9C}Clover\n");
                        strcat(MEGAString, "		{8E03AB}7	{9C9C9C}Tampa\n");

                        strcat(MEGAString, "		{4F6CE1}8	{9C9C9C}Bravura\n");
                        strcat(MEGAString, "		{4F6CE1}9	{9C9C9C}Sentinel\n");
                        strcat(MEGAString, "		{4F6CE1}10	{9C9C9C}Admiral\n");
                        strcat(MEGAString, "		{4F6CE1}11	{9C9C9C}Greenwood\n");
                        strcat(MEGAString, "		{4F6CE1}12	{9C9C9C}Elegant\n");
                        strcat(MEGAString, "		{4F6CE1}13	{9C9C9C}Merit\n");
                        strcat(MEGAString, "		{4F6CE1}14	{9C9C9C}Glendale\n");
                        strcat(MEGAString, "		{4F6CE1}15	{9C9C9C}Emperor\n");
                        strcat(MEGAString, "		{4F6CE1}16	{9C9C9C}Oceanic\n");
                        
                        strcat(MEGAString, "		{28F236}17	{9C9C9C}Manana\n");
                        strcat(MEGAString, "		{28F236}18	{9C9C9C}Esperanto\n");
                        strcat(MEGAString, "		{28F236}19	{9C9C9C}Washington\n");
                        strcat(MEGAString, "		{28F236}20	{9C9C9C}Virgus\n");
                        strcat(MEGAString, "		{28F236}21	{9C9C9C}Hermes\n");
                        strcat(MEGAString, "		{28F236}22	{9C9C9C}Nebula\n");
                        strcat(MEGAString, "		{28F236}23	{9C9C9C}Majestic\n");
                        strcat(MEGAString, "		{28F236}24	{9C9C9C}Buccaneer\n");
                        strcat(MEGAString, "		{28F236}25	{9C9C9C}Fortune\n");
                        strcat(MEGAString, "		{28F236}26	{9C9C9C}Cadrona\n");
                        strcat(MEGAString, "		{28F236}27	{9C9C9C}Willard\n");
                        strcat(MEGAString, "		{28F236}28	{9C9C9C}Intruder\n");
                        strcat(MEGAString, "		{28F236}29	{9C9C9C}Primo\n");
                        strcat(MEGAString, "		{28F236}30	{9C9C9C}Vincent\n");

                        strcat(MEGAString, "		{7F390D}31	{9C9C9C}Glendale Shit\n");

                        strcat(MEGAString, "\n{FFFFFF}Legenda de cores e porcentagem de chance:\n");
                        strcat(MEGAString, "		{DC9315}Lendário	{9C9C9C}(5%)\n");
                        strcat(MEGAString, "		{8E03AB}Épico		{9C9C9C}(10%)\n");
                        strcat(MEGAString, "		{4F6CE1}Raro		{9C9C9C}(15%)\n");
                        strcat(MEGAString, "		{28F236}Comum		{9C9C9C}(70%)\n");
                        strcat(MEGAString, "		{7F390D}Lixo		{9C9C9C}(5%)\n");

                        strcat(MEGAString, "\n{9C9C9C}------------------------------------------------------------");

                        ShowPlayerDialog(playerid, 0, DIALOG_STYLE_MSGBOX, "{ACABAB}Sacola de Veiculos {C0BFBF}Saloons", MEGAString, "Fechar", "");
                    }
                    case 5: 
                    {
                        MEGAString[0] = EOS;

                        strcat(MEGAString, "{FFFFFF}Como conseguir essa sacola?\n");
                        strcat(MEGAString, "	{00FF00}R: {9C9C9C}Você precisa adquirir ela na loja de cash (/menu)\n");

                        strcat(MEGAString, "\n{FFFFFF}Conteúdo da sacola: (Organizado por nível de raridade)\n");
                        strcat(MEGAString, "		{DC9315}1	{9C9C9C}DFT-30\n");
                        strcat(MEGAString, "		{DC9315}2	{9C9C9C}Tractor\n");
                        strcat(MEGAString, "		{DC9315}3	{9C9C9C}Topfun Van\n");
                        strcat(MEGAString, "		{DC9315}4	{9C9C9C}Newsvan\n");

                        strcat(MEGAString, "		{8E03AB}5	{9C9C9C}Linerunner\n");
                        strcat(MEGAString, "		{8E03AB}6	{9C9C9C}Trashmaster\n");
                        strcat(MEGAString, "		{8E03AB}7	{9C9C9C}Packer\n");
                        strcat(MEGAString, "		{8E03AB}8	{9C9C9C}Flatbed\n");
                        strcat(MEGAString, "		{8E03AB}9	{9C9C9C}Yankee\n");
                        strcat(MEGAString, "		{8E03AB}10	{9C9C9C}Cement Truck\n");
                        strcat(MEGAString, "		{8E03AB}11	{9C9C9C}Tanker\n");
                        strcat(MEGAString, "		{8E03AB}12	{9C9C9C}Roadtrain\n");

                        strcat(MEGAString, "		{4F6CE1}13	{9C9C9C}Mule\n");
                        strcat(MEGAString, "		{4F6CE1}14	{9C9C9C}Boxville I\n");
                        strcat(MEGAString, "		{4F6CE1}15	{9C9C9C}Benson\n");
                        strcat(MEGAString, "		{4F6CE1}16	{9C9C9C}Boxville II\n");
                        strcat(MEGAString, "		{4F6CE1}17	{9C9C9C}Yosemite\n");
                        
                        strcat(MEGAString, "		{28F236}18	{9C9C9C}Pony\n");
                        strcat(MEGAString, "		{28F236}19	{9C9C9C}Bobcat\n");
                        strcat(MEGAString, "		{28F236}20	{9C9C9C}Rumpo\n");
                        strcat(MEGAString, "		{28F236}21	{9C9C9C}Walton\n");
                        strcat(MEGAString, "		{28F236}22	{9C9C9C}Burrito\n");
                        strcat(MEGAString, "		{28F236}23	{9C9C9C}Sadler\n");
                        strcat(MEGAString, "		{28F236}24	{9C9C9C}Utility Van\n");
                        strcat(MEGAString, "		{28F236}25	{9C9C9C}Picador\n");

                        strcat(MEGAString, "		{7F390D}27	{9C9C9C}Sadler Shit\n");

                        strcat(MEGAString, "\n{FFFFFF}Legenda de cores e porcentagem de chance:\n");
                        strcat(MEGAString, "		{DC9315}Lendário	{9C9C9C}(5%)\n");
                        strcat(MEGAString, "		{8E03AB}Épico		{9C9C9C}(10%)\n");
                        strcat(MEGAString, "		{4F6CE1}Raro		{9C9C9C}(15%)\n");
                        strcat(MEGAString, "		{28F236}Comum		{9C9C9C}(70%)\n");
                        strcat(MEGAString, "		{7F390D}Lixo		{9C9C9C}(5%)\n");

                        strcat(MEGAString, "\n{9C9C9C}--------------------------------------------------------------");

                        ShowPlayerDialog(playerid, 0, DIALOG_STYLE_MSGBOX, "{ACABAB}Sacola de Veiculos {BE4602}Industrial", MEGAString, "Fechar", "");
                    }
                    case 6: 
                    {
                        MEGAString[0] = EOS;

                        strcat(MEGAString, "{FFFFFF}Como conseguir essa sacola?\n");
                        strcat(MEGAString, "	{00FF00}R: {9C9C9C}Você precisa adquirir ela na loja de cash (/menu)\n");

                        strcat(MEGAString, "\n{FFFFFF}Conteúdo da sacola: (Organizado por nível de raridade)\n");
                        strcat(MEGAString, "		{DC9315}1	{9C9C9C}Shamal\n");
                        strcat(MEGAString, "		{DC9315}2	{9C9C9C}Rustler\n");

                        strcat(MEGAString, "		{4F6CE1}3	{9C9C9C}Skimmer\n");
                        strcat(MEGAString, "		{4F6CE1}4	{9C9C9C}Stuntplane\n");
                        strcat(MEGAString, "		{4F6CE1}5	{9C9C9C}Beagle\n");

                        strcat(MEGAString, "		{28F236}6	{9C9C9C}Cropduster\n");
                        strcat(MEGAString, "		{28F236}7	{9C9C9C}Dodo\n");

                        strcat(MEGAString, "\n{FFFFFF}Legenda de cores e porcentagem de chance:\n");
                        strcat(MEGAString, "		{DC9315}Lendário	{9C9C9C}(5%)\n");
                        strcat(MEGAString, "		{4F6CE1}Raro		{9C9C9C}(20%)\n");
                        strcat(MEGAString, "		{28F236}Comum		{9C9C9C}(75%)\n");

                        strcat(MEGAString, "\n{9C9C9C}----------------------------------------------------------------");

                        ShowPlayerDialog(playerid, 0, DIALOG_STYLE_MSGBOX, "{ACABAB}Sacola de Veiculos {939EFC}Airplane", MEGAString, "Fechar", "");
                    }
                }
                return true;
            }
            Dialog_ShowCallback(playerid, using inline D_InfosSacola, DIALOG_STYLE_TABLIST_HEADERS, "Selecione uma sacola", MEGAString, "Selecionar", "Fechar");
        }
        case HELP_PROPRIEDADES: {
            SendClientMessage(playerid, -1, " ");
            SendClientMessage(playerid, -1, "Comandos que podem ser utilizados:");
            SendClientMessage(playerid, -1, "/propriedade ajuda | /propriedade comprar | /propriedade vender | /propriedade localizar");
            SendClientMessage(playerid, -1, "/propriedade abrir | /propriedade fechar | /propriedade retirardinheiro | /propriedade entrada");
        }
        case HELP_REGRAS: {
            return SendClientMessage(playerid, -1, "Leia as regras no /forum do servidor.");
        }
        case HELP_ALUGUEL: {
            strcat(MEGAString, "{797978}Funcionamento: \n{FFFFFF}Você poderá ter um inquilino em sua casa, você não poderá mais morar nela enquanto tiver alugada.\n\n");
    	
            strcat(MEGAString, "{797978}Permitindo aluguel: \n{FFFFFF}Você usa o comando /aluguel permissao para definir se a casa está para alugar ou não.\n\n");
            
            strcat(MEGAString, "{797978}Valor do aluguel: \n{FFFFFF}Você pode definir um valor de $200 a $1.000 que seu inquilino vai pagar por Payday que ele estiver online.\n\n");
            
            strcat(MEGAString, "{797978}Despejando: \n{FFFFFF}Você poderá despejar o seu inquilino quando quiser!\n");
            //strcat(MEGAString, "        {797978}1. {FFFFFF}O jogador esteve ativo por 1 hora no dia anterior, caso despejar, perderá -50 de reputação Empreendedor.\n");
            strcat(MEGAString, "        {797978}1. {FFFFFF}O jogador está online no momento, caso despejar, perderá -60 de reputação Empreendedor.\n");
        }

        // Como pegar um emprego
        case HELP_PRIMEIROS_PASSOS: {

            strcat(MEGAString, "Como pegar um emprego?\n");
    	
            return ShowPlayerDialog(playerid, DIALOG_ID_HELP_CP, DIALOG_STYLE_LIST, "Primeiros passos:", MEGAString, "Fechar", "");
        }

        // Como pegar um emprego
        case OPC_01_PRIMEIROS_PASSOS: {

            // Ativa um checkpoint:
            // playerid, x, y, z, tamanho;
            SetPlayerCheckpoint(playerid, 0.0, 0.0, 0.0, 5.0);
    	
            return 1;
        }
    }
    ShowPlayerDialog(playerid, 0, DIALOG_STYLE_MSGBOX, title_help, MEGAString, "Fechar", "");

    return 1;
}

hook OnDialogResponse(playerid, dialogid, response, listitem, inputtext[]) 
{
    if (dialogid == DIALOG_ID_HELP)
	{
	    if (!response) 
            return SendClientMessage(playerid, -1, "Você fechou o menu de ajuda.");

        switch (listitem)
		{
            case 0: Help_List(playerid, HELP_ATUALIZACAO);
            case 1: Help_List(playerid, HELP_FORUM);
            case 2: Help_List(playerid, HELP_DISCORD);
            case 3: Help_List(playerid, HELP_COMPRAR_CASH, "Ajuda comprar cash");
			case 4: cmd_rg(playerid);
			case 5: Help_List(playerid, HELP_GERAL);
			case 6: Help_List(playerid, HELP_ORG, "Ajuda organização");
			case 7: Help_List(playerid, HELP_EMPREGO, "Ajuda emprego");
			case 8: Help_List(playerid, HELP_CELULAR, "Ajuda celular");
			case 9: Help_List(playerid, HELP_HOUSE, "{797978}Ajuda casa");
			case 10: Help_List(playerid, HELP_PROPRIEDADES);
			case 11: Help_List(playerid, HELP_VEHICLE);
			case 12: Help_List(playerid, HELP_REGRAS);
			case 13: Help_List(playerid, HELP_COZINHA, "Ajuda cozinha");
			case 14: Help_List(playerid, HELP_ALUGUEL);
			case 15: Help_List(playerid, HELP_LIDER, "Ajuda líder");
			case 16: cmd_gps(playerid);
			case 17: Help_List(playerid, HELP_VIP);
			case 18: Help_List(playerid, HELP_RADIO);
			case 19: Help_List(playerid, HELP_FAZENDA, "Ajuda Fazenda");
			case 20: Help_List(playerid, HELP_CAIXA);
			case 21: Help_List(playerid, HELP_DROGAS);
		}
	    return 1;
	}
    else if (dialogid == DIALOG_ID_HELP_CP)
	{
	    if (!response) 
            return SendClientMessage(playerid, -1, "Você fechou o menu de ajuda.");

        switch (listitem)
		{
            case 0: Help_List(playerid, OPC_01_PRIMEIROS_PASSOS);
		}
	    return 1;
	}
    return 1;
}