/**
 * @param {string} s
 * @param {string} t
 * @return {boolean}
 */
const isSubsequence = (s, t) => {
  let remaining = s;

  for (const ch of t) {
    if (remaining && ch === remaining.charAt(0)) {
      remaining = remaining.slice(1);
    }
  }

  return !remaining;
};
