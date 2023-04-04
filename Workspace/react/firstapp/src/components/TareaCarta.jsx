import {useContext} from 'react';
import {TareaContext} from '../context/TareaContext';

export function TareaCarta({tarea}){

    const {eliminarTarea} = useContext(TareaContext);

    return(
        <div >
            <hr />
            <h1>{tarea.tarea}</h1>
            <p>{tarea.fecha}</p>
            <p> Entrega: {tarea.para }</p>
            <button onClick={()=> eliminarTarea(tarea.id)}>
                Finalizada
            </button>
        </div>
    )
}


