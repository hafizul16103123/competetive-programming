function res(){
    const s ="11:00:00AM";
    const sA= s.split(":");
    const h=sA[0];
    const m=sA[1];
    const last=sA[2];
    const se=last.slice(0,2);
    console.log({se})
    const AM_PM=last.slice(2,4);
    console.log({AM_PM})
    if(AM_PM=='AM'){
        if(h=='12'){
           return "00"+":"+m+":"+se
        }
        return h+":"+m+":"+se;
    }else{
         if(h=='12'){
           return "12"+":"+m+":"+se 
        }
        return String(Number(h)+12)+":"+m+":"+se
    }
}
console.log(res())