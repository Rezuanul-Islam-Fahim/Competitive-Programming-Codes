/**
 * @param {string} s
 * @param {string} t
 * @return {boolean}
 */
var isIsomorphic = function(s, t) {
	const charMapS = new Map();
	const charMapT = new Map();

    for (i = 0; i < s.length; i++) {
    	if (!charMapS.get(s[i]) && !charMapT.get(t[i])) {
    		charMapS.set(s[i], t[i])
    		charMapT.set(t[i], s[i])
    	}

    	if (charMapS.get(s[i]) !== t[i] || charMapT.get(t[i]) !== s[i]) {
    		return false;
    	}
    }

    return true;
};
