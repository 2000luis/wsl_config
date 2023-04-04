import {tareas as data } from '../tareas';
import {createContext, useState, useEffect} from 'react';

export const TareaContext = createContext();

export function TareaContextProvider(props){

    const [tareas, setTareas] = useState([])

    function crearTarea(tarea, fecha, para){
        setTareas([...tareas,{
            tarea,
            id: tareas.length,
            fecha,
            para
        }])
    }

    function eliminarTarea(tareaID){
        setTareas(
            tareas.filter(tarea => tarea.id !== tareaID)
        )
    }

    useEffect(() => {
        setTareas(data)
    }, [])

    return(
        <TareaContext.Provider value={{
            tareas,
            crearTarea,
            eliminarTarea
        }}>
            {props.children}
        </TareaContext.Provider>
    )
}
