import map from './map.svg';
import dot from './dot.png';

import './App.css';
import Sidebar from './Components/Sidebar';

import React, { useState } from 'react';

function App() {

  var [cityToView, cityToViewSet] = useState(0);


  const imageClick = (city) => {
    if (city === "BA") {
      cityToViewSet(0);
    }
    if (city === "BB") {
      cityToViewSet(1);
    }
    if (city === "ZV") {
      cityToViewSet(2);
    }
    if (city === "KO") {
      cityToViewSet(4);
    }
    if (city === "PR") {
      cityToViewSet(3);
    }
    if (city === "ZI") {
      cityToViewSet(5);
    }

  }

  return (
    <div className="App">
      <header className="App-header">
        <img src={map} className="App-logo" alt="map" />
        <img src={dot} className="App-dotBA" alt="BA" onClick={() => imageClick("BA")} />
        <img src={dot} className="App-dotBB" alt="BB" onClick={() => imageClick("BB")} />
        <img src={dot} className="App-dotZV" alt="ZV" onClick={() => imageClick("ZV")} />
        <img src={dot} className="App-dotKO" alt="KO" onClick={() => imageClick("KO")} />
        <img src={dot} className="App-dotPR" alt="PR" onClick={() => imageClick("PR")} />
        <img src={dot} className="App-dotZI" alt="ZI" onClick={() => imageClick("ZI")} />
        <div className="App-par">
          <p>
            Slovakia, click on a white point. Does not mather which one.
          </p>
        </div>
        <Sidebar cityPossition={cityToView} />
      </header>
    </div>

  );
}


export default App;
