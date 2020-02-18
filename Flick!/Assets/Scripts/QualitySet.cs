using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class QualitySet: MonoBehaviour {
	// Set Quality of graphics
	public void SetQuality(int QualityIndex){	
		QualitySettings.SetQualityLevel(QualityIndex);
	}
}
