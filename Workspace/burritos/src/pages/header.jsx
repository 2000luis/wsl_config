import React from 'react';
import title from '../media/burritos.png';

export const Header = () => {
    return (
        <div className="grid-header">
            <div className="icon">
                <div className="box">island</div>
            </div>
            <div className="title">
                <img className="bur-t"src={title}alt="burritos" />
                <button className="quiero-uno">Quiero</button>
            </div>
        </div>
    )
}

