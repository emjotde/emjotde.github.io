---
layout: default
title: Prog-2 2013/2014
dydaktyka: true
rok: 2013/2014
nav: dydaktyka
summary: Programowanie 2, ćwiczenia - Kognitywistyka, 4. rok, magisterskie
---

Wyniki pierwszegp kolokwium: ...
Wyniki drugiego kolokwium: ...

Drugie Kolokwium
================

Task 1
---------
Given an array of integers nums and an integer n, return an array that is a
version of nums shifted n positions to the right. 

### Solution

{% highlight java %}
int[] shiftN(int[] nums, int n) {
    int[] shifted = new int[nums.length];
    for(int i = 0; i < nums.length; i++)
        shifted[(i + n) % nums.length] = nums[i];
    return shifted;
}
{% endhighlight %}

Task 2
---------
Given a string str, return a new string in which all characters at odd positions
appear in reverse order, all characters at even positions remain in their place.
Treat 0 as an even position. 

### Solution

{% highlight java %}
String evenReverse(String str) {
    String result;
    for(int i = 0; i < str.length(); i++) {
        int j = i;
        if(i % 2 == 1)
            j = str.length() - i - str.length()%2;
        result += str.charAt(j);
    }
    return result;
}
{% endhighlight %}

Task 3
---------
Given a string str, check whether the parentheses in the string are correctly
balanced. That means for every opening parenthesis there exists a closed
parenthesis that occurs later in the string and for every closing parenthesis
there exists an opening parenthesis earlier in the string. 

Hint: Maintain a counter that is increased for every opening parenthesis and
decreased for every closing parenthesis. What is the value of this counter at
the end for a correctly balanced expression? What are allowed values of the
counter while analyzing the expression?

### Solution

{% highlight java %}
boolean balancedPars(String str) {
    int check = 0;
    for(int i = 0; i < str.length(); i++) {
        if(str.charAt(i) == '(')
            check++;
        if(std.charAt(i) == ')')
            check--;
          
        if(check < 0)
            return false;
    }
    return check == 0;
}
{% endhighlight %}
