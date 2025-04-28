# Repeated Modulo 10 and Division by 10 on 12345

We will apply modulo 10 (`% 10`) and division by 10 (`// 10`) repeatedly on the number `12345`.

### Modulo 10 Process

1. **Starting Number: 12345**
   - `12345 % 10 = 5`

2. **Next Number: 1234**
   - `1234 % 10 = 4`

3. **Next Number: 123**
   - `123 % 10 = 3`

4. **Next Number: 12**
   - `12 % 10 = 2`

5. **Next Number: 1**
   - `1 % 10 = 1`

**Sequence of Modulo 10 Results:**
- `5, 4, 3, 2, 1`

---

### Division by 10 Process

1. **Starting Number: 12345**
   - `12345 // 10 = 1234`

2. **Next Number: 1234**
   - `1234 // 10 = 123`

3. **Next Number: 123**
   - `123 // 10 = 12`

4. **Next Number: 12**
   - `12 // 10 = 1`

5. **Next Number: 1**
   - `1 // 10 = 0`

**Sequence of Division by 10 Results:**
- `1234, 123, 12, 1, 0`

---

# Explanation of `log10`

The `log10(x)` function computes the **logarithm to the base 10** of a number `x`. In simpler terms, it answers the question: "To what power must 10 be raised to produce the number `x`?"

### Basic Concept

The logarithm `log10(x)` represents the **exponent** or **power** to which the base (in this case, 10) must be raised to get the number `x`.

For example:
- `log10(1000)` tells us the power of 10 that gives 1000. Since \( 10^3 = 1000 \), we know that `log10(1000) = 3`.

### Examples

1. **log10(1000) = 3**
   - \( 10^3 = 1000 \), so the logarithm of 1000 with base 10 is 3.
   - **Explanation**: 10 raised to the power of 3 results in 1000.

2. **log10(100) = 2**
   - \( 10^2 = 100 \), so the logarithm of 100 with base 10 is 2.
   - **Explanation**: 10 raised to the power of 2 results in 100.

3. **log10(50) ≈ 1.69897**
   - \( 10^{1.69897} ≈ 50 \), so the logarithm of 50 with base 10 is approximately 1.69897.
   - **Explanation**: 10 raised to the power of 1.69897 results in approximately 50.

4. **log10(10) = 1**
   - \( 10^1 = 10 \), so the logarithm of 10 with base 10 is 1.
   - **Explanation**: 10 raised to the power of 1 results in 10.

5. **log10(1) = 0**
   - \( 10^0 = 1 \), so the logarithm of 1 with base 10 is 0.
   - **Explanation**: Any number raised to the power of 0 equals 1, and since \( 10^0 = 1 \), we get `log10(1) = 0`.

6. **log10(0.1) = -1**
   - \( 10^{-1} = 0.1 \), so the logarithm of 0.1 with base 10 is -1.
   - **Explanation**: 10 raised to the power of -1 results in 0.1.
