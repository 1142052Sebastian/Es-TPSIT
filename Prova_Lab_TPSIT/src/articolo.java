public class articolo {
    private String Nome;
    private int Prezzo;
    public String getNome(){
        return Nome;
    }
    public int getPrezzo(){
        return Prezzo;
    }
    public void setNome(String nome){
        Nome = nome;
    }
    public void setPrezzo(int prezzo){
        Prezzo = prezzo;
    }
    public articolo(String varNome, int varPrezzo){
        setNome(varNome);
        setPrezzo(varPrezzo);
    }
}
