import React, {useState, useContext} from 'react';
import {TareaContext} from './context/TareaContext';

export function AgregarTarea(){

    const { crearTarea } = useContext(TareaContext);
    const [tarea, setTarea] = useState("");
    const [fecha, setFecha] = useState("");
    const [para, setPara] = useState("");

    const handleSubmit = (e) => {
        e.preventDefault();

        crearTarea(tarea, fecha, para)
        setTarea("")
        setFecha("")
        setPara("")
    }

    return(
        <div>
            <form onSubmit={handleSubmit}>
                <input value={tarea} 
                    placeholder="Tarea" 
                    onChange={(e)=>{
                        setTarea(e.target.value)
                    }}/>
                <input value={fecha}placeholder="Fecha" onChange={(e)=>{
                    setFecha(e.target.value)
                }}/>
                <input value={para}placeholder="Dias restantes" onChange={(e)=>{
                    setPara(e.target.value)
                }}/>
                <button>
                    Guardar Tarea
                </button>
            </form>
        </div>
    )
}
