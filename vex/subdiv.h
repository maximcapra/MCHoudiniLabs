function void subdiv(vector bbmin; vector bbmax; float cutpos; int cutdir){
    vector cut = lerp(bbmin, bbmax, cutpos);
    vector pos;
    int newpt, newprim;
    
    if(cutdir == 1) {
    
        newprim = addprim(0,'poly');
        
        // first quad    
        pos = bbmin;
        newpt = addpoint(0, pos);
        addvertex(0, newprim, newpt);

        pos = set(bbmax.x, bbmin.y, bbmin.z );
        newpt = addpoint(0, pos);
        addvertex(0, newprim, newpt);                    

        pos = set(bbmax.x, bbmin.y, cut.z );
        newpt = addpoint(0, pos);
        addvertex(0, newprim, newpt);
        
        pos = set(bbmin.x, bbmin.y, cut.z);
        newpt = addpoint(0, pos);
        addvertex(0, newprim, newpt);    
        
        // second quad    
        
        newprim = addprim(0,'poly');    
        
        pos = set(bbmin.x, bbmin.y, cut.z);
        newpt = addpoint(0, pos);
        addvertex(0, newprim, newpt);

        pos = set(bbmax.x, bbmin.y, cut.z );
        newpt = addpoint(0, pos);
        addvertex(0, newprim, newpt);                        

        pos = set(bbmax.x, bbmax.y, bbmax.z );
        newpt = addpoint(0, pos);
        addvertex(0, newprim, newpt);        
        
        pos = set(bbmin.x, bbmin.y, bbmax.z);
        newpt = addpoint(0, pos);
        addvertex(0, newprim, newpt);    
        
    }
    
    else {
    
        newprim = addprim(0,'poly');
        
        // first quad    
        pos = bbmin;
        newpt = addpoint(0, pos);
        addvertex(0, newprim, newpt);
    
        pos = set(cut.x, bbmin.y, bbmin.z);
        newpt = addpoint(0, pos);
        addvertex(0, newprim, newpt);    
        
        pos = set(cut.x, bbmin.y, bbmax.z );
        newpt = addpoint(0, pos);
        addvertex(0, newprim, newpt);
        
        pos = set(bbmin.x, bbmin.y, bbmax.z );
        newpt = addpoint(0, pos);
        addvertex(0, newprim, newpt);            
        
        // second quad    
        
        newprim = addprim(0,'poly');    
        
        pos = set(cut.x, bbmin.y, bbmin.z);
        newpt = addpoint(0, pos);
        addvertex(0, newprim, newpt);
    
        pos = set(bbmax.x, bbmin.y, bbmin.z);
        newpt = addpoint(0, pos);
        addvertex(0, newprim, newpt);    
        
        pos = set(bbmax.x, bbmin.y, bbmax.z );
        newpt = addpoint(0, pos);
        addvertex(0, newprim, newpt);
        
        pos = set(cut.x, bbmin.y, bbmax.z );
        newpt = addpoint(0, pos);
        addvertex(0, newprim, newpt);                
    }

}