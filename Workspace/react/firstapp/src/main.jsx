import React from 'react';
import ReactDOM from 'react-dom/client';
import {Home} from './Home';
import {TareaContextProvider} from './context/TareaContext';

ReactDOM.createRoot(document.getElementById('root')).render(
    <React.StrictMode>
        <TareaContextProvider>
            <Home />
        </TareaContextProvider>
    </React.StrictMode>
)
