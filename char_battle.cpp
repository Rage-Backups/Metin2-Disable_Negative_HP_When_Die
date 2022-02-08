//Keress rá erre:
    if (!cannot_dead)
    {
        PointChange(POINT_HP, -dam, false);
    }
 
//Cseréld le erre:
    if (!cannot_dead)
    {
        if (GetHP() - dam <= 0)
            dam = GetHP();
        PointChange(POINT_HP, -dam, false);
    }
 
http://epvpimg.com/3Ku8bab
