public class stand {
    private String nomeStand, pIva;
    public negoziante venditore;
    public String getNomeStand(){
        return nomeStand;
    }
    public String getPIva(){
        return pIva;
    }
    public void setNomeStand(String varNomeStand){
        nomeStand = varNomeStand;
    }
    public void setPIva(String varPIva){
        pIva = varPIva;
    }

    public stand(String varNome,String pIva, negoziante varVenditore){
        setNomeStand(varNome);
        setPIva(pIva);
        venditore=varVenditore;
    }
}
