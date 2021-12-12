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

    // Zilina
    if (city === "ZI") {
      cityToViewSet(5);
    }

    // Brezno
    if (city === "BE") {
      cityToViewSet(6);
    }

    // Nitra
    if (city === "NI") {
      cityToViewSet(7);
    }

    // Trenčín
    if (city === "TE") {
      cityToViewSet(8);
    }

    // Trnava
    if (city === "TR") {
      cityToViewSet(9);
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

        <img src={dot} className="App-dotNI" alt="NI" onClick={() => imageClick("NI")} />
        <img src={dot} className="App-dotTR" alt="TR" onClick={() => imageClick("TR")} />
        <img src={dot} className="App-dotTE" alt="TE" onClick={() => imageClick("TE")} />
        <img src={dot} className="App-dotBE" alt="BE" onClick={() => imageClick("BE")} />

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
