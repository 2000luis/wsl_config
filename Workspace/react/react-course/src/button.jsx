import './index.css';
import React, {useState} from 'react';
import PropTypes from 'prop-types';

export function Button({title}){
    return <button className="bg">
        {title}
    </button>
}

export function Contador(){
    const [contador, setContador] = useState(0)

    return (
        <div>
            <h1>Counter: {contador}</h1>

            <button onClick={()=>{
                setContador( contador + 1)
            }}>
                +
            </button>

            <button onClick={()=>{
                setContador(contador -1)
            }}> 
                -
            </button>

            <button onClick={()=>{
                setContador(0)
                }}>
                reinicar
        </button>
        </div>
    )
}
