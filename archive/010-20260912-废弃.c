if(60*(hour1-hour2)+(minute1-minute2)<0)hour_=-hour_,minute_=-minute_;
if(minute1-minute2>=0&&hour1-hour2<0)minute_=minute2-minute1,hour_=hour1-hour;
