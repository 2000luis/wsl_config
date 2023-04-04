import React from 'react';
import ReactDOM from 'react-dom/client';

import {Header} from './pages/header';

import './style/index.css';

const container = document.getElementById('root');
const root = ReactDOM.createRoot(container);

root.render(
    <> 
        <Header />
    </>
)
