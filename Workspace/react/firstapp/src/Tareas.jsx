import {TareaCarta} from './components/TareaCarta';
import {TareaContext} from './context/TareaContext';
import {useContext} from 'react';

export function Tareas(){

    const {tareas} = useContext(TareaContext);

    if (tareas.length===0){
        return <h1>Tareas finalizadas</h1>
    }

    

    return(
        <div>
            {
                tareas.map((tarea)=>(
                    <TareaCarta key={tarea.id} tarea={tarea} />
                ))
            }
        </div>
    )
}
