import React , {useState} from 'react';

export function Input(){
    const [mensaje, setMensaje] = useState();
    const ver = true
    return(
        <div>
            <input onChange={e=>{
                    setMensaje(e.target.value)
            }}/>
            <button onClick={()=>{alert('este es el mensaje: '+mensaje)}}>
           guardar 
            </button>
        </div>
    )
}

