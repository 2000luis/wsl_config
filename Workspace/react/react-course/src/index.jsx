import './index.css';

export function Saludar({ title, name="Sin nombre" }){
    console.log(title)
    const s= 'luis eduardo'
    const estado = true;
    return <>
        <h1 >{title} {name}</h1>
        <h3>{estado? "estoy casado":"estoy soltero"}</h3>
        </> 
}

