import React from 'react'
import "../App.css";

import JsonData from './data.json'



export default function Sidebar(props) {

    const Display = JsonData.map(
        (city) => {
            return (
                <tr className="underCity">
                    <div className="underCitySpace">
                        <td className="tdName">{city.name}</td>
                    </div>
                    <div className="underCitySpace">
                        <td className="tdContent">{city.content}</td>
                    </div>
                </tr>
            )
        }
    )

    return (
        <div className="Sidebar">
            {Display[props.cityPossition]}
        </div>
    )
}
