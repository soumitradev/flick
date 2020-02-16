using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class QualitySet: MonoBehaviour {
	public void SetQuality(int QualityIndex){	
		QualitySettings.SetQualityLevel(QualityIndex);
	}
}
