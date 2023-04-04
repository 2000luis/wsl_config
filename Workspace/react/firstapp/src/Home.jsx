import { AgregarTarea } from './AgregarTarea';
import { Tareas } from './Tareas';
import { ReactEjemplo } from './components/react-libro';
import './style.css';

export function Home(){

    return(
        <div>
            {/* <AgregarTarea /> */}
            {/* <Tareas /> */}
            <ReactEjemplo />
        </div>
    )
}
