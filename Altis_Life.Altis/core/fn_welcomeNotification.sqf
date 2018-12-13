/*
    File: fn_welcomeNotification.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Called upon first spawn selection and welcomes our player.
*/
disableSerialization;
[
        "",
        0,
        0.2,
        10,
        0,
        0,
        8
] spawn BIS_fnc_dynamicText;

createDialog "RscDisplayWelcome";

_display = findDisplay 999999;
_text1 = _display displayCtrl 1100;
_buttonSpoiler = _display displayCtrl 2400;
_textSpoiler = _display displayCtrl 1101;
_text2 = _display displayCtrl 1102;

_message = "";
_message = _message + "<t align='center' size='8' shadow='0'><img image='textures\armalife.jpg' /></t><br /><br />";
_message = _message + "SERVER INFORMATION :  <br /><br />";

_message = _message + "COMPULSORY  [TEAMSPEAK] : 156.38.198.74  <br /><br />";

_message = _message + "[DISCORD] : <a href='https://discord.gg/5UpmpyN' color='#56BDD6'>[A3C]SANDF Discord Invite</a>  <br />";
_message = _message + "[UPDATES] : Please be patient this is still work in progress - Updates|Changes are made daily <br /><br />";
//_message = _message + "[MODS] Coming Soon : Advanced Combat Environment 3 (ACE3) <br /><br />";
//_message = _message + "[MAP] : Malden 2035 is being considered  <br /><br />";
_message = _message + "[WHITELIST] SAPS | ER24 <br /><br />";


//Fill only the first text
_text1 ctrlSetStructuredText (parseText _message);

//Resize StructuredText component to display the scrollbar if needed
_positionText1 = ctrlPosition _text1;
_yText1 = _positionText1 select 1;
_hText1 = ctrlTextHeight _text1;
_text1 ctrlSetPosition [_positionText1 select 0, _yText1, _positionText1 select 2, _hText1];
_text1 ctrlCommit 0;
//Hide second text, spoiler text and button
_buttonSpoiler ctrlSetFade 1;
_buttonSpoiler ctrlCommit 0;
_buttonSpoiler ctrlEnable false;
_textSpoiler ctrlSetFade 1;
_textSpoiler ctrlCommit 0;
_text2 ctrlSetFade 1;
_text2 ctrlCommit 0;
