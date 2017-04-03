/************************************************************************************


                                  smb Utility

  File: string.h
  Description: strings for international version
  History:
  Contributors: Chezzman1, Insectduel, MirracleMXX, Yy

 ************************************************************************************/
#ifndef STRING_J_H
#define STRING_J_H

#define PROGRAMNAME  TEXT("SMB Utility")

#define STRING_VERSION_CONTRIBUTION TEXT("Emulador de Multi-6502 CPUs por Neil Bradley (neil@synthcom.com)")

#define STRING_NULL    TEXT("")
#define STRING_UNKNOWN TEXT("Desconhecido")

#define STRING_LOGVIEW_FILESAVE TEXT("Salvo como %s.")//"%sに保存しました。"
#define STRING_LOGVIEW_FILEOPEN TEXT("Carregou %s.")//"%sを開きました。"
#define STRING_LOGVIEW_LOADCHR  TEXT("Importou a CHR-ROM de %s.(%.4xH bytes)")//"%sから%.4xHﾊﾞｲﾄのCHRROMを読み込みました。"

//
//
#define STRING_FILEOPENDIALOG_CHRLOAD TEXT("Importar CHR-ROM do arquivo")
#define STRING_WINDOW_EMULATOR        TEXT("Emulador")
#define STRING_WINDOW_OBJLIST         TEXT("Lista de Objetos")
#define STRING_WINDOW_OBJVIEW         TEXT("Visão de Objetos")

//
#define STRING_OBJVIEW_TITLE          TEXT("%s <%dpage>")
#define STRING_OBJVIEW_TITLE2         TEXT("%s <%d-%dpage>")
#define STRING_OBJVIEW_TOOLTIP        TEXT("%d,(%d,%d) %s")

//
#define STRING_STATUSBAR_EMULOAD  TEXT("Carregou state.")
#define STRING_STATUSBAR_EMUSAVE  TEXT("Salvou state.")
#define STRING_STATUSBAR_FILESAVE TEXT("Salvou arquivo.")

//
#define STRING_FILEERROR_SAVE       TEXT("Falhou em salvar.")
#define STRING_FILEERROR_SAVEAS     TEXT("Falhou em salvar como.")
#define STRING_FILEERROR_FILEFORMAT TEXT("Encontrado erro no formato de arquivo(tipo de arquivo).")
#define STRING_FILEERROR_NOTFOUND   TEXT("Arquivo não encontrado.")

//
#define STRING_CONFIRM_SAVE         TEXT("Sobrescrever arquivo?")//"上書き保存しますか？"
#define STRING_CONFIRM_EXIT         TEXT("Salvar e sair?")
#define STRING_CONFIRM_RELOAD       TEXT("O arquivo foi modificado por outro editor.\nRecarregar?")
#define STRING_CONFIRM_DEMORECORD   TEXT("Começar a gravar a demonstração?")
#define STRING_CONFIRM_DEMORECORD2  TEXT("Parou de gravar a demonstração.")
#define STRING_CONFIRM_UPDATEWORLD  TEXT("Atualizar dados do mundo?")

//
#define STRING_OPTIONDIALOG_TITLE       TEXT("Opção")
#define STRING_OPTIONDIALOG_EMULATOR    TEXT("Emulador")
#define STRING_OPTIONDIALOG_EDITOR      TEXT("Editor")
#define STRING_OPTIONDIALOG_APPLICATION TEXT("Aplicação")
#define STRING_OPTIONDIALOG_OBJECTVIEW  TEXT("Visão de Objetos")

//
#define STRING_TOOLTIP_OPEN              TEXT("Abrir")
#define STRING_TOOLTIP_SAVE              TEXT("Salvar")
#define STRING_TOOLTIP_ROOM              TEXT("Escolher Sala")
#define STRING_TOOLTIP_BADGUYS           TEXT("Modo de Inimigos")
#define STRING_TOOLTIP_MAP               TEXT("Modo de Mapa")
#define STRING_TOOLTIP_TESTPLAY          TEXT("Começo da Sala")
#define STRING_TOOLTIP_PAGETESTPLAY      TEXT("Página Atual")
#define STRING_TOOLTIP_HALFPOINTTESTPLAY TEXT("Metade do Caminho (Checkpoint)")
#define STRING_TOOLTIP_STOP              TEXT("Fim")
#define STRING_TOOLTIP_TESTPLAYSETTING   TEXT("Testar Configuração")

//
#define STRING_SENDOBJECT_SRCERROR TEXT("Impossível enviar objeto-fonte.")
#define STRING_SENDOBJECT_DSTERROR TEXT("Não existem objetos na página de destino.")
#define STRING_SENDOBJECT_OVEROBJ  TEXT("Impossível enviar mais objetos para a sala de destino.")//"送り先のﾙｰﾑには、これ以上ｵﾌﾞｼﾞｪｸﾄを送ることができません。"

#define STRING_UNDO_MENUTEXT              TEXT("&Desfazer \"%s\"")
#define STRING_UNDONAME_KEYEDIT           TEXT("Entrada de Teclado")
#define STRING_UNDONAME_DLGEDIT           TEXT("Entrada de Diálogo")
#define STRING_UNDONAME_SENDOBJ           TEXT("Enviar Objeto")
#define STRING_UNDONAME_HEADDLG           TEXT("Editar Header")
#define STRING_UNDONAME_CHRLOAD           TEXT("Importar CHR-ROM")
#define STRING_UNDONAME_TOOLSTR           TEXT("Editar Texto")
#define STRING_UNDONAME_TOOLLOOPBIN       TEXT("Editar Looping")
#define STRING_UNDONAME_TOOLWORLD         TEXT("Atualizar Dados do Mundo")//"Auto Refresh World Data"
#define STRING_UNDONAME_TOOLAREAROOM      TEXT("Rearranjar Áreas")
#define STRING_UNDONAME_TOOLDEMORECORDER  TEXT("Gravar Demonstração de Introdução")//"Demo Recording"
#define STRING_UNDONAME_TOOLOTHER         TEXT("Editar Miscelânea do Jogo")
//#define STRING_UNDONAME_TOOLGLOBAL        TEXT("Opções Gerais")


#define STRING_POLEGFX_DEFAULT TEXT("Padrão")
#define STRING_POLEGFX_ROPE    TEXT("Corda")
#define STRING_POLEGFX_TREE    TEXT("Árvore")
#define STRING_POLEGFX_OTHER   TEXT("Outro")

#define STRING_SETTING_WORLDX   TEXT("Mundo%d")
#define STRING_SETTING_WARPZONE TEXT("Zona de Warp")
#define STRING_SETTING_1UP      TEXT("Cogumelo 1UP")
#define STRING_SETTING_KOOPA    TEXT("Bowser")
#define STRING_SETTING_WORLD    TEXT("Mundo")
#define STRING_SETTING_OTHER    TEXT("Outro")
#define STRING_SETTING_TITLE    TEXT("Editar Miscelânea do Jogo")


#define STRING_STRINGDATA_01 TEXT("MARIO(Barra de Status)")
#define STRING_STRINGDATA_02 TEXT("MARIO(Tempo encerrado no modo de dois jogadores)")
#define STRING_STRINGDATA_03 TEXT("MARIO(Game over)")
#define STRING_STRINGDATA_04 TEXT("LUIGI(Barra de status/Tempo encerrado/Game over)")
#define STRING_STRINGDATA_05 TEXT("TEMPO DO MUNDO(Barra de Status)")
#define STRING_STRINGDATA_06 TEXT("MUNDO(Na tela do Mundo 1-1 etc)")
#define STRING_STRINGDATA_07 TEXT("TEMPO ENCERRADO")
#define STRING_STRINGDATA_08 TEXT("GAME OVER")
#define STRING_STRINGDATA_09 TEXT("BEM-VINDO À ZONA DE WARP!")
#define STRING_STRINGDATA_10 TEXT("OBRIGADO MARIO!")
#define STRING_STRINGDATA_11 TEXT("OBRIGADO LUIGI!")
#define STRING_STRINGDATA_12 TEXT("MAS A NOSSA PRINCESA ESTÁ")
#define STRING_STRINGDATA_13 TEXT("EM OUTRO CASTELO!")
#define STRING_STRINGDATA_14 TEXT("A SUA BUSCA ACABOU.")
#define STRING_STRINGDATA_15 TEXT("TE DAMOS UMA NOVA BUSCA.")
#define STRING_STRINGDATA_16 TEXT("APERTE O BOTÃO B")
#define STRING_STRINGDATA_17 TEXT("PARA ESCOLHER UM MUNDO")
#define STRING_STRINGDATA_18 TEXT("Aviso de Copyright(Tela de título)")
#define STRING_STRINGDATA_19 TEXT("JOGO 1 PLAYER(Tela de título)")
#define STRING_STRINGDATA_20 TEXT("JOGO 2 PLAYERS(Tela de título)")

#define STRING_TESTPLAYSETTING_MARIO      TEXT("Mario Normal")
#define STRING_TESTPLAYSETTING_SUPERMARIO TEXT("Super Mario")
#define STRING_TESTPLAYSETTING_FIREMARIO  TEXT("Mario com Fogo")
#define STRING_TESTPLAYSETTING_NONE       TEXT("Padrão") //"無効"
#define STRING_TESTPLAYSETTING_POS        TEXT("Posição")//"位置"
#define STRING_TESTPLAYSETTING_DOT        TEXT("Pixel")//"ﾄﾞｯﾄ"

#define STRING_EMULATOROPTION_JOYSTICK   TEXT("Controle")//"ｼﾞｮｲｽﾃｨｯｸ"

#define STRING_KEYCONFIG_EMU_A              TEXT("A")
#define STRING_KEYCONFIG_EMU_B              TEXT("B")
#define STRING_KEYCONFIG_EMU_SELECT         TEXT("Select")
#define STRING_KEYCONFIG_EMU_START          TEXT("Start")
#define STRING_KEYCONFIG_EMU_UP             TEXT("Cima")
#define STRING_KEYCONFIG_EMU_DOWN           TEXT("Baixo")
#define STRING_KEYCONFIG_EMU_LEFT           TEXT("Esquerda")
#define STRING_KEYCONFIG_EMU_RIGHT          TEXT("Direita")
#define STRING_KEYCONFIG_EDIT_ADD1          TEXT("Object value +1")
#define STRING_KEYCONFIG_EDIT_DEC1          TEXT("Object value -1")
#define STRING_KEYCONFIG_EDIT_ADD16         TEXT("Object value +16")
#define STRING_KEYCONFIG_EDIT_DEC16         TEXT("Object value -16")
#define STRING_KEYCONFIG_EDIT_UP            TEXT("Posição do objeto para cima")
#define STRING_KEYCONFIG_EDIT_DOWN          TEXT("Posição do objeto para baixo")
#define STRING_KEYCONFIG_EDIT_LEFT          TEXT("Posição do objeto para esquerda")
#define STRING_KEYCONFIG_EDIT_RIGHT         TEXT("Posição do objeto para direita")
#define STRING_KEYCONFIG_EDIT_NEXTPAGE      TEXT("Próxima página")
#define STRING_KEYCONFIG_EDIT_PREVPAGE      TEXT("Página anterior")
#define STRING_KEYCONFIG_EDIT_NEXTOBJ       TEXT("Próximo objeto")
#define STRING_KEYCONFIG_EDIT_PREVOBJ       TEXT("Objeto anterior")
#define STRING_KEYCONFIG_EDIT_SAVEFILE      TEXT("Arquivo:Salvar")
#define STRING_KEYCONFIG_EDIT_UNDO          TEXT("Editar:Desfazer")
#define STRING_KEYCONFIG_EDIT_ROOM          TEXT("Editar:Escolher Sala")
#define STRING_KEYCONFIG_EDIT_BADGUYS       TEXT("Editar:Modo de Inimigos")
#define STRING_KEYCONFIG_EDIT_MAP           TEXT("Editar:Modo de Mapa")
#define STRING_KEYCONFIG_EDIT_TESTPLAY      TEXT("Emulador:Tela de Título")
#define STRING_KEYCONFIG_EDIT_PAGETESTPLAY  TEXT("Emulador:Página Atual")
#define STRING_KEYCONFIG_EDIT_PAGETESTPLAY2 TEXT("Emulador:Metade da fase")
#define STRING_KEYCONFIG_EDIT_STOP          TEXT("Emulador:Fim")
#define STRING_KEYCONFIG_EDIT_SAVEEMU       TEXT("Emulador:Salvar")
#define STRING_KEYCONFIG_EDIT_LOADEMU       TEXT("Emulador:Carregar")
#define STRING_KEYCONFIG_EDIT_EMUSETTING    TEXT("Emulador:Testar Configuração")
#define STRING_KEYCONFIG_EDIT_NEXTWIN       TEXT("Window:Próximo")
#define STRING_KEYCONFIG_EDIT_PREVWIN       TEXT("Window:Anterior")
#define STRING_KEYCONFIG_KEYACCEL           TEXT("Acelerador de teclado")
#define STRING_KEYCONFIG_EMULATOR           TEXT("Emulador")
#define STRING_KEYCONFIG_OVERLAPPED         TEXT("Está sobreposto em %s - \"%s\".")
#define STRING_KEYCONFIG_INITIALIZE         TEXT("Carregar chave-padrão?")
#define STRING_KEYCONFIG_NOTIFY             TEXT("Será ativado no próximo início.")

#define STRING_KEYCONFIG_PRESET_DESKTOP     TEXT("PC Desktop(Dez teclas)")
#define STRING_KEYCONFIG_PRESET_NOTE        TEXT("Notebook")

#define STRING_KEYCONFIG_WHEEL_NONE         TEXT("Nenhum")//"なし"
#define STRING_KEYCONFIG_WHEEL_SHIFT        TEXT("+Shift")//"+ｼﾌﾄ"
#define STRING_KEYCONFIG_WHEEL_CTRL         TEXT("+Ctrl")//"+ｺﾝﾄﾛｰﾙ"
#define STRING_KEYCONFIG_WHEEL_SHIFTCTRL    TEXT("+Shift+Ctrl")//"+ｼﾌﾄ+ｺﾝﾄﾛｰﾙ"
#define STRING_KEYCONFIG_WHEEL_TYPE1        TEXT("Mudar o valor do objeto em 1")//"種類を増減1"
#define STRING_KEYCONFIG_WHEEL_TYPE16       TEXT("Mudar o valor do objeto em 16")//"種類を増減16"
#define STRING_KEYCONFIG_WHEEL_PAGE         TEXT("Escolher objeto na próxima página")//"ﾍﾟｰｼﾞごとの移動"
#define STRING_KEYCONFIG_WHEEL_OBJ          TEXT("Escolher objeto")//"ｵﾌﾞｼﾞｪｸﾄごとの移動"

#define STRING_KEYCONFIG_BUTTONX            TEXT("Botão%d")//"ﾎﾞﾀﾝ%d"


#define STRING_OBJLIST_LENNAME   TEXT("Comprimento:%d, %s")
#define STRING_OBJLIST_UNKNOWN   TEXT("Objeto desconhecido")
#define STRING_OBJLIST_CRASH     TEXT("*Congela")
#define STRING_OBJLIST_BACK      TEXT("Cenário:%s")
#define STRING_OBJLIST_VIEWBLOCK TEXT("Cena:%s Bloco:%s")
#define STRING_OBJLIST_ROPE      TEXT("Corda vertical da plataforma")
#define STRING_OBJLIST_LENCASTLE TEXT("Castelo, Comprimento:%d")
#define STRING_OBJLIST_STEP      TEXT("Escadaria, Comprimento:%d, Altura:%d")
#define STRING_OBJLIST_STEP98    TEXT("Escadaria, Comprimento:9 Altura:8")
#define STRING_OBJLIST_STEP98_2  TEXT("*Escadaria, Comprimento:9, Altura:8")
#define STRING_OBJLIST_NONE      TEXT("*Nada")

#define STRING_OBJLIST_ROOM        TEXT("Mudança de sala[%.2xH(%s), w=%d, p=%d]")
#define STRING_OBJLIST_PAGECOMMAND TEXT("Pular página:%.2d")
#define STRING_OBJLIST_HARD        TEXT(" (Apenas depois de 5-3)")

#define STRING_AREASORT_TITLE TEXT("Escolher Sala")

#define STRING_SEA         TEXT("Mar")
#define STRING_SKY         TEXT("Chão")
#define STRING_UNDERGROUND TEXT("Subsolo")
#define STRING_CASTLE      TEXT("Castelo")

#define STRING_OBJLIST_COLUMN_BIN  TEXT("Hex")
#define STRING_OBJLIST_COLUMN_PAGE TEXT("Página")
#define STRING_OBJLIST_COLUMN_POS  TEXT("Posição")
#define STRING_OBJLIST_COLUMN_TYPE TEXT("Tipo")

#define STRING_OBJDATA_MAP_B_01 TEXT("?Bloco(Cogumelo)")
#define STRING_OBJDATA_MAP_B_02 TEXT("?Bloco(Moeda)")
#define STRING_OBJDATA_MAP_B_03 TEXT("Bloco escondido(Moeda)")
#define STRING_OBJDATA_MAP_B_04 TEXT("Bloco escondido(Cogumelo 1UP)")
#define STRING_OBJDATA_MAP_B_05 TEXT("Tijolo(Cogumelo)")
#define STRING_OBJDATA_MAP_B_06 TEXT("Tijolo(Vinha)")
#define STRING_OBJDATA_MAP_B_07 TEXT("Tijolo(Estrela)")
#define STRING_OBJDATA_MAP_B_08 TEXT("Tijolo(10 moedas)")
#define STRING_OBJDATA_MAP_B_09 TEXT("Tijolo(Cogumelo 1UP)")
#define STRING_OBJDATA_MAP_B_10 TEXT("Cano de lado")
#define STRING_OBJDATA_MAP_B_11 TEXT("Bloco usado")
#define STRING_OBJDATA_MAP_B_12 TEXT("Mola")
#define STRING_OBJDATA_MAP_B_13 TEXT("Cano em L reverso")
#define STRING_OBJDATA_MAP_B_14 TEXT("Bandeira")
#define STRING_OBJDATA_MAP_B_15 TEXT("*Nada")
#define STRING_OBJDATA_MAP_B_16 TEXT("*Nada")
#define STRING_OBJDATA_MAP_B_17 TEXT("Ilha(Canhão)")
#define STRING_OBJDATA_MAP_B_18 TEXT("Tijolos horizontais(corais)")
#define STRING_OBJDATA_MAP_B_19 TEXT("Blocos horizontais")
#define STRING_OBJDATA_MAP_B_20 TEXT("Moedas horizontais")
#define STRING_OBJDATA_MAP_B_21 TEXT("Tijolos verticais(corais)")
#define STRING_OBJDATA_MAP_B_22 TEXT("Blocos verticais")
#define STRING_OBJDATA_MAP_B_23 TEXT("Cano(Jogador não pode entrar.)")
#define STRING_OBJDATA_MAP_B_24 TEXT("Cano(Jogador pode entrar.)")

#define STRING_OBJDATA_HELP_B12 TEXT("")//"ｷｬﾗｸﾀの１つ。ｷｬﾗｸﾀｵｰﾊﾞｰで表示されなくなると、ﾏﾘｵが挟まって出れなくなるので注意。"
#define STRING_OBJDATA_HELP_B13 TEXT("")//"高さ9固定。横からでも上からでも入れる。(横位置＋2)から2ｷｬﾗ分は、先に指定された障害物を消す。"
#define STRING_OBJDATA_HELP_B14 TEXT("")//"やたらと使用しないこと。1ﾙｰﾑに2回以上使用すると暴走しやすくなるので注意。"
#define STRING_OBJDATA_HELP_B23 TEXT("")//"長さを1にしても必ず2になる。"

#define STRING_OBJDATA_MAP_C_01 TEXT("Buraco")
#define STRING_OBJDATA_MAP_C_02 TEXT("Equilíbrio corda horizontal")
#define STRING_OBJDATA_MAP_C_03 TEXT("Ponte(V=7)")
#define STRING_OBJDATA_MAP_C_04 TEXT("Ponte(V=8)")
#define STRING_OBJDATA_MAP_C_05 TEXT("Ponte(V=10)")
#define STRING_OBJDATA_MAP_C_06 TEXT("Buraco cheio de água")
#define STRING_OBJDATA_MAP_C_07 TEXT("?Blocos horizontais(Coin, V=3)")
#define STRING_OBJDATA_MAP_C_08 TEXT("?Blocos horizontais(Coin, V=7)")

#define STRING_OBJDATA_HELP_C01 TEXT("")//"縦位置8から12の先指定したすべてのﾏｯﾌﾟｷｬﾗを消す。"
#define STRING_OBJDATA_HELP_C02 TEXT("")//"縦位置0固定"
#define STRING_OBJDATA_HELP_C06 TEXT("")//"縦位置10から12の先指定したすべてのﾏｯﾌﾟｷｬﾗを消す。"

#define STRING_OBJDATA_MAP_D_01 TEXT("Pular página")
#define STRING_OBJDATA_MAP_D_02 TEXT("Cano em L reverso")
#define STRING_OBJDATA_MAP_D_03 TEXT("Bandeira")
#define STRING_OBJDATA_MAP_D_04 TEXT("Machado")
#define STRING_OBJDATA_MAP_D_05 TEXT("Corda")
#define STRING_OBJDATA_MAP_D_06 TEXT("Ponte")
#define STRING_OBJDATA_MAP_D_07 TEXT("Parar o scroll(zona de warp)")
#define STRING_OBJDATA_MAP_D_08 TEXT("Parar o scroll")
#define STRING_OBJDATA_MAP_D_10 TEXT("Cheep-cheep(vermelho, voador)")
#define STRING_OBJDATA_MAP_D_11 TEXT("Bullet Bill(Cheep-cheep) continuação")
#define STRING_OBJDATA_MAP_D_12 TEXT("Parar continuição")
#define STRING_OBJDATA_MAP_D_13 TEXT("Repetir comando")
#define STRING_OBJDATA_MAP_D_14 TEXT("?")
#define STRING_OBJDATA_MAP_D_15 TEXT("*Congelar")

#define STRING_OBJDATA_HELP_D01 TEXT("")
#define STRING_OBJDATA_HELP_D03 TEXT("")//"やたらと使用しない事。1ﾙｰﾑに2回以上使用すると暴走しやすくなるので注意。"
#define STRING_OBJDATA_HELP_D04 TEXT("")//"縦位置6固定"
#define STRING_OBJDATA_HELP_D05 TEXT("")//"縦位置7固定"
#define STRING_OBJDATA_HELP_D06 TEXT("")//"縦位置8、長さ13固定"
#define STRING_OBJDATA_HELP_D12 TEXT("")//"連続出現ｷｬﾗを出した後、暴走を防ぐためにﾎﾟｰﾙを出す前に指定。"
#define STRING_OBJDATA_HELP_D13 TEXT("")//"ﾍﾟｰｼﾞ送りｺﾏﾝﾄﾞとｾｯﾄでﾙｰﾌﾟを形成する。"

#define STRING_OBJDATA_MAP_E_01 TEXT("Tijolo básico e cenário")
#define STRING_OBJDATA_MAP_E_02 TEXT("Mudar plano de fundo")

#define STRING_OBJDATA_MAP_F_01 TEXT("Corda do elevador")
#define STRING_OBJDATA_MAP_F_02 TEXT("Corda vertical da plataforma de equilíbrio")
#define STRING_OBJDATA_MAP_F_03 TEXT("Castelo")
#define STRING_OBJDATA_MAP_F_04 TEXT("Escadaria(comprimento:n, altura:n)")
#define STRING_OBJDATA_MAP_F_05 TEXT("Escadaria(comprimento:9, altura:8)")
#define STRING_OBJDATA_MAP_F_06 TEXT("Cano longo em L reverso")
#define STRING_OBJDATA_MAP_F_07 TEXT("Bolas verticais")
#define STRING_OBJDATA_MAP_F_08 TEXT("Nada")

#define STRING_OBJDATA_HELP_F01 TEXT("")//"縦位置0、長さ13固定。指定横位置において、先指定したすべてのﾏｯﾌﾟｷｬﾗを消す。"
#define STRING_OBJDATA_HELP_F02 TEXT("")//"縦位置1固定。指定横位置において、先指定したすべてのﾏｯﾌﾟｷｬﾗを消す。"
#define STRING_OBJDATA_HELP_F03 TEXT("")//"やたらと使用しないこと。多く使用すると暴走しやすくなる。"
#define STRING_OBJDATA_HELP_F05 TEXT("")//"長さ0～3 問題なし。\n長さ4～6 ｸﾞﾗﾌｨｯｸｽが潰れる。長さ7 ｸﾞﾗﾌｨｯｸｽが潰れる。(横位置+16)の位置に縦位置7の壊せないﾌﾞﾛｯｸ1個。"
#define STRING_OBJDATA_HELP_F07 TEXT("")//"ﾂﾀのようにつかまって上下移動が可能。縦位置2固定"

#define STRING_OBJDATA_BB_01 TEXT("Tijolo:Nenhum")
#define STRING_OBJDATA_BB_02 TEXT("Tijolo:Superfície")
#define STRING_OBJDATA_BB_03 TEXT("Tijolo:Superfície&teto")
#define STRING_OBJDATA_BB_04 TEXT("Tijolo:Superfície&teto(3)")
#define STRING_OBJDATA_BB_05 TEXT("Tijolo:Superfície&teto(4)")
#define STRING_OBJDATA_BB_06 TEXT("Tijolo:Superfície&teto(8)")
#define STRING_OBJDATA_BB_07 TEXT("Tijolo:Superfície4)&teto")
#define STRING_OBJDATA_BB_08 TEXT("Tijolo:Superfície(4)&teto(3)")
#define STRING_OBJDATA_BB_09 TEXT("Tijolo:Superfície(4)&teto(4)")
#define STRING_OBJDATA_BB_10 TEXT("Tijolo:Superfície(5)&teto")
#define STRING_OBJDATA_BB_11 TEXT("Tijolo:Teto")
#define STRING_OBJDATA_BB_12 TEXT("Tijolo:Superfície(5)&teto(4)")
#define STRING_OBJDATA_BB_13 TEXT("Tijolo:Superfície(8)&teto")
#define STRING_OBJDATA_BB_14 TEXT("Tijolo:Superfície&teto&meio(5)")
#define STRING_OBJDATA_BB_15 TEXT("Tijolo:Superfície&teto&meio(4)")
#define STRING_OBJDATA_BB_16 TEXT("Tijolo:Tudo")

#define STRING_OBJDATA_T_01 TEXT("Não colocado")
#define STRING_OBJDATA_T_02 TEXT("400")
#define STRING_OBJDATA_T_03 TEXT("300")
#define STRING_OBJDATA_T_04 TEXT("200")

#define STRING_OBJDATA_P_01 TEXT("V=-1, H=1.5")
#define STRING_OBJDATA_P_02 TEXT("Começo da área:X, a partir de outra sala; V=-1, H=1.5")
#define STRING_OBJDATA_P_03 TEXT("V=10, H=1.5")
#define STRING_OBJDATA_P_04 TEXT("V=4, H=1.5")
#define STRING_OBJDATA_P_07 TEXT("V=10, H=1.5(andando)")

#define STRING_OBJDATA_BC_01 TEXT("Nada")
#define STRING_OBJDATA_BC_02 TEXT("Na água")
#define STRING_OBJDATA_BC_03 TEXT("Parede")
#define STRING_OBJDATA_BC_04 TEXT("Sobre a água")
#define STRING_OBJDATA_BC_05 TEXT("Noite")
#define STRING_OBJDATA_BC_06 TEXT("Neve")
#define STRING_OBJDATA_BC_07 TEXT("Noite e neve")
#define STRING_OBJDATA_BC_08 TEXT("Castelo")

#define STRING_OBJDATA_MT_01 TEXT("Verde e árvore")
#define STRING_OBJDATA_MT_02 TEXT("Laranja e cogumelo")
#define STRING_OBJDATA_MT_03 TEXT("Armas")
#define STRING_OBJDATA_MT_04 TEXT("Nuvens")

#define STRING_OBJDATA_V_01 TEXT("Nada")
#define STRING_OBJDATA_V_02 TEXT("Nuvens")
#define STRING_OBJDATA_V_03 TEXT("Montanha")
#define STRING_OBJDATA_V_04 TEXT("Cerca")


#define STRING_OBJDATA_BADGUYS_01 TEXT("Koopa Troopa(verde)")
#define STRING_OBJDATA_BADGUYS_02 TEXT("Koopa Troopa(vermelho)")
#define STRING_OBJDATA_BADGUYS_03 TEXT("Buzzy Beetle")
#define STRING_OBJDATA_BADGUYS_04 TEXT("Koopa Troopa(vermelho, patrulha)")
#define STRING_OBJDATA_BADGUYS_05 TEXT("Koopa Troopa(verde, parado)")
#define STRING_OBJDATA_BADGUYS_06 TEXT("The Hammer Brothers")
#define STRING_OBJDATA_BADGUYS_07 TEXT("Little Goomba")
#define STRING_OBJDATA_BADGUYS_08 TEXT("Bloober")
#define STRING_OBJDATA_BADGUYS_09 TEXT("Bullet Bill")
#define STRING_OBJDATA_BADGUYS_10 TEXT("Koopa Paratroopa(verde, parado)")
#define STRING_OBJDATA_BADGUYS_11 TEXT("Cheep-cheep(verde)")
#define STRING_OBJDATA_BADGUYS_12 TEXT("Cheep-cheep(vermelho)")
#define STRING_OBJDATA_BADGUYS_13 TEXT("Podoboo")
#define STRING_OBJDATA_BADGUYS_14 TEXT("Piranha plants")
#define STRING_OBJDATA_BADGUYS_15 TEXT("Koopa Paratroopa(verde, pulando)")
#define STRING_OBJDATA_BADGUYS_16 TEXT("Koopa Paratroopa(vermelho, cima e baixo)")
#define STRING_OBJDATA_BADGUYS_17 TEXT("Koopa Paratroopa(verde, direita e esquerda)")
#define STRING_OBJDATA_BADGUYS_18 TEXT("Lakitu")
#define STRING_OBJDATA_BADGUYS_19 TEXT("Spiny")
#define STRING_OBJDATA_BADGUYS_20 TEXT("*Desconhecido")
#define STRING_OBJDATA_BADGUYS_21 TEXT("Cheep-cheep(voando)")
#define STRING_OBJDATA_BADGUYS_22 TEXT("Fogo do Bowser")
#define STRING_OBJDATA_BADGUYS_23 TEXT("*Crash")
#define STRING_OBJDATA_BADGUYS_24 TEXT("Bullet Bill(Cheep-cheep) continuação")
#define STRING_OBJDATA_BADGUYS_25 TEXT("*Nenhum")
#define STRING_OBJDATA_BADGUYS_28 TEXT("Fire Bar(direita)")
#define STRING_OBJDATA_BADGUYS_29 TEXT("Fire Bar(direita, rápido)")
#define STRING_OBJDATA_BADGUYS_30 TEXT("Fire Bar(esquerda)")
#define STRING_OBJDATA_BADGUYS_31 TEXT("Fire Bar(esquerda, rápido)")
#define STRING_OBJDATA_BADGUYS_32 TEXT("Long Fire Bar(direita)")
#define STRING_OBJDATA_BADGUYS_33 TEXT("Fire Bar")
#define STRING_OBJDATA_BADGUYS_37 TEXT("Lift(equilibrar)")
#define STRING_OBJDATA_BADGUYS_38 TEXT("Lift(cima e baixo)")
#define STRING_OBJDATA_BADGUYS_39 TEXT("Lift(cima)")
#define STRING_OBJDATA_BADGUYS_40 TEXT("Lift(baixo)")
#define STRING_OBJDATA_BADGUYS_41 TEXT("Lift(direita e esquerda)")
#define STRING_OBJDATA_BADGUYS_42 TEXT("Lift(cai)")
#define STRING_OBJDATA_BADGUYS_43 TEXT("Lift(surfando)")
#define STRING_OBJDATA_BADGUYS_44 TEXT("Short lift(cima)")
#define STRING_OBJDATA_BADGUYS_45 TEXT("Short lift(baixo)")
#define STRING_OBJDATA_BADGUYS_46 TEXT("Bowser, King of the Koopa")
#define STRING_OBJDATA_BADGUYS_47 TEXT("*Desconhecido")
#define STRING_OBJDATA_BADGUYS_48 TEXT("*Desconhecido")
#define STRING_OBJDATA_BADGUYS_51 TEXT("Jumping board(falso)")
#define STRING_OBJDATA_BADGUYS_53 TEXT("Zona de Warp")
#define STRING_OBJDATA_BADGUYS_54 TEXT("Mushroom retainers")
#define STRING_OBJDATA_BADGUYS_56 TEXT("2 Little Goomba(V=10)")
#define STRING_OBJDATA_BADGUYS_57 TEXT("3 Little Goomba(V=10)")
#define STRING_OBJDATA_BADGUYS_58 TEXT("2 Little Goomba(V=6)")
#define STRING_OBJDATA_BADGUYS_59 TEXT("3 Little Goomba(V=6)")
#define STRING_OBJDATA_BADGUYS_60 TEXT("2 Koopa Troopa(verde, V=10)")
#define STRING_OBJDATA_BADGUYS_61 TEXT("3 Koopa Troopa(verde, V=10)")
#define STRING_OBJDATA_BADGUYS_62 TEXT("2 Koopa Troopa(verde, V=6)")
#define STRING_OBJDATA_BADGUYS_63 TEXT("3 Koopa Troopa(verde, V=6)")

// delreg.exe
#define STRING_DELREG_TITLE    TEXT("Apagando entradas de registro do SMB Utility")//ダイアログのタイトル "SMB Utility ﾚｼﾞｽﾄﾘの削除"
#define STRING_DELREG_CONFIRM  TEXT("Você está prestes a apagar chaves de registro que foram utilizadas no SMB Utility. Tem certeza?")//"SMB Utilityで使用したﾚｼﾞｽﾄﾘのｷｰを削除しますか？"
#define STRING_DELREG_COMPLETE TEXT("Apagou chaves de registro que foram utilizadas no SMB Utility.")//"SMB Utilityで使用したﾚｼﾞｽﾄﾘのｷｰを削除しました。"
#define STRING_DELREG_ERROR_01 TEXT("Chaves do registro utilizadas no SMB Utility não existem.")//"SMB Utilityのﾚｼﾞｽﾄﾘのｷｰは、存在しません。"

#endif
