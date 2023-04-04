import React, {useState} from 'react';

export function ReactEjemplo(){

    const [a] = useState("adam");
    const [b] = useState("luis");

    return(
        <>
            <h1>{a}</h1>
            <h1>{b}</h1>
        </>
    )
}
