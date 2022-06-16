#define	MODEL_SACOLA_SKIN_MENDIGO 230
#define	MODEL_SACOLA_VEHICLE_BIKE 522
#define	MODEL_SACOLA_VEHICLE_SPORT 411
#define	MODEL_SACOLA_VEHICLE_SALOONS 560
#define	MODEL_SACOLA_VEHICLE_AIRPLANE 520
#define	MODEL_SACOLA_VEHICLE_INDUSTRIAL 531
#define	MODEL_SACOLA_VEHICLE_CAMPER 483
#define MODEL_SACOLA_VEHICLE_REMINGTON 534
#define MODEL_SACOLA_VEHICLE_PERENNIAL 404
#define MODEL_SACOLA_VEHICLE_NATAL 19065
#define MODEL_SACOLA_VEHICLE_NEW_YEAR 19059
#define MODEL_SACOLA_ACC_ORBES 19060
#define MODEL_SACOLA_VEHICLE_CARNAVAL 1504
#define MODEL_SACOLA_VEHICLE_GARANTIA_LENDARIO 541
#define MODEL_SACOLA_VEHICLE_VALENTINE_DAY 542
new VehiclesName[212][] =
{
	"Landstalker", "Bravura", "Buffalo", "Linerunner", "Pereniel", "Sentinel", "Dumper", "Firetruck", "Trashmaster", "Stretch", "Manana", "Infernus", "Voodoo", "Pony", "Mule", "Cheetah", "Ambulance", "Leviathan", "Moonbeam", "Esperanto", "Taxi", "Washington", "Bobcat", "Mr Whoopee", "BF Injection", "Hunter", "Premier", "Enforcer", 
	"Securicar", "Banshee", "Predator", "Bus", "Rhino", "Barracks", "Hotknife", "Trailer", "Previon", "Coach", "Cabbie", "Stallion", "Rumpo", "RC Bandit", "Romero", "Packer", "Monster", "Admiral", "Squalo", "Seasparrow", "Pizzaboy", "Tram", "Trailer", "Turismo", "Speeder", "Reefer", "Tropic", "Flatbed", "Yankee", "Caddy", "Solair", "Berkley's RC Van", "Skimmer", "PCJ-600", "Faggio", "Freeway", "RC Baron", "RC Raider", "Glendale", "Oceanic", "Sanchez", "Sparrow", "Patriot", "Quad", "Coastguard", "Dinghy", "Hermes", "Sabre", "Rustler", "ZR-350", "Walton", "Regina", "Comet", "BMX", "Burrito", "Camper", "Marquis", "Baggage", "Dozer", "Maverick", "News Chopper", "Rancher", "FBI Rancher", "Virgo", "Greenwood", "Jetmax", "Hotring", "Sandking", "Blista", "Police Maverick", "Boxville", "Benson", "Mesa", "RC Goblin", "Hotring-Racer", "Hotring-Racer", "Bloodring-Banger", "Rancher", "Super-GT", "Elegant", "Journey", "Bike", "Mountain Bike", "Beagle", "Cropdust", "Stunt", "Tanker", "RoadTrain", "Nebula", "Majestic", "Buccaneer", "Shamal", "Hydra", "FCR-900", "NRG-500", "HPV1000", "Cement Truck", "Tow Truck", "Fortune", "Cadrona", "FBI Truck", "Willard", "Forklift", "Tractor", "Combine", "Feltzer", "Remington", "Slamvan", "Blade", "Freight", "Streak", "Vortex", "Vincent", "Bullet", "Clover", "Sadler", "Firetruck", "Hustler", "Intruder", "Primo", "Cargobob", "Tampa", "Sunrise", "Merit", "Utility", "Nevada", "Yosemite", "Windsor", "Monster Truck A", "Monster Truck B", "Uranus", "Jester", "Sultan", "Stratum", "Elegy", "Raindance", "RC Tiger", "Flash", "Tahoma", "Savanna", "Bandito", "Freight", "Trailer", "Kart", "Mower", "Duneride", "Sweeper", "Broadway", "Tornado", "AT-400", "DFT-30", "Huntley", "Stafford", "BF-400", "Newsvan", "Tug", "Trailer", "Emperor", "Wayfarer", "Euros", "Hotdog", "Club", "Trailer", "Trailer", "Andromada", "Dodo", "RC Cam", "Launch", "Police Car", "Police Car", "Police Car", "Police Ranger", "Picador", "S.W.A.T. Van", "Alpha", "Phoenix", "Glendale", "Sadler", "Luggage Trailer", "Luggage Trailer", "Stair Trailer", "Boxville", "Farm Plow", "Utility Trailer"
};

stock OpenSacola(playerid, sacolamodel)
{
	new rand = random(100);

	new string[176];
	new sacola_name[50];
	new premio_name[50];

	switch (sacolamodel)
	{
        case MODEL_SACOLA_VEHICLE_CAMPER:
		{
			format(sacola_name, sizeof(sacola_name), "{F4E134}Sacola da Sorte {E88780}Camper");

			switch (rand)
			{
				// Objeto raro (15%)
				case 2, 3: 
				{
					format(premio_name, sizeof(premio_name), "{4F6CE1}Camper");

					givePlayerItem(playerid, ITEM_TYPE_DRONE, 483, 1, "Camper", 0, 0);
				}
				// Objeto comum (25%)
				case 7..30: 
				{
					format(premio_name, sizeof(premio_name), "{28F236}Respawn Carros Org");

					givePlayerItem(playerid, ITEM_TYPE_CONSUMIVEL, ITEM_MODEL_RESPAWNORG, 1, "Respawn Carros Org");
				}
                case 31..61: 
				{
					format(premio_name, sizeof(premio_name), "{28F236}Limpar procurado");

					givePlayerItem(playerid, ITEM_TYPE_CONSUMIVEL, ITEM_MODEL_PROCURADO, 1, "Limpar procurado");
				}
                case 62..72: 
				{
					format(premio_name, sizeof(premio_name), "{28F236}Blindar veiculo");

					givePlayerItem(playerid, ITEM_TYPE_CONSUMIVEL, ITEM_MODEL_BLINDAR_CARRO, 1, "Blindar veiculo");
				}
                case 73..94: 
				{
					format(premio_name, sizeof(premio_name), "{28F236}Ir para HQ");

					givePlayerItem(playerid, ITEM_TYPE_CONSUMIVEL, ITEM_MODEL_IRPARAHQ, 1, "Ir para HQ");
				}
				// Objeto impossivel (5%)
				default: 
				{
					format(premio_name, sizeof(premio_name), "{FF0000}Farelos de pão");

					givePlayerItem(playerid, ITEM_TYPE_LIXO, 19883, 1, "Farelos de pao");
				}
			}
		}
		case MODEL_SACOLA_VEHICLE_REMINGTON:
		{
			format(sacola_name, sizeof(sacola_name), "{F4E134}Sacola da Sorte {849AB0}Remington");

			switch (rand)
			{
				// Objeto raro (15%)
				case 2, 3: 
				{
					format(premio_name, sizeof(premio_name), "{849AB0}Remington");

					givePlayerItem(playerid, ITEM_TYPE_DRONE, 534, 1, "Remington", 0, 0);
				}
				// Objeto comum (25%)
				case 7..30: 
				{
					format(premio_name, sizeof(premio_name), "{28F236}Respawn Carros Org");

					givePlayerItem(playerid, ITEM_TYPE_CONSUMIVEL, ITEM_MODEL_RESPAWNORG, 1, "Respawn Carros Org");
				}
                case 31..61: 
				{
					format(premio_name, sizeof(premio_name), "{28F236}Limpar procurado");

					givePlayerItem(playerid, ITEM_TYPE_CONSUMIVEL, ITEM_MODEL_PROCURADO, 1, "Limpar procurado");
				}
                case 62..72: 
				{
					format(premio_name, sizeof(premio_name), "{28F236}Blindar veiculo");

					givePlayerItem(playerid, ITEM_TYPE_CONSUMIVEL, ITEM_MODEL_BLINDAR_CARRO, 1, "Blindar veiculo");
				}
                case 73..94: 
				{
					format(premio_name, sizeof(premio_name), "{28F236}Ir para HQ");

					givePlayerItem(playerid, ITEM_TYPE_CONSUMIVEL, ITEM_MODEL_IRPARAHQ, 1, "Ir para HQ");
				}
				// Objeto impossivel (5%)
				default: 
				{
					format(premio_name, sizeof(premio_name), "{FF0000}Farelos de pão");

					givePlayerItem(playerid, ITEM_TYPE_LIXO, 19883, 1, "Farelos de pao");
				}
			}
		}
		case MODEL_SACOLA_VEHICLE_PERENNIAL:
		{
			format(sacola_name, sizeof(sacola_name), "{F4E134}Sacola da Sorte {966B26}Perennial");

			switch (rand)
			{
				// Objeto raro (15%)
				case 2, 3: 
				{
					format(premio_name, sizeof(premio_name), "{966B26}Perennial");

					givePlayerItem(playerid, ITEM_TYPE_DRONE, 404, 1, "Perennial", 0, 0);
				}
				// Objeto comum (25%)
				case 7..30: 
				{
					format(premio_name, sizeof(premio_name), "{28F236}Respawn Carros Org");

					givePlayerItem(playerid, ITEM_TYPE_CONSUMIVEL, ITEM_MODEL_RESPAWNORG, 1, "Respawn Carros Org");
				}
                case 31..61: 
				{
					format(premio_name, sizeof(premio_name), "{28F236}Limpar procurado");

					givePlayerItem(playerid, ITEM_TYPE_CONSUMIVEL, ITEM_MODEL_PROCURADO, 1, "Limpar procurado");
				}
                case 62..72: 
				{
					format(premio_name, sizeof(premio_name), "{28F236}Blindar veiculo");

					givePlayerItem(playerid, ITEM_TYPE_CONSUMIVEL, ITEM_MODEL_BLINDAR_CARRO, 1, "Blindar veiculo");
				}
                case 73..94: 
				{
					format(premio_name, sizeof(premio_name), "{28F236}Ir para HQ");

					givePlayerItem(playerid, ITEM_TYPE_CONSUMIVEL, ITEM_MODEL_IRPARAHQ, 1, "Ir para HQ");
				}
				// Objeto impossivel (5%)
				default: 
				{
					format(premio_name, sizeof(premio_name), "{FF0000}Farelos de pão");

					givePlayerItem(playerid, ITEM_TYPE_LIXO, 19883, 1, "Farelos de pao");
				}
			}
		}
		case MODEL_SACOLA_SKIN_MENDIGO:
		{
			format(sacola_name, sizeof(sacola_name), "{ACABAB}Sacola de Skins {7D7E7E}Mendigos");

			switch (rand)
			{
				// Objeto lendário (5%)
				case 0..4: 
				{
					format(premio_name, sizeof(premio_name), "{DC9315}Skin 230");
					givePlayerItem(playerid, ITEM_TYPE_SKIN, 230, 1, "Skin 230", 0, 0);
				}
				// Objeto épico (10%)
				case 5..14: 
				{
					format(premio_name, sizeof(premio_name), "{8E03AB}Skin 134");
					givePlayerItem(playerid, ITEM_TYPE_SKIN, 134, 1, "Skin 134", 0, 0);
				}
				// Objeto épico (10%)
				case 15..24: 
				{
					format(premio_name, sizeof(premio_name), "{8E03AB}Skin 137");
					givePlayerItem(playerid, ITEM_TYPE_SKIN, 137, 1, "Skin 137", 0, 0);
				}
				// Objeto épico (10%)
				case 25..34: 
				{
					format(premio_name, sizeof(premio_name), "{8E03AB}Skin 212");
					givePlayerItem(playerid, ITEM_TYPE_SKIN, 212, 1, "Skin 212", 0, 0);
				}
				// Objeto raro (30%)
				case 35..64: 
				{
					format(premio_name, sizeof(premio_name), "{4F6CE1}Skin 135");
					givePlayerItem(playerid, ITEM_TYPE_SKIN, 135, 1, "Skin 135", 0, 0);
				}
				// Objeto comum (30%)
				case 65..94: 
				{
					format(premio_name, sizeof(premio_name), "{28F236}Skin 239");
					givePlayerItem(playerid, ITEM_TYPE_SKIN, 239, 1, "Skin 239", 0, 0);
				}
				// Objeto impossivel (5%)
				default: 
				{
					format(premio_name, sizeof(premio_name), "{FF0000}Farelos de pão");
					givePlayerItem(playerid, ITEM_TYPE_LIXO, 19883, 1, "Farelos de pao");
				}
			}
		}
		case MODEL_SACOLA_VEHICLE_BIKE:
		{
			format(sacola_name, sizeof(sacola_name), "{ACABAB}Sacola de Veiculos {F62525}Bikes");

			switch (rand)
			{
				// Objeto lendário (2%)
				case 2, 3: 
				{
					format(premio_name, sizeof(premio_name), "{DC9315}NRG-500");

					givePlayerItem(playerid, ITEM_TYPE_DRONE, 522, 1, "NRG-500", 0, 0);
				}
				// Objeto épico (4%)
				case 7..10: 
				{
					format(premio_name, sizeof(premio_name), "{8E03AB}FCR-900");

					givePlayerItem(playerid, ITEM_TYPE_DRONE, 521, 1, "FCR-900", 0, 0);
				}
				// Objeto épico (4%)
				case 11, 15: 
				{
					format(premio_name, sizeof(premio_name), "{8E03AB}PCJ-600");

					givePlayerItem(playerid, ITEM_TYPE_DRONE, 461, 1, "PCJ-600", 0, 0);
				}
				// Objeto épico (4%)
				case 16..20: 
				{
					format(premio_name, sizeof(premio_name), "{8E03AB}BF-400");

					givePlayerItem(playerid, ITEM_TYPE_DRONE, 581, 1, "BF-400", 0, 0);
				}
				// Objeto raro (8%)
				case 21..28: 
				{
					format(premio_name, sizeof(premio_name), "{4F6CE1}Sanchez");

					givePlayerItem(playerid, ITEM_TYPE_DRONE, 468, 1, "Sanchez", 0, 0);
				}
				// Objeto raro (8%)
				case 29..36: 
				{
					format(premio_name, sizeof(premio_name), "{4F6CE1}Quad");

					givePlayerItem(playerid, ITEM_TYPE_DRONE, 471, 1, "Quad", 0, 0);
				}
				// Objeto raro (8%)
				case 37..44: 
				{
					format(premio_name, sizeof(premio_name), "{4F6CE1}Freeway");

					givePlayerItem(playerid, ITEM_TYPE_DRONE, 463, 1, "Freeway", 0, 0);
				}
				// Objeto raro (8%)
				case 45..52: 
				{
					format(premio_name, sizeof(premio_name), "{4F6CE1}Wayfarer");

					givePlayerItem(playerid, ITEM_TYPE_DRONE, 586, 1, "Wayfarer", 0, 0);
				}
				// Objeto comum (10%)
				case 53..63: 
				{
					format(premio_name, sizeof(premio_name), "{28F236}Faggio");

					givePlayerItem(playerid, ITEM_TYPE_DRONE, 462, 1, "Faggio", 0, 0);
				}
                // Objeto comum (10%)
                case 64..74: 
				{
					format(premio_name, sizeof(premio_name), "{28F236}BMX");

					givePlayerItem(playerid, ITEM_TYPE_DRONE, 481, 1, "BMX", 0, 0);
				}
                // Objeto comum (10%)
                case 75..85: 
				{
					format(premio_name, sizeof(premio_name), "{28F236}Mountain Bike");

					givePlayerItem(playerid, ITEM_TYPE_DRONE, 510, 1, "Mountain Bike", 0, 0);
				}
                // Objeto comum (15%)
                case 86..99: 
				{
					format(premio_name, sizeof(premio_name), "{28F236}Bike");

					givePlayerItem(playerid, ITEM_TYPE_DRONE, 509, 1, "Bike", 0, 0);
				}
				// Objeto impossivel (5%)
				default: 
				{
					format(premio_name, sizeof(premio_name), "{FF0000}Farelos de pão");

					givePlayerItem(playerid, ITEM_TYPE_LIXO, 19883, 1, "Farelos de pao");
				}
			}
		}
		case MODEL_SACOLA_VEHICLE_SPORT:
		{
			format(sacola_name, sizeof(sacola_name), "{ACABAB}Sacola de Veiculos {77B4CD}Sport Vehicles");

			switch (rand)
			{
				// Objeto lendário (5%)
				case 1..5: 
				{
					new srand = random(3);

					if (srand == 1)
					{
						format(premio_name, sizeof(premio_name), "{DC9315}Infernus");
						givePlayerItem(playerid, ITEM_TYPE_DRONE, 411, 1, "Infernus", 0, 0);
					}
					else if (srand == 2)
					{
						format(premio_name, sizeof(premio_name), "{DC9315}Turismo");
						givePlayerItem(playerid, ITEM_TYPE_DRONE, 451, 1, "Turismo", 0, 0);
					}
					else
					{
						format(premio_name, sizeof(premio_name), "{DC9315}Bullet");
						givePlayerItem(playerid, ITEM_TYPE_DRONE, 541, 1, "Bullet", 0, 0);
					}
				}
				// Objeto épico (10%)
				case 6..16: 
				{
					new srand = random(3);

					if (srand == 1)
					{
						format(premio_name, sizeof(premio_name), "{8E03AB}Cheetah");
						givePlayerItem(playerid, ITEM_TYPE_DRONE, 415, 1, "Cheetah", 0, 0);
					}
					else if (srand == 2)
					{
						format(premio_name, sizeof(premio_name), "{8E03AB}Super GT");
						givePlayerItem(playerid, ITEM_TYPE_DRONE, 506, 1, "Super GT", 0, 0);
					}
					else
					{
						format(premio_name, sizeof(premio_name), "{8E03AB}Jester");
						givePlayerItem(playerid, ITEM_TYPE_DRONE, 559, 1, "Jester", 0, 0);
					}
				}
				// Objeto raro (15%)
				case 17..32: 
				{
					new srand = random(5);

					if (srand == 1)
					{
						format(premio_name, sizeof(premio_name), "{4F6CE1}Banshee");
						givePlayerItem(playerid, ITEM_TYPE_DRONE, 429, 1, "Banshee", 0, 0);
					}
					else if (srand == 2)
					{
						format(premio_name, sizeof(premio_name), "{4F6CE1}ZR-350");
						givePlayerItem(playerid, ITEM_TYPE_DRONE, 477, 1, "ZR-350", 0, 0);
					}
					else if (srand == 3)
					{
						format(premio_name, sizeof(premio_name), "{4F6CE1}Uranus");
						givePlayerItem(playerid, ITEM_TYPE_DRONE, 558, 1, "Uranus", 0, 0);
					}
					else if (srand == 4)
					{
						format(premio_name, sizeof(premio_name), "{4F6CE1}Euros");
						givePlayerItem(playerid, ITEM_TYPE_DRONE, 587, 1, "Euros", 0, 0);
					}
					else
					{
						format(premio_name, sizeof(premio_name), "{4F6CE1}Flash");
						givePlayerItem(playerid, ITEM_TYPE_DRONE, 565, 1, "Flash", 0, 0);
					}
				}
				// Objeto comum (70%)
				case 33..99:
				{
					new srand = random(5);

					if (srand == 1)
					{
						format(premio_name, sizeof(premio_name), "{28F236}Alpha");
						givePlayerItem(playerid, ITEM_TYPE_DRONE, 602, 1, "Alpha", 0, 0);
					}
					else if (srand == 2)
					{
						format(premio_name, sizeof(premio_name), "{28F236}Phoenix");
						givePlayerItem(playerid, ITEM_TYPE_DRONE, 603, 1, "Phoenix", 0, 0);
					}
					else if (srand == 3)
					{
						format(premio_name, sizeof(premio_name), "{28F236}Buffalo");
						givePlayerItem(playerid, ITEM_TYPE_DRONE, 402, 1, "Buffalo", 0, 0);
					}
					else if (srand == 4)
					{
						format(premio_name, sizeof(premio_name), "{28F236}Sabre");
						givePlayerItem(playerid, ITEM_TYPE_DRONE, 475, 1, "Sabre", 0, 0);
					}
					else
					{
						format(premio_name, sizeof(premio_name), "{28F236}Blista Compact");
						givePlayerItem(playerid, ITEM_TYPE_DRONE, 496, 1, "Blista Compact", 0, 0);
					}
				}
				// Objeto impossivel (2%)
				default: 
				{
					format(premio_name, sizeof(premio_name), "{FF0000}Farelos de pão");
					givePlayerItem(playerid, ITEM_TYPE_LIXO, 19883, 1, "Farelos de pao");
				}
			}
		}
		case MODEL_SACOLA_VEHICLE_SALOONS:
		{
			format(sacola_name, sizeof(sacola_name), "{ACABAB}Sacola de Veiculos {C0BFBF}Saloons");

			switch (rand)
			{
				// Objeto lendário (5%)
				case 1..5: 
				{
					new srand = random(2);

					if (srand == 1)
					{
						format(premio_name, sizeof(premio_name), "{DC9315}Sultan");
						givePlayerItem(playerid, ITEM_TYPE_DRONE, 560, 1, "Sultan", 0, 0);
					}
					else
					{
						format(premio_name, sizeof(premio_name), "{DC9315}Elegy");
						givePlayerItem(playerid, ITEM_TYPE_DRONE, 562, 1, "Elegy", 0, 0);
					}
				}
				// Objeto épico (10%)
				case 6..16: 
				{
					new srand = random(5);

					if (srand == 1)
					{
						format(premio_name, sizeof(premio_name), "{8E03AB}Stafford");
						givePlayerItem(playerid, ITEM_TYPE_DRONE, 580, 1, "Stafford", 0, 0);
					}
					else if (srand == 2)
					{
						format(premio_name, sizeof(premio_name), "{8E03AB}Bloodring Banger");
						givePlayerItem(playerid, ITEM_TYPE_DRONE, 504, 1, "Bloodring Banger", 0, 0);
					}
					else if (srand == 3)
					{
						format(premio_name, sizeof(premio_name), "{8E03AB}Sunrise");
						givePlayerItem(playerid, ITEM_TYPE_DRONE, 550, 1, "Sunrise", 0, 0);
					}
					else if (srand == 4)
					{
						format(premio_name, sizeof(premio_name), "{8E03AB}Clover");
						givePlayerItem(playerid, ITEM_TYPE_DRONE, 542, 1, "Clover", 0, 0);
					}
					else
					{
						format(premio_name, sizeof(premio_name), "{8E03AB}Tampa");
						givePlayerItem(playerid, ITEM_TYPE_DRONE, 549, 1, "Tampa", 0, 0);
					}
				}
				// Objeto raro (15%)
				case 17..32: 
				{
					new srand = random(8);

					if (srand == 1)
					{
						format(premio_name, sizeof(premio_name), "{4F6CE1}Bravura");
						givePlayerItem(playerid, ITEM_TYPE_DRONE, 401, 1, "Bravura", 0, 0);
					}
					else if (srand == 2)
					{
						format(premio_name, sizeof(premio_name), "{4F6CE1}Sentinel");
						givePlayerItem(playerid, ITEM_TYPE_DRONE, 405, 1, "Sentinel", 0, 0);
					}
					else if (srand == 3)
					{
						format(premio_name, sizeof(premio_name), "{4F6CE1}Admiral");
						givePlayerItem(playerid, ITEM_TYPE_DRONE, 445, 1, "Admiral", 0, 0);
					}
					else if (srand == 4)
					{
						format(premio_name, sizeof(premio_name), "{4F6CE1}Greenwood");
						givePlayerItem(playerid, ITEM_TYPE_DRONE, 492, 1, "Greenwood", 0, 0);
					}
					else if (srand == 5)
					{
						format(premio_name, sizeof(premio_name), "{4F6CE1}Elegant");
						givePlayerItem(playerid, ITEM_TYPE_DRONE, 507, 1, "Elegant", 0, 0);
					}
					else if (srand == 6)
					{
						format(premio_name, sizeof(premio_name), "{4F6CE1}Merit");
						givePlayerItem(playerid, ITEM_TYPE_DRONE, 551, 1, "Merit", 0, 0);
					}
					else if (srand == 7)
					{
						format(premio_name, sizeof(premio_name), "{4F6CE1}Glendale");
						givePlayerItem(playerid, ITEM_TYPE_DRONE, 466, 1, "Glendale", 0, 0);
					}
					else if (srand == 8)
					{
						format(premio_name, sizeof(premio_name), "{4F6CE1}Emperor");
						givePlayerItem(playerid, ITEM_TYPE_DRONE, 466, 1, "Emperor", 0, 0);
					}
					else
					{
						format(premio_name, sizeof(premio_name), "{4F6CE1}Oceanic");
						givePlayerItem(playerid, ITEM_TYPE_DRONE, 467, 1, "Oceanic", 0, 0);
					}
				}
				// Objeto comum (70%)
				case 33..99:
				{
					new srand = random(5);

					if (srand == 1)
					{
						format(premio_name, sizeof(premio_name), "{28F236}Manana");
						givePlayerItem(playerid, ITEM_TYPE_DRONE, 410, 1, "Manana", 0, 0);
					}
					else if (srand == 2)
					{
						format(premio_name, sizeof(premio_name), "{28F236}Esperanto");
						givePlayerItem(playerid, ITEM_TYPE_DRONE, 419, 1, "Esperanto", 0, 0);
					}
					else if (srand == 3)
					{
						format(premio_name, sizeof(premio_name), "{28F236}Washington");
						givePlayerItem(playerid, ITEM_TYPE_DRONE, 421, 1, "Washington", 0, 0);
					}
					else if (srand == 4)
					{
						format(premio_name, sizeof(premio_name), "{28F236}Virgo");
						givePlayerItem(playerid, ITEM_TYPE_DRONE, 491, 1, "Virgo", 0, 0);
					}
					else if (srand == 5)
					{
						format(premio_name, sizeof(premio_name), "{28F236}Hermes");
						givePlayerItem(playerid, ITEM_TYPE_DRONE, 474, 1, "Hermes", 0, 0);
					}
					else if (srand == 6)
					{
						format(premio_name, sizeof(premio_name), "{28F236}Nebula");
						givePlayerItem(playerid, ITEM_TYPE_DRONE, 516, 1, "Nebula", 0, 0);
					}
					else if (srand == 7)
					{
						format(premio_name, sizeof(premio_name), "{28F236}Majestic");
						givePlayerItem(playerid, ITEM_TYPE_DRONE, 517, 1, "Majestic", 0, 0);
					}
					else if (srand == 8)
					{
						format(premio_name, sizeof(premio_name), "{28F236}Buccaneer");
						givePlayerItem(playerid, ITEM_TYPE_DRONE, 518, 1, "Buccaneer", 0, 0);
					}
					else if (srand == 9)
					{
						format(premio_name, sizeof(premio_name), "{28F236}Fortune");
						givePlayerItem(playerid, ITEM_TYPE_DRONE, 526, 1, "Fortune", 0, 0);
					}
					else if (srand == 10)
					{
						format(premio_name, sizeof(premio_name), "{28F236}Cadrona");
						givePlayerItem(playerid, ITEM_TYPE_DRONE, 527, 1, "Cadrona", 0, 0);
					}
					else if (srand == 11)
					{
						format(premio_name, sizeof(premio_name), "{28F236}Willard");
						givePlayerItem(playerid, ITEM_TYPE_DRONE, 529, 1, "Willard", 0, 0);
					}
					else if (srand == 12)
					{
						format(premio_name, sizeof(premio_name), "{28F236}Intruder");
						givePlayerItem(playerid, ITEM_TYPE_DRONE, 546, 1, "Intruder", 0, 0);
					}
					else if (srand == 13)
					{
						format(premio_name, sizeof(premio_name), "{28F236}Primo");
						givePlayerItem(playerid, ITEM_TYPE_DRONE, 547, 1, "Primo", 0, 0);
					}
					else
					{
						format(premio_name, sizeof(premio_name), "{28F236}Vincent");
						givePlayerItem(playerid, ITEM_TYPE_DRONE, 540, 1, "Vincent", 0, 0);
					}
				}
				// Objeto impossivel (2%)
				default: 
				{
					format(premio_name, sizeof(premio_name), "{28F236}Glendale Shit");
					givePlayerItem(playerid, ITEM_TYPE_DRONE, 604, 1, "Glendale Shit", 0, 0);
				}
			}
		}
		case MODEL_SACOLA_VEHICLE_INDUSTRIAL:
		{
			format(sacola_name, sizeof(sacola_name), "{ACABAB}Sacola de Veiculos {8E4602}Industrial");

			static const Lendarios[] = {578, 531, 459, 582};
			static const Epicos[] = {403, 408, 443, 455, 456, 524, 514, 515};
			static const Raros[] = {414, 498, 499, 609, 554};
			static const Comuns[] = {413, 422, 440, 478, 482, 543, 552, 600};

			switch (rand)
			{
				// Objeto lendário (5%)
				case 1..5: 
				{
					new srand = random(sizeof(Lendarios));
					format(premio_name, sizeof(premio_name), "{DC9315}%s", VehiclesName[Lendarios[srand] - 400]);
					givePlayerItem(playerid, ITEM_TYPE_DRONE, Lendarios[srand], 1, VehiclesName[Lendarios[srand] - 400], 0, 0);
				}
				// Objeto épico (10%)
				case 6..16: 
				{
					new srand = random(sizeof(Epicos));
					format(premio_name, sizeof(premio_name), "{8E03AB}%s", VehiclesName[Epicos[srand] - 400]);
					givePlayerItem(playerid, ITEM_TYPE_DRONE, Epicos[srand], 1, VehiclesName[Epicos[srand] - 400], 0, 0);
				}
				// Objeto raro (15%)
				case 17..32: 
				{
					new srand = random(sizeof(Raros));
					format(premio_name, sizeof(premio_name), "{4F6CE1}%s", VehiclesName[Raros[srand] - 400]);
					givePlayerItem(playerid, ITEM_TYPE_DRONE, Raros[srand], 1, VehiclesName[Raros[srand] - 400], 0, 0);
				}
				// Objeto comum (70%)
				case 33..99:
				{
					new srand = random(sizeof(Comuns));
					format(premio_name, sizeof(premio_name), "{28F236}%s", VehiclesName[Comuns[srand] - 400]);
					givePlayerItem(playerid, ITEM_TYPE_DRONE, Comuns[srand], 1, VehiclesName[Comuns[srand] - 400], 0, 0);
				}
				// Objeto impossivel (2%)
				default: 
				{
					format(premio_name, sizeof(premio_name), "{28F236}Sadler Shit");
					givePlayerItem(playerid, ITEM_TYPE_DRONE, 605, 1, "Sadler Shit", 0, 0);
				}
			}
		}
		case MODEL_SACOLA_VEHICLE_AIRPLANE:
		{
			format(sacola_name, sizeof(sacola_name), "{ACABAB}Sacola de Veiculos {939EFC}Airplane");

			static const Lendarios[] = {519, 476};
			static const Raros[] = {460, 513, 511};
			static const Comuns[] = {512, 593};

			switch (rand)
			{
				// Objeto lendário (5%)
				case 1..5: 
				{
					new srand = random(sizeof(Lendarios));
					format(premio_name, sizeof(premio_name), "{DC9315}%s", VehiclesName[Lendarios[srand] - 400]);
					givePlayerItem(playerid, ITEM_TYPE_DRONE, Lendarios[srand], 1, VehiclesName[Lendarios[srand] - 400], 0, 0);
				}
				// Objeto raro (20%)
				case 6..25: 
				{
					new srand = random(sizeof(Raros));
					format(premio_name, sizeof(premio_name), "{4F6CE1}%s", VehiclesName[Raros[srand] - 400]);
					givePlayerItem(playerid, ITEM_TYPE_DRONE, Raros[srand], 1, VehiclesName[Raros[srand] - 400], 0, 0);
				}
				// Objeto comum (75%)
				case 26..100:
				{
					new srand = random(sizeof(Comuns));
					format(premio_name, sizeof(premio_name), "{28F236}%s", VehiclesName[Comuns[srand] - 400]);
					givePlayerItem(playerid, ITEM_TYPE_DRONE, Comuns[srand], 1, VehiclesName[Comuns[srand] - 400], 0, 0);
				}
			}
		}
		case MODEL_SACOLA_VEHICLE_NATAL:
		{
			format(sacola_name, sizeof(sacola_name), "{ACABAB}Sacola {939EFC}Christmas");

			static const Lendarios[] = {451, 462};
			static const Raros[] = {439, 466, 516};
			static const Comuns[] = {600, 410,517, 518, 496};

			switch (rand)
			{
				// Objeto lendário (4%)
				case 1..5: 
				{
					new srand = random(sizeof(Lendarios));
					format(premio_name, sizeof(premio_name), "{DC9315}%s", VehiclesName[Lendarios[srand] - 400]);
					givePlayerItem(playerid, ITEM_TYPE_DRONE, Lendarios[srand], 1, VehiclesName[Lendarios[srand] - 400], 3, 3);
				}
				// Objeto raro (20%)
				case 6..25: 
				{
					new srand = random(sizeof(Raros));
					format(premio_name, sizeof(premio_name), "{4F6CE1}%s", VehiclesName[Raros[srand] - 400]);
					givePlayerItem(playerid, ITEM_TYPE_DRONE, Raros[srand], 1, VehiclesName[Raros[srand] - 400], 3, 3);
				}
				// Objeto comum (75%)
				case 26..100:
				{
					new srand = random(sizeof(Comuns));
					format(premio_name, sizeof(premio_name), "{28F236}%s", VehiclesName[Comuns[srand] - 400]);
					givePlayerItem(playerid, ITEM_TYPE_DRONE, Comuns[srand], 1, VehiclesName[Comuns[srand] - 400], 3, 3);
				}
			}

			givePlayerItem(playerid, ITEM_TYPE_BAU, 19057, 1, "Bau Natal");
		}
		case MODEL_SACOLA_VEHICLE_NEW_YEAR:
		{
			format(sacola_name, sizeof(sacola_name), "{ACABAB}Sacola de Veiculos {FFF1C9}New Year");

			static const Lendarios[] = {541, 462};
			static const Raros[] = {492, 567, 402};
			static const Comuns[] = {585, 426,547, 401, 496};

			switch (rand)
			{
				// Objeto lendário (4%)
				case 1..5: 
				{
					new srand = random(sizeof(Lendarios));
					format(premio_name, sizeof(premio_name), "{DC9315}%s", VehiclesName[Lendarios[srand] - 400]);
					givePlayerItem(playerid, ITEM_TYPE_DRONE, Lendarios[srand], 1, VehiclesName[Lendarios[srand] - 400], 1, 1);
				}
				// Objeto raro (20%)
				case 6..25: 
				{
					new srand = random(sizeof(Raros));
					format(premio_name, sizeof(premio_name), "{4F6CE1}%s", VehiclesName[Raros[srand] - 400]);
					givePlayerItem(playerid, ITEM_TYPE_DRONE, Raros[srand], 1, VehiclesName[Raros[srand] - 400], 1, 1);
				}
				// Objeto comum (75%)
				case 26..100:
				{
					new srand = random(sizeof(Comuns));
					format(premio_name, sizeof(premio_name), "{28F236}%s", VehiclesName[Comuns[srand] - 400]);
					givePlayerItem(playerid, ITEM_TYPE_DRONE, Comuns[srand], 1, VehiclesName[Comuns[srand] - 400], 1, 1);
				}
			}
		}
		case MODEL_SACOLA_VEHICLE_CARNAVAL:
		{
			format(sacola_name, sizeof(sacola_name), "{ACABAB}Sacola de Veiculos {939EFC}Carnaval");

			static const Lendarios[] = {522};
			static const Raros[] = {586, 533, 507};
			static const Comuns[] = {439, 491, 517, 589};

			switch (rand)
			{
				// Objeto lendário (3%)
				case 1..5: 
				{
					new srand = random(sizeof(Lendarios));
					format(premio_name, sizeof(premio_name), "{DC9315}%s", VehiclesName[Lendarios[srand] - 400]);
					givePlayerItem(playerid, ITEM_TYPE_DRONE, Lendarios[srand], 1, VehiclesName[Lendarios[srand] - 400], 6, 226);
				}
				// Objeto raro (20%)
				case 6..25: 
				{
					new srand = random(sizeof(Raros));
					format(premio_name, sizeof(premio_name), "{4F6CE1}%s", VehiclesName[Raros[srand] - 400]);
					givePlayerItem(playerid, ITEM_TYPE_DRONE, Raros[srand], 1, VehiclesName[Raros[srand] - 400], 226, 226);
				}
				// Objeto comum (75%)
				case 26..100:
				{
					new srand = random(sizeof(Comuns));
					format(premio_name, sizeof(premio_name), "{28F236}%s", VehiclesName[Comuns[srand] - 400]);
					givePlayerItem(playerid, ITEM_TYPE_DRONE, Comuns[srand], 1, VehiclesName[Comuns[srand] - 400], 226, 226);
				}
			}
		}
		case MODEL_SACOLA_VEHICLE_VALENTINE_DAY:
		{
			format(sacola_name, sizeof(sacola_name), "{ACABAB}Sacola de Veiculos {939EFC}Carnaval");

			static const Lendarios[] = {451, 562, 555};
			static const Raros[] = {480, 535, 468};
			static const Comuns[] = {439, 491, 517, 589};

			switch (rand)
			{
				// Objeto lendário (5%)
				case 1..5: 
				{
					new srand = random(sizeof(Lendarios));
					format(premio_name, sizeof(premio_name), "{DC9315}%s", VehiclesName[Lendarios[srand] - 400]);
					givePlayerItem(playerid, ITEM_TYPE_DRONE, Lendarios[srand], 1, VehiclesName[Lendarios[srand] - 400], 126, 126);
				}
				// Objeto raro (20%)
				case 6..25: 
				{
					new srand = random(sizeof(Raros));
					format(premio_name, sizeof(premio_name), "{4F6CE1}%s", VehiclesName[Raros[srand] - 400]);
					givePlayerItem(playerid, ITEM_TYPE_DRONE, Raros[srand], 1, VehiclesName[Raros[srand] - 400], 126, 126);
				}
				// Objeto comum (75%)
				case 26..100:
				{
					new srand = random(sizeof(Comuns));
					format(premio_name, sizeof(premio_name), "{28F236}%s", VehiclesName[Comuns[srand] - 400]);
					givePlayerItem(playerid, ITEM_TYPE_DRONE, Comuns[srand], 1, VehiclesName[Comuns[srand] - 400], 126, 126);
				}
			}
		}
		case MODEL_SACOLA_VEHICLE_GARANTIA_LENDARIO:
		{
			format(sacola_name, sizeof(sacola_name), "{FFFF00}Sacola de Veiculos {FFFF00}Garantia Lendário");

			static const Lendarios[] = {522, 494, 541, 562, 462};
			
			{
				// Objeto lendário (100%)
				{
					new srand = random(sizeof(Lendarios));
					format(premio_name, sizeof(premio_name), "{DC9315}%s", VehiclesName[Lendarios[srand] - 400]);
					givePlayerItem(playerid, ITEM_TYPE_DRONE, Lendarios[srand], 1, VehiclesName[Lendarios[srand] - 400], 0, 0);
				}
			}
		}
		case MODEL_SACOLA_ACC_ORBES:
		{
			format(sacola_name, sizeof(sacola_name), "{ACABAB}Sacola de Acessórios {EDFC79}Or{FFF1C9}bes");

			static const ids[] = {19059, 19060, 19061, 19062, 19063};
			static const names[][] = {"Orbe Roxa", "Orbe Vermelha", "Orbe Verde", "Orbe Dourada", "Orbe Nude"};

			new srand = random(sizeof(ids)),
				name[32];

			format(premio_name, sizeof(premio_name), "{4F6CE1}%s", names[srand]);
			format(name, sizeof(name), "%s S1", names[srand]);
			givePlayerItem(playerid, ITEM_TYPE_OCULOS, ids[srand], 1, name, 0, 0);
		}
		default: return false;
	}
    format(string, sizeof(string), "[SACOLAS]: {FFFFFF}%s (%d) abriu %s {FFFFFF}ganhou '%s{FFFFFF}'.", PlayerName[playerid], playerid, sacola_name, premio_name);
    SendClientMessageToAll(COLOR_NEWS, string);

    return true;
}
