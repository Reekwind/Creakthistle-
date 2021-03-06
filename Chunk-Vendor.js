System.register([], function(w) {
    "use strict";
    return {
        execute: function() {
            w({
                F: Io,
                H: lo,
                J: uo,
                K: el,
                L: Do,
                N: Tl,
                O: kl,
                P: yl,
                S: k,
                U: Al,
                X: Gl,
                Y: Xl,
                a: Kr,
                a3: iu,
                a4: lr,
                a5: nu,
                a7: eu,
                a8: tu,
                a9: Zn,
                aa: Nt,
                ae: To,
                b: bo,
                c: ko,
                d: Ao,
                f: Yr,
                h: Yn,
                j: wo,
                k: ii,
                m: zc,
                n: Rc,
                o: qr,
                q: Wc,
                r: $o,
                s: Hc,
                t: go,
                v: Qc,
                w: Kc,
                x: Fc,
                y: Bc,
                z: Jc
            });
            function k() {
                if (!(this instanceof k))
                    return new k;
                this.size = 0,
                this.uid = 0,
                this.selectors = [],
                this.indexes = Object.create(this.indexes),
                this.activeIndexes = []
            }
            var ae = window.document.documentElement
              , gr = ae.matches || ae.webkitMatchesSelector || ae.mozMatchesSelector || ae.oMatchesSelector || ae.msMatchesSelector;
            k.prototype.matchesSelector = function(t, e) {
                return gr.call(t, e)
            }
            ,
            k.prototype.querySelectorAll = function(t, e) {
                return e.querySelectorAll(t)
            }
            ,
            k.prototype.indexes = [];
            var br = /^#((?:[\w\u00c0-\uFFFF\-]|\\.)+)/g;
            k.prototype.indexes.push({
                name: "ID",
                selector: function(e) {
                    var n;
                    if (n = e.match(br))
                        return n[0].slice(1)
                },
                element: function(e) {
                    if (e.id)
                        return [e.id]
                }
            });
            var vr = /^\.((?:[\w\u00c0-\uFFFF\-]|\\.)+)/g;
            k.prototype.indexes.push({
                name: "CLASS",
                selector: function(e) {
                    var n;
                    if (n = e.match(vr))
                        return n[0].slice(1)
                },
                element: function(e) {
                    var n = e.className;
                    if (n) {
                        if (typeof n == "string")
                            return n.split(/\s/);
                        if (typeof n == "object" && "baseVal"in n)
                            return n.baseVal.split(/\s/)
                    }
                }
            });
            var wr = /^((?:[\w\u00c0-\uFFFF\-]|\\.)+)/g;
            k.prototype.indexes.push({
                name: "TAG",
                selector: function(e) {
                    var n;
                    if (n = e.match(wr))
                        return n[0].toUpperCase()
                },
                element: function(e) {
                    return [e.nodeName.toUpperCase()]
                }
            }),
            k.prototype.indexes.default = {
                name: "UNIVERSAL",
                selector: function() {
                    return !0
                },
                element: function() {
                    return [!0]
                }
            };
            var dt;
            typeof window.Map == "function" ? dt = window.Map : dt = function() {
                function t() {
                    this.map = {}
                }
                return t.prototype.get = function(e) {
                    return this.map[e + " "]
                }
                ,
                t.prototype.set = function(e, n) {
                    this.map[e + " "] = n
                }
                ,
                t
            }();
            var En = /((?:\((?:\([^()]+\)|[^()]+)+\)|\[(?:\[[^\[\]]*\]|['"][^'"]*['"]|[^\[\]'"]+)+\]|\\.|[^ >+~,(\[\\]+)+|[>+~])(\s*,\s*)?((?:.|\r|\n)*)/g;
            function yn(t, e) {
                t = t.slice(0).concat(t.default);
                var n = t.length, i, s, r, o, a = e, c, l, u = [];
                do
                    if (En.exec(""),
                    (r = En.exec(a)) && (a = r[3],
                    r[2] || !a)) {
                        for (i = 0; i < n; i++)
                            if (l = t[i],
                            c = l.selector(r[1])) {
                                for (s = u.length,
                                o = !1; s--; )
                                    if (u[s].index === l && u[s].key === c) {
                                        o = !0;
                                        break
                                    }
                                o || u.push({
                                    index: l,
                                    key: c
                                });
                                break
                            }
                    }
                while (r);
                return u
            }
            function Er(t, e) {
                var n, i, s;
                for (n = 0,
                i = t.length; n < i; n++)
                    if (s = t[n],
                    e.isPrototypeOf(s))
                        return s
            }
            k.prototype.logDefaultIndexUsed = function() {}
            ,
            k.prototype.add = function(t, e) {
                var n, i, s, r, o, a, c, l, u = this.activeIndexes, d = this.selectors;
                if (typeof t == "string") {
                    for (n = {
                        id: this.uid++,
                        selector: t,
                        data: e
                    },
                    c = yn(this.indexes, t),
                    i = 0; i < c.length; i++)
                        l = c[i],
                        r = l.key,
                        s = l.index,
                        o = Er(u, s),
                        o || (o = Object.create(s),
                        o.map = new dt,
                        u.push(o)),
                        s === this.indexes.default && this.logDefaultIndexUsed(n),
                        a = o.map.get(r),
                        a || (a = [],
                        o.map.set(r, a)),
                        a.push(n);
                    this.size++,
                    d.push(t)
                }
            }
            ,
            k.prototype.remove = function(t, e) {
                if (typeof t == "string") {
                    var n, i, s, r, o, a, c, l, u = this.activeIndexes, d = {}, p = arguments.length === 1;
                    for (n = yn(this.indexes, t),
                    s = 0; s < n.length; s++)
                        for (i = n[s],
                        r = u.length; r--; )
                            if (a = u[r],
                            i.index.isPrototypeOf(a)) {
                                if (c = a.map.get(i.key),
                                c)
                                    for (o = c.length; o--; )
                                        l = c[o],
                                        l.selector === t && (p || l.data === e) && (c.splice(o, 1),
                                        d[l.id] = !0);
                                break
                            }
                    this.size -= Object.keys(d).length
                }
            }
            ;
            function kn(t, e) {
                return t.id - e.id
            }
            k.prototype.queryAll = function(t) {
                if (!this.selectors.length)
                    return [];
                var e = {}, n = [], i = this.querySelectorAll(this.selectors.join(", "), t), s, r, o, a, c, l, u, d;
                for (s = 0,
                o = i.length; s < o; s++)
                    for (c = i[s],
                    l = this.matches(c),
                    r = 0,
                    a = l.length; r < a; r++)
                        d = l[r],
                        e[d.id] ? u = e[d.id] : (u = {
                            id: d.id,
                            selector: d.selector,
                            data: d.data,
                            elements: []
                        },
                        e[d.id] = u,
                        n.push(u)),
                        u.elements.push(c);
                return n.sort(kn)
            }
            ,
            k.prototype.matches = function(t) {
                if (!t)
                    return [];
                var e, n, i, s, r, o, a, c, l, u, d, p = this.activeIndexes, f = {}, h = [];
                for (e = 0,
                s = p.length; e < s; e++)
                    if (a = p[e],
                    c = a.element(t),
                    c) {
                        for (n = 0,
                        r = c.length; n < r; n++)
                            if (l = a.map.get(c[n]))
                                for (i = 0,
                                o = l.length; i < o; i++)
                                    u = l[i],
                                    d = u.id,
                                    !f[d] && this.matchesSelector(t, u.selector) && (f[d] = !0,
                                    h.push(u))
                    }
                return h.sort(kn)
            }
            ;
            var _e = null
              , ft = null
              , ht = [];
            function Tn(t, e) {
                var n = [];
                function i() {
                    var r = n;
                    n = [],
                    e(r)
                }
                function s() {
                    for (var r = arguments.length, o = Array(r), a = 0; a < r; a++)
                        o[a] = arguments[a];
                    n.push(o),
                    n.length === 1 && mt(t, i)
                }
                return s
            }
            function mt(t, e) {
                ft || (ft = new MutationObserver(yr)),
                _e || (_e = t.createElement("div"),
                ft.observe(_e, {
                    attributes: !0
                })),
                ht.push(e),
                _e.setAttribute("data-twiddle", "" + Date.now())
            }
            function yr() {
                var t = ht;
                ht = [];
                for (var e = 0; e < t.length; e++)
                    try {
                        t[e]()
                    } catch (n) {
                        setTimeout(function() {
                            throw n
                        }, 0)
                    }
            }
            var An = new WeakMap
              , ce = new WeakMap
              , Pe = new WeakMap
              , q = new WeakMap;
            function He(t, e) {
                for (var n = 0; n < e.length; n++) {
                    var i = e[n]
                      , s = i[0]
                      , r = i[1]
                      , o = i[2];
                    s === Re ? (kr(o, r),
                    Tr(o, r)) : s === Sn ? xn(o, r) : s === Fe && Ar(t.observers, r)
                }
            }
            function kr(t, e) {
                if (e instanceof t.elementConstructor) {
                    var n = An.get(e);
                    if (n || (n = [],
                    An.set(e, n)),
                    n.indexOf(t.id) === -1) {
                        var i = void 0;
                        if (t.initialize && (i = t.initialize.call(void 0, e)),
                        i) {
                            var s = ce.get(e);
                            s || (s = {},
                            ce.set(e, s)),
                            s["" + t.id] = i
                        }
                        n.push(t.id)
                    }
                }
            }
            function Tr(t, e) {
                if (e instanceof t.elementConstructor) {
                    var n = q.get(e);
                    if (n || (n = [],
                    q.set(e, n)),
                    n.indexOf(t.id) === -1) {
                        t.elements.push(e);
                        var i = ce.get(e)
                          , s = i ? i["" + t.id] : null;
                        if (s && s.add && s.add.call(void 0, e),
                        t.subscribe) {
                            var r = t.subscribe.call(void 0, e);
                            if (r) {
                                var o = Pe.get(e);
                                o || (o = {},
                                Pe.set(e, o)),
                                o["" + t.id] = r
                            }
                        }
                        t.add && t.add.call(void 0, e),
                        n.push(t.id)
                    }
                }
            }
            function xn(t, e) {
                if (e instanceof t.elementConstructor) {
                    var n = q.get(e);
                    if (!!n) {
                        var i = t.elements.indexOf(e);
                        if (i !== -1 && t.elements.splice(i, 1),
                        i = n.indexOf(t.id),
                        i !== -1) {
                            var s = ce.get(e)
                              , r = s ? s["" + t.id] : null;
                            if (r && r.remove && r.remove.call(void 0, e),
                            t.subscribe) {
                                var o = Pe.get(e)
                                  , a = o ? o["" + t.id] : null;
                                a && a.unsubscribe && a.unsubscribe()
                            }
                            t.remove && t.remove.call(void 0, e),
                            n.splice(i, 1)
                        }
                        n.length === 0 && q.delete(e)
                    }
                }
            }
            function Ar(t, e) {
                var n = q.get(e);
                if (!!n) {
                    for (var i = n.slice(0), s = 0; s < i.length; s++) {
                        var r = t[i[s]];
                        if (!!r) {
                            var o = r.elements.indexOf(e);
                            o !== -1 && r.elements.splice(o, 1);
                            var a = ce.get(e)
                              , c = a ? a["" + r.id] : null;
                            c && c.remove && c.remove.call(void 0, e);
                            var l = Pe.get(e)
                              , u = l ? l["" + r.id] : null;
                            u && u.unsubscribe && u.unsubscribe(),
                            r.remove && r.remove.call(void 0, e)
                        }
                    }
                    q.delete(e)
                }
            }
            var pt = null;
            function xr(t) {
                if (pt === null) {
                    var e = t.createElement("div")
                      , n = t.createElement("div")
                      , i = t.createElement("div");
                    e.appendChild(n),
                    n.appendChild(i),
                    e.innerHTML = "",
                    pt = i.parentNode !== n
                }
                return pt
            }
            function Ln(t) {
                return "matches"in t || "webkitMatchesSelector"in t || "mozMatchesSelector"in t || "oMatchesSelector"in t || "msMatchesSelector"in t
            }
            var Re = 1
              , Sn = 2
              , Fe = 3;
            function Lr(t, e, n) {
                for (var i = 0; i < n.length; i++) {
                    var s = n[i];
                    s.type === "childList" ? (Mn(t, e, s.addedNodes),
                    Sr(t, e, s.removedNodes)) : s.type === "attributes" && Oe(t, e, s.target)
                }
                xr(t.ownerDocument) && Nr(t, e)
            }
            function Mn(t, e, n) {
                for (var i = 0; i < n.length; i++) {
                    var s = n[i];
                    if (Ln(s))
                        for (var r = t.selectorSet.matches(s), o = 0; o < r.length; o++) {
                            var a = r[o].data;
                            e.push([Re, s, a])
                        }
                    if ("querySelectorAll"in s)
                        for (var c = t.selectorSet.queryAll(s), l = 0; l < c.length; l++)
                            for (var u = c[l], d = u.data, p = u.elements, f = 0; f < p.length; f++)
                                e.push([Re, p[f], d])
                }
            }
            function Sr(t, e, n) {
                for (var i = 0; i < n.length; i++) {
                    var s = n[i];
                    if ("querySelectorAll"in s) {
                        e.push([Fe, s]);
                        for (var r = s.querySelectorAll("*"), o = 0; o < r.length; o++)
                            e.push([Fe, r[o]])
                    }
                }
            }
            function Oe(t, e, n) {
                if (Ln(n))
                    for (var i = t.selectorSet.matches(n), s = 0; s < i.length; s++) {
                        var r = i[s].data;
                        e.push([Re, n, r])
                    }
                if ("querySelectorAll"in n) {
                    var o = q.get(n);
                    if (o)
                        for (var a = 0; a < o.length; a++) {
                            var c = t.observers[o[a]];
                            c && (t.selectorSet.matchesSelector(n, c.selector) || e.push([Sn, n, c]))
                        }
                }
            }
            function Mr(t, e, n) {
                if ("querySelectorAll"in n) {
                    Oe(t, e, n);
                    for (var i = n.querySelectorAll("*"), s = 0; s < i.length; s++)
                        Oe(t, e, i[s])
                }
            }
            function Cr(t, e, n) {
                for (var i = 0; i < n.length; i++)
                    for (var s = n[i], r = s.form ? s.form.elements : t.rootNode.querySelectorAll("input"), o = 0; o < r.length; o++)
                        Oe(t, e, r[o])
            }
            function Nr(t, e) {
                for (var n = 0; n < t.observers.length; n++) {
                    var i = t.observers[n];
                    if (i)
                        for (var s = i.elements, r = 0; r < s.length; r++) {
                            var o = s[r];
                            o.parentNode || e.push([Fe, o])
                        }
                }
            }
            function Ir(t, e) {
                var n = t.readyState;
                n === "interactive" || n === "complete" ? mt(t, e) : t.addEventListener("DOMContentLoaded", mt(t, e))
            }
            var Dr = typeof Symbol == "function" && typeof Symbol.iterator == "symbol" ? function(t) {
                return typeof t
            }
            : function(t) {
                return t && typeof Symbol == "function" && t.constructor === Symbol && t !== Symbol.prototype ? "symbol" : typeof t
            }
              , $r = 0;
            function le(t) {
                this.rootNode = t.nodeType === 9 ? t.documentElement : t,
                this.ownerDocument = t.nodeType === 9 ? t : t.ownerDocument,
                this.observers = [],
                this.selectorSet = new k,
                this.mutationObserver = new MutationObserver(Hr.bind(this, this)),
                this._scheduleAddRootNodes = Tn(this.ownerDocument, Pr.bind(this, this)),
                this._handleThrottledChangedTargets = Tn(this.ownerDocument, Fr.bind(this, this)),
                this.rootNode.addEventListener("change", Rr.bind(this, this), !1),
                Ir(this.ownerDocument, _r.bind(this, this))
            }
            le.prototype.disconnect = function() {
                this.mutationObserver.disconnect()
            }
            ,
            le.prototype.observe = function(t, e) {
                var n = void 0;
                typeof e == "function" ? n = {
                    selector: t,
                    initialize: e
                } : (typeof e == "undefined" ? "undefined" : Dr(e)) === "object" ? (n = e,
                n.selector = t) : n = t;
                var i = this
                  , s = {
                    id: $r++,
                    selector: n.selector,
                    initialize: n.initialize,
                    add: n.add,
                    remove: n.remove,
                    subscribe: n.subscribe,
                    elements: [],
                    elementConstructor: n.hasOwnProperty("constructor") ? n.constructor : this.ownerDocument.defaultView.Element,
                    abort: function() {
                        i._abortObserving(s)
                    }
                };
                return this.selectorSet.add(s.selector, s),
                this.observers[s.id] = s,
                this._scheduleAddRootNodes(),
                s
            }
            ,
            le.prototype._abortObserving = function(t) {
                for (var e = t.elements, n = 0; n < e.length; n++)
                    xn(t, e[n]);
                this.selectorSet.remove(t.selector, t),
                delete this.observers[t.id]
            }
            ,
            le.prototype.triggerObservers = function(t) {
                var e = [];
                Mr(this, e, t),
                He(this, e)
            }
            ;
            function _r(t) {
                t.mutationObserver.observe(t.rootNode, {
                    childList: !0,
                    attributes: !0,
                    subtree: !0
                }),
                t._scheduleAddRootNodes()
            }
            function Pr(t) {
                var e = [];
                Mn(t, e, [t.rootNode]),
                He(t, e)
            }
            function Hr(t, e) {
                var n = [];
                Lr(t, n, e),
                He(t, n)
            }
            function Rr(t, e) {
                t._handleThrottledChangedTargets(e.target)
            }
            function Fr(t, e) {
                var n = [];
                Cr(t, n, e),
                He(t, n)
            }
            var gt = void 0;
            function Or() {
                return gt || (gt = new le(window.document)),
                gt
            }
            function qr() {
                var t;
                return (t = Or()).observe.apply(t, arguments)
            }
            var Cn = {}
              , Nn = {}
              , bt = new WeakMap
              , In = new WeakMap
              , vt = new WeakMap
              , Dn = Object.getOwnPropertyDescriptor(Event.prototype, "currentTarget");
            function $n(t, e, n) {
                var i = t[e];
                return t[e] = function() {
                    return n.apply(t, arguments),
                    i.apply(t, arguments)
                }
                ,
                t
            }
            function Wr(t, e, n) {
                var i = []
                  , s = e;
                do {
                    if (s.nodeType !== 1)
                        break;
                    var r = t.matches(s);
                    if (r.length) {
                        var o = {
                            node: s,
                            observers: r
                        };
                        n ? i.unshift(o) : i.push(o)
                    }
                } while (s = s.parentElement);
                return i
            }
            function Br() {
                bt.set(this, !0)
            }
            function Vr() {
                bt.set(this, !0),
                In.set(this, !0)
            }
            function jr() {
                return vt.get(this) || null
            }
            function _n(t, e) {
                !Dn || Object.defineProperty(t, "currentTarget", {
                    configurable: !0,
                    enumerable: !0,
                    get: e || Dn.get
                })
            }
            function Ur(t) {
                try {
                    return t.eventPhase,
                    !0
                } catch (e) {
                    return !1
                }
            }
            function zr(t) {
                if (!!Ur(t)) {
                    var e = t.eventPhase === 1 ? Nn : Cn
                      , n = e[t.type];
                    if (!!n) {
                        var i = Wr(n, t.target, t.eventPhase === 1);
                        if (!!i.length) {
                            $n(t, "stopPropagation", Br),
                            $n(t, "stopImmediatePropagation", Vr),
                            _n(t, jr);
                            for (var s = 0, r = i.length; s < r && !bt.get(t); s++) {
                                var o = i[s];
                                vt.set(t, o.node);
                                for (var a = 0, c = o.observers.length; a < c && !In.get(t); a++)
                                    o.observers[a].data.call(o.node, t)
                            }
                            vt.delete(t),
                            _n(t)
                        }
                    }
                }
            }
            function Kr(t, e, n) {
                var i = arguments.length > 3 && arguments[3] !== void 0 ? arguments[3] : {}
                  , s = !!i.capture
                  , r = s ? Nn : Cn
                  , o = r[t];
                o || (o = new k,
                r[t] = o,
                document.addEventListener(t, zr, s)),
                o.add(e, n)
            }
            function Yr(t, e, n) {
                return t.dispatchEvent(new CustomEvent(e,{
                    bubbles: !0,
                    cancelable: !0,
                    detail: n
                }))
            }
            /**
 * @license
 * Copyright (c) 2017 The Polymer Project Authors. All rights reserved.
 * This code may only be used under the BSD style license found at
 * http://polymer.github.io/LICENSE.txt
 * The complete set of authors may be found at
 * http://polymer.github.io/AUTHORS.txt
 * The complete set of contributors may be found at
 * http://polymer.github.io/CONTRIBUTORS.txt
 * Code distributed by Google as part of the polymer project is also
 * subject to an additional IP rights grant found at
 * http://polymer.github.io/PATENTS.txt
 */
            const Pn = new WeakMap
              , wt = t=>(...e)=>{
                const n = t(...e);
                return Pn.set(n, !0),
                n
            }
              , ue = t=>typeof t == "function" && Pn.has(t);
            /**
 * @license
 * Copyright (c) 2017 The Polymer Project Authors. All rights reserved.
 * This code may only be used under the BSD style license found at
 * http://polymer.github.io/LICENSE.txt
 * The complete set of authors may be found at
 * http://polymer.github.io/AUTHORS.txt
 * The complete set of contributors may be found at
 * http://polymer.github.io/CONTRIBUTORS.txt
 * Code distributed by Google as part of the polymer project is also
 * subject to an additional IP rights grant found at
 * http://polymer.github.io/PATENTS.txt
 */
            const Hn = window.customElements !== void 0 && window.customElements.polyfillWrapFlushCallback !== void 0
              , Xr = (t,e,n=null,i=null)=>{
                for (; e !== n; ) {
                    const s = e.nextSibling;
                    t.insertBefore(e, i),
                    e = s
                }
            }
              , Et = (t,e,n=null)=>{
                for (; e !== n; ) {
                    const i = e.nextSibling;
                    t.removeChild(e),
                    e = i
                }
            }
            ;
            /**
 * @license
 * Copyright (c) 2018 The Polymer Project Authors. All rights reserved.
 * This code may only be used under the BSD style license found at
 * http://polymer.github.io/LICENSE.txt
 * The complete set of authors may be found at
 * http://polymer.github.io/AUTHORS.txt
 * The complete set of contributors may be found at
 * http://polymer.github.io/CONTRIBUTORS.txt
 * Code distributed by Google as part of the polymer project is also
 * subject to an additional IP rights grant found at
 * http://polymer.github.io/PATENTS.txt
 */
            const S = {}
              , Rn = {};
            /**
 * @license
 * Copyright (c) 2017 The Polymer Project Authors. All rights reserved.
 * This code may only be used under the BSD style license found at
 * http://polymer.github.io/LICENSE.txt
 * The complete set of authors may be found at
 * http://polymer.github.io/AUTHORS.txt
 * The complete set of contributors may be found at
 * http://polymer.github.io/CONTRIBUTORS.txt
 * Code distributed by Google as part of the polymer project is also
 * subject to an additional IP rights grant found at
 * http://polymer.github.io/PATENTS.txt
 */
            const P = `{{lit-${String(Math.random()).slice(2)}}}`
              , Fn = `<!--${P}-->`
              , On = new RegExp(`${P}|${Fn}`)
              , de = "$lit$";
            class Gr {
                constructor(e, n) {
                    this.parts = [],
                    this.element = n;
                    const i = []
                      , s = []
                      , r = document.createTreeWalker(n.content, 133, null, !1);
                    let o = 0
                      , a = -1
                      , c = 0;
                    const {strings: l, values: {length: u}} = e;
                    for (; c < u; ) {
                        const d = r.nextNode();
                        if (d === null) {
                            r.currentNode = s.pop();
                            continue
                        }
                        if (a++,
                        d.nodeType === 1) {
                            if (d.hasAttributes()) {
                                const p = d.attributes
                                  , {length: f} = p;
                                let h = 0;
                                for (let m = 0; m < f; m++)
                                    qn(p[m].name, de) && h++;
                                for (; h-- > 0; ) {
                                    const m = l[c]
                                      , b = yt.exec(m)[2]
                                      , g = b.toLowerCase() + de
                                      , E = d.getAttribute(g);
                                    d.removeAttribute(g);
                                    const x = E.split(On);
                                    this.parts.push({
                                        type: "attribute",
                                        index: a,
                                        name: b,
                                        strings: x
                                    }),
                                    c += x.length - 1
                                }
                            }
                            d.tagName === "TEMPLATE" && (s.push(d),
                            r.currentNode = d.content)
                        } else if (d.nodeType === 3) {
                            const p = d.data;
                            if (p.indexOf(P) >= 0) {
                                const f = d.parentNode
                                  , h = p.split(On)
                                  , m = h.length - 1;
                                for (let b = 0; b < m; b++) {
                                    let g, E = h[b];
                                    if (E === "")
                                        g = C();
                                    else {
                                        const x = yt.exec(E);
                                        x !== null && qn(x[2], de) && (E = E.slice(0, x.index) + x[1] + x[2].slice(0, -de.length) + x[3]),
                                        g = document.createTextNode(E)
                                    }
                                    f.insertBefore(g, d),
                                    this.parts.push({
                                        type: "node",
                                        index: ++a
                                    })
                                }
                                h[m] === "" ? (f.insertBefore(C(), d),
                                i.push(d)) : d.data = h[m],
                                c += m
                            }
                        } else if (d.nodeType === 8)
                            if (d.data === P) {
                                const p = d.parentNode;
                                (d.previousSibling === null || a === o) && (a++,
                                p.insertBefore(C(), d)),
                                o = a,
                                this.parts.push({
                                    type: "node",
                                    index: a
                                }),
                                d.nextSibling === null ? d.data = "" : (i.push(d),
                                a--),
                                c++
                            } else {
                                let p = -1;
                                for (; (p = d.data.indexOf(P, p + 1)) !== -1; )
                                    this.parts.push({
                                        type: "node",
                                        index: -1
                                    }),
                                    c++
                            }
                    }
                    for (const d of i)
                        d.parentNode.removeChild(d)
                }
            }
            const qn = (t,e)=>{
                const n = t.length - e.length;
                return n >= 0 && t.slice(n) === e
            }
              , Qr = t=>t.index !== -1
              , C = ()=>document.createComment("")
              , yt = /([ \x09\x0a\x0c\x0d])([^\0-\x1F\x7F-\x9F "'>=/]+)([ \x09\x0a\x0c\x0d]*=[ \x09\x0a\x0c\x0d]*(?:[^ \x09\x0a\x0c\x0d"'`<>=]*|"[^"]*|'[^']*))$/;
            /**
 * @license
 * Copyright (c) 2017 The Polymer Project Authors. All rights reserved.
 * This code may only be used under the BSD style license found at
 * http://polymer.github.io/LICENSE.txt
 * The complete set of authors may be found at
 * http://polymer.github.io/AUTHORS.txt
 * The complete set of contributors may be found at
 * http://polymer.github.io/CONTRIBUTORS.txt
 * Code distributed by Google as part of the polymer project is also
 * subject to an additional IP rights grant found at
 * http://polymer.github.io/PATENTS.txt
 */
            class Wn {
                constructor(e, n, i) {
                    this.__parts = [],
                    this.template = e,
                    this.processor = n,
                    this.options = i
                }
                update(e) {
                    let n = 0;
                    for (const i of this.__parts)
                        i !== void 0 && i.setValue(e[n]),
                        n++;
                    for (const i of this.__parts)
                        i !== void 0 && i.commit()
                }
                _clone() {
                    const e = Hn ? this.template.element.content.cloneNode(!0) : document.importNode(this.template.element.content, !0)
                      , n = []
                      , i = this.template.parts
                      , s = document.createTreeWalker(e, 133, null, !1);
                    let r = 0, o = 0, a, c = s.nextNode();
                    for (; r < i.length; ) {
                        if (a = i[r],
                        !Qr(a)) {
                            this.__parts.push(void 0),
                            r++;
                            continue
                        }
                        for (; o < a.index; )
                            o++,
                            c.nodeName === "TEMPLATE" && (n.push(c),
                            s.currentNode = c.content),
                            (c = s.nextNode()) === null && (s.currentNode = n.pop(),
                            c = s.nextNode());
                        if (a.type === "node") {
                            const l = this.processor.handleTextExpression(this.options);
                            l.insertAfterNode(c.previousSibling),
                            this.__parts.push(l)
                        } else
                            this.__parts.push(...this.processor.handleAttributeExpressions(c, a.name, a.strings, this.options));
                        r++
                    }
                    return Hn && (document.adoptNode(e),
                    customElements.upgrade(e)),
                    e
                }
            }
            /**
 * @license
 * Copyright (c) 2017 The Polymer Project Authors. All rights reserved.
 * This code may only be used under the BSD style license found at
 * http://polymer.github.io/LICENSE.txt
 * The complete set of authors may be found at
 * http://polymer.github.io/AUTHORS.txt
 * The complete set of contributors may be found at
 * http://polymer.github.io/CONTRIBUTORS.txt
 * Code distributed by Google as part of the polymer project is also
 * subject to an additional IP rights grant found at
 * http://polymer.github.io/PATENTS.txt
 */
            const Jr = ` ${P} `;
            class Bn {
                constructor(e, n, i, s) {
                    this.strings = e,
                    this.values = n,
                    this.type = i,
                    this.processor = s
                }
                getHTML() {
                    const e = this.strings.length - 1;
                    let n = ""
                      , i = !1;
                    for (let s = 0; s < e; s++) {
                        const r = this.strings[s]
                          , o = r.lastIndexOf("<!--");
                        i = (o > -1 || i) && r.indexOf("-->", o + 1) === -1;
                        const a = yt.exec(r);
                        a === null ? n += r + (i ? Jr : Fn) : n += r.substr(0, a.index) + a[1] + a[2] + de + a[3] + P
                    }
                    return n += this.strings[e],
                    n
                }
                getTemplateElement() {
                    const e = document.createElement("template");
                    return e.innerHTML = this.getHTML(),
                    e
                }
            }
            /**
 * @license
 * Copyright (c) 2017 The Polymer Project Authors. All rights reserved.
 * This code may only be used under the BSD style license found at
 * http://polymer.github.io/LICENSE.txt
 * The complete set of authors may be found at
 * http://polymer.github.io/AUTHORS.txt
 * The complete set of contributors may be found at
 * http://polymer.github.io/CONTRIBUTORS.txt
 * Code distributed by Google as part of the polymer project is also
 * subject to an additional IP rights grant found at
 * http://polymer.github.io/PATENTS.txt
 */
            const qe = t=>t === null || !(typeof t == "object" || typeof t == "function")
              , Vn = t=>Array.isArray(t) || !!(t && t[Symbol.iterator]);
            class jn {
                constructor(e, n, i) {
                    this.dirty = !0,
                    this.element = e,
                    this.name = n,
                    this.strings = i,
                    this.parts = [];
                    for (let s = 0; s < i.length - 1; s++)
                        this.parts[s] = this._createPart()
                }
                _createPart() {
                    return new kt(this)
                }
                _getValue() {
                    const e = this.strings
                      , n = e.length - 1;
                    let i = "";
                    for (let s = 0; s < n; s++) {
                        i += e[s];
                        const r = this.parts[s];
                        if (r !== void 0) {
                            const o = r.value;
                            if (qe(o) || !Vn(o))
                                i += typeof o == "string" ? o : String(o);
                            else
                                for (const a of o)
                                    i += typeof a == "string" ? a : String(a)
                        }
                    }
                    return i += e[n],
                    i
                }
                commit() {
                    this.dirty && (this.dirty = !1,
                    this.element.setAttribute(this.name, this._getValue()))
                }
            }
            class kt {
                constructor(e) {
                    this.value = void 0,
                    this.committer = e
                }
                setValue(e) {
                    e !== S && (!qe(e) || e !== this.value) && (this.value = e,
                    ue(e) || (this.committer.dirty = !0))
                }
                commit() {
                    for (; ue(this.value); ) {
                        const e = this.value;
                        this.value = S,
                        e(this)
                    }
                    this.value !== S && this.committer.commit()
                }
            }
            class Y {
                constructor(e) {
                    this.value = void 0,
                    this.__pendingValue = void 0,
                    this.options = e
                }
                appendInto(e) {
                    this.startNode = e.appendChild(C()),
                    this.endNode = e.appendChild(C())
                }
                insertAfterNode(e) {
                    this.startNode = e,
                    this.endNode = e.nextSibling
                }
                appendIntoPart(e) {
                    e.__insert(this.startNode = C()),
                    e.__insert(this.endNode = C())
                }
                insertAfterPart(e) {
                    e.__insert(this.startNode = C()),
                    this.endNode = e.endNode,
                    e.endNode = this.startNode
                }
                setValue(e) {
                    this.__pendingValue = e
                }
                commit() {
                    for (; ue(this.__pendingValue); ) {
                        const n = this.__pendingValue;
                        this.__pendingValue = S,
                        n(this)
                    }
                    const e = this.__pendingValue;
                    e !== S && (qe(e) ? e !== this.value && this.__commitText(e) : e instanceof Bn ? this.__commitTemplateResult(e) : e instanceof Node ? this.__commitNode(e) : Vn(e) ? this.__commitIterable(e) : e === Rn ? (this.value = Rn,
                    this.clear()) : this.__commitText(e))
                }
                __insert(e) {
                    this.endNode.parentNode.insertBefore(e, this.endNode)
                }
                __commitNode(e) {
                    this.value !== e && (this.clear(),
                    this.__insert(e),
                    this.value = e)
                }
                __commitText(e) {
                    const n = this.startNode.nextSibling;
                    e = e == null ? "" : e;
                    const i = typeof e == "string" ? e : String(e);
                    n === this.endNode.previousSibling && n.nodeType === 3 ? n.data = i : this.__commitNode(document.createTextNode(i)),
                    this.value = e
                }
                __commitTemplateResult(e) {
                    const n = this.options.templateFactory(e);
                    if (this.value instanceof Wn && this.value.template === n)
                        this.value.update(e.values);
                    else {
                        const i = new Wn(n,e.processor,this.options)
                          , s = i._clone();
                        i.update(e.values),
                        this.__commitNode(s),
                        this.value = i
                    }
                }
                __commitIterable(e) {
                    Array.isArray(this.value) || (this.value = [],
                    this.clear());
                    const n = this.value;
                    let i = 0, s;
                    for (const r of e)
                        s = n[i],
                        s === void 0 && (s = new Y(this.options),
                        n.push(s),
                        i === 0 ? s.appendIntoPart(this) : s.insertAfterPart(n[i - 1])),
                        s.setValue(r),
                        s.commit(),
                        i++;
                    i < n.length && (n.length = i,
                    this.clear(s && s.endNode))
                }
                clear(e=this.startNode) {
                    Et(this.startNode.parentNode, e.nextSibling, this.endNode)
                }
            }
            class Zr {
                constructor(e, n, i) {
                    if (this.value = void 0,
                    this.__pendingValue = void 0,
                    i.length !== 2 || i[0] !== "" || i[1] !== "")
                        throw new Error("Boolean attributes can only contain a single expression");
                    this.element = e,
                    this.name = n,
                    this.strings = i
                }
                setValue(e) {
                    this.__pendingValue = e
                }
                commit() {
                    for (; ue(this.__pendingValue); ) {
                        const n = this.__pendingValue;
                        this.__pendingValue = S,
                        n(this)
                    }
                    if (this.__pendingValue === S)
                        return;
                    const e = !!this.__pendingValue;
                    this.value !== e && (e ? this.element.setAttribute(this.name, "") : this.element.removeAttribute(this.name),
                    this.value = e),
                    this.__pendingValue = S
                }
            }
            class eo extends jn {
                constructor(e, n, i) {
                    super(e, n, i);
                    this.single = i.length === 2 && i[0] === "" && i[1] === ""
                }
                _createPart() {
                    return new to(this)
                }
                _getValue() {
                    return this.single ? this.parts[0].value : super._getValue()
                }
                commit() {
                    this.dirty && (this.dirty = !1,
                    this.element[this.name] = this._getValue())
                }
            }
            class to extends kt {
            }
            let Un = !1;
            try {
                const t = {
                    get capture() {
                        return Un = !0,
                        !1
                    }
                };
                window.addEventListener("test", t, t),
                window.removeEventListener("test", t, t)
            } catch (t) {}
            class no {
                constructor(e, n, i) {
                    this.value = void 0,
                    this.__pendingValue = void 0,
                    this.element = e,
                    this.eventName = n,
                    this.eventContext = i,
                    this.__boundHandleEvent = s=>this.handleEvent(s)
                }
                setValue(e) {
                    this.__pendingValue = e
                }
                commit() {
                    for (; ue(this.__pendingValue); ) {
                        const r = this.__pendingValue;
                        this.__pendingValue = S,
                        r(this)
                    }
                    if (this.__pendingValue === S)
                        return;
                    const e = this.__pendingValue
                      , n = this.value
                      , i = e == null || n != null && (e.capture !== n.capture || e.once !== n.once || e.passive !== n.passive)
                      , s = e != null && (n == null || i);
                    i && this.element.removeEventListener(this.eventName, this.__boundHandleEvent, this.__options),
                    s && (this.__options = io(e),
                    this.element.addEventListener(this.eventName, this.__boundHandleEvent, this.__options)),
                    this.value = e,
                    this.__pendingValue = S
                }
                handleEvent(e) {
                    typeof this.value == "function" ? this.value.call(this.eventContext || this.element, e) : this.value.handleEvent(e)
                }
            }
            const io = t=>t && (Un ? {
                capture: t.capture,
                passive: t.passive,
                once: t.once
            } : t.capture);
            /**
 * @license
 * Copyright (c) 2017 The Polymer Project Authors. All rights reserved.
 * This code may only be used under the BSD style license found at
 * http://polymer.github.io/LICENSE.txt
 * The complete set of authors may be found at
 * http://polymer.github.io/AUTHORS.txt
 * The complete set of contributors may be found at
 * http://polymer.github.io/CONTRIBUTORS.txt
 * Code distributed by Google as part of the polymer project is also
 * subject to an additional IP rights grant found at
 * http://polymer.github.io/PATENTS.txt
 */
            class so {
                handleAttributeExpressions(e, n, i, s) {
                    const r = n[0];
                    return r === "." ? new eo(e,n.slice(1),i).parts : r === "@" ? [new no(e,n.slice(1),s.eventContext)] : r === "?" ? [new Zr(e,n.slice(1),i)] : new jn(e,n,i).parts
                }
                handleTextExpression(e) {
                    return new Y(e)
                }
            }
            const ro = new so;
            /**
 * @license
 * Copyright (c) 2017 The Polymer Project Authors. All rights reserved.
 * This code may only be used under the BSD style license found at
 * http://polymer.github.io/LICENSE.txt
 * The complete set of authors may be found at
 * http://polymer.github.io/AUTHORS.txt
 * The complete set of contributors may be found at
 * http://polymer.github.io/CONTRIBUTORS.txt
 * Code distributed by Google as part of the polymer project is also
 * subject to an additional IP rights grant found at
 * http://polymer.github.io/PATENTS.txt
 */
            function oo(t) {
                let e = zn.get(t.type);
                e === void 0 && (e = {
                    stringsArray: new WeakMap,
                    keyString: new Map
                },
                zn.set(t.type, e));
                let n = e.stringsArray.get(t.strings);
                if (n !== void 0)
                    return n;
                const i = t.strings.join(P);
                return n = e.keyString.get(i),
                n === void 0 && (n = new Gr(t,t.getTemplateElement()),
                e.keyString.set(i, n)),
                e.stringsArray.set(t.strings, n),
                n
            }
            const zn = new Map;
            /**
 * @license
 * Copyright (c) 2017 The Polymer Project Authors. All rights reserved.
 * This code may only be used under the BSD style license found at
 * http://polymer.github.io/LICENSE.txt
 * The complete set of authors may be found at
 * http://polymer.github.io/AUTHORS.txt
 * The complete set of contributors may be found at
 * http://polymer.github.io/CONTRIBUTORS.txt
 * Code distributed by Google as part of the polymer project is also
 * subject to an additional IP rights grant found at
 * http://polymer.github.io/PATENTS.txt
 */
            const Kn = new WeakMap
              , ru = w("g", (t,e,n)=>{
                let i = Kn.get(e);
                i === void 0 && (Et(e, e.firstChild),
                Kn.set(e, i = new Y(Object.assign({
                    templateFactory: oo
                }, n))),
                i.appendInto(e)),
                i.setValue(t),
                i.commit()
            }
            );
            /**
 * @license
 * Copyright (c) 2017 The Polymer Project Authors. All rights reserved.
 * This code may only be used under the BSD style license found at
 * http://polymer.github.io/LICENSE.txt
 * The complete set of authors may be found at
 * http://polymer.github.io/AUTHORS.txt
 * The complete set of contributors may be found at
 * http://polymer.github.io/CONTRIBUTORS.txt
 * Code distributed by Google as part of the polymer project is also
 * subject to an additional IP rights grant found at
 * http://polymer.github.io/PATENTS.txt
 */
            (window.litHtmlVersions || (window.litHtmlVersions = [])).push("1.1.2");
            const ou = w("i", (t,...e)=>new Bn(t,e,"html",ro));
            class Tt {
                constructor(e) {
                    this.children = [],
                    this.parent = e
                }
                delete(e) {
                    const n = this.children.indexOf(e);
                    return n === -1 ? !1 : (this.children = this.children.slice(0, n).concat(this.children.slice(n + 1)),
                    this.children.length === 0 && this.parent.delete(this),
                    !0)
                }
                add(e) {
                    return this.children.push(e),
                    this
                }
            }
            class We {
                constructor(e) {
                    this.parent = null,
                    this.children = {},
                    this.parent = e || null
                }
                get(e) {
                    return this.children[e]
                }
                insert(e) {
                    let n = this;
                    for (let i = 0; i < e.length; i += 1) {
                        const s = e[i];
                        let r = n.get(s);
                        if (i === e.length - 1)
                            return r instanceof We && (n.delete(r),
                            r = null),
                            r || (r = new Tt(n),
                            n.children[s] = r),
                            r;
                        r instanceof Tt && (r = null),
                        r || (r = new We(n),
                        n.children[s] = r),
                        n = r
                    }
                    return n
                }
                delete(e) {
                    for (const n in this.children)
                        if (this.children[n] === e) {
                            const s = delete this.children[n];
                            return Object.keys(this.children).length === 0 && this.parent && this.parent.delete(this),
                            s
                        }
                    return !1
                }
            }
            function At(t) {
                if (!(t instanceof HTMLElement))
                    return !1;
                const e = t.nodeName.toLowerCase()
                  , n = (t.getAttribute("type") || "").toLowerCase();
                return e === "select" || e === "textarea" || e === "input" && n !== "submit" && n !== "reset" && n !== "checkbox" && n !== "radio" || t.isContentEditable
            }
            function ao(t) {
                At(t) ? t.focus() : t.click()
            }
            function co(t) {
                return t.split(",").map(e=>e.split(" "))
            }
            function Yn(t) {
                const e = t.code.startsWith("Key") && t.shiftKey && t.key.toUpperCase() === t.key;
                return `${t.ctrlKey ? "Control+" : ""}${t.altKey ? "Alt+" : ""}${t.metaKey ? "Meta+" : ""}${t.shiftKey && !e ? "Shift+" : ""}${t.key}`
            }
            const fe = new We
              , Xn = new WeakMap;
            let xt = fe
              , Be = null;
            function Lt() {
                Be = null,
                xt = fe
            }
            function Gn(t) {
                if (t.defaultPrevented || !(t.target instanceof Node))
                    return;
                if (At(t.target)) {
                    const n = t.target;
                    if (!n.id || !n.ownerDocument.querySelector(`[data-hotkey-scope=${n.id}]`))
                        return
                }
                Be != null && window.clearTimeout(Be),
                Be = window.setTimeout(Lt, 1500);
                const e = xt.get(Yn(t));
                if (!e) {
                    Lt();
                    return
                }
                if (xt = e,
                e instanceof Tt) {
                    const n = t.target;
                    let i = !1, s;
                    const r = At(n);
                    for (let o = e.children.length - 1; o >= 0; o -= 1) {
                        s = e.children[o];
                        const a = s.getAttribute("data-hotkey-scope");
                        if (!r && !a || r && n.id === a) {
                            i = !0;
                            break
                        }
                    }
                    s && i && (ao(s),
                    t.preventDefault()),
                    Lt()
                }
            }
            function lo(t, e) {
                Object.keys(fe.children).length === 0 && document.addEventListener("keydown", Gn);
                const i = co(e || t.getAttribute("data-hotkey") || "").map(s=>fe.insert(s).add(t));
                Xn.set(t, i)
            }
            function uo(t) {
                const e = Xn.get(t);
                if (e && e.length)
                    for (const n of e)
                        n && n.delete(t);
                Object.keys(fe.children).length === 0 && document.removeEventListener("keydown", Gn)
            }
            const St = new WeakSet;
            function fo(t) {
                St.add(t),
                t.shadowRoot && (Mt(t.shadowRoot),
                Qn(t.shadowRoot)),
                Mt(t),
                Qn(t.ownerDocument)
            }
            const Ve = new WeakMap;
            function Qn(t=document) {
                if (Ve.has(t))
                    return Ve.get(t);
                let e = !1;
                const n = new MutationObserver(s=>{
                    for (const r of s)
                        if (r.type === "attributes" && r.target instanceof Element)
                            Ct(r.target);
                        else if (r.type === "childList" && r.addedNodes.length)
                            for (const o of r.addedNodes)
                                o instanceof Element && Mt(o)
                }
                );
                n.observe(t, {
                    childList: !0,
                    subtree: !0,
                    attributeFilter: ["data-action"]
                });
                const i = {
                    get closed() {
                        return e
                    },
                    unsubscribe() {
                        e = !0,
                        Ve.delete(t),
                        n.disconnect()
                    }
                };
                return Ve.set(t, i),
                i
            }
            function Mt(t) {
                for (const e of t.querySelectorAll("[data-action]"))
                    Ct(e);
                t instanceof Element && t.hasAttribute("data-action") && Ct(t)
            }
            function ho(t) {
                const e = t.currentTarget;
                for (const n of Jn(e))
                    if (t.type === n.type) {
                        const i = e.closest(n.tag);
                        St.has(i) && typeof i[n.method] == "function" && i[n.method](t);
                        const s = e.getRootNode();
                        if (s instanceof ShadowRoot && St.has(s.host) && s.host.matches(n.tag)) {
                            const r = s.host;
                            typeof r[n.method] == "function" && r[n.method](t)
                        }
                    }
            }
            function *Jn(t) {
                for (const e of (t.getAttribute("data-action") || "").trim().split(/\s+/)) {
                    const n = e.lastIndexOf(":")
                      , i = e.lastIndexOf("#");
                    yield{
                        type: e.slice(0, n),
                        tag: e.slice(n + 1, i),
                        method: e.slice(i + 1)
                    }
                }
            }
            function Ct(t) {
                for (const e of Jn(t))
                    t.addEventListener(e.type, ho)
            }
            function mo(t) {
                const e = t.name.replace(/([A-Z]($|[a-z]))/g, "-$1").replace(/(^-|-Element$)/g, "").toLowerCase();
                window.customElements.get(e) || (window[t.name] = t,
                window.customElements.define(e, t))
            }
            function Zn(t, e) {
                const n = t.tagName.toLowerCase();
                if (t.shadowRoot) {
                    for (const i of t.shadowRoot.querySelectorAll(`[data-target~="${n}.${e}"]`))
                        if (!i.closest(n))
                            return i
                }
                for (const i of t.querySelectorAll(`[data-target~="${n}.${e}"]`))
                    if (i.closest(n) === t)
                        return i
            }
            function po(t, e) {
                const n = t.tagName.toLowerCase()
                  , i = [];
                if (t.shadowRoot)
                    for (const s of t.shadowRoot.querySelectorAll(`[data-targets~="${n}.${e}"]`))
                        s.closest(n) || i.push(s);
                for (const s of t.querySelectorAll(`[data-targets~="${n}.${e}"]`))
                    s.closest(n) === t && i.push(s);
                return i
            }
            function go(t, e) {
                return Object.defineProperty(t, e, {
                    configurable: !0,
                    get() {
                        return Zn(this, e)
                    }
                })
            }
            function bo(t, e) {
                return Object.defineProperty(t, e, {
                    configurable: !0,
                    get() {
                        return po(this, e)
                    }
                })
            }
            function vo(t) {
                for (const e of t.querySelectorAll("template[data-shadowroot]"))
                    e.parentElement === t && t.attachShadow({
                        mode: e.getAttribute("data-shadowroot") === "closed" ? "closed" : "open"
                    }).append(e.content.cloneNode(!0))
            }
            const he = new WeakMap;
            function wo(t, e) {
                he.has(t) || he.set(t, []),
                he.get(t).push(e)
            }
            function Eo(t, e) {
                e || (e = he.get(Object.getPrototypeOf(t)) || []);
                for (const n of e) {
                    const i = t[n]
                      , s = ei(n);
                    let r = {
                        get() {
                            return this.getAttribute(s) || ""
                        },
                        set(o) {
                            this.setAttribute(s, o || "")
                        }
                    };
                    typeof i == "number" ? r = {
                        get() {
                            return Number(this.getAttribute(s) || 0)
                        },
                        set(o) {
                            this.setAttribute(s, o)
                        }
                    } : typeof i == "boolean" && (r = {
                        get() {
                            return this.hasAttribute(s)
                        },
                        set(o) {
                            this.toggleAttribute(s, o)
                        }
                    }),
                    Object.defineProperty(t, n, r),
                    n in t && !t.hasAttribute(s) && r.set.call(t, i)
                }
            }
            function ei(t) {
                return `data-${t.replace(/([A-Z]($|[a-z]))/g, "-$1")}`.replace(/--/g, "-").toLowerCase()
            }
            function yo(t) {
                let e = t.observedAttributes || [];
                Object.defineProperty(t, "observedAttributes", {
                    get() {
                        const n = he.get(t.prototype);
                        return n ? n.map(ei).concat(e) : e
                    },
                    set(n) {
                        e = n
                    }
                })
            }
            function ko(t) {
                const e = t.prototype.connectedCallback;
                t.prototype.connectedCallback = function() {
                    this.toggleAttribute("data-catalyst", !0),
                    vo(this),
                    Eo(this),
                    e && e.call(this),
                    fo(this)
                }
                ,
                yo(t),
                mo(t)
            }
            /**
 * @license
 * Copyright (c) 2017 The Polymer Project Authors. All rights reserved.
 * This code may only be used under the BSD style license found at
 * http://polymer.github.io/LICENSE.txt
 * The complete set of authors may be found at
 * http://polymer.github.io/AUTHORS.txt
 * The complete set of contributors may be found at
 * http://polymer.github.io/CONTRIBUTORS.txt
 * Code distributed by Google as part of the polymer project is also
 * subject to an additional IP rights grant found at
 * http://polymer.github.io/PATENTS.txt
 */
            const ti = new WeakMap
              , ni = 2147483647
              , au = w("u", wt((...t)=>e=>{
                let n = ti.get(e);
                n === void 0 && (n = {
                    lastRenderedIndex: ni,
                    values: []
                },
                ti.set(e, n));
                const i = n.values;
                let s = i.length;
                n.values = t;
                for (let r = 0; r < t.length && !(r > n.lastRenderedIndex); r++) {
                    const o = t[r];
                    if (qe(o) || typeof o.then != "function") {
                        e.setValue(o),
                        n.lastRenderedIndex = r;
                        break
                    }
                    r < s && o === i[r] || (n.lastRenderedIndex = ni,
                    s = 0,
                    Promise.resolve(o).then(a=>{
                        const c = n.values.indexOf(o);
                        c > -1 && c < n.lastRenderedIndex && (n.lastRenderedIndex = c,
                        e.setValue(a),
                        e.commit())
                    }
                    ))
                }
            }
            ));
            function Nt(t, e=0, {start: n=!0, middle: i=!0, once: s=!1}={}) {
                let r = 0, o, a = !1;
                function c(...l) {
                    if (a)
                        return;
                    const u = Date.now() - r;
                    r = Date.now(),
                    n ? (n = !1,
                    t.apply(this, l),
                    s && c.cancel()) : (i && u < e || !i) && (clearTimeout(o),
                    o = setTimeout(()=>{
                        r = Date.now(),
                        t.apply(this, l),
                        s && c.cancel()
                    }
                    , i ? e - u : e))
                }
                return c.cancel = ()=>{
                    clearTimeout(o),
                    a = !0
                }
                ,
                c
            }
            function ii(t, e=0, {start: n=!1, middle: i=!1, once: s=!1}={}) {
                return Nt(t, e, {
                    start: n,
                    middle: i,
                    once: s
                })
            }
            function To(t=0, e={}) {
                return (n,i,s)=>{
                    if (!s || typeof s.value != "function")
                        throw new Error("debounce can only decorate functions");
                    const r = s.value;
                    s.value = Nt(r, t, e),
                    Object.defineProperty(n, i, s)
                }
            }
            function Ao(t=0, e={}) {
                return (n,i,s)=>{
                    if (!s || typeof s.value != "function")
                        throw new Error("debounce can only decorate functions");
                    const r = s.value;
                    s.value = ii(r, t, e),
                    Object.defineProperty(n, i, s)
                }
            }
            function *si(t) {
                let e = ""
                  , n = 0
                  , i = !1;
                for (let s = 0; s < t.length; s += 1)
                    t[s] === "{" && t[s + 1] === "{" && t[s - 1] !== "\\" && !i ? (i = !0,
                    e && (yield{
                        type: "string",
                        start: n,
                        end: s,
                        value: e
                    }),
                    e = "{{",
                    n = s,
                    s += 2) : t[s] === "}" && t[s + 1] === "}" && t[s - 1] !== "\\" && i && (i = !1,
                    yield{
                        type: "part",
                        start: n,
                        end: s + 2,
                        value: e.slice(2).trim()
                    },
                    e = "",
                    s += 2,
                    n = s),
                    e += t[s] || "";
                e && (yield{
                    type: "string",
                    start: n,
                    end: t.length,
                    value: e
                })
            }
            var ri = function(t, e, n) {
                if (!e.has(t))
                    throw new TypeError("attempted to set private field on non-instance");
                return e.set(t, n),
                n
            }, H = function(t, e) {
                if (!e.has(t))
                    throw new TypeError("attempted to get private field on non-instance");
                return e.get(t)
            }, N, je;
            class It {
                constructor(e, n) {
                    this.expression = n,
                    N.set(this, void 0),
                    je.set(this, ""),
                    ri(this, N, e),
                    H(this, N).updateParent("")
                }
                get attributeName() {
                    return H(this, N).attr.name
                }
                get attributeNamespace() {
                    return H(this, N).attr.namespaceURI
                }
                get value() {
                    return H(this, je)
                }
                set value(e) {
                    ri(this, je, e || ""),
                    H(this, N).updateParent(e)
                }
                get element() {
                    return H(this, N).element
                }
                get booleanValue() {
                    return H(this, N).booleanValue
                }
                set booleanValue(e) {
                    H(this, N).booleanValue = e
                }
            }
            N = new WeakMap,
            je = new WeakMap;
            class xo {
                constructor(e, n) {
                    this.element = e,
                    this.attr = n,
                    this.partList = []
                }
                get booleanValue() {
                    return this.element.hasAttributeNS(this.attr.namespaceURI, this.attr.name)
                }
                set booleanValue(e) {
                    if (this.partList.length !== 1)
                        throw new DOMException("Operation not supported","NotSupportedError");
                    this.partList[0].value = e ? "" : null
                }
                append(e) {
                    this.partList.push(e)
                }
                updateParent(e) {
                    if (this.partList.length === 1 && e === null)
                        this.element.removeAttributeNS(this.attr.namespaceURI, this.attr.name);
                    else {
                        const n = this.partList.map(i=>typeof i == "string" ? i : i.value).join("");
                        this.element.setAttributeNS(this.attr.namespaceURI, this.attr.name, n)
                    }
                }
            }
            var oi = function(t, e, n) {
                if (!e.has(t))
                    throw new TypeError("attempted to set private field on non-instance");
                return e.set(t, n),
                n
            }, X = function(t, e) {
                if (!e.has(t))
                    throw new TypeError("attempted to get private field on non-instance");
                return e.get(t)
            }, I;
            class G {
                constructor(e, n) {
                    this.expression = n,
                    I.set(this, void 0),
                    oi(this, I, [e]),
                    e.textContent = ""
                }
                get value() {
                    return X(this, I).map(e=>e.textContent).join("")
                }
                set value(e) {
                    this.replace(e)
                }
                get previousSibling() {
                    return X(this, I)[0].previousSibling
                }
                get nextSibling() {
                    return X(this, I)[X(this, I).length - 1].nextSibling
                }
                replace(...e) {
                    const n = e.map(i=>typeof i == "string" ? new Text(i) : i);
                    n.length || n.push(new Text("")),
                    X(this, I)[0].before(...n);
                    for (const i of X(this, I))
                        i.remove();
                    oi(this, I, n)
                }
            }
            I = new WeakMap;
            function Dt(t) {
                return {
                    createCallback(e, n, i) {
                        this.processCallback(e, n, i)
                    },
                    processCallback(e, n, i) {
                        var s;
                        if (!(typeof i != "object" || !i)) {
                            for (const r of n)
                                if (r.expression in i) {
                                    const o = (s = i[r.expression]) !== null && s !== void 0 ? s : "";
                                    t(r, o)
                                }
                        }
                    }
                }
            }
            function $t(t, e) {
                t.value = String(e)
            }
            function ai(t, e) {
                return typeof e == "boolean" && t instanceof It && typeof t.element[t.attributeName] == "boolean" ? (t.booleanValue = e,
                !0) : !1
            }
            const Lo = Dt($t)
              , cu = w("p", Dt((t,e)=>{
                ai(t, e) || $t(t, e)
            }
            ));
            var ci = function(t, e, n) {
                if (!e.has(t))
                    throw new TypeError("attempted to set private field on non-instance");
                return e.set(t, n),
                n
            }, Ue = function(t, e) {
                if (!e.has(t))
                    throw new TypeError("attempted to get private field on non-instance");
                return e.get(t)
            }, me, pe;
            function *So(t) {
                const e = t.ownerDocument.createTreeWalker(t, NodeFilter.SHOW_TEXT | NodeFilter.SHOW_ELEMENT, null, !1);
                let n;
                for (; n = e.nextNode(); )
                    if (n instanceof Element && n.hasAttributes())
                        for (let i = 0; i < n.attributes.length; i += 1) {
                            const s = n.attributes.item(i);
                            if (s && s.value.includes("{{")) {
                                const r = new xo(n,s);
                                for (const o of si(s.value))
                                    if (o.type === "string")
                                        r.append(o.value);
                                    else {
                                        const a = new It(r,o.value);
                                        r.append(a),
                                        yield a
                                    }
                            }
                        }
                    else if (n instanceof Text && n.textContent && n.textContent.includes("{{"))
                        for (const i of si(n.textContent)) {
                            i.end < n.textContent.length && n.splitText(i.end),
                            i.type === "part" && (yield new G(n,i.value));
                            break
                        }
            }
            class ge extends DocumentFragment {
                constructor(e, n, i=Lo) {
                    var s, r;
                    super();
                    me.set(this, void 0),
                    pe.set(this, void 0),
                    Object.getPrototypeOf(this !== ge.prototype) && Object.setPrototypeOf(this, ge.prototype),
                    this.appendChild(e.content.cloneNode(!0)),
                    ci(this, pe, Array.from(So(this))),
                    ci(this, me, i),
                    (r = (s = Ue(this, me)).createCallback) === null || r === void 0 || r.call(s, this, Ue(this, pe), n)
                }
                update(e) {
                    Ue(this, me).processCallback(this, Ue(this, pe), e)
                }
            }
            w("e", ge),
            me = new WeakMap,
            pe = new WeakMap;
            function Mo(t, e) {
                const n = t.createElement("template");
                return n.innerHTML = e,
                t.importNode(n.content, !0)
            }
            function Co(t) {
                const e = new URLSearchParams
                  , n = new FormData(t).entries();
                for (const [i,s] of [...n])
                    e.append(i, s.toString());
                return e.toString()
            }
            class No extends Error {
                constructor(e, n) {
                    super(e);
                    this.response = n
                }
            }
            function li() {
                let t, e;
                return [new Promise(function(i, s) {
                    t = i,
                    e = s
                }
                ), t, e]
            }
            let Q;
            const ui = []
              , di = [];
            function Io(t) {
                ui.push(t)
            }
            function Do(t) {
                di.push(t)
            }
            function $o(t, e) {
                Q || (Q = new Map,
                document.addEventListener("submit", Po));
                const n = Q.get(t) || [];
                Q.set(t, [...n, e])
            }
            function _o(t) {
                const e = [];
                for (const n of Q.keys())
                    if (t.matches(n)) {
                        const i = Q.get(n) || [];
                        e.push(...i)
                    }
                return e
            }
            function Po(t) {
                if (!(t.target instanceof HTMLFormElement))
                    return;
                const e = t.target
                  , n = _o(e);
                if (n.length === 0)
                    return;
                const i = Ro(e)
                  , [s,r,o] = li();
                t.preventDefault(),
                Ho(n, e, i, s).then(async a=>{
                    if (a) {
                        for (const c of di)
                            await c(e);
                        Fo(i).then(r, o).catch(()=>{}
                        ).then(()=>{
                            for (const c of ui)
                                c(e)
                        }
                        )
                    } else
                        e.submit()
                }
                , a=>{
                    e.submit(),
                    setTimeout(()=>{
                        throw a
                    }
                    )
                }
                )
            }
            async function Ho(t, e, n, i) {
                let s = !1;
                for (const r of t) {
                    const [o,a] = li()
                      , c = ()=>(s = !0,
                    a(),
                    i)
                      , l = {
                        text: c,
                        json: ()=>(n.headers.set("Accept", "application/json"),
                        c()),
                        html: ()=>(n.headers.set("Accept", "text/html"),
                        c())
                    };
                    await Promise.race([o, r(e, l, n)])
                }
                return s
            }
            function Ro(t) {
                const e = {
                    method: t.method || "GET",
                    url: t.action,
                    headers: new Headers({
                        "X-Requested-With": "XMLHttpRequest"
                    }),
                    body: null
                };
                if (e.method.toUpperCase() === "GET") {
                    const n = Co(t);
                    n && (e.url += (~e.url.indexOf("?") ? "&" : "?") + n)
                } else
                    e.body = new FormData(t);
                return e
            }
            async function Fo(t) {
                const e = await window.fetch(t.url, {
                    method: t.method,
                    body: t.body !== null ? t.body : void 0,
                    headers: t.headers,
                    credentials: "same-origin"
                })
                  , n = {
                    url: e.url,
                    status: e.status,
                    statusText: e.statusText,
                    headers: e.headers,
                    text: "",
                    get json() {
                        const s = this
                          , r = JSON.parse(s.text);
                        return delete s.json,
                        s.json = r,
                        s.json
                    },
                    get html() {
                        const s = this;
                        return delete s.html,
                        s.html = Mo(document, s.text),
                        s.html
                    }
                }
                  , i = await e.text();
                if (n.text = i,
                e.ok)
                    return n;
                throw new No("request failed",n)
            }
            const fi = "data-close-dialog"
              , hi = `[${fi}]`;
            function mi(t) {
                let e = Array.from(t.querySelectorAll("[autofocus]")).filter(gi)[0];
                e || (e = t,
                t.setAttribute("tabindex", "-1")),
                e.focus()
            }
            function pi(t) {
                const e = t.currentTarget;
                e instanceof Element && (t.key === "Escape" || t.key === "Esc" ? (_t(e, !1),
                t.stopPropagation()) : t.key === "Tab" && qo(t))
            }
            function gi(t) {
                return t.tabIndex >= 0 && !t.disabled && Oo(t)
            }
            function Oo(t) {
                return !t.hidden && (!t.type || t.type !== "hidden") && (t.offsetWidth > 0 || t.offsetHeight > 0)
            }
            function qo(t) {
                if (!(t.currentTarget instanceof Element))
                    return;
                const e = t.currentTarget.querySelector("details-dialog");
                if (!e)
                    return;
                t.preventDefault();
                const n = Array.from(e.querySelectorAll("*")).filter(gi);
                if (n.length === 0)
                    return;
                const i = t.shiftKey ? -1 : 1
                  , s = e.getRootNode()
                  , r = e.contains(s.activeElement) ? s.activeElement : null;
                let o = i === -1 ? -1 : 0;
                if (r instanceof HTMLElement) {
                    const a = n.indexOf(r);
                    a !== -1 && (o = a + i)
                }
                o < 0 ? o = n.length - 1 : o = o % n.length,
                n[o].focus()
            }
            function bi(t) {
                const e = t.querySelector("details-dialog");
                return e instanceof J ? e.dispatchEvent(new CustomEvent("details-dialog-close",{
                    bubbles: !0,
                    cancelable: !0
                })) : !0
            }
            function vi(t) {
                if (!(t.currentTarget instanceof Element))
                    return;
                const e = t.currentTarget.closest("details");
                !e || !e.hasAttribute("open") || bi(e) || (t.preventDefault(),
                t.stopPropagation())
            }
            function wi(t) {
                const e = t.currentTarget;
                if (!(e instanceof Element))
                    return;
                const n = e.querySelector("details-dialog");
                if (n instanceof J)
                    if (e.hasAttribute("open")) {
                        const i = "getRootNode"in n ? n.getRootNode() : document;
                        i.activeElement instanceof HTMLElement && W.set(n, {
                            details: e,
                            activeElement: i.activeElement
                        }),
                        mi(n),
                        e.addEventListener("keydown", pi)
                    } else {
                        for (const s of n.querySelectorAll("form"))
                            s.reset();
                        const i = Wo(e, n);
                        i && i.focus(),
                        e.removeEventListener("keydown", pi)
                    }
            }
            function Wo(t, e) {
                const n = W.get(e);
                return n && n.activeElement instanceof HTMLElement ? n.activeElement : t.querySelector("summary")
            }
            function _t(t, e) {
                e !== t.hasAttribute("open") && (e ? t.setAttribute("open", "") : bi(t) && t.removeAttribute("open"))
            }
            function ze(t) {
                const e = t.currentTarget;
                if (!(e instanceof Element))
                    return;
                const n = e.querySelector("details-dialog");
                if (!(n instanceof J))
                    return;
                const i = n.querySelector("include-fragment:not([src])");
                if (!i)
                    return;
                const s = n.src;
                s !== null && (i.addEventListener("loadend", ()=>{
                    e.hasAttribute("open") && mi(n)
                }
                ),
                i.setAttribute("src", s),
                Pt(e))
            }
            function Ei(t, e, n) {
                Pt(t),
                e && t.addEventListener("toggle", ze, {
                    once: !0
                }),
                e && n && t.addEventListener("mouseover", ze, {
                    once: !0
                })
            }
            function Pt(t) {
                t.removeEventListener("toggle", ze),
                t.removeEventListener("mouseover", ze)
            }
            const W = new WeakMap;
            class J extends HTMLElement {
                static get CLOSE_ATTR() {
                    return fi
                }
                static get CLOSE_SELECTOR() {
                    return hi
                }
                constructor() {
                    super();
                    W.set(this, {
                        details: null,
                        activeElement: null
                    }),
                    this.addEventListener("click", function({target: e}) {
                        if (!(e instanceof Element))
                            return;
                        const n = e.closest("details");
                        n && e.closest(hi) && _t(n, !1)
                    })
                }
                get src() {
                    return this.getAttribute("src")
                }
                set src(e) {
                    this.setAttribute("src", e || "")
                }
                get preload() {
                    return this.hasAttribute("preload")
                }
                set preload(e) {
                    e ? this.setAttribute("preload", "") : this.removeAttribute("preload")
                }
                connectedCallback() {
                    this.setAttribute("role", "dialog"),
                    this.setAttribute("aria-modal", "true");
                    const e = W.get(this);
                    if (!e)
                        return;
                    const n = this.parentElement;
                    if (!n)
                        return;
                    const i = n.querySelector("summary");
                    i && (i.hasAttribute("role") || i.setAttribute("role", "button"),
                    i.addEventListener("click", vi, {
                        capture: !0
                    })),
                    n.addEventListener("toggle", wi),
                    e.details = n,
                    Ei(n, this.src, this.preload)
                }
                disconnectedCallback() {
                    const e = W.get(this);
                    if (!e)
                        return;
                    const {details: n} = e;
                    if (!n)
                        return;
                    n.removeEventListener("toggle", wi),
                    Pt(n);
                    const i = n.querySelector("summary");
                    i && i.removeEventListener("click", vi, {
                        capture: !0
                    }),
                    e.details = null
                }
                toggle(e) {
                    const n = W.get(this);
                    if (!n)
                        return;
                    const {details: i} = n;
                    !i || _t(i, e)
                }
                static get observedAttributes() {
                    return ["src", "preload"]
                }
                attributeChangedCallback() {
                    const e = W.get(this);
                    if (!e)
                        return;
                    const {details: n} = e;
                    !n || Ei(n, this.src, this.preload)
                }
            }
            w("D", J),
            window.customElements.get("details-dialog") || (window.DetailsDialogElement = J,
            window.customElements.define("details-dialog", J));
            function Bo(t, e=0, {start: n=!0, middle: i=!0, once: s=!1}={}) {
                var r = 0, o, a = !1, c = function l(...u) {
                    if (!a) {
                        var d = Date.now() - r;
                        r = Date.now(),
                        n ? (n = !1,
                        t(...u),
                        s && l.cancel()) : (i && d < e || !i) && (clearTimeout(o),
                        o = setTimeout(function() {
                            r = Date.now(),
                            t(...u),
                            s && l.cancel()
                        }, i ? e - d : e))
                    }
                };
                return c.cancel = function() {
                    clearTimeout(o),
                    a = !0
                }
                ,
                c
            }
            function Vo(t, e=0, {start: n=!1, middle: i=!1, once: s=!1}={}) {
                return Bo(t, e, {
                    start: n,
                    middle: i,
                    once: s
                })
            }
            const be = new WeakMap;
            class Ht extends HTMLElement {
                connectedCallback() {
                    const e = this.input;
                    if (!e)
                        return;
                    const n = Vo(zo.bind(null, this), 300)
                      , i = {
                        check: n,
                        controller: null
                    };
                    be.set(this, i),
                    e.addEventListener("input", yi),
                    e.addEventListener("input", n),
                    e.autocomplete = "off",
                    e.spellcheck = !1
                }
                disconnectedCallback() {
                    const e = this.input;
                    if (!e)
                        return;
                    const n = be.get(this);
                    !n || (be.delete(this),
                    e.removeEventListener("input", yi),
                    e.removeEventListener("input", n.check),
                    e.setCustomValidity(""))
                }
                attributeChangedCallback(e) {
                    if (e === "required") {
                        const n = this.input;
                        if (!n)
                            return;
                        n.required = this.required
                    }
                }
                static get observedAttributes() {
                    return ["required"]
                }
                get input() {
                    return this.querySelector("input")
                }
                get src() {
                    const e = this.getAttribute("src");
                    if (!e)
                        return "";
                    const n = this.ownerDocument.createElement("a");
                    return n.href = e,
                    n.href
                }
                set src(e) {
                    this.setAttribute("src", e)
                }
                get csrf() {
                    const e = this.querySelector("[data-csrf]");
                    return this.getAttribute("csrf") || e instanceof HTMLInputElement && e.value || ""
                }
                set csrf(e) {
                    this.setAttribute("csrf", e)
                }
                get required() {
                    return this.hasAttribute("required")
                }
                set required(e) {
                    e ? this.setAttribute("required", "") : this.removeAttribute("required")
                }
            }
            function yi(t) {
                const e = t.currentTarget;
                if (!(e instanceof HTMLInputElement))
                    return;
                const n = e.closest("auto-check");
                if (!(n instanceof Ht))
                    return;
                const i = n.src
                  , s = n.csrf
                  , r = be.get(n);
                if (!i || !s || !r)
                    return;
                let o = "Verifying\u2026";
                const a = c=>o = c;
                e.dispatchEvent(new CustomEvent("auto-check-start",{
                    bubbles: !0,
                    detail: {
                        setValidity: a
                    }
                })),
                n.required && e.setCustomValidity(o)
            }
            function jo() {
                return "AbortController"in window ? new AbortController : {
                    signal: null,
                    abort() {}
                }
            }
            async function Uo(t, e, n) {
                try {
                    const i = await fetch(e, n);
                    return t.dispatchEvent(new CustomEvent("load")),
                    t.dispatchEvent(new CustomEvent("loadend")),
                    i
                } catch (i) {
                    throw i.name !== "AbortError" && (t.dispatchEvent(new CustomEvent("error")),
                    t.dispatchEvent(new CustomEvent("loadend"))),
                    i
                }
            }
            async function zo(t) {
                const e = t.input;
                if (!e)
                    return;
                const n = t.src
                  , i = t.csrf
                  , s = be.get(t);
                if (!n || !i || !s) {
                    t.required && e.setCustomValidity("");
                    return
                }
                if (!e.value.trim()) {
                    t.required && e.setCustomValidity("");
                    return
                }
                const r = new FormData;
                r.append("authenticity_token", i),
                r.append("value", e.value),
                e.dispatchEvent(new CustomEvent("auto-check-send",{
                    bubbles: !0,
                    detail: {
                        body: r
                    }
                })),
                s.controller ? s.controller.abort() : t.dispatchEvent(new CustomEvent("loadstart")),
                s.controller = jo();
                try {
                    const o = await Uo(t, n, {
                        credentials: "same-origin",
                        signal: s.controller.signal,
                        method: "POST",
                        body: r
                    });
                    o.ok ? Ko(o, e, t.required) : Yo(o, e, t.required),
                    s.controller = null,
                    e.dispatchEvent(new CustomEvent("auto-check-complete",{
                        bubbles: !0
                    }))
                } catch (o) {
                    o.name !== "AbortError" && (s.controller = null,
                    e.dispatchEvent(new CustomEvent("auto-check-complete",{
                        bubbles: !0
                    })))
                }
            }
            function Ko(t, e, n) {
                n && e.setCustomValidity(""),
                e.dispatchEvent(new CustomEvent("auto-check-success",{
                    bubbles: !0,
                    detail: {
                        response: t.clone()
                    }
                }))
            }
            function Yo(t, e, n) {
                let i = "Validation failed";
                const s = r=>i = r;
                e.dispatchEvent(new CustomEvent("auto-check-error",{
                    bubbles: !0,
                    detail: {
                        response: t.clone(),
                        setValidity: s
                    }
                })),
                n && e.setCustomValidity(i)
            }
            window.customElements.get("auto-check") || (window.AutoCheckElement = Ht,
            window.customElements.define("auto-check", Ht));
            class ki extends HTMLElement {
                get preload() {
                    return this.hasAttribute("preload")
                }
                set preload(e) {
                    e ? this.setAttribute("preload", "") : this.removeAttribute("preload")
                }
                get src() {
                    return this.getAttribute("src") || ""
                }
                set src(e) {
                    this.setAttribute("src", e)
                }
                connectedCallback() {
                    this.hasAttribute("role") || this.setAttribute("role", "menu");
                    const e = this.parentElement;
                    if (!e)
                        return;
                    const n = e.querySelector("summary");
                    n && (n.setAttribute("aria-haspopup", "menu"),
                    n.hasAttribute("role") || n.setAttribute("role", "button"));
                    const i = [M(e, "compositionstart", s=>Ni(this, s)), M(e, "compositionend", s=>Ni(this, s)), M(e, "click", s=>Li(e, s)), M(e, "change", s=>Li(e, s)), M(e, "keydown", s=>ea(e, this, s)), M(e, "toggle", ()=>Ti(e, this), {
                        once: !0
                    }), M(e, "toggle", ()=>Qo(e)), this.preload ? M(e, "mouseover", ()=>Ti(e, this), {
                        once: !0
                    }) : Xo, ...Go(e)];
                    Z.set(this, {
                        subscriptions: i,
                        loaded: !1,
                        isComposing: !1
                    })
                }
                disconnectedCallback() {
                    const e = Z.get(this);
                    if (!!e) {
                        Z.delete(this);
                        for (const n of e.subscriptions)
                            n.unsubscribe()
                    }
                }
            }
            const Z = new WeakMap
              , Xo = {
                unsubscribe() {}
            };
            function M(t, e, n, i=!1) {
                return t.addEventListener(e, n, i),
                {
                    unsubscribe: ()=>{
                        t.removeEventListener(e, n, i)
                    }
                }
            }
            function Ti(t, e) {
                const n = e.getAttribute("src");
                if (!n)
                    return;
                const i = Z.get(e);
                if (!i || i.loaded)
                    return;
                i.loaded = !0;
                const s = e.querySelector("include-fragment");
                s && !s.hasAttribute("src") && (s.addEventListener("loadend", ()=>Ai(t)),
                s.setAttribute("src", n))
            }
            function Go(t) {
                let e = !1;
                const n = ()=>e = !0
                  , i = ()=>e = !1
                  , s = ()=>{
                    !t.hasAttribute("open") || Ai(t) || e || Jo(t)
                }
                ;
                return [M(t, "mousedown", n), M(t, "keydown", i), M(t, "toggle", s)]
            }
            function Qo(t) {
                if (!!t.hasAttribute("open"))
                    for (const e of document.querySelectorAll("details[open] > details-menu")) {
                        const n = e.closest("details");
                        n && n !== t && !n.contains(t) && n.removeAttribute("open")
                    }
            }
            function Ai(t) {
                if (!t.hasAttribute("open"))
                    return !1;
                const e = t.querySelector("details-menu [autofocus]");
                return e ? (e.focus(),
                !0) : !1
            }
            function Jo(t) {
                const e = document.activeElement;
                if (e && Mi(e) && t.contains(e))
                    return;
                const n = ve(t, !0);
                n && n.focus()
            }
            function ve(t, e) {
                const n = Array.from(t.querySelectorAll('[role^="menuitem"]:not([hidden]):not([disabled]):not([aria-disabled="true"])'))
                  , i = document.activeElement
                  , s = i instanceof HTMLElement ? n.indexOf(i) : -1
                  , r = e ? n[s + 1] : n[s - 1]
                  , o = e ? n[0] : n[n.length - 1];
                return r || o
            }
            const xi = navigator.userAgent.match(/Macintosh/);
            function Li(t, e) {
                const n = e.target;
                if (n instanceof Element && n.closest("details") === t) {
                    if (e.type === "click") {
                        const i = n.closest('[role="menuitem"], [role="menuitemradio"]');
                        if (!i)
                            return;
                        const s = i.querySelector("input");
                        if (i.tagName === "LABEL" && n === s)
                            return;
                        i.tagName === "LABEL" && s && !s.checked || Si(i, t)
                    } else if (e.type === "change") {
                        const i = n.closest('[role="menuitemradio"], [role="menuitemcheckbox"]');
                        i && Si(i, t)
                    }
                }
            }
            function Zo(t, e) {
                for (const n of e.querySelectorAll('[role="menuitemradio"], [role="menuitemcheckbox"]')) {
                    const i = n.querySelector('input[type="radio"], input[type="checkbox"]');
                    let s = (n === t).toString();
                    i instanceof HTMLInputElement && (s = i.indeterminate ? "mixed" : i.checked.toString()),
                    n.setAttribute("aria-checked", s)
                }
            }
            function Si(t, e) {
                if (t.hasAttribute("disabled") || t.getAttribute("aria-disabled") === "true")
                    return;
                const n = t.closest("details-menu");
                !n || !n.dispatchEvent(new CustomEvent("details-menu-select",{
                    cancelable: !0,
                    detail: {
                        relatedTarget: t
                    }
                })) || (ta(t, e),
                Zo(t, e),
                t.getAttribute("role") !== "menuitemcheckbox" && Ci(e),
                n.dispatchEvent(new CustomEvent("details-menu-selected",{
                    detail: {
                        relatedTarget: t
                    }
                })))
            }
            function ea(t, e, n) {
                if (!(n instanceof KeyboardEvent) || t.querySelector("details[open]"))
                    return;
                const i = Z.get(e);
                if (!i || i.isComposing)
                    return;
                const s = n.target instanceof Element && n.target.tagName === "SUMMARY";
                switch (n.key) {
                case "Escape":
                    t.hasAttribute("open") && (Ci(t),
                    n.preventDefault(),
                    n.stopPropagation());
                    break;
                case "ArrowDown":
                    {
                        s && !t.hasAttribute("open") && t.setAttribute("open", "");
                        const r = ve(t, !0);
                        r && r.focus(),
                        n.preventDefault()
                    }
                    break;
                case "ArrowUp":
                    {
                        s && !t.hasAttribute("open") && t.setAttribute("open", "");
                        const r = ve(t, !1);
                        r && r.focus(),
                        n.preventDefault()
                    }
                    break;
                case "n":
                    if (xi && n.ctrlKey) {
                        const r = ve(t, !0);
                        r && r.focus(),
                        n.preventDefault()
                    }
                    break;
                case "p":
                    if (xi && n.ctrlKey) {
                        const r = ve(t, !1);
                        r && r.focus(),
                        n.preventDefault()
                    }
                    break;
                case " ":
                case "Enter":
                    {
                        const r = document.activeElement;
                        r instanceof HTMLElement && Mi(r) && r.closest("details") === t && (n.preventDefault(),
                        n.stopPropagation(),
                        r.click())
                    }
                    break
                }
            }
            function Mi(t) {
                const e = t.getAttribute("role");
                return e === "menuitem" || e === "menuitemcheckbox" || e === "menuitemradio"
            }
            function Ci(t) {
                if (!t.hasAttribute("open"))
                    return;
                t.removeAttribute("open");
                const n = t.querySelector("summary");
                n && n.focus()
            }
            function ta(t, e) {
                const n = e.querySelector("[data-menu-button]");
                if (!n)
                    return;
                const i = na(t);
                if (i)
                    n.textContent = i;
                else {
                    const s = ia(t);
                    s && (n.innerHTML = s)
                }
            }
            function na(t) {
                if (!t)
                    return null;
                const e = t.hasAttribute("data-menu-button-text") ? t : t.querySelector("[data-menu-button-text]");
                return e ? e.getAttribute("data-menu-button-text") || e.textContent : null
            }
            function ia(t) {
                if (!t)
                    return null;
                const e = t.hasAttribute("data-menu-button-contents") ? t : t.querySelector("[data-menu-button-contents]");
                return e ? e.innerHTML : null
            }
            function Ni(t, e) {
                const n = Z.get(t);
                !n || (n.isComposing = e.type === "compositionstart")
            }
            window.customElements.get("details-menu") || (window.DetailsMenuElement = ki,
            window.customElements.define("details-menu", ki));
            class R {
                constructor(e, n) {
                    this.file = e,
                    this.directory = n,
                    this.state = "pending",
                    this.id = null,
                    this.href = null,
                    this.name = null,
                    this.percent = 0
                }
                static traverse(e, n) {
                    return sa(e, n)
                }
                static from(e) {
                    const n = [];
                    for (const i of e)
                        if (i instanceof File)
                            n.push(new R(i));
                        else if (i instanceof R)
                            n.push(i);
                        else
                            throw new Error("Unexpected type");
                    return n
                }
                get fullPath() {
                    return this.directory ? `${this.directory}/${this.file.name}` : this.file.name
                }
                isImage() {
                    return ["image/gif", "image/png", "image/jpg", "image/jpeg"].indexOf(this.file.type) > -1
                }
                isVideo() {
                    return ["video/mp4", "video/quicktime"].indexOf(this.file.type) > -1
                }
                saving(e) {
                    if (this.state !== "pending" && this.state !== "saving")
                        throw new Error(`Unexpected transition from ${this.state} to saving`);
                    this.state = "saving",
                    this.percent = e
                }
                saved(e) {
                    var n, i, s;
                    if (this.state !== "pending" && this.state !== "saving")
                        throw new Error(`Unexpected transition from ${this.state} to saved`);
                    this.state = "saved",
                    this.id = (n = e == null ? void 0 : e.id) !== null && n !== void 0 ? n : null,
                    this.href = (i = e == null ? void 0 : e.href) !== null && i !== void 0 ? i : null,
                    this.name = (s = e == null ? void 0 : e.name) !== null && s !== void 0 ? s : null
                }
                isPending() {
                    return this.state === "pending"
                }
                isSaving() {
                    return this.state === "saving"
                }
                isSaved() {
                    return this.state === "saved"
                }
            }
            w("ab", R);
            function sa(t, e) {
                return e && ca(t) ? Di("", la(t)) : Promise.resolve(Ii(Array.from(t.files || [])).map(n=>new R(n)))
            }
            function ra(t) {
                return t.name.startsWith(".")
            }
            function Ii(t) {
                return Array.from(t).filter(e=>!ra(e))
            }
            function oa(t) {
                return new Promise(function(e, n) {
                    t.file(e, n)
                }
                )
            }
            function aa(t) {
                return new Promise(function(e, n) {
                    const i = []
                      , s = t.createReader()
                      , r = ()=>{
                        s.readEntries(o=>{
                            o.length > 0 ? (i.push(...o),
                            r()) : e(i)
                        }
                        , n)
                    }
                    ;
                    r()
                }
                )
            }
            async function Di(t, e) {
                const n = [];
                for (const i of Ii(e))
                    if (i.isDirectory)
                        n.push(...await Di(i.fullPath, await aa(i)));
                    else {
                        const s = await oa(i);
                        n.push(new R(s,t))
                    }
                return n
            }
            function ca(t) {
                return t.items && Array.from(t.items).some(e=>{
                    const n = e.webkitGetAsEntry && e.webkitGetAsEntry();
                    return n && n.isDirectory
                }
                )
            }
            function la(t) {
                return Array.from(t.items).map(e=>e.webkitGetAsEntry()).filter(e=>e != null)
            }
            class we extends HTMLElement {
                connectedCallback() {
                    this.addEventListener("dragenter", Ke),
                    this.addEventListener("dragover", Ke),
                    this.addEventListener("dragleave", _i),
                    this.addEventListener("drop", Pi),
                    this.addEventListener("paste", Hi),
                    this.addEventListener("change", Ri)
                }
                disconnectedCallback() {
                    this.removeEventListener("dragenter", Ke),
                    this.removeEventListener("dragover", Ke),
                    this.removeEventListener("dragleave", _i),
                    this.removeEventListener("drop", Pi),
                    this.removeEventListener("paste", Hi),
                    this.removeEventListener("change", Ri)
                }
                get directory() {
                    return this.hasAttribute("directory")
                }
                set directory(e) {
                    e ? this.setAttribute("directory", "") : this.removeAttribute("directory")
                }
                async attach(e) {
                    const n = e instanceof DataTransfer ? await R.traverse(e, this.directory) : R.from(e);
                    this.dispatchEvent(new CustomEvent("file-attachment-accept",{
                        bubbles: !0,
                        cancelable: !0,
                        detail: {
                            attachments: n
                        }
                    })) && n.length && this.dispatchEvent(new CustomEvent("file-attachment-accepted",{
                        bubbles: !0,
                        detail: {
                            attachments: n
                        }
                    }))
                }
            }
            function $i(t) {
                return Array.from(t.types).indexOf("Files") >= 0
            }
            let Rt = null;
            function Ke(t) {
                const e = t.currentTarget;
                Rt && clearTimeout(Rt),
                Rt = window.setTimeout(()=>e.removeAttribute("hover"), 200);
                const n = t.dataTransfer;
                !n || !$i(n) || (n.dropEffect = "copy",
                e.setAttribute("hover", ""),
                t.preventDefault())
            }
            function _i(t) {
                t.dataTransfer && (t.dataTransfer.dropEffect = "none"),
                t.currentTarget.removeAttribute("hover"),
                t.stopPropagation(),
                t.preventDefault()
            }
            function Pi(t) {
                const e = t.currentTarget;
                if (!(e instanceof we))
                    return;
                e.removeAttribute("hover");
                const n = t.dataTransfer;
                !n || !$i(n) || (e.attach(n),
                t.stopPropagation(),
                t.preventDefault())
            }
            const ua = /^image\/(gif|png|jpeg)$/;
            function da(t) {
                for (const e of t)
                    if (e.kind === "file" && ua.test(e.type))
                        return e.getAsFile();
                return null
            }
            function Hi(t) {
                if (!t.clipboardData || !t.clipboardData.items)
                    return;
                const e = t.currentTarget;
                if (!(e instanceof we))
                    return;
                const n = da(t.clipboardData.items);
                if (!n)
                    return;
                const i = [n];
                e.attach(i),
                t.preventDefault()
            }
            function Ri(t) {
                const e = t.currentTarget;
                if (!(e instanceof we))
                    return;
                const n = t.target;
                if (!(n instanceof HTMLInputElement))
                    return;
                const i = e.getAttribute("input");
                if (i && n.id !== i)
                    return;
                const s = n.files;
                !s || s.length === 0 || (e.attach(s),
                n.value = "")
            }
            window.customElements.get("file-attachment") || (window.FileAttachmentElement = we,
            window.customElements.define("file-attachment", we));
            class Ft extends HTMLElement {
                constructor() {
                    super();
                    this.currentQuery = null,
                    this.filter = null,
                    this.debounceInputChange = ga(()=>Ot(this, !0)),
                    this.boundFilterResults = ()=>{
                        Ot(this, !1)
                    }
                }
                static get observedAttributes() {
                    return ["aria-owns"]
                }
                attributeChangedCallback(e, n) {
                    n && e === "aria-owns" && Ot(this, !1)
                }
                connectedCallback() {
                    const e = this.input;
                    !e || (e.setAttribute("autocomplete", "off"),
                    e.setAttribute("spellcheck", "false"),
                    e.addEventListener("focus", this.boundFilterResults),
                    e.addEventListener("change", this.boundFilterResults),
                    e.addEventListener("input", this.debounceInputChange))
                }
                disconnectedCallback() {
                    const e = this.input;
                    !e || (e.removeEventListener("focus", this.boundFilterResults),
                    e.removeEventListener("change", this.boundFilterResults),
                    e.removeEventListener("input", this.debounceInputChange))
                }
                get input() {
                    const e = this.querySelector("input");
                    return e instanceof HTMLInputElement ? e : null
                }
                reset() {
                    const e = this.input;
                    e && (e.value = "",
                    e.dispatchEvent(new Event("change",{
                        bubbles: !0
                    })))
                }
            }
            w("G", Ft);
            async function Ot(t, e=!1) {
                const n = t.input;
                if (!n)
                    return;
                const i = n.value.trim()
                  , s = t.getAttribute("aria-owns");
                if (!s)
                    return;
                const r = document.getElementById(s);
                if (!r)
                    return;
                const o = r.hasAttribute("data-filter-list") ? r : r.querySelector("[data-filter-list]");
                if (!o || (t.dispatchEvent(new CustomEvent("filter-input-start",{
                    bubbles: !0
                })),
                e && t.currentQuery === i))
                    return;
                t.currentQuery = i;
                const a = t.filter || fa
                  , c = o.childElementCount;
                let l = 0
                  , u = !1;
                for (const f of Array.from(o.children)) {
                    if (!(f instanceof HTMLElement))
                        continue;
                    const h = ha(f)
                      , m = a(f, h, i);
                    m.hideNew === !0 && (u = m.hideNew),
                    f.hidden = !m.match,
                    m.match && l++
                }
                const d = r.querySelector("[data-filter-new-item]")
                  , p = !!d && i.length > 0 && !u;
                d instanceof HTMLElement && (d.hidden = !p,
                p && ma(d, i)),
                pa(r, l > 0 || p),
                t.dispatchEvent(new CustomEvent("filter-input-updated",{
                    bubbles: !0,
                    detail: {
                        count: l,
                        total: c
                    }
                }))
            }
            function fa(t, e, n) {
                return {
                    match: e.toLowerCase().indexOf(n.toLowerCase()) !== -1,
                    hideNew: e === n
                }
            }
            function ha(t) {
                return ((t.querySelector("[data-filter-item-text]") || t).textContent || "").trim()
            }
            function ma(t, e) {
                const n = t.querySelector("[data-filter-new-item-text]");
                n && (n.textContent = e);
                const i = t.querySelector("[data-filter-new-item-value]");
                (i instanceof HTMLInputElement || i instanceof HTMLButtonElement) && (i.value = e)
            }
            function pa(t, e) {
                const n = t.querySelector("[data-filter-empty-state]");
                n instanceof HTMLElement && (n.hidden = e)
            }
            function ga(t) {
                let e;
                return function() {
                    clearTimeout(e),
                    e = setTimeout(()=>{
                        clearTimeout(e),
                        t()
                    }
                    , 300)
                }
            }
            window.customElements.get("filter-input") || (window.FilterInputElement = Ft,
            window.customElements.define("filter-input", Ft));
            function ba() {
                const t = /\bWindows NT 6.1\b/.test(navigator.userAgent)
                  , e = /\bWindows NT 6.2\b/.test(navigator.userAgent)
                  , n = /\bWindows NT 6.3\b/.test(navigator.userAgent)
                  , i = /\bFreeBSD\b/.test(navigator.userAgent)
                  , s = /\bLinux\b/.test(navigator.userAgent) && !/\bAndroid\b/.test(navigator.userAgent);
                return !(t || e || n || s || i)
            }
            const va = new Set(["\u{1F44B}", "\u{1F91A}", "\u{1F590}\uFE0F", "\u270B", "\u{1F596}", "\u{1F44C}", "\u{1F90F}", "\u270C\uFE0F", "\u{1F91E}", "\u{1F91F}", "\u{1F918}", "\u{1F919}", "\u{1F448}", "\u{1F449}", "\u{1F446}", "\u{1F595}", "\u{1F447}", "\u261D\uFE0F", "\u{1F44D}", "\u{1F44E}", "\u270A", "\u{1F44A}", "\u{1F91B}", "\u{1F91C}", "\u{1F44F}", "\u{1F64C}", "\u{1F450}", "\u{1F932}", "\u{1F64F}", "\u270D\uFE0F", "\u{1F485}", "\u{1F933}", "\u{1F4AA}", "\u{1F9B5}", "\u{1F9B6}", "\u{1F442}", "\u{1F9BB}", "\u{1F443}", "\u{1F476}", "\u{1F9D2}", "\u{1F466}", "\u{1F467}", "\u{1F9D1}", "\u{1F471}", "\u{1F468}", "\u{1F9D4}", "\u{1F471}\u200D\u2642\uFE0F", "\u{1F468}\u200D\u{1F9B0}", "\u{1F468}\u200D\u{1F9B1}", "\u{1F468}\u200D\u{1F9B3}", "\u{1F468}\u200D\u{1F9B2}", "\u{1F469}", "\u{1F471}\u200D\u2640\uFE0F", "\u{1F469}\u200D\u{1F9B0}", "\u{1F469}\u200D\u{1F9B1}", "\u{1F469}\u200D\u{1F9B3}", "\u{1F469}\u200D\u{1F9B2}", "\u{1F9D3}", "\u{1F474}", "\u{1F475}", "\u{1F64D}", "\u{1F64D}\u200D\u2642\uFE0F", "\u{1F64D}\u200D\u2640\uFE0F", "\u{1F64E}", "\u{1F64E}\u200D\u2642\uFE0F", "\u{1F64E}\u200D\u2640\uFE0F", "\u{1F645}", "\u{1F645}\u200D\u2642\uFE0F", "\u{1F645}\u200D\u2640\uFE0F", "\u{1F646}", "\u{1F646}\u200D\u2642\uFE0F", "\u{1F646}\u200D\u2640\uFE0F", "\u{1F481}", "\u{1F481}\u200D\u2642\uFE0F", "\u{1F481}\u200D\u2640\uFE0F", "\u{1F64B}", "\u{1F64B}\u200D\u2642\uFE0F", "\u{1F64B}\u200D\u2640\uFE0F", "\u{1F9CF}", "\u{1F9CF}\u200D\u2642\uFE0F", "\u{1F9CF}\u200D\u2640\uFE0F", "\u{1F647}", "\u{1F647}\u200D\u2642\uFE0F", "\u{1F647}\u200D\u2640\uFE0F", "\u{1F926}", "\u{1F926}\u200D\u2642\uFE0F", "\u{1F926}\u200D\u2640\uFE0F", "\u{1F937}", "\u{1F937}\u200D\u2642\uFE0F", "\u{1F937}\u200D\u2640\uFE0F", "\u{1F468}\u200D\u2695\uFE0F", "\u{1F469}\u200D\u2695\uFE0F", "\u{1F468}\u200D\u{1F393}", "\u{1F469}\u200D\u{1F393}", "\u{1F468}\u200D\u{1F3EB}", "\u{1F469}\u200D\u{1F3EB}", "\u{1F468}\u200D\u2696\uFE0F", "\u{1F469}\u200D\u2696\uFE0F", "\u{1F468}\u200D\u{1F33E}", "\u{1F469}\u200D\u{1F33E}", "\u{1F468}\u200D\u{1F373}", "\u{1F469}\u200D\u{1F373}", "\u{1F468}\u200D\u{1F527}", "\u{1F469}\u200D\u{1F527}", "\u{1F468}\u200D\u{1F3ED}", "\u{1F469}\u200D\u{1F3ED}", "\u{1F468}\u200D\u{1F4BC}", "\u{1F469}\u200D\u{1F4BC}", "\u{1F468}\u200D\u{1F52C}", "\u{1F469}\u200D\u{1F52C}", "\u{1F468}\u200D\u{1F4BB}", "\u{1F469}\u200D\u{1F4BB}", "\u{1F468}\u200D\u{1F3A4}", "\u{1F469}\u200D\u{1F3A4}", "\u{1F468}\u200D\u{1F3A8}", "\u{1F469}\u200D\u{1F3A8}", "\u{1F468}\u200D\u2708\uFE0F", "\u{1F469}\u200D\u2708\uFE0F", "\u{1F468}\u200D\u{1F680}", "\u{1F469}\u200D\u{1F680}", "\u{1F468}\u200D\u{1F692}", "\u{1F469}\u200D\u{1F692}", "\u{1F46E}", "\u{1F46E}\u200D\u2642\uFE0F", "\u{1F46E}\u200D\u2640\uFE0F", "\u{1F575}\uFE0F", "\u{1F575}\uFE0F\u200D\u2642\uFE0F", "\u{1F575}\uFE0F\u200D\u2640\uFE0F", "\u{1F482}", "\u{1F482}\u200D\u2642\uFE0F", "\u{1F482}\u200D\u2640\uFE0F", "\u{1F477}", "\u{1F477}\u200D\u2642\uFE0F", "\u{1F477}\u200D\u2640\uFE0F", "\u{1F934}", "\u{1F478}", "\u{1F473}", "\u{1F473}\u200D\u2642\uFE0F", "\u{1F473}\u200D\u2640\uFE0F", "\u{1F472}", "\u{1F9D5}", "\u{1F935}", "\u{1F470}", "\u{1F930}", "\u{1F931}", "\u{1F47C}", "\u{1F385}", "\u{1F936}", "\u{1F9B8}", "\u{1F9B8}\u200D\u2642\uFE0F", "\u{1F9B8}\u200D\u2640\uFE0F", "\u{1F9B9}", "\u{1F9B9}\u200D\u2642\uFE0F", "\u{1F9B9}\u200D\u2640\uFE0F", "\u{1F9D9}", "\u{1F9D9}\u200D\u2642\uFE0F", "\u{1F9D9}\u200D\u2640\uFE0F", "\u{1F9DA}", "\u{1F9DA}\u200D\u2642\uFE0F", "\u{1F9DA}\u200D\u2640\uFE0F", "\u{1F9DB}", "\u{1F9DB}\u200D\u2642\uFE0F", "\u{1F9DB}\u200D\u2640\uFE0F", "\u{1F9DC}", "\u{1F9DC}\u200D\u2642\uFE0F", "\u{1F9DC}\u200D\u2640\uFE0F", "\u{1F9DD}", "\u{1F9DD}\u200D\u2642\uFE0F", "\u{1F9DD}\u200D\u2640\uFE0F", "\u{1F486}", "\u{1F486}\u200D\u2642\uFE0F", "\u{1F486}\u200D\u2640\uFE0F", "\u{1F487}", "\u{1F487}\u200D\u2642\uFE0F", "\u{1F487}\u200D\u2640\uFE0F", "\u{1F6B6}", "\u{1F6B6}\u200D\u2642\uFE0F", "\u{1F6B6}\u200D\u2640\uFE0F", "\u{1F9CD}", "\u{1F9CD}\u200D\u2642\uFE0F", "\u{1F9CD}\u200D\u2640\uFE0F", "\u{1F9CE}", "\u{1F9CE}\u200D\u2642\uFE0F", "\u{1F9CE}\u200D\u2640\uFE0F", "\u{1F468}\u200D\u{1F9AF}", "\u{1F469}\u200D\u{1F9AF}", "\u{1F468}\u200D\u{1F9BC}", "\u{1F469}\u200D\u{1F9BC}", "\u{1F468}\u200D\u{1F9BD}", "\u{1F469}\u200D\u{1F9BD}", "\u{1F3C3}", "\u{1F3C3}\u200D\u2642\uFE0F", "\u{1F3C3}\u200D\u2640\uFE0F", "\u{1F483}", "\u{1F57A}", "\u{1F574}\uFE0F", "\u{1F9D6}", "\u{1F9D6}\u200D\u2642\uFE0F", "\u{1F9D6}\u200D\u2640\uFE0F", "\u{1F9D7}", "\u{1F9D7}\u200D\u2642\uFE0F", "\u{1F9D7}\u200D\u2640\uFE0F", "\u{1F3C7}", "\u{1F3C2}", "\u{1F3CC}\uFE0F", "\u{1F3CC}\uFE0F\u200D\u2642\uFE0F", "\u{1F3CC}\uFE0F\u200D\u2640\uFE0F", "\u{1F3C4}", "\u{1F3C4}\u200D\u2642\uFE0F", "\u{1F3C4}\u200D\u2640\uFE0F", "\u{1F6A3}", "\u{1F6A3}\u200D\u2642\uFE0F", "\u{1F6A3}\u200D\u2640\uFE0F", "\u{1F3CA}", "\u{1F3CA}\u200D\u2642\uFE0F", "\u{1F3CA}\u200D\u2640\uFE0F", "\u26F9\uFE0F", "\u26F9\uFE0F\u200D\u2642\uFE0F", "\u26F9\uFE0F\u200D\u2640\uFE0F", "\u{1F3CB}\uFE0F", "\u{1F3CB}\uFE0F\u200D\u2642\uFE0F", "\u{1F3CB}\uFE0F\u200D\u2640\uFE0F", "\u{1F6B4}", "\u{1F6B4}\u200D\u2642\uFE0F", "\u{1F6B4}\u200D\u2640\uFE0F", "\u{1F6B5}", "\u{1F6B5}\u200D\u2642\uFE0F", "\u{1F6B5}\u200D\u2640\uFE0F", "\u{1F938}", "\u{1F938}\u200D\u2642\uFE0F", "\u{1F938}\u200D\u2640\uFE0F", "\u{1F93D}", "\u{1F93D}\u200D\u2642\uFE0F", "\u{1F93D}\u200D\u2640\uFE0F", "\u{1F93E}", "\u{1F93E}\u200D\u2642\uFE0F", "\u{1F93E}\u200D\u2640\uFE0F", "\u{1F939}", "\u{1F939}\u200D\u2642\uFE0F", "\u{1F939}\u200D\u2640\uFE0F", "\u{1F9D8}", "\u{1F9D8}\u200D\u2642\uFE0F", "\u{1F9D8}\u200D\u2640\uFE0F", "\u{1F6C0}", "\u{1F6CC}", "\u{1F9D1}\u200D\u{1F91D}\u200D\u{1F9D1}", "\u{1F46D}", "\u{1F46B}", "\u{1F46C}"]);
            function Ye(t) {
                return va.has(t)
            }
            const Xe = "\u200D"
              , wa = 65039;
            function Ea(t, e) {
                const n = Ge(t);
                if (!Ye(n))
                    return t;
                const i = qi(e);
                return i ? n.split(Xe).map(s=>Ye(s) ? Fi(s, i) : s).join(Xe) : t
            }
            function ya(t, e) {
                const n = Ge(t);
                if (!Ye(n))
                    return t;
                const i = e.map(s=>qi(s));
                return n.split(Xe).map(s=>{
                    if (!Ye(s))
                        return s;
                    const r = i.shift();
                    return r ? Fi(s, r) : s
                }
                ).join(Xe)
            }
            function Ge(t) {
                return [...t].filter(e=>!Oi(e.codePointAt(0))).join("")
            }
            function Fi(t, e) {
                const n = [...t].map(i=>i.codePointAt(0));
                return n[1] && (Oi(n[1]) || n[1] === wa) ? n[1] = e : n.splice(1, 0, e),
                String.fromCodePoint(...n)
            }
            function Oi(t) {
                return t >= 127995 && t <= 127999
            }
            function qi(t) {
                switch (t) {
                case 1:
                    return 127995;
                case 2:
                    return 127996;
                case 3:
                    return 127997;
                case 4:
                    return 127998;
                case 5:
                    return 127999;
                default:
                    return null
                }
            }
            class Wi extends HTMLElement {
                get image() {
                    return this.firstElementChild instanceof HTMLImageElement ? this.firstElementChild : null
                }
                get tone() {
                    return (this.getAttribute("tone") || "").split(" ").map(e=>{
                        const n = parseInt(e, 10);
                        return n >= 0 && n <= 5 ? n : 0
                    }
                    ).join(" ")
                }
                set tone(e) {
                    this.setAttribute("tone", e)
                }
                connectedCallback() {
                    if (this.image === null && !ba()) {
                        const e = this.getAttribute("fallback-src");
                        if (e) {
                            this.textContent = "";
                            const n = ka(this);
                            n.src = e,
                            this.appendChild(n)
                        }
                    }
                    this.hasAttribute("tone") && Bi(this)
                }
                static get observedAttributes() {
                    return ["tone"]
                }
                attributeChangedCallback(e) {
                    switch (e) {
                    case "tone":
                        Bi(this);
                        break
                    }
                }
            }
            function Bi(t) {
                if (t.image)
                    return;
                const e = t.tone.split(" ").map(n=>parseInt(n, 10));
                if (e.length === 0)
                    t.textContent = Ge(t.textContent || "");
                else if (e.length === 1) {
                    const n = e[0];
                    t.textContent = n === 0 ? Ge(t.textContent || "") : Ea(t.textContent || "", n)
                } else
                    t.textContent = ya(t.textContent || "", e)
            }
            function ka(t) {
                const e = document.createElement("img");
                return e.className = "emoji",
                e.alt = t.getAttribute("alias") || "",
                e.height = 20,
                e.width = 20,
                e
            }
            window.customElements.get("g-emoji") || (window.GEmojiElement = Wi,
            window.customElements.define("g-emoji", Wi));
            const Vi = new WeakMap
              , qt = new IntersectionObserver(t=>{
                for (const e of t)
                    if (e.isIntersecting) {
                        const {target: n} = e;
                        if (qt.unobserve(n),
                        !(n instanceof Je))
                            return;
                        n.loading === "lazy" && Qe(n)
                    }
            }
            ,{
                rootMargin: "0px 0px 256px 0px",
                threshold: .01
            });
            function Wt() {
                return new Promise(t=>setTimeout(t, 0))
            }
            async function Qe(t) {
                return qt.unobserve(t),
                Bt(t).then(function(e) {
                    const n = document.createElement("template");
                    n.innerHTML = e;
                    const i = document.importNode(n.content, !0);
                    !t.dispatchEvent(new CustomEvent("include-fragment-replace",{
                        cancelable: !0,
                        detail: {
                            fragment: i
                        }
                    })) || (t.replaceWith(i),
                    t.dispatchEvent(new CustomEvent("include-fragment-replaced")))
                }, function() {
                    t.classList.add("is-error")
                })
            }
            function Bt(t) {
                const e = t.src;
                let n = Vi.get(t);
                return n && n.src === e ? n.data : (e ? n = Ta(t) : n = Promise.reject(new Error("missing src")),
                Vi.set(t, {
                    src: e,
                    data: n
                }),
                n)
            }
            function Ta(t) {
                return Wt().then(()=>(t.dispatchEvent(new Event("loadstart")),
                t.fetch(t.request()))).then(e=>{
                    if (e.status !== 200)
                        throw new Error(`Failed to load resource: the server responded with a status of ${e.status}`);
                    const n = e.headers.get("Content-Type");
                    if (!Aa(t.accept) && (!n || !n.includes(t.accept ? t.accept : "text/html")))
                        throw new Error(`Failed to load resource: expected ${t.accept || "text/html"} but was ${n}`);
                    return e.text()
                }
                ).then(e=>(Wt().then(()=>{
                    t.dispatchEvent(new Event("load")),
                    t.dispatchEvent(new Event("loadend"))
                }
                ),
                e), e=>{
                    throw Wt().then(()=>{
                        t.dispatchEvent(new Event("error")),
                        t.dispatchEvent(new Event("loadend"))
                    }
                    ),
                    e
                }
                )
            }
            function Aa(t) {
                return t && !!t.split(",").find(e=>e.match(/^\s*\*\/\*/))
            }
            class Je extends HTMLElement {
                static get observedAttributes() {
                    return ["src", "loading"]
                }
                get src() {
                    const e = this.getAttribute("src");
                    if (e) {
                        const n = this.ownerDocument.createElement("a");
                        return n.href = e,
                        n.href
                    } else
                        return ""
                }
                set src(e) {
                    this.setAttribute("src", e)
                }
                get loading() {
                    return this.getAttribute("loading") === "lazy" ? "lazy" : "eager"
                }
                set loading(e) {
                    this.setAttribute("loading", e)
                }
                get accept() {
                    return this.getAttribute("accept") || ""
                }
                set accept(e) {
                    this.setAttribute("accept", e)
                }
                get data() {
                    return Bt(this)
                }
                attributeChangedCallback(e, n) {
                    e === "src" ? this.isConnected && this.loading === "eager" && Qe(this) : e === "loading" && this.isConnected && n !== "eager" && this.loading === "eager" && Qe(this)
                }
                connectedCallback() {
                    this.src && this.loading === "eager" && Qe(this),
                    this.loading === "lazy" && qt.observe(this)
                }
                request() {
                    const e = this.src;
                    if (!e)
                        throw new Error("missing src");
                    return new Request(e,{
                        method: "GET",
                        credentials: "same-origin",
                        headers: {
                            Accept: this.accept || "text/html"
                        }
                    })
                }
                load() {
                    return Bt(this)
                }
                fetch(e) {
                    return fetch(e)
                }
            }
            w("I", Je),
            window.customElements.get("include-fragment") || (window.IncludeFragmentElement = Je,
            window.customElements.define("include-fragment", Je));
            const ee = new WeakMap
              , B = new WeakMap
              , D = new WeakMap;
            function Ee(t) {
                const e = t.currentTarget;
                if (!(e instanceof ne))
                    return;
                const {box: n, image: i} = D.get(e) || {};
                if (!n || !i)
                    return;
                let s = 0
                  , r = 0;
                if (t instanceof KeyboardEvent)
                    t.key === "ArrowUp" ? r = -1 : t.key === "ArrowDown" ? r = 1 : t.key === "ArrowLeft" ? s = -1 : t.key === "ArrowRight" && (s = 1);
                else if (B.has(e) && t instanceof MouseEvent) {
                    const o = B.get(e);
                    s = t.pageX - o.dragStartX,
                    r = t.pageY - o.dragStartY
                } else if (B.has(e) && t instanceof TouchEvent) {
                    const {pageX: o, pageY: a} = t.changedTouches[0]
                      , {dragStartX: c, dragStartY: l} = B.get(e);
                    s = o - c,
                    r = a - l
                }
                if (s !== 0 || r !== 0) {
                    const o = Math.min(Math.max(0, n.offsetLeft + s), i.width - n.offsetWidth)
                      , a = Math.min(Math.max(0, n.offsetTop + r), i.height - n.offsetHeight);
                    n.style.left = `${o}px`,
                    n.style.top = `${a}px`,
                    Yi(e, {
                        x: o,
                        y: a,
                        width: n.offsetWidth,
                        height: n.offsetHeight
                    })
                }
                if (t instanceof MouseEvent)
                    B.set(e, {
                        dragStartX: t.pageX,
                        dragStartY: t.pageY
                    });
                else if (t instanceof TouchEvent) {
                    const {pageX: o, pageY: a} = t.changedTouches[0];
                    B.set(e, {
                        dragStartX: o,
                        dragStartY: a
                    })
                }
            }
            function te(t) {
                const e = t.target;
                if (!(e instanceof HTMLElement))
                    return;
                const n = ji(e);
                if (!(n instanceof ne))
                    return;
                const {box: i} = D.get(n) || {};
                if (!i)
                    return;
                const s = n.getBoundingClientRect();
                let r, o, a;
                if (t instanceof KeyboardEvent) {
                    if (t.key === "Escape")
                        return Ki(n);
                    if (t.key === "-" && (a = -10),
                    t.key === "=" && (a = 10),
                    !a)
                        return;
                    r = i.offsetWidth + a,
                    o = i.offsetHeight + a,
                    ee.set(n, {
                        startX: i.offsetLeft,
                        startY: i.offsetTop
                    })
                } else if (t instanceof MouseEvent) {
                    const c = ee.get(n);
                    if (!c)
                        return;
                    r = t.pageX - c.startX - s.left - window.pageXOffset,
                    o = t.pageY - c.startY - s.top - window.pageYOffset
                } else if (t instanceof TouchEvent) {
                    const c = ee.get(n);
                    if (!c)
                        return;
                    r = t.changedTouches[0].pageX - c.startX - s.left - window.pageXOffset,
                    o = t.changedTouches[0].pageY - c.startY - s.top - window.pageYOffset
                }
                r && o && zi(n, r, o, !(t instanceof KeyboardEvent))
            }
            function ji(t) {
                const e = t.getRootNode();
                return e instanceof ShadowRoot ? e.host : t
            }
            function Ui(t) {
                const e = t.currentTarget;
                if (!(e instanceof HTMLElement))
                    return;
                const n = ji(e);
                if (!(n instanceof ne))
                    return;
                const {box: i} = D.get(n) || {};
                if (!i)
                    return;
                const s = t.target;
                if (s instanceof HTMLElement)
                    if (s.hasAttribute("data-direction")) {
                        const r = s.getAttribute("data-direction") || "";
                        n.addEventListener("mousemove", te),
                        n.addEventListener("touchmove", te, {
                            passive: !0
                        }),
                        ["nw", "se"].indexOf(r) >= 0 && n.classList.add("nwse"),
                        ["ne", "sw"].indexOf(r) >= 0 && n.classList.add("nesw"),
                        ee.set(n, {
                            startX: i.offsetLeft + (["se", "ne"].indexOf(r) >= 0 ? 0 : i.offsetWidth),
                            startY: i.offsetTop + (["se", "sw"].indexOf(r) >= 0 ? 0 : i.offsetHeight)
                        }),
                        te(t)
                    } else
                        n.addEventListener("mousemove", Ee),
                        n.addEventListener("touchmove", Ee, {
                            passive: !0
                        })
            }
            function zi(t, e, n, i=!0) {
                let s = Math.max(Math.abs(e), Math.abs(n), 10);
                const r = ee.get(t);
                if (!r)
                    return;
                const {box: o, image: a} = D.get(t) || {};
                if (!o || !a)
                    return;
                s = Math.min(s, n > 0 ? a.height - r.startY : r.startY, e > 0 ? a.width - r.startX : r.startX);
                const c = i ? Math.round(Math.max(0, e > 0 ? r.startX : r.startX - s)) : o.offsetLeft
                  , l = i ? Math.round(Math.max(0, n > 0 ? r.startY : r.startY - s)) : o.offsetTop;
                o.style.left = `${c}px`,
                o.style.top = `${l}px`,
                o.style.width = `${s}px`,
                o.style.height = `${s}px`,
                Yi(t, {
                    x: c,
                    y: l,
                    width: s,
                    height: s
                })
            }
            function Ki(t) {
                const {image: e} = D.get(t) || {};
                if (!e)
                    return;
                const n = Math.round(e.clientWidth > e.clientHeight ? e.clientHeight : e.clientWidth);
                ee.set(t, {
                    startX: (e.clientWidth - n) / 2,
                    startY: (e.clientHeight - n) / 2
                }),
                zi(t, n, n)
            }
            function Vt(t) {
                const e = t.currentTarget;
                e instanceof ne && (B.delete(e),
                e.classList.remove("nwse", "nesw"),
                e.removeEventListener("mousemove", te),
                e.removeEventListener("mousemove", Ee),
                e.removeEventListener("touchmove", te),
                e.removeEventListener("touchmove", Ee))
            }
            function Yi(t, e) {
                const {image: n} = D.get(t) || {};
                if (!n)
                    return;
                const i = n.naturalWidth / n.width;
                for (const s in e) {
                    const r = Math.round(e[s] * i);
                    e[s] = r;
                    const o = t.querySelector(`[data-image-crop-input='${s}']`);
                    o instanceof HTMLInputElement && (o.value = r.toString())
                }
                t.dispatchEvent(new CustomEvent("image-crop-change",{
                    bubbles: !0,
                    detail: e
                }))
            }
            class ne extends HTMLElement {
                connectedCallback() {
                    if (D.has(this))
                        return;
                    const e = this.attachShadow({
                        mode: "open"
                    });
                    e.innerHTML = `
<style>
  :host { touch-action: none; display: block; }
  :host(.nesw) { cursor: nesw-resize; }
  :host(.nwse) { cursor: nwse-resize; }
  :host(.nesw) .crop-box, :host(.nwse) .crop-box { cursor: inherit; }
  :host([loaded]) .crop-image { display: block; }
  :host([loaded]) ::slotted([data-loading-slot]), .crop-image { display: none; }

  .crop-wrapper {
    position: relative;
    font-size: 0;
  }
  .crop-container {
    user-select: none;
    -ms-user-select: none;
    -moz-user-select: none;
    -webkit-user-select: none;
    position: absolute;
    overflow: hidden;
    z-index: 1;
    top: 0;
    width: 100%;
    height: 100%;
  }

  :host([rounded]) .crop-box {
    border-radius: 50%;
    box-shadow: 0 0 0 4000px rgba(0, 0, 0, 0.3);
  }
  .crop-box {
    position: absolute;
    border: 1px dashed #fff;
    box-sizing: border-box;
    cursor: move;
  }

  :host([rounded]) .crop-outline {
    outline: none;
  }
  .crop-outline {
    position: absolute;
    top: 0;
    bottom: 0;
    left: 0;
    right: 0;
    outline: 4000px solid rgba(0, 0, 0, .3);
  }

  .handle { position: absolute; }
  :host([rounded]) .handle::before { border-radius: 50%; }
  .handle:before {
    position: absolute;
    display: block;
    padding: 4px;
    transform: translate(-50%, -50%);
    content: ' ';
    background: #fff;
    border: 1px solid #767676;
  }
  .ne { top: 0; right: 0; cursor: nesw-resize; }
  .nw { top: 0; left: 0; cursor: nwse-resize; }
  .se { bottom: 0; right: 0; cursor: nwse-resize; }
  .sw { bottom: 0; left: 0; cursor: nesw-resize; }
</style>
<slot></slot>
<div class="crop-wrapper">
  <img width="100%" class="crop-image" alt="">
  <div class="crop-container">
    <div data-crop-box class="crop-box">
      <div class="crop-outline"></div>
      <div data-direction="nw" class="handle nw"></div>
      <div data-direction="ne" class="handle ne"></div>
      <div data-direction="sw" class="handle sw"></div>
      <div data-direction="se" class="handle se"></div>
    </div>
  </div>
</div>
`;
                    const n = e.querySelector("[data-crop-box]");
                    if (!(n instanceof HTMLElement))
                        return;
                    const i = e.querySelector("img");
                    i instanceof HTMLImageElement && (D.set(this, {
                        box: n,
                        image: i
                    }),
                    i.addEventListener("load", ()=>{
                        this.loaded = !0,
                        Ki(this)
                    }
                    ),
                    this.addEventListener("mouseleave", Vt),
                    this.addEventListener("touchend", Vt),
                    this.addEventListener("mouseup", Vt),
                    n.addEventListener("mousedown", Ui),
                    n.addEventListener("touchstart", Ui, {
                        passive: !0
                    }),
                    this.addEventListener("keydown", Ee),
                    this.addEventListener("keydown", te),
                    this.src && (i.src = this.src))
                }
                static get observedAttributes() {
                    return ["src"]
                }
                get src() {
                    return this.getAttribute("src")
                }
                set src(e) {
                    e ? this.setAttribute("src", e) : this.removeAttribute("src")
                }
                get loaded() {
                    return this.hasAttribute("loaded")
                }
                set loaded(e) {
                    e ? this.setAttribute("loaded", "") : this.removeAttribute("loaded")
                }
                attributeChangedCallback(e, n, i) {
                    const {image: s} = D.get(this) || {};
                    e === "src" && (this.loaded = !1,
                    s && (s.src = i))
                }
            }
            window.customElements.get("image-crop") || (window.ImageCropElement = ne,
            window.customElements.define("image-crop", ne));
            const xa = ["[data-md-button]", "md-header", "md-bold", "md-italic", "md-quote", "md-code", "md-link", "md-image", "md-unordered-list", "md-ordered-list", "md-task-list", "md-mention", "md-ref", "md-strikethrough"];
            function Xi(t) {
                const e = [];
                for (const n of t.querySelectorAll(xa.join(", ")))
                    n.hidden || n.offsetWidth <= 0 && n.offsetHeight <= 0 || n.closest("markdown-toolbar") === t && e.push(n);
                return e
            }
            function La(t) {
                return function(e) {
                    (e.key === " " || e.key === "Enter") && (e.preventDefault(),
                    t(e))
                }
            }
            const A = new WeakMap;
            class L extends HTMLElement {
                constructor() {
                    super();
                    const e = ()=>{
                        const n = A.get(this);
                        !n || fs(this, n)
                    }
                    ;
                    this.addEventListener("keydown", La(e)),
                    this.addEventListener("click", e)
                }
                connectedCallback() {
                    this.hasAttribute("role") || this.setAttribute("role", "button")
                }
                click() {
                    const e = A.get(this);
                    !e || fs(this, e)
                }
            }
            class Gi extends L {
                constructor() {
                    super();
                    const e = parseInt(this.getAttribute("level") || "3", 10);
                    if (e < 1 || e > 6)
                        return;
                    const n = `${"#".repeat(e)} `;
                    A.set(this, {
                        prefix: n
                    })
                }
            }
            window.customElements.get("md-header") || (window.MarkdownHeaderButtonElement = Gi,
            window.customElements.define("md-header", Gi));
            class Qi extends L {
                constructor() {
                    super();
                    A.set(this, {
                        prefix: "**",
                        suffix: "**",
                        trimFirst: !0
                    })
                }
            }
            window.customElements.get("md-bold") || (window.MarkdownBoldButtonElement = Qi,
            window.customElements.define("md-bold", Qi));
            class Ji extends L {
                constructor() {
                    super();
                    A.set(this, {
                        prefix: "_",
                        suffix: "_",
                        trimFirst: !0
                    })
                }
            }
            window.customElements.get("md-italic") || (window.MarkdownItalicButtonElement = Ji,
            window.customElements.define("md-italic", Ji));
            class Zi extends L {
                constructor() {
                    super();
                    A.set(this, {
                        prefix: "> ",
                        multiline: !0,
                        surroundWithNewlines: !0
                    })
                }
            }
            window.customElements.get("md-quote") || (window.MarkdownQuoteButtonElement = Zi,
            window.customElements.define("md-quote", Zi));
            class es extends L {
                constructor() {
                    super();
                    A.set(this, {
                        prefix: "`",
                        suffix: "`",
                        blockPrefix: "```",
                        blockSuffix: "```"
                    })
                }
            }
            window.customElements.get("md-code") || (window.MarkdownCodeButtonElement = es,
            window.customElements.define("md-code", es));
            class ts extends L {
                constructor() {
                    super();
                    A.set(this, {
                        prefix: "[",
                        suffix: "](url)",
                        replaceNext: "url",
                        scanFor: "https?://"
                    })
                }
            }
            window.customElements.get("md-link") || (window.MarkdownLinkButtonElement = ts,
            window.customElements.define("md-link", ts));
            class ns extends L {
                constructor() {
                    super();
                    A.set(this, {
                        prefix: "![",
                        suffix: "](url)",
                        replaceNext: "url",
                        scanFor: "https?://"
                    })
                }
            }
            window.customElements.get("md-image") || (window.MarkdownImageButtonElement = ns,
            window.customElements.define("md-image", ns));
            class is extends L {
                constructor() {
                    super();
                    A.set(this, {
                        prefix: "- ",
                        multiline: !0,
                        surroundWithNewlines: !0
                    })
                }
            }
            window.customElements.get("md-unordered-list") || (window.MarkdownUnorderedListButtonElement = is,
            window.customElements.define("md-unordered-list", is));
            class ss extends L {
                constructor() {
                    super();
                    A.set(this, {
                        prefix: "1. ",
                        multiline: !0,
                        orderedList: !0
                    })
                }
            }
            window.customElements.get("md-ordered-list") || (window.MarkdownOrderedListButtonElement = ss,
            window.customElements.define("md-ordered-list", ss));
            class rs extends L {
                constructor() {
                    super();
                    A.set(this, {
                        prefix: "- [ ] ",
                        multiline: !0,
                        surroundWithNewlines: !0
                    })
                }
            }
            window.customElements.get("md-task-list") || (window.MarkdownTaskListButtonElement = rs,
            window.customElements.define("md-task-list", rs));
            class os extends L {
                constructor() {
                    super();
                    A.set(this, {
                        prefix: "@",
                        prefixSpace: !0
                    })
                }
            }
            window.customElements.get("md-mention") || (window.MarkdownMentionButtonElement = os,
            window.customElements.define("md-mention", os));
            class as extends L {
                constructor() {
                    super();
                    A.set(this, {
                        prefix: "#",
                        prefixSpace: !0
                    })
                }
            }
            window.customElements.get("md-ref") || (window.MarkdownRefButtonElement = as,
            window.customElements.define("md-ref", as));
            class cs extends L {
                constructor() {
                    super();
                    A.set(this, {
                        prefix: "~~",
                        suffix: "~~",
                        trimFirst: !0
                    })
                }
            }
            window.customElements.get("md-strikethrough") || (window.MarkdownStrikethroughButtonElement = cs,
            window.customElements.define("md-strikethrough", cs));
            class jt extends HTMLElement {
                constructor() {
                    super()
                }
                connectedCallback() {
                    this.hasAttribute("role") || this.setAttribute("role", "toolbar"),
                    this.addEventListener("keydown", ls),
                    this.setAttribute("tabindex", "0"),
                    this.addEventListener("focus", Sa, {
                        once: !0
                    })
                }
                disconnectedCallback() {
                    this.removeEventListener("keydown", ls)
                }
                get field() {
                    const e = this.getAttribute("for");
                    if (!e)
                        return null;
                    const n = "getRootNode"in this ? this.getRootNode() : document;
                    let i;
                    return (n instanceof Document || n instanceof ShadowRoot) && (i = n.getElementById(e)),
                    i instanceof HTMLTextAreaElement ? i : null
                }
            }
            function Sa({target: t}) {
                if (!(t instanceof Element))
                    return;
                t.removeAttribute("tabindex");
                let e = "0";
                for (const n of Xi(t))
                    n.setAttribute("tabindex", e),
                    e === "0" && (n.focus(),
                    e = "-1")
            }
            function ls(t) {
                const e = t.key;
                if (e !== "ArrowRight" && e !== "ArrowLeft" && e !== "Home" && e !== "End")
                    return;
                const n = t.currentTarget;
                if (!(n instanceof HTMLElement))
                    return;
                const i = Xi(n)
                  , s = i.indexOf(t.target)
                  , r = i.length;
                if (s === -1)
                    return;
                let o = 0;
                e === "ArrowLeft" && (o = s - 1),
                e === "ArrowRight" && (o = s + 1),
                e === "End" && (o = r - 1),
                o < 0 && (o = r - 1),
                o > r - 1 && (o = 0);
                for (let a = 0; a < r; a += 1)
                    i[a].setAttribute("tabindex", a === o ? "0" : "-1");
                t.preventDefault(),
                i[o].focus()
            }
            window.customElements.get("markdown-toolbar") || (window.MarkdownToolbarElement = jt,
            window.customElements.define("markdown-toolbar", jt));
            function Ut(t) {
                return t.trim().split(`
`).length > 1
            }
            function us(t, e) {
                return Array(e + 1).join(t)
            }
            function Ma(t, e) {
                let n = e;
                for (; t[n] && t[n - 1] != null && !t[n - 1].match(/\s/); )
                    n--;
                return n
            }
            function ds(t, e, n) {
                let i = e;
                const s = n ? /\n/ : /\s/;
                for (; t[i] && !t[i].match(s); )
                    i++;
                return i
            }
            let V = null;
            function Ca(t, {text: e, selectionStart: n, selectionEnd: i}) {
                const s = t.selectionStart
                  , r = t.value.slice(0, s)
                  , o = t.value.slice(t.selectionEnd);
                if (V === null || V === !0) {
                    t.contentEditable = "true";
                    try {
                        V = document.execCommand("insertText", !1, e)
                    } catch (a) {
                        V = !1
                    }
                    t.contentEditable = "false"
                }
                if (V && !t.value.slice(0, t.selectionStart).endsWith(e) && (V = !1),
                !V) {
                    try {
                        document.execCommand("ms-beginUndoUnit")
                    } catch (a) {}
                    t.value = r + e + o;
                    try {
                        document.execCommand("ms-endUndoUnit")
                    } catch (a) {}
                    t.dispatchEvent(new CustomEvent("input",{
                        bubbles: !0,
                        cancelable: !0
                    }))
                }
                n != null && i != null ? t.setSelectionRange(n, i) : t.setSelectionRange(s, t.selectionEnd)
            }
            function Na(t, e) {
                const n = t.value.slice(t.selectionStart, t.selectionEnd);
                let i;
                e.orderedList ? i = _a(t) : e.multiline && Ut(n) ? i = $a(t, e) : i = Da(t, e),
                Ca(t, i)
            }
            function Ia(t, e, n, i=!1) {
                if (t.selectionStart === t.selectionEnd)
                    t.selectionStart = Ma(t.value, t.selectionStart),
                    t.selectionEnd = ds(t.value, t.selectionEnd, i);
                else {
                    const s = t.selectionStart - e.length
                      , r = t.selectionEnd + n.length
                      , o = t.value.slice(s, t.selectionStart) === e
                      , a = t.value.slice(t.selectionEnd, r) === n;
                    o && a && (t.selectionStart = s,
                    t.selectionEnd = r)
                }
                return t.value.slice(t.selectionStart, t.selectionEnd)
            }
            function zt(t) {
                const e = t.value.slice(0, t.selectionStart)
                  , n = t.value.slice(t.selectionEnd)
                  , i = e.match(/\n*$/)
                  , s = n.match(/^\n*/)
                  , r = i ? i[0].length : 0
                  , o = s ? s[0].length : 0;
                let a, c;
                return e.match(/\S/) && r < 2 && (a = us(`
`, 2 - r)),
                n.match(/\S/) && o < 2 && (c = us(`
`, 2 - o)),
                a == null && (a = ""),
                c == null && (c = ""),
                {
                    newlinesToAppend: a,
                    newlinesToPrepend: c
                }
            }
            function Da(t, e) {
                let n, i;
                const {prefix: s, suffix: r, blockPrefix: o, blockSuffix: a, replaceNext: c, prefixSpace: l, scanFor: u, surroundWithNewlines: d} = e
                  , p = t.selectionStart
                  , f = t.selectionEnd;
                let h = t.value.slice(t.selectionStart, t.selectionEnd)
                  , m = Ut(h) && o.length > 0 ? `${o}
` : s
                  , b = Ut(h) && a.length > 0 ? `
${a}` : r;
                if (l) {
                    const T = t.value[t.selectionStart - 1];
                    t.selectionStart !== 0 && T != null && !T.match(/\s/) && (m = ` ${m}`)
                }
                h = Ia(t, m, b, e.multiline);
                let g = t.selectionStart
                  , E = t.selectionEnd;
                const x = c.length > 0 && b.indexOf(c) > -1 && h.length > 0;
                if (d) {
                    const T = zt(t);
                    n = T.newlinesToAppend,
                    i = T.newlinesToPrepend,
                    m = n + s,
                    b += i
                }
                if (h.startsWith(m) && h.endsWith(b)) {
                    const T = h.slice(m.length, h.length - b.length);
                    if (p === f) {
                        let _ = p - m.length;
                        _ = Math.max(_, g),
                        _ = Math.min(_, g + T.length),
                        g = E = _
                    } else
                        E = g + T.length;
                    return {
                        text: T,
                        selectionStart: g,
                        selectionEnd: E
                    }
                } else if (x)
                    if (u.length > 0 && h.match(u)) {
                        b = b.replace(c, h);
                        const T = m + b;
                        return g = E = g + m.length,
                        {
                            text: T,
                            selectionStart: g,
                            selectionEnd: E
                        }
                    } else {
                        const T = m + h + b;
                        return g = g + m.length + h.length + b.indexOf(c),
                        E = g + c.length,
                        {
                            text: T,
                            selectionStart: g,
                            selectionEnd: E
                        }
                    }
                else {
                    let T = m + h + b;
                    g = p + m.length,
                    E = f + m.length;
                    const _ = h.match(/^\s*|\s*$/g);
                    if (e.trimFirst && _) {
                        const mr = _[0] || ""
                          , pr = _[1] || "";
                        T = mr + m + h.trim() + b + pr,
                        g += mr.length,
                        E -= pr.length
                    }
                    return {
                        text: T,
                        selectionStart: g,
                        selectionEnd: E
                    }
                }
            }
            function $a(t, e) {
                const {prefix: n, suffix: i, surroundWithNewlines: s} = e;
                let r = t.value.slice(t.selectionStart, t.selectionEnd)
                  , o = t.selectionStart
                  , a = t.selectionEnd;
                const c = r.split(`
`);
                if (c.every(u=>u.startsWith(n) && u.endsWith(i)))
                    r = c.map(u=>u.slice(n.length, u.length - i.length)).join(`
`),
                    a = o + r.length;
                else if (r = c.map(u=>n + u + i).join(`
`),
                s) {
                    const {newlinesToAppend: u, newlinesToPrepend: d} = zt(t);
                    o += u.length,
                    a = o + r.length,
                    r = u + r + d
                }
                return {
                    text: r,
                    selectionStart: o,
                    selectionEnd: a
                }
            }
            function _a(t) {
                const e = /^\d+\.\s+/
                  , n = t.selectionStart === t.selectionEnd;
                let i, s, r = t.value.slice(t.selectionStart, t.selectionEnd), o = r, a = r.split(`
`), c, l;
                if (n) {
                    const p = t.value.slice(0, t.selectionStart).split(/\n/);
                    c = t.selectionStart - p[p.length - 1].length,
                    l = ds(t.value, t.selectionStart, !0),
                    o = t.value.slice(c, l)
                }
                const u = o.split(`
`);
                if (u.every(p=>e.test(p))) {
                    if (a = u.map(p=>p.replace(e, "")),
                    r = a.join(`
`),
                    n && c && l) {
                        const p = u[0].length - a[0].length;
                        s = i = t.selectionStart - p,
                        t.selectionStart = c,
                        t.selectionEnd = l
                    }
                } else {
                    a = Pa(a),
                    r = a.join(`
`);
                    const {newlinesToAppend: p, newlinesToPrepend: f} = zt(t);
                    s = t.selectionStart + p.length,
                    i = s + r.length,
                    n && (s = i),
                    r = p + r + f
                }
                return {
                    text: r,
                    selectionStart: s,
                    selectionEnd: i
                }
            }
            function Pa(t) {
                let e, n, i;
                const s = [];
                for (i = e = 0,
                n = t.length; e < n; i = ++e) {
                    const r = t[i];
                    s.push(`${i + 1}. ${r}`)
                }
                return s
            }
            function fs(t, e) {
                const n = t.closest("markdown-toolbar");
                if (!(n instanceof jt))
                    return;
                const s = Object.assign(Object.assign({}, {
                    prefix: "",
                    suffix: "",
                    blockPrefix: "",
                    blockSuffix: "",
                    multiline: !1,
                    replaceNext: "",
                    prefixSpace: !1,
                    scanFor: "",
                    surroundWithNewlines: !1,
                    orderedList: !1,
                    trimFirst: !1
                }), e)
                  , r = n.field;
                r && (r.focus(),
                Na(r, s))
            }
            const Ze = new WeakMap;
            class Kt extends HTMLElement {
                constructor() {
                    super();
                    const e = hs.bind(null, this, !0)
                      , n = {
                        currentQuery: null,
                        oninput: Fa(e),
                        fetch: e,
                        controller: null
                    };
                    Ze.set(this, n)
                }
                static get observedAttributes() {
                    return ["src"]
                }
                attributeChangedCallback(e, n) {
                    n && e === "src" && hs(this, !1)
                }
                connectedCallback() {
                    const e = this.input;
                    if (!e)
                        return;
                    e.setAttribute("autocomplete", "off"),
                    e.setAttribute("spellcheck", "false");
                    const n = Ze.get(this);
                    !n || (e.addEventListener("focus", n.fetch),
                    e.addEventListener("change", n.fetch),
                    e.addEventListener("input", n.oninput))
                }
                disconnectedCallback() {
                    const e = this.input;
                    if (!e)
                        return;
                    const n = Ze.get(this);
                    !n || (e.removeEventListener("focus", n.fetch),
                    e.removeEventListener("change", n.fetch),
                    e.removeEventListener("input", n.oninput))
                }
                get input() {
                    const e = this.querySelector("input, textarea");
                    return e instanceof HTMLInputElement || e instanceof HTMLTextAreaElement ? e : null
                }
                get src() {
                    return this.getAttribute("src") || ""
                }
                set src(e) {
                    this.setAttribute("src", e)
                }
            }
            w("E", Kt);
            function Ha() {
                return "AbortController"in window ? new AbortController : {
                    signal: null,
                    abort() {}
                }
            }
            async function hs(t, e) {
                const n = t.input;
                if (!n)
                    return;
                const i = Ze.get(t);
                if (!i)
                    return;
                const s = n.value;
                if (e && i.currentQuery === s)
                    return;
                i.currentQuery = s;
                const r = t.src;
                if (!r)
                    return;
                const o = document.getElementById(t.getAttribute("aria-owns") || "");
                if (!o)
                    return;
                const a = new URL(r,window.location.href)
                  , c = new URLSearchParams(a.search);
                c.append(t.getAttribute("param") || "q", s),
                a.search = c.toString(),
                i.controller ? i.controller.abort() : (t.dispatchEvent(new CustomEvent("loadstart")),
                t.setAttribute("loading", "")),
                i.controller = Ha();
                let l, u = "";
                try {
                    l = await Ra(t, a.toString(), {
                        signal: i.controller.signal,
                        credentials: "same-origin",
                        headers: {
                            accept: "text/fragment+html"
                        }
                    }),
                    u = await l.text(),
                    t.removeAttribute("loading"),
                    i.controller = null
                } catch (d) {
                    d.name !== "AbortError" && (t.removeAttribute("loading"),
                    i.controller = null);
                    return
                }
                l && l.ok ? (o.innerHTML = u,
                t.dispatchEvent(new CustomEvent("remote-input-success",{
                    bubbles: !0
                }))) : t.dispatchEvent(new CustomEvent("remote-input-error",{
                    bubbles: !0
                }))
            }
            async function Ra(t, e, n) {
                try {
                    const i = await fetch(e, n);
                    return t.dispatchEvent(new CustomEvent("load")),
                    t.dispatchEvent(new CustomEvent("loadend")),
                    i
                } catch (i) {
                    throw i.name !== "AbortError" && (t.dispatchEvent(new CustomEvent("error")),
                    t.dispatchEvent(new CustomEvent("loadend"))),
                    i
                }
            }
            function Fa(t) {
                let e;
                return function() {
                    clearTimeout(e),
                    e = setTimeout(()=>{
                        clearTimeout(e),
                        t()
                    }
                    , 300)
                }
            }
            window.customElements.get("remote-input") || (window.RemoteInputElement = Kt,
            window.customElements.define("remote-input", Kt));
            const Yt = new WeakMap;
            let v = null;
            function Oa() {
                return !!v
            }
            function qa(t, e, n) {
                Yt.set(t, {
                    sortStarted: e,
                    sortFinished: n
                }),
                t.addEventListener("dragstart", Ba),
                t.addEventListener("dragenter", Va),
                t.addEventListener("dragend", Ua),
                t.addEventListener("drop", ja),
                t.addEventListener("dragover", za)
            }
            function Wa(t, e) {
                if (t.parentNode === e.parentNode) {
                    let n = t;
                    for (; n; ) {
                        if (n === e)
                            return !0;
                        n = n.previousElementSibling
                    }
                }
                return !1
            }
            function ms(t, e) {
                return t.closest("task-lists") === e.closest("task-lists")
            }
            function Ba(t) {
                if (t.currentTarget !== t.target)
                    return;
                const e = t.currentTarget;
                if (!(e instanceof Element))
                    return;
                const n = e.closest(".contains-task-list");
                if (!n || (e.classList.add("is-ghost"),
                t.dataTransfer && t.dataTransfer.setData("text/plain", (e.textContent || "").trim()),
                !e.parentElement))
                    return;
                const i = Array.from(e.parentElement.children)
                  , s = i.indexOf(e)
                  , r = Yt.get(e);
                r && r.sortStarted(n),
                v = {
                    didDrop: !1,
                    dragging: e,
                    dropzone: e,
                    sourceList: n,
                    sourceSibling: i[s + 1] || null,
                    sourceIndex: s
                }
            }
            function Va(t) {
                if (!v)
                    return;
                const e = t.currentTarget;
                if (e instanceof Element) {
                    if (!ms(v.dragging, e)) {
                        t.stopPropagation();
                        return
                    }
                    t.preventDefault(),
                    t.dataTransfer && (t.dataTransfer.dropEffect = "move"),
                    v.dropzone !== e && (v.dragging.classList.add("is-dragging"),
                    v.dropzone = e,
                    Wa(v.dragging, e) ? e.before(v.dragging) : e.after(v.dragging))
                }
            }
            function ja(t) {
                if (!v)
                    return;
                t.preventDefault(),
                t.stopPropagation();
                const e = t.currentTarget;
                if (!(e instanceof Element) || (v.didDrop = !0,
                !v.dragging.parentElement))
                    return;
                let n = Array.from(v.dragging.parentElement.children).indexOf(v.dragging);
                const i = e.closest(".contains-task-list");
                if (!i || v.sourceIndex === n && v.sourceList === i)
                    return;
                v.sourceList === i && v.sourceIndex < n && n++;
                const s = {
                    list: v.sourceList,
                    index: v.sourceIndex
                }
                  , r = {
                    list: i,
                    index: n
                }
                  , o = Yt.get(v.dragging);
                o && o.sortFinished({
                    src: s,
                    dst: r
                })
            }
            function Ua() {
                !v || (v.dragging.classList.remove("is-dragging"),
                v.dragging.classList.remove("is-ghost"),
                v.didDrop || v.sourceList.insertBefore(v.dragging, v.sourceSibling),
                v = null)
            }
            function za(t) {
                if (!v)
                    return;
                const e = t.currentTarget;
                if (e instanceof Element) {
                    if (!ms(v.dragging, e)) {
                        t.stopPropagation();
                        return
                    }
                    t.preventDefault(),
                    t.dataTransfer && (t.dataTransfer.dropEffect = "move")
                }
            }
            const ps = new WeakMap;
            class ie extends HTMLElement {
                connectedCallback() {
                    this.addEventListener("change", n=>{
                        const i = n.target;
                        i instanceof HTMLInputElement && (!i.classList.contains("task-list-item-checkbox") || this.dispatchEvent(new CustomEvent("task-lists-check",{
                            bubbles: !0,
                            detail: {
                                position: Ga(i),
                                checked: i.checked
                            }
                        })))
                    }
                    );
                    const e = new MutationObserver(ws.bind(null, this));
                    ps.set(this, e),
                    e.observe(this, {
                        childList: !0,
                        subtree: !0
                    }),
                    ws(this)
                }
                disconnectedCallback() {
                    const e = ps.get(this);
                    e && e.disconnect()
                }
                get disabled() {
                    return this.hasAttribute("disabled")
                }
                set disabled(e) {
                    e ? this.setAttribute("disabled", "") : this.removeAttribute("disabled")
                }
                get sortable() {
                    return this.hasAttribute("sortable")
                }
                set sortable(e) {
                    e ? this.setAttribute("sortable", "") : this.removeAttribute("sortable")
                }
                static get observedAttributes() {
                    return ["disabled"]
                }
                attributeChangedCallback(e, n, i) {
                    if (n !== i)
                        switch (e) {
                        case "disabled":
                            Es(this);
                            break
                        }
                }
            }
            w("T", ie);
            const gs = document.createElement("template");
            gs.innerHTML = `
  <span class="handle">
    <svg class="drag-handle" aria-hidden="true" width="16" height="16">
      <path d="M10 13a1 1 0 100-2 1 1 0 000 2zm-4 0a1 1 0 100-2 1 1 0 000 2zm1-5a1 1 0 11-2 0 1 1 0 012 0zm3 1a1 1 0 100-2 1 1 0 000 2zm1-5a1 1 0 11-2 0 1 1 0 012 0zM6 5a1 1 0 100-2 1 1 0 000 2z"/>
    </svg>
  </span>`;
            const bs = new WeakMap;
            function Ka(t) {
                if (bs.get(t))
                    return;
                bs.set(t, !0);
                const e = t.closest("task-lists");
                if (!(e instanceof ie) || e.querySelectorAll(".task-list-item").length <= 1)
                    return;
                const n = gs.content.cloneNode(!0)
                  , i = n.querySelector(".handle");
                if (t.prepend(n),
                !i)
                    throw new Error("handle not found");
                i.addEventListener("mouseenter", tc),
                i.addEventListener("mouseleave", nc),
                qa(t, Za, ec),
                t.addEventListener("mouseenter", Ya),
                t.addEventListener("mouseleave", Xa)
            }
            function Ya(t) {
                const e = t.currentTarget;
                if (!(e instanceof Element))
                    return;
                const n = e.closest("task-lists");
                n instanceof ie && n.sortable && !n.disabled && e.classList.add("hovered")
            }
            function Xa(t) {
                const e = t.currentTarget;
                e instanceof Element && e.classList.remove("hovered")
            }
            function Ga(t) {
                const e = Xt(t);
                if (!e)
                    throw new Error(".contains-task-list not found");
                const n = t.closest(".task-list-item")
                  , i = Array.from(e.children).filter(r=>r.tagName === "LI")
                  , s = n ? i.indexOf(n) : -1;
                return [Ja(e), s]
            }
            function Xt(t) {
                const e = t.parentElement;
                return e ? e.closest(".contains-task-list") : null
            }
            function Qa(t) {
                return Xt(t) === vs(t)
            }
            function vs(t) {
                const e = Xt(t);
                return e ? vs(e) || e : null
            }
            function ws(t) {
                const e = t.querySelectorAll(".contains-task-list > .task-list-item");
                for (const n of e)
                    Qa(n) && Ka(n);
                Es(t)
            }
            function Es(t) {
                for (const e of t.querySelectorAll(".task-list-item"))
                    e.classList.toggle("enabled", !t.disabled);
                for (const e of t.querySelectorAll(".task-list-item-checkbox"))
                    e instanceof HTMLInputElement && (e.disabled = t.disabled)
            }
            function Ja(t) {
                const e = t.closest("task-lists");
                if (!e)
                    throw new Error("parent not found");
                return Array.from(e.querySelectorAll("ol, ul")).indexOf(t)
            }
            const Gt = new WeakMap;
            function Za(t) {
                const e = t.closest("task-lists");
                if (!e)
                    throw new Error("parent not found");
                Gt.set(e, Array.from(e.querySelectorAll("ol, ul")))
            }
            function ec({src: t, dst: e}) {
                const n = t.list.closest("task-lists");
                if (!n)
                    return;
                const i = Gt.get(n);
                !i || (Gt.delete(n),
                n.dispatchEvent(new CustomEvent("task-lists-move",{
                    bubbles: !0,
                    detail: {
                        src: [i.indexOf(t.list), t.index],
                        dst: [i.indexOf(e.list), e.index]
                    }
                })))
            }
            function tc(t) {
                const e = t.currentTarget;
                if (!(e instanceof Element))
                    return;
                const n = e.closest(".task-list-item");
                if (!n)
                    return;
                const i = n.closest("task-lists");
                i instanceof ie && i.sortable && !i.disabled && n.setAttribute("draggable", "true")
            }
            function nc(t) {
                if (Oa())
                    return;
                const e = t.currentTarget;
                if (!(e instanceof Element))
                    return;
                const n = e.closest(".task-list-item");
                !n || n.setAttribute("draggable", "false")
            }
            window.customElements.get("task-lists") || (window.TaskListsElement = ie,
            window.customElements.define("task-lists", ie));
            const Qt = !!navigator.userAgent.match(/Macintosh/);
            class Jt {
                constructor(e, n) {
                    this.input = e,
                    this.list = n,
                    this.isComposing = !1,
                    n.id || (n.id = `combobox-${Math.random().toString().slice(2, 6)}`),
                    this.keyboardEventHandler = i=>ic(i, this),
                    this.compositionEventHandler = i=>oc(i, this),
                    this.inputHandler = this.clearSelection.bind(this),
                    e.setAttribute("role", "combobox"),
                    e.setAttribute("aria-controls", n.id),
                    e.setAttribute("aria-expanded", "false"),
                    e.setAttribute("aria-autocomplete", "list"),
                    e.setAttribute("aria-haspopup", "listbox")
                }
                destroy() {
                    this.clearSelection(),
                    this.stop(),
                    this.input.removeAttribute("role"),
                    this.input.removeAttribute("aria-controls"),
                    this.input.removeAttribute("aria-expanded"),
                    this.input.removeAttribute("aria-autocomplete"),
                    this.input.removeAttribute("aria-haspopup")
                }
                start() {
                    this.input.setAttribute("aria-expanded", "true"),
                    this.input.addEventListener("compositionstart", this.compositionEventHandler),
                    this.input.addEventListener("compositionend", this.compositionEventHandler),
                    this.input.addEventListener("input", this.inputHandler),
                    this.input.addEventListener("keydown", this.keyboardEventHandler),
                    this.list.addEventListener("click", ys)
                }
                stop() {
                    this.clearSelection(),
                    this.input.setAttribute("aria-expanded", "false"),
                    this.input.removeEventListener("compositionstart", this.compositionEventHandler),
                    this.input.removeEventListener("compositionend", this.compositionEventHandler),
                    this.input.removeEventListener("input", this.inputHandler),
                    this.input.removeEventListener("keydown", this.keyboardEventHandler),
                    this.list.removeEventListener("click", ys)
                }
                navigate(e=1) {
                    const n = Array.from(this.list.querySelectorAll('[aria-selected="true"]')).filter(ks)[0]
                      , i = Array.from(this.list.querySelectorAll('[role="option"]')).filter(ks)
                      , s = i.indexOf(n);
                    if (s === i.length - 1 && e === 1 || s === 0 && e === -1) {
                        this.clearSelection(),
                        this.input.focus();
                        return
                    }
                    let r = e === 1 ? 0 : i.length - 1;
                    if (n && s >= 0) {
                        const a = s + e;
                        a >= 0 && a < i.length && (r = a)
                    }
                    const o = i[r];
                    if (!!o)
                        for (const a of i)
                            o === a ? (this.input.setAttribute("aria-activedescendant", o.id),
                            o.setAttribute("aria-selected", "true"),
                            ac(this.list, o)) : a.setAttribute("aria-selected", "false")
                }
                clearSelection() {
                    this.input.removeAttribute("aria-activedescendant");
                    for (const e of this.list.querySelectorAll('[aria-selected="true"]'))
                        e.setAttribute("aria-selected", "false")
                }
            }
            w("C", Jt);
            function ic(t, e) {
                if (!(t.shiftKey || t.metaKey || t.altKey) && !(!Qt && t.ctrlKey) && !e.isComposing)
                    switch (t.key) {
                    case "Enter":
                    case "Tab":
                        sc(e.input, e.list) && t.preventDefault();
                        break;
                    case "Escape":
                        e.clearSelection();
                        break;
                    case "ArrowDown":
                        e.navigate(1),
                        t.preventDefault();
                        break;
                    case "ArrowUp":
                        e.navigate(-1),
                        t.preventDefault();
                        break;
                    case "n":
                        Qt && t.ctrlKey && (e.navigate(1),
                        t.preventDefault());
                        break;
                    case "p":
                        Qt && t.ctrlKey && (e.navigate(-1),
                        t.preventDefault());
                        break;
                    default:
                        if (t.ctrlKey)
                            break;
                        e.clearSelection()
                    }
            }
            function ys(t) {
                if (!(t.target instanceof Element))
                    return;
                const e = t.target.closest('[role="option"]');
                !e || e.getAttribute("aria-disabled") !== "true" && rc(e)
            }
            function sc(t, e) {
                const n = e.querySelector('[aria-selected="true"]');
                return n ? (n.getAttribute("aria-disabled") === "true" || n.click(),
                !0) : !1
            }
            function rc(t) {
                t.dispatchEvent(new CustomEvent("combobox-commit",{
                    bubbles: !0
                }))
            }
            function ks(t) {
                return !t.hidden && !(t instanceof HTMLInputElement && t.type === "hidden") && (t.offsetWidth > 0 || t.offsetHeight > 0)
            }
            function oc(t, e) {
                e.isComposing = t.type === "compositionstart",
                !!document.getElementById(e.input.getAttribute("aria-controls") || "") && e.clearSelection()
            }
            function ac(t, e) {
                cc(t, e) || (t.scrollTop = e.offsetTop)
            }
            function cc(t, e) {
                const n = t.scrollTop
                  , i = n + t.clientHeight
                  , s = e.offsetTop
                  , r = s + e.clientHeight;
                return s >= n && r <= i
            }
            const lc = /\s|\(|\[/;
            function uc(t, e, n, {multiWord: i, lookBackIndex: s, lastMatchPosition: r}={
                multiWord: !1,
                lookBackIndex: 0,
                lastMatchPosition: null
            }) {
                let o = t.lastIndexOf(e, n - 1);
                if (o === -1 || o < s)
                    return;
                if (i) {
                    if (r != null) {
                        if (r === o)
                            return;
                        o = r - 1
                    }
                    if (t[o + 1] === " " && n >= o + 2 || t.lastIndexOf(`
`, n - 1) > o || t.lastIndexOf(".", n - 1) > o)
                        return
                } else if (t.lastIndexOf(" ", n - 1) > o)
                    return;
                const a = t[o - 1];
                return a && !lc.test(a) ? void 0 : {
                    text: t.substring(o + e.length, n),
                    position: o + e.length
                }
            }
            const dc = ["position:absolute;", "overflow:auto;", "word-wrap:break-word;", "top:0px;", "left:-9999px;"]
              , Ts = ["box-sizing", "font-family", "font-size", "font-style", "font-variant", "font-weight", "height", "letter-spacing", "line-height", "max-height", "min-height", "padding-bottom", "padding-left", "padding-right", "padding-top", "border-bottom", "border-left", "border-right", "border-top", "text-decoration", "text-indent", "text-transform", "width", "word-spacing"]
              , As = new WeakMap;
            function fc(t, e) {
                const n = t.nodeName.toLowerCase();
                if (n !== "textarea" && n !== "input")
                    throw new Error("expected textField to a textarea or input");
                let i = As.get(t);
                if (i && i.parentElement === t.parentElement)
                    i.innerHTML = "";
                else {
                    i = document.createElement("div"),
                    As.set(t, i);
                    const a = window.getComputedStyle(t)
                      , c = dc.slice(0);
                    n === "textarea" ? c.push("white-space:pre-wrap;") : c.push("white-space:nowrap;");
                    for (let l = 0, u = Ts.length; l < u; l++) {
                        const d = Ts[l];
                        c.push(`${d}:${a.getPropertyValue(d)};`)
                    }
                    i.style.cssText = c.join(" ")
                }
                const s = document.createElement("span");
                s.style.cssText = "position: absolute;",
                s.innerHTML = "&nbsp;";
                let r, o;
                if (typeof e == "number") {
                    let a = t.value.substring(0, e);
                    a && (r = document.createTextNode(a)),
                    a = t.value.substring(e),
                    a && (o = document.createTextNode(a))
                } else {
                    const a = t.value;
                    a && (r = document.createTextNode(a))
                }
                if (r && i.appendChild(r),
                i.appendChild(s),
                o && i.appendChild(o),
                !i.parentElement) {
                    if (!t.parentElement)
                        throw new Error("textField must have a parentElement to mirror");
                    t.parentElement.insertBefore(i, t)
                }
                return i.scrollTop = t.scrollTop,
                i.scrollLeft = t.scrollLeft,
                {
                    mirror: i,
                    marker: s
                }
            }
            function hc(t, e=t.selectionEnd) {
                const {mirror: n, marker: i} = fc(t, e)
                  , s = n.getBoundingClientRect()
                  , r = i.getBoundingClientRect();
                return setTimeout(()=>{
                    n.remove()
                }
                , 5e3),
                {
                    top: r.top - s.top,
                    left: r.left - s.left
                }
            }
            const et = new WeakMap;
            class mc {
                constructor(e, n) {
                    this.expander = e,
                    this.input = n,
                    this.combobox = null,
                    this.menu = null,
                    this.match = null,
                    this.justPasted = !1,
                    this.lookBackIndex = 0,
                    this.oninput = this.onInput.bind(this),
                    this.onpaste = this.onPaste.bind(this),
                    this.onkeydown = this.onKeydown.bind(this),
                    this.oncommit = this.onCommit.bind(this),
                    this.onmousedown = this.onMousedown.bind(this),
                    this.onblur = this.onBlur.bind(this),
                    this.interactingWithList = !1,
                    n.addEventListener("paste", this.onpaste),
                    n.addEventListener("input", this.oninput),
                    n.addEventListener("keydown", this.onkeydown),
                    n.addEventListener("blur", this.onblur)
                }
                destroy() {
                    this.input.removeEventListener("paste", this.onpaste),
                    this.input.removeEventListener("input", this.oninput),
                    this.input.removeEventListener("keydown", this.onkeydown),
                    this.input.removeEventListener("blur", this.onblur)
                }
                dismissMenu() {
                    this.deactivate() && (this.lookBackIndex = this.input.selectionEnd || this.lookBackIndex)
                }
                activate(e, n) {
                    if (this.input !== document.activeElement)
                        return;
                    this.deactivate(),
                    this.menu = n,
                    n.id || (n.id = `text-expander-${Math.floor(Math.random() * 1e5).toString()}`),
                    this.expander.append(n),
                    this.combobox = new Jt(this.input,n);
                    const {top: i, left: s} = hc(this.input, e.position);
                    n.style.top = `${i}px`,
                    n.style.left = `${s}px`,
                    this.combobox.start(),
                    n.addEventListener("combobox-commit", this.oncommit),
                    n.addEventListener("mousedown", this.onmousedown),
                    this.combobox.navigate(1)
                }
                deactivate() {
                    const e = this.menu;
                    return !e || !this.combobox ? !1 : (this.menu = null,
                    e.removeEventListener("combobox-commit", this.oncommit),
                    e.removeEventListener("mousedown", this.onmousedown),
                    this.combobox.destroy(),
                    this.combobox = null,
                    e.remove(),
                    !0)
                }
                onCommit({target: e}) {
                    const n = e;
                    if (!(n instanceof HTMLElement) || !this.combobox)
                        return;
                    const i = this.match;
                    if (!i)
                        return;
                    const s = this.input.value.substring(0, i.position - i.key.length)
                      , r = this.input.value.substring(i.position + i.text.length)
                      , o = {
                        item: n,
                        key: i.key,
                        value: null
                    };
                    if (!this.expander.dispatchEvent(new CustomEvent("text-expander-value",{
                        cancelable: !0,
                        detail: o
                    })) || !o.value)
                        return;
                    const c = `${o.value} `;
                    this.input.value = s + c + r;
                    const l = s.length + c.length;
                    this.deactivate(),
                    this.input.focus(),
                    this.input.selectionStart = l,
                    this.input.selectionEnd = l,
                    this.lookBackIndex = l,
                    this.match = null
                }
                onBlur() {
                    if (this.interactingWithList) {
                        this.interactingWithList = !1;
                        return
                    }
                    this.deactivate()
                }
                onPaste() {
                    this.justPasted = !0
                }
                async onInput() {
                    if (this.justPasted) {
                        this.justPasted = !1;
                        return
                    }
                    const e = this.findMatch();
                    if (e) {
                        this.match = e;
                        const n = await this.notifyProviders(e);
                        if (!this.match)
                            return;
                        n ? this.activate(e, n) : this.deactivate()
                    } else
                        this.match = null,
                        this.deactivate()
                }
                findMatch() {
                    const e = this.input.selectionEnd || 0
                      , n = this.input.value;
                    e <= this.lookBackIndex && (this.lookBackIndex = e - 1);
                    for (const {key: i, multiWord: s} of this.expander.keys) {
                        const r = uc(n, i, e, {
                            multiWord: s,
                            lookBackIndex: this.lookBackIndex,
                            lastMatchPosition: this.match ? this.match.position : null
                        });
                        if (r)
                            return {
                                text: r.text,
                                key: i,
                                position: r.position
                            }
                    }
                }
                async notifyProviders(e) {
                    const n = []
                      , i = a=>n.push(a);
                    return this.expander.dispatchEvent(new CustomEvent("text-expander-change",{
                        cancelable: !0,
                        detail: {
                            provide: i,
                            text: e.text,
                            key: e.key
                        }
                    })) ? (await Promise.all(n)).filter(a=>a.matched).map(a=>a.fragment)[0] : void 0
                }
                onMousedown() {
                    this.interactingWithList = !0
                }
                onKeydown(e) {
                    e.key === "Escape" && (this.match = null,
                    this.deactivate() && (this.lookBackIndex = this.input.selectionEnd || this.lookBackIndex,
                    e.stopImmediatePropagation(),
                    e.preventDefault()))
                }
            }
            class xs extends HTMLElement {
                get keys() {
                    const e = this.getAttribute("keys")
                      , n = e ? e.split(" ") : []
                      , i = this.getAttribute("multiword")
                      , s = i ? i.split(" ") : []
                      , r = s.length === 0 && this.hasAttribute("multiword");
                    return n.map(o=>({
                        key: o,
                        multiWord: r || s.includes(o)
                    }))
                }
                connectedCallback() {
                    const e = this.querySelector('input[type="text"], textarea');
                    if (!(e instanceof HTMLInputElement || e instanceof HTMLTextAreaElement))
                        return;
                    const n = new mc(this,e);
                    et.set(this, n)
                }
                disconnectedCallback() {
                    const e = et.get(this);
                    !e || (e.destroy(),
                    et.delete(this))
                }
                dismiss() {
                    const e = et.get(this);
                    !e || e.dismissMenu()
                }
            }
            window.customElements.get("text-expander") || (window.TextExpanderElement = xs,
            window.customElements.define("text-expander", xs));
            const Ls = ["Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"]
              , Ss = ["January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"];
            function j(t) {
                return `0${t}`.slice(-2)
            }
            function ye(t, e) {
                const n = t.getDay()
                  , i = t.getDate()
                  , s = t.getMonth()
                  , r = t.getFullYear()
                  , o = t.getHours()
                  , a = t.getMinutes()
                  , c = t.getSeconds();
                return e.replace(/%([%aAbBcdeHIlmMpPSwyYZz])/g, function(l) {
                    let u;
                    switch (l[1]) {
                    case "%":
                        return "%";
                    case "a":
                        return Ls[n].slice(0, 3);
                    case "A":
                        return Ls[n];
                    case "b":
                        return Ss[s].slice(0, 3);
                    case "B":
                        return Ss[s];
                    case "c":
                        return t.toString();
                    case "d":
                        return j(i);
                    case "e":
                        return String(i);
                    case "H":
                        return j(o);
                    case "I":
                        return j(ye(t, "%l"));
                    case "l":
                        return String(o === 0 || o === 12 ? 12 : (o + 12) % 12);
                    case "m":
                        return j(s + 1);
                    case "M":
                        return j(a);
                    case "p":
                        return o > 11 ? "PM" : "AM";
                    case "P":
                        return o > 11 ? "pm" : "am";
                    case "S":
                        return j(c);
                    case "w":
                        return String(n);
                    case "y":
                        return j(r % 100);
                    case "Y":
                        return String(r);
                    case "Z":
                        return u = t.toString().match(/\((\w+)\)$/),
                        u ? u[1] : "";
                    case "z":
                        return u = t.toString().match(/\w([+-]\d\d\d\d) /),
                        u ? u[1] : ""
                    }
                    return ""
                })
            }
            function ke(t) {
                let e;
                return function() {
                    if (e)
                        return e;
                    if ("Intl"in window)
                        try {
                            return e = new Intl.DateTimeFormat(void 0,t),
                            e
                        } catch (n) {
                            if (!(n instanceof RangeError))
                                throw n
                        }
                }
            }
            let tt = null;
            const pc = ke({
                day: "numeric",
                month: "short"
            });
            function Ms() {
                if (tt !== null)
                    return tt;
                const t = pc();
                return t ? (tt = !!t.format(new Date(0)).match(/^\d/),
                tt) : !1
            }
            let nt = null;
            const gc = ke({
                day: "numeric",
                month: "short",
                year: "numeric"
            });
            function bc() {
                if (nt !== null)
                    return nt;
                const t = gc();
                return t ? (nt = !!t.format(new Date(0)).match(/\d,/),
                nt) : !0
            }
            function vc(t) {
                return new Date().getUTCFullYear() === t.getUTCFullYear()
            }
            function wc(t, e) {
                if ("Intl"in window && "RelativeTimeFormat"in window.Intl)
                    try {
                        return new Intl.RelativeTimeFormat(t,e)
                    } catch (n) {
                        if (!(n instanceof RangeError))
                            throw n
                    }
            }
            function Te(t) {
                const e = t.closest("[lang]");
                return e instanceof HTMLElement && e.lang ? e.lang : "default"
            }
            const Zt = new WeakMap;
            class Cs extends HTMLElement {
                static get observedAttributes() {
                    return ["datetime", "day", "format", "lang", "hour", "minute", "month", "second", "title", "weekday", "year", "time-zone-name"]
                }
                connectedCallback() {
                    const e = this.getFormattedTitle();
                    e && !this.hasAttribute("title") && this.setAttribute("title", e);
                    const n = this.getFormattedDate();
                    n && (this.textContent = n)
                }
                attributeChangedCallback(e, n, i) {
                    const s = this.getFormattedTitle();
                    if (e === "datetime") {
                        const c = Date.parse(i);
                        isNaN(c) ? Zt.delete(this) : Zt.set(this, new Date(c))
                    }
                    const r = this.getFormattedTitle()
                      , o = this.getAttribute("title");
                    e !== "title" && r && (!o || o === s) && this.setAttribute("title", r);
                    const a = this.getFormattedDate();
                    a && (this.textContent = a)
                }
                get date() {
                    return Zt.get(this)
                }
                getFormattedTitle() {
                    const e = this.date;
                    if (!e)
                        return;
                    const n = Ec();
                    if (n)
                        return n.format(e);
                    try {
                        return e.toLocaleString()
                    } catch (i) {
                        if (i instanceof RangeError)
                            return e.toString();
                        throw i
                    }
                }
                getFormattedDate() {}
            }
            const Ec = ke({
                day: "numeric",
                month: "short",
                year: "numeric",
                hour: "numeric",
                minute: "2-digit",
                timeZoneName: "short"
            })
              , en = new WeakMap;
            class Ns extends Cs {
                attributeChangedCallback(e, n, i) {
                    (e === "hour" || e === "minute" || e === "second" || e === "time-zone-name") && en.delete(this),
                    super.attributeChangedCallback(e, n, i)
                }
                getFormattedDate() {
                    const e = this.date;
                    if (!e)
                        return;
                    const n = yc(this, e) || ""
                      , i = kc(this, e) || "";
                    return `${n} ${i}`.trim()
                }
            }
            function yc(t, e) {
                const n = {
                    weekday: {
                        short: "%a",
                        long: "%A"
                    },
                    day: {
                        numeric: "%e",
                        "2-digit": "%d"
                    },
                    month: {
                        short: "%b",
                        long: "%B"
                    },
                    year: {
                        numeric: "%Y",
                        "2-digit": "%y"
                    }
                };
                let i = Ms() ? "weekday day month year" : "weekday month day, year";
                for (const s in n) {
                    const r = n[s][t.getAttribute(s) || ""];
                    i = i.replace(s, r || "")
                }
                return i = i.replace(/(\s,)|(,\s$)/, ""),
                ye(e, i).replace(/\s+/, " ").trim()
            }
            function kc(t, e) {
                const n = {}
                  , i = t.getAttribute("hour");
                (i === "numeric" || i === "2-digit") && (n.hour = i);
                const s = t.getAttribute("minute");
                (s === "numeric" || s === "2-digit") && (n.minute = s);
                const r = t.getAttribute("second");
                (r === "numeric" || r === "2-digit") && (n.second = r);
                const o = t.getAttribute("time-zone-name");
                if ((o === "short" || o === "long") && (n.timeZoneName = o),
                Object.keys(n).length === 0)
                    return;
                let a = en.get(t);
                a || (a = ke(n),
                en.set(t, a));
                const c = a();
                if (c)
                    return c.format(e);
                {
                    const l = n.second ? "%H:%M:%S" : "%H:%M";
                    return ye(e, l)
                }
            }
            window.customElements.get("local-time") || (window.LocalTimeElement = Ns,
            window.customElements.define("local-time", Ns));
            class Ae {
                constructor(e, n) {
                    this.date = e,
                    this.locale = n
                }
                toString() {
                    const e = this.timeElapsed();
                    if (e)
                        return e;
                    {
                        const n = this.timeAhead();
                        return n || `on ${this.formatDate()}`
                    }
                }
                timeElapsed() {
                    const e = new Date().getTime() - this.date.getTime()
                      , n = Math.round(e / 1e3)
                      , i = Math.round(n / 60)
                      , s = Math.round(i / 60)
                      , r = Math.round(s / 24);
                    return e >= 0 && r < 30 ? this.timeAgoFromMs(e) : null
                }
                timeAhead() {
                    const e = this.date.getTime() - new Date().getTime()
                      , n = Math.round(e / 1e3)
                      , i = Math.round(n / 60)
                      , s = Math.round(i / 60)
                      , r = Math.round(s / 24);
                    return e >= 0 && r < 30 ? this.timeUntil() : null
                }
                timeAgo() {
                    const e = new Date().getTime() - this.date.getTime();
                    return this.timeAgoFromMs(e)
                }
                timeAgoFromMs(e) {
                    const n = Math.round(e / 1e3)
                      , i = Math.round(n / 60)
                      , s = Math.round(i / 60)
                      , r = Math.round(s / 24)
                      , o = Math.round(r / 30)
                      , a = Math.round(o / 12);
                    return e < 0 ? y(this.locale, 0, "second") : n < 10 ? y(this.locale, 0, "second") : n < 45 ? y(this.locale, -n, "second") : n < 90 ? y(this.locale, -i, "minute") : i < 45 ? y(this.locale, -i, "minute") : i < 90 ? y(this.locale, -s, "hour") : s < 24 ? y(this.locale, -s, "hour") : s < 36 ? y(this.locale, -r, "day") : r < 30 ? y(this.locale, -r, "day") : o < 18 ? y(this.locale, -o, "month") : y(this.locale, -a, "year")
                }
                microTimeAgo() {
                    const e = new Date().getTime() - this.date.getTime()
                      , n = Math.round(e / 1e3)
                      , i = Math.round(n / 60)
                      , s = Math.round(i / 60)
                      , r = Math.round(s / 24)
                      , o = Math.round(r / 30)
                      , a = Math.round(o / 12);
                    return i < 1 ? "1m" : i < 60 ? `${i}m` : s < 24 ? `${s}h` : r < 365 ? `${r}d` : `${a}y`
                }
                timeUntil() {
                    const e = this.date.getTime() - new Date().getTime();
                    return this.timeUntilFromMs(e)
                }
                timeUntilFromMs(e) {
                    const n = Math.round(e / 1e3)
                      , i = Math.round(n / 60)
                      , s = Math.round(i / 60)
                      , r = Math.round(s / 24)
                      , o = Math.round(r / 30)
                      , a = Math.round(o / 12);
                    return o >= 18 ? y(this.locale, a, "year") : o >= 12 ? y(this.locale, a, "year") : r >= 45 ? y(this.locale, o, "month") : r >= 30 ? y(this.locale, o, "month") : s >= 36 ? y(this.locale, r, "day") : s >= 24 ? y(this.locale, r, "day") : i >= 90 ? y(this.locale, s, "hour") : i >= 45 ? y(this.locale, s, "hour") : n >= 90 ? y(this.locale, i, "minute") : n >= 45 ? y(this.locale, i, "minute") : n >= 10 ? y(this.locale, n, "second") : y(this.locale, 0, "second")
                }
                microTimeUntil() {
                    const e = this.date.getTime() - new Date().getTime()
                      , n = Math.round(e / 1e3)
                      , i = Math.round(n / 60)
                      , s = Math.round(i / 60)
                      , r = Math.round(s / 24)
                      , o = Math.round(r / 30)
                      , a = Math.round(o / 12);
                    return r >= 365 ? `${a}y` : s >= 24 ? `${r}d` : i >= 60 ? `${s}h` : i > 1 ? `${i}m` : "1m"
                }
                formatDate() {
                    let e = Ms() ? "%e %b" : "%b %e";
                    return vc(this.date) || (e += bc() ? ", %Y" : " %Y"),
                    ye(this.date, e)
                }
                formatTime() {
                    const e = Ac();
                    return e ? e.format(this.date) : ye(this.date, "%l:%M%P")
                }
            }
            function y(t, e, n) {
                const i = wc(t, {
                    numeric: "auto"
                });
                return i ? i.format(e, n) : Tc(e, n)
            }
            function Tc(t, e) {
                if (t === 0)
                    switch (e) {
                    case "year":
                    case "quarter":
                    case "month":
                    case "week":
                        return `this ${e}`;
                    case "day":
                        return "today";
                    case "hour":
                    case "minute":
                        return `in 0 ${e}s`;
                    case "second":
                        return "now"
                    }
                else if (t === 1)
                    switch (e) {
                    case "year":
                    case "quarter":
                    case "month":
                    case "week":
                        return `next ${e}`;
                    case "day":
                        return "tomorrow";
                    case "hour":
                    case "minute":
                    case "second":
                        return `in 1 ${e}`
                    }
                else if (t === -1)
                    switch (e) {
                    case "year":
                    case "quarter":
                    case "month":
                    case "week":
                        return `last ${e}`;
                    case "day":
                        return "yesterday";
                    case "hour":
                    case "minute":
                    case "second":
                        return `1 ${e} ago`
                    }
                else if (t > 1)
                    switch (e) {
                    case "year":
                    case "quarter":
                    case "month":
                    case "week":
                    case "day":
                    case "hour":
                    case "minute":
                    case "second":
                        return `in ${t} ${e}s`
                    }
                else if (t < -1)
                    switch (e) {
                    case "year":
                    case "quarter":
                    case "month":
                    case "week":
                    case "day":
                    case "hour":
                    case "minute":
                    case "second":
                        return `${-t} ${e}s ago`
                    }
                throw new RangeError(`Invalid unit argument for format() '${e}'`)
            }
            const Ac = ke({
                hour: "numeric",
                minute: "2-digit"
            });
            class xe extends Cs {
                getFormattedDate() {
                    const e = this.date;
                    if (!!e)
                        return new Ae(e,Te(this)).toString()
                }
                connectedCallback() {
                    se.push(this),
                    Le || (Is(),
                    Le = window.setInterval(Is, 60 * 1e3)),
                    super.connectedCallback()
                }
                disconnectedCallback() {
                    const e = se.indexOf(this);
                    e !== -1 && se.splice(e, 1),
                    se.length || Le && (clearInterval(Le),
                    Le = null)
                }
            }
            w("R", xe);
            const se = [];
            let Le;
            function Is() {
                let t, e, n;
                for (e = 0,
                n = se.length; e < n; e++)
                    t = se[e],
                    t.textContent = t.getFormattedDate() || ""
            }
            window.customElements.get("relative-time") || (window.RelativeTimeElement = xe,
            window.customElements.define("relative-time", xe));
            class Ds extends xe {
                getFormattedDate() {
                    const e = this.getAttribute("format")
                      , n = this.date;
                    if (!!n)
                        return e === "micro" ? new Ae(n,Te(this)).microTimeAgo() : new Ae(n,Te(this)).timeAgo()
                }
            }
            window.customElements.get("time-ago") || (window.TimeAgoElement = Ds,
            window.customElements.define("time-ago", Ds));
            class $s extends xe {
                getFormattedDate() {
                    const e = this.getAttribute("format")
                      , n = this.date;
                    if (!!n)
                        return e === "micro" ? new Ae(n,Te(this)).microTimeUntil() : new Ae(n,Te(this)).timeUntil()
                }
            }
            window.customElements.get("time-until") || (window.TimeUntilElement = $s,
            window.customElements.define("time-until", $s));
            class xc extends CustomEvent {
                constructor(e, n) {
                    super(e, n);
                    this.relatedTarget = n.relatedTarget
                }
            }
            function Lc(t, e=0) {
                let n;
                return function(...i) {
                    clearTimeout(n),
                    n = window.setTimeout(()=>{
                        clearTimeout(n),
                        t(...i)
                    }
                    , e)
                }
            }
            const tn = new WeakMap;
            function Sc(t, e) {
                const n = new XMLHttpRequest;
                return n.open("GET", e, !0),
                n.setRequestHeader("Accept", "text/fragment+html"),
                Mc(t, n)
            }
            function Mc(t, e) {
                const n = tn.get(t);
                n && n.abort(),
                tn.set(t, e);
                const i = ()=>tn.delete(t)
                  , s = Cc(e);
                return s.then(i, i),
                s
            }
            function Cc(t) {
                return new Promise((e,n)=>{
                    t.onload = function() {
                        t.status >= 200 && t.status < 300 ? e(t.responseText) : n(new Error(t.responseText))
                    }
                    ,
                    t.onerror = n,
                    t.send()
                }
                )
            }
            class Nc {
                constructor(e, n, i) {
                    this.container = e,
                    this.input = n,
                    this.results = i,
                    this.combobox = new Jt(n,i),
                    this.results.hidden = !0,
                    this.input.setAttribute("autocomplete", "off"),
                    this.input.setAttribute("spellcheck", "false"),
                    this.interactingWithList = !1,
                    this.onInputChange = Lc(this.onInputChange.bind(this), 300),
                    this.onResultsMouseDown = this.onResultsMouseDown.bind(this),
                    this.onInputBlur = this.onInputBlur.bind(this),
                    this.onInputFocus = this.onInputFocus.bind(this),
                    this.onKeydown = this.onKeydown.bind(this),
                    this.onCommit = this.onCommit.bind(this),
                    this.input.addEventListener("keydown", this.onKeydown),
                    this.input.addEventListener("focus", this.onInputFocus),
                    this.input.addEventListener("blur", this.onInputBlur),
                    this.input.addEventListener("input", this.onInputChange),
                    this.results.addEventListener("mousedown", this.onResultsMouseDown),
                    this.results.addEventListener("combobox-commit", this.onCommit)
                }
                destroy() {
                    this.input.removeEventListener("keydown", this.onKeydown),
                    this.input.removeEventListener("focus", this.onInputFocus),
                    this.input.removeEventListener("blur", this.onInputBlur),
                    this.input.removeEventListener("input", this.onInputChange),
                    this.results.removeEventListener("mousedown", this.onResultsMouseDown),
                    this.results.removeEventListener("combobox-commit", this.onCommit)
                }
                onKeydown(e) {
                    if (e.key === "Escape" && this.container.open)
                        this.container.open = !1,
                        e.stopPropagation(),
                        e.preventDefault();
                    else if (e.altKey && e.key === "ArrowUp" && this.container.open)
                        this.container.open = !1,
                        e.stopPropagation(),
                        e.preventDefault();
                    else if (e.altKey && e.key === "ArrowDown" && !this.container.open) {
                        if (!this.input.value.trim())
                            return;
                        this.container.open = !0,
                        e.stopPropagation(),
                        e.preventDefault()
                    }
                }
                onInputFocus() {
                    this.fetchResults()
                }
                onInputBlur() {
                    if (this.interactingWithList) {
                        this.interactingWithList = !1;
                        return
                    }
                    this.container.open = !1
                }
                onCommit({target: e}) {
                    const n = e;
                    if (!(n instanceof HTMLElement) || (this.container.open = !1,
                    n instanceof HTMLAnchorElement))
                        return;
                    const i = n.getAttribute("data-autocomplete-value") || n.textContent;
                    this.container.value = i
                }
                onResultsMouseDown() {
                    this.interactingWithList = !0
                }
                onInputChange() {
                    this.container.removeAttribute("value"),
                    this.fetchResults()
                }
                identifyOptions() {
                    let e = 0;
                    for (const n of this.results.querySelectorAll('[role="option"]:not([id])'))
                        n.id = `${this.results.id}-option-${e++}`
                }
                fetchResults() {
                    const e = this.input.value.trim();
                    if (!e) {
                        this.container.open = !1;
                        return
                    }
                    const n = this.container.src;
                    if (!n)
                        return;
                    const i = new URL(n,window.location.href)
                      , s = new URLSearchParams(i.search.slice(1));
                    s.append("q", e),
                    i.search = s.toString(),
                    this.container.dispatchEvent(new CustomEvent("loadstart")),
                    Sc(this.input, i.toString()).then(r=>{
                        this.results.innerHTML = r,
                        this.identifyOptions();
                        const o = !!this.results.querySelector('[role="option"]');
                        this.container.open = o,
                        this.container.dispatchEvent(new CustomEvent("load")),
                        this.container.dispatchEvent(new CustomEvent("loadend"))
                    }
                    ).catch(()=>{
                        this.container.dispatchEvent(new CustomEvent("error")),
                        this.container.dispatchEvent(new CustomEvent("loadend"))
                    }
                    )
                }
                open() {
                    !this.results.hidden || (this.combobox.start(),
                    this.results.hidden = !1)
                }
                close() {
                    this.results.hidden || (this.combobox.stop(),
                    this.results.hidden = !0)
                }
            }
            const it = new WeakMap;
            class nn extends HTMLElement {
                constructor() {
                    super()
                }
                connectedCallback() {
                    const e = this.getAttribute("for");
                    if (!e)
                        return;
                    const n = this.querySelector("input")
                      , i = document.getElementById(e);
                    !(n instanceof HTMLInputElement) || !i || (it.set(this, new Nc(this,n,i)),
                    i.setAttribute("role", "listbox"))
                }
                disconnectedCallback() {
                    const e = it.get(this);
                    e && (e.destroy(),
                    it.delete(this))
                }
                get src() {
                    return this.getAttribute("src") || ""
                }
                set src(e) {
                    this.setAttribute("src", e)
                }
                get value() {
                    return this.getAttribute("value") || ""
                }
                set value(e) {
                    this.setAttribute("value", e)
                }
                get open() {
                    return this.hasAttribute("open")
                }
                set open(e) {
                    e ? this.setAttribute("open", "") : this.removeAttribute("open")
                }
                static get observedAttributes() {
                    return ["open", "value"]
                }
                attributeChangedCallback(e, n, i) {
                    if (n === i)
                        return;
                    const s = it.get(this);
                    if (!!s)
                        switch (e) {
                        case "open":
                            i === null ? s.close() : s.open();
                            break;
                        case "value":
                            i !== null && (s.input.value = i),
                            this.dispatchEvent(new xc("auto-complete-change",{
                                bubbles: !0,
                                relatedTarget: s.input
                            }));
                            break
                        }
                }
            }
            w("A", nn),
            window.customElements.get("auto-complete") || (window.AutocompleteElement = nn,
            window.customElements.define("auto-complete", nn));
            function Ic(t) {
                const e = document.createElement("pre");
                return e.style.width = "1px",
                e.style.height = "1px",
                e.style.position = "fixed",
                e.style.top = "5px",
                e.textContent = t,
                e
            }
            function _s(t) {
                if ("clipboard"in navigator)
                    return navigator.clipboard.writeText(t.textContent);
                const e = getSelection();
                if (e == null)
                    return Promise.reject(new Error);
                e.removeAllRanges();
                const n = document.createRange();
                return n.selectNodeContents(t),
                e.addRange(n),
                document.execCommand("copy"),
                e.removeAllRanges(),
                Promise.resolve()
            }
            function sn(t) {
                if ("clipboard"in navigator)
                    return navigator.clipboard.writeText(t);
                const e = document.body;
                if (!e)
                    return Promise.reject(new Error);
                const n = Ic(t);
                return e.appendChild(n),
                _s(n),
                e.removeChild(n),
                Promise.resolve()
            }
            function Ps(t) {
                const e = t.getAttribute("for")
                  , n = t.getAttribute("value");
                function i() {
                    t.dispatchEvent(new CustomEvent("clipboard-copy",{
                        bubbles: !0
                    }))
                }
                if (n)
                    sn(n).then(i);
                else if (e) {
                    const s = "getRootNode"in Element.prototype ? t.getRootNode() : t.ownerDocument;
                    if (!(s instanceof Document || "ShadowRoot"in window && s instanceof ShadowRoot))
                        return;
                    const r = s.getElementById(e);
                    r && Dc(r).then(i)
                }
            }
            function Dc(t) {
                return t instanceof HTMLInputElement || t instanceof HTMLTextAreaElement ? sn(t.value) : t instanceof HTMLAnchorElement && t.hasAttribute("href") ? sn(t.href) : _s(t)
            }
            function $c(t) {
                const e = t.currentTarget;
                e instanceof HTMLElement && Ps(e)
            }
            function Hs(t) {
                if (t.key === " " || t.key === "Enter") {
                    const e = t.currentTarget;
                    e instanceof HTMLElement && (t.preventDefault(),
                    Ps(e))
                }
            }
            function _c(t) {
                t.currentTarget.addEventListener("keydown", Hs)
            }
            function Pc(t) {
                t.currentTarget.removeEventListener("keydown", Hs)
            }
            class rn extends HTMLElement {
                constructor() {
                    super();
                    this.addEventListener("click", $c),
                    this.addEventListener("focus", _c),
                    this.addEventListener("blur", Pc)
                }
                connectedCallback() {
                    this.hasAttribute("tabindex") || this.setAttribute("tabindex", "0"),
                    this.hasAttribute("role") || this.setAttribute("role", "button")
                }
                get value() {
                    return this.getAttribute("value") || ""
                }
                set value(e) {
                    this.setAttribute("value", e)
                }
            }
            w("l", rn),
            window.customElements.get("clipboard-copy") || (window.ClipboardCopyElement = rn,
            window.customElements.define("clipboard-copy", rn));
            function st(t) {
                return Array.from(t.querySelectorAll('[role="tablist"] [role="tab"]')).filter(e=>e instanceof HTMLElement && e.closest(t.tagName) === t)
            }
            class on extends HTMLElement {
                constructor() {
                    super();
                    this.addEventListener("keydown", e=>{
                        const n = e.target;
                        if (!(n instanceof HTMLElement) || n.closest(this.tagName) !== this || n.getAttribute("role") !== "tab" && !n.closest('[role="tablist"]'))
                            return;
                        const i = st(this)
                          , s = i.indexOf(i.find(r=>r.matches('[aria-selected="true"]')));
                        if (e.code === "ArrowRight") {
                            let r = s + 1;
                            r >= i.length && (r = 0),
                            Se(this, r)
                        } else if (e.code === "ArrowLeft") {
                            let r = s - 1;
                            r < 0 && (r = i.length - 1),
                            Se(this, r)
                        } else
                            e.code === "Home" ? (Se(this, 0),
                            e.preventDefault()) : e.code === "End" && (Se(this, i.length - 1),
                            e.preventDefault())
                    }
                    ),
                    this.addEventListener("click", e=>{
                        const n = st(this);
                        if (!(e.target instanceof Element) || e.target.closest(this.tagName) !== this)
                            return;
                        const i = e.target.closest('[role="tab"]');
                        if (!(i instanceof HTMLElement) || !i.closest('[role="tablist"]'))
                            return;
                        const s = n.indexOf(i);
                        Se(this, s)
                    }
                    )
                }
                connectedCallback() {
                    for (const e of st(this))
                        e.hasAttribute("aria-selected") || e.setAttribute("aria-selected", "false"),
                        e.hasAttribute("tabindex") || (e.getAttribute("aria-selected") === "true" ? e.setAttribute("tabindex", "0") : e.setAttribute("tabindex", "-1"))
                }
            }
            w("B", on);
            function Se(t, e) {
                const n = st(t)
                  , i = Array.from(t.querySelectorAll('[role="tabpanel"]')).filter(a=>a.closest(t.tagName) === t)
                  , s = n[e]
                  , r = i[e];
                if (!!t.dispatchEvent(new CustomEvent("tab-container-change",{
                    bubbles: !0,
                    cancelable: !0,
                    detail: {
                        relatedTarget: r
                    }
                }))) {
                    for (const a of n)
                        a.setAttribute("aria-selected", "false"),
                        a.setAttribute("tabindex", "-1");
                    for (const a of i)
                        a.hidden = !0,
                        !a.hasAttribute("tabindex") && !a.hasAttribute("data-tab-container-no-tabstop") && a.setAttribute("tabindex", "0");
                    s.setAttribute("aria-selected", "true"),
                    s.setAttribute("tabindex", "0"),
                    s.focus(),
                    r.hidden = !1,
                    t.dispatchEvent(new CustomEvent("tab-container-changed",{
                        bubbles: !0,
                        detail: {
                            relatedTarget: r
                        }
                    }))
                }
            }
            window.customElements.get("tab-container") || (window.TabContainerElement = on,
            window.customElements.define("tab-container", on)),
            window.IncludeFragmentElement.prototype.fetch = t=>(t.headers.append("X-Requested-With", "XMLHttpRequest"),
            window.fetch(t));
            function Hc(t) {
                let e = !1
                  , n = null;
                t.addEventListener("mousedown", o),
                t.addEventListener("change", s);
                function i(l, u, d, p=!1) {
                    u instanceof HTMLInputElement && (u.indeterminate = p,
                    u.checked !== d && (u.checked = d,
                    setTimeout(()=>{
                        const f = new CustomEvent("change",{
                            bubbles: !0,
                            cancelable: !1,
                            detail: {
                                relatedTarget: l
                            }
                        });
                        u.dispatchEvent(f)
                    }
                    )))
                }
                function s(l) {
                    const u = l.target;
                    u instanceof Element && (u.hasAttribute("data-check-all") ? r(l) : u.hasAttribute("data-check-all-item") && a(l))
                }
                function r(l) {
                    if (l instanceof CustomEvent && l.detail) {
                        const {relatedTarget: d} = l.detail;
                        if (d && d.hasAttribute("data-check-all-item"))
                            return
                    }
                    const u = l.target;
                    if (u instanceof HTMLInputElement) {
                        n = null;
                        for (const d of t.querySelectorAll("[data-check-all-item]"))
                            i(u, d, u.checked);
                        u.indeterminate = !1,
                        c()
                    }
                }
                function o(l) {
                    if (!(l.target instanceof Element))
                        return;
                    (l.target instanceof HTMLLabelElement && l.target.control || l.target).hasAttribute("data-check-all-item") && (e = l.shiftKey)
                }
                function a(l) {
                    if (l instanceof CustomEvent && l.detail) {
                        const {relatedTarget: f} = l.detail;
                        if (f && (f.hasAttribute("data-check-all") || f.hasAttribute("data-check-all-item")))
                            return
                    }
                    const u = l.target;
                    if (!(u instanceof HTMLInputElement))
                        return;
                    const d = Array.from(t.querySelectorAll("[data-check-all-item]"));
                    if (e && n) {
                        const [f,h] = [d.indexOf(n), d.indexOf(u)].sort();
                        for (const m of d.slice(f, +h + 1 || 9e9))
                            i(u, m, u.checked)
                    }
                    e = !1,
                    n = u;
                    const p = t.querySelector("[data-check-all]");
                    if (p) {
                        const f = d.length
                          , h = d.filter(g=>g instanceof HTMLInputElement && g.checked).length
                          , m = h === f
                          , b = f > h && h > 0;
                        i(u, p, m, b)
                    }
                    c()
                }
                function c() {
                    const l = t.querySelector("[data-check-all-count]");
                    if (l) {
                        const u = t.querySelectorAll("[data-check-all-item]:checked").length;
                        l.textContent = u.toString()
                    }
                }
                return {
                    unsubscribe: ()=>{
                        t.removeEventListener("mousedown", o),
                        t.removeEventListener("change", s)
                    }
                }
            }
            function re(t, e) {
                var n, i, s;
                const r = t.value.slice(0, (n = t.selectionStart) !== null && n !== void 0 ? n : void 0)
                  , o = t.value.slice((i = t.selectionEnd) !== null && i !== void 0 ? i : void 0);
                let a = !0;
                t.contentEditable = "true";
                try {
                    a = document.execCommand("insertText", !1, e)
                } catch (c) {
                    a = !1
                }
                if (t.contentEditable = "false",
                a && !t.value.slice(0, (s = t.selectionStart) !== null && s !== void 0 ? s : void 0).endsWith(e) && (a = !1),
                !a) {
                    try {
                        document.execCommand("ms-beginUndoUnit")
                    } catch (c) {}
                    t.value = r + e + o;
                    try {
                        document.execCommand("ms-endUndoUnit")
                    } catch (c) {}
                    t.dispatchEvent(new CustomEvent("change",{
                        bubbles: !0,
                        cancelable: !0
                    }))
                }
            }
            function Rc(t) {
                t.addEventListener("dragover", Fs),
                t.addEventListener("drop", Rs),
                t.addEventListener("paste", Os)
            }
            function Fc(t) {
                t.removeEventListener("dragover", Fs),
                t.removeEventListener("drop", Rs),
                t.removeEventListener("paste", Os)
            }
            function Rs(t) {
                const e = t.dataTransfer;
                if (!e || Oc(e) || !Ws(e))
                    return;
                const n = Bs(e);
                if (!n.some(an))
                    return;
                t.stopPropagation(),
                t.preventDefault();
                const i = t.currentTarget;
                i instanceof HTMLTextAreaElement && re(i, n.map(qs).join(""))
            }
            function Fs(t) {
                const e = t.dataTransfer;
                e && (e.dropEffect = "link")
            }
            function Os(t) {
                const e = t.clipboardData;
                if (!e || !Ws(e))
                    return;
                const n = Bs(e);
                if (!n.some(an))
                    return;
                t.stopPropagation(),
                t.preventDefault();
                const i = t.currentTarget;
                i instanceof HTMLTextAreaElement && re(i, n.map(qs).join(""))
            }
            function qs(t) {
                return an(t) ? `
![](${t})
` : t
            }
            function Oc(t) {
                return Array.from(t.types).indexOf("Files") >= 0
            }
            function Ws(t) {
                return Array.from(t.types).indexOf("text/uri-list") >= 0
            }
            function Bs(t) {
                return (t.getData("text/uri-list") || "").split(`\r
`)
            }
            const qc = /\.(gif|png|jpe?g)$/i;
            function an(t) {
                return qc.test(t)
            }
            function Wc(t) {
                t.addEventListener("paste", Vs)
            }
            function Bc(t) {
                t.removeEventListener("paste", Vs)
            }
            function Vs(t) {
                const e = t.clipboardData;
                if (!e || !Vc(e))
                    return;
                const n = t.currentTarget;
                if (!(n instanceof HTMLTextAreaElement))
                    return;
                const i = e.getData("text/plain");
                if (!i || !js(i) || jc(n))
                    return;
                const s = n.value.substring(n.selectionStart, n.selectionEnd);
                !s.length || js(s.trim()) || (t.stopPropagation(),
                t.preventDefault(),
                re(n, Uc(s, i)))
            }
            function Vc(t) {
                return Array.from(t.types).includes("text/plain")
            }
            function jc(t) {
                const e = t.selectionStart || 0;
                return e > 1 ? t.value.substring(e - 2, e) === "](" : !1
            }
            function Uc(t, e) {
                return `[${t}](${e})`
            }
            function js(t) {
                return /^https?:\/\//i.test(t)
            }
            function zc(t) {
                t.addEventListener("dragover", zs),
                t.addEventListener("drop", Us),
                t.addEventListener("paste", Ks)
            }
            function Kc(t) {
                t.removeEventListener("dragover", zs),
                t.removeEventListener("drop", Us),
                t.removeEventListener("paste", Ks)
            }
            function Us(t) {
                const e = t.dataTransfer;
                if (!e || Yc(e))
                    return;
                const n = Xs(e);
                if (!n)
                    return;
                t.stopPropagation(),
                t.preventDefault();
                const i = t.currentTarget;
                i instanceof HTMLTextAreaElement && re(i, n)
            }
            function zs(t) {
                const e = t.dataTransfer;
                e && (e.dropEffect = "copy")
            }
            function Ks(t) {
                if (!t.clipboardData)
                    return;
                const e = Xs(t.clipboardData);
                if (!e)
                    return;
                t.stopPropagation(),
                t.preventDefault();
                const n = t.currentTarget;
                n instanceof HTMLTextAreaElement && re(n, e)
            }
            function Yc(t) {
                return Array.from(t.types).indexOf("Files") >= 0
            }
            function Ys(t) {
                const e = "\xA0";
                return (t.textContent || "").trim().replace(/\|/g, "\\|").replace(/\n/g, " ") || e
            }
            function Xc(t) {
                return Array.from(t.querySelectorAll("td, th")).map(Ys)
            }
            function Gc(t) {
                const e = Array.from(t.querySelectorAll("tr"))
                  , n = e.shift();
                if (!n)
                    return "";
                const i = Xc(n)
                  , s = i.map(()=>"--")
                  , r = `${i.join(" | ")}
${s.join(" | ")}
`
                  , o = e.map(a=>Array.from(a.querySelectorAll("td")).map(Ys).join(" | ")).join(`
`);
                return `
${r}${o}

`
            }
            function Xs(t) {
                if (Array.from(t.types).indexOf("text/html") === -1)
                    return;
                const e = t.getData("text/html");
                if (!/<table/i.test(e))
                    return;
                let s = new DOMParser().parseFromString(e, "text/html").querySelector("table");
                if (s = !s || s.closest("[data-paste-markdown-skip]") ? null : s,
                !s)
                    return;
                const r = Gc(s);
                return e.replace(/<meta.*?>/, "").replace(/<table[.\S\s]*<\/table>/, `
${r}`)
            }
            function Qc(t) {
                t.addEventListener("paste", Gs)
            }
            function Jc(t) {
                t.removeEventListener("paste", Gs)
            }
            function Gs(t) {
                const e = t.clipboardData;
                if (!e || !Zc(e))
                    return;
                const n = t.currentTarget;
                if (!(n instanceof HTMLTextAreaElement))
                    return;
                const i = e.getData("text/x-gfm");
                !i || (t.stopPropagation(),
                t.preventDefault(),
                re(n, i))
            }
            function Zc(t) {
                return Array.from(t.types).indexOf("text/x-gfm") >= 0
            }
            var Me = "<unknown>";
            function el(t) {
                var e = t.split(`
`);
                return e.reduce(function(n, i) {
                    var s = il(i) || rl(i) || cl(i) || fl(i) || ul(i);
                    return s && n.push(s),
                    n
                }, [])
            }
            var tl = /^\s*at (.*?) ?\(((?:file|https?|blob|chrome-extension|native|eval|webpack|<anonymous>|\/).*?)(?::(\d+))?(?::(\d+))?\)?\s*$/i
              , nl = /\((\S*)(?::(\d+))(?::(\d+))\)/;
            function il(t) {
                var e = tl.exec(t);
                if (!e)
                    return null;
                var n = e[2] && e[2].indexOf("native") === 0
                  , i = e[2] && e[2].indexOf("eval") === 0
                  , s = nl.exec(e[2]);
                return i && s != null && (e[2] = s[1],
                e[3] = s[2],
                e[4] = s[3]),
                {
                    file: n ? null : e[2],
                    methodName: e[1] || Me,
                    arguments: n ? [e[2]] : [],
                    lineNumber: e[3] ? +e[3] : null,
                    column: e[4] ? +e[4] : null
                }
            }
            var sl = /^\s*at (?:((?:\[object object\])?.+) )?\(?((?:file|ms-appx|https?|webpack|blob):.*?):(\d+)(?::(\d+))?\)?\s*$/i;
            function rl(t) {
                var e = sl.exec(t);
                return e ? {
                    file: e[2],
                    methodName: e[1] || Me,
                    arguments: [],
                    lineNumber: +e[3],
                    column: e[4] ? +e[4] : null
                } : null
            }
            var ol = /^\s*(.*?)(?:\((.*?)\))?(?:^|@)((?:file|https?|blob|chrome|webpack|resource|\[native).*?|[^@]*bundle)(?::(\d+))?(?::(\d+))?\s*$/i
              , al = /(\S+) line (\d+)(?: > eval line \d+)* > eval/i;
            function cl(t) {
                var e = ol.exec(t);
                if (!e)
                    return null;
                var n = e[3] && e[3].indexOf(" > eval") > -1
                  , i = al.exec(e[3]);
                return n && i != null && (e[3] = i[1],
                e[4] = i[2],
                e[5] = null),
                {
                    file: e[3],
                    methodName: e[1] || Me,
                    arguments: e[2] ? e[2].split(",") : [],
                    lineNumber: e[4] ? +e[4] : null,
                    column: e[5] ? +e[5] : null
                }
            }
            var ll = /^\s*(?:([^@]*)(?:\((.*?)\))?@)?(\S.*?):(\d+)(?::(\d+))?\s*$/i;
            function ul(t) {
                var e = ll.exec(t);
                return e ? {
                    file: e[3],
                    methodName: e[1] || Me,
                    arguments: [],
                    lineNumber: +e[4],
                    column: e[5] ? +e[5] : null
                } : null
            }
            var dl = /^\s*at (?:((?:\[object object\])?[^\\/]+(?: \[as \S+\])?) )?\(?(.*?):(\d+)(?::(\d+))?\)?\s*$/i;
            function fl(t) {
                var e = dl.exec(t);
                return e ? {
                    file: e[2],
                    methodName: e[1] || Me,
                    arguments: [],
                    lineNumber: +e[3],
                    column: e[4] ? +e[4] : null
                } : null
            }
            function cn(t) {
                const e = t.parentNode;
                if (e === null || !(e instanceof HTMLElement))
                    throw new Error;
                let n = 0;
                e instanceof HTMLOListElement && e.start !== 1 && (n = e.start - 1);
                const i = e.children;
                for (let s = 0; s < i.length; ++s)
                    if (i[s] === t)
                        return n + s;
                return n
            }
            function hl(t) {
                if (t instanceof HTMLAnchorElement && t.childNodes.length === 1) {
                    const e = t.childNodes[0];
                    if (e instanceof HTMLImageElement)
                        return e.src === t.href
                }
                return !1
            }
            function ml(t) {
                return t.nodeName === "IMG" || t.firstChild != null
            }
            function pl(t) {
                return t.nodeName === "INPUT" && t instanceof HTMLInputElement && t.type === "checkbox"
            }
            let rt = 0;
            function gl(t) {
                const e = t.childNodes[0]
                  , n = t.childNodes[1];
                return e && t.childNodes.length < 3 ? (e.nodeName === "OL" || e.nodeName === "UL") && (!n || n.nodeType === Node.TEXT_NODE && !(n.textContent || "").trim()) : !1
            }
            function ot(t) {
                return t.replace(/&/g, "&amp;").replace(/'/g, "&apos;").replace(/"/g, "&quot;").replace(/</g, "&lt;").replace(/>/g, "&gt;")
            }
            const oe = {
                INPUT(t) {
                    return t instanceof HTMLInputElement && t.checked ? "[x] " : "[ ] "
                },
                CODE(t) {
                    const e = t.textContent || "";
                    return t.parentNode && t.parentNode.nodeName === "PRE" ? (t.textContent = `\`\`\`
${e.replace(/\n+$/, "")}
\`\`\`

`,
                    t) : e.indexOf("`") >= 0 ? `\`\` ${e} \`\`` : `\`${e}\``
                },
                P(t) {
                    const e = document.createElement("p")
                      , n = t.textContent || "";
                    return e.textContent = n.replace(/<(\/?)(pre|strong|weak|em)>/g, "\\<$1$2\\>"),
                    e
                },
                STRONG(t) {
                    return `**${t.textContent || ""}**`
                },
                EM(t) {
                    return `_${t.textContent || ""}_`
                },
                DEL(t) {
                    return `~${t.textContent || ""}~`
                },
                BLOCKQUOTE(t) {
                    const e = (t.textContent || "").trim().replace(/^/gm, "> ")
                      , n = document.createElement("pre");
                    return n.textContent = `${e}

`,
                    n
                },
                A(t) {
                    const e = t.textContent || ""
                      , n = t.getAttribute("href");
                    return /^https?:/.test(e) && e === n ? e : n ? `[${e}](${n})` : e
                },
                IMG(t) {
                    const e = t.getAttribute("alt") || ""
                      , n = t.getAttribute("src");
                    if (!n)
                        throw new Error;
                    const i = t.hasAttribute("width") ? ` width="${ot(t.getAttribute("width") || "")}"` : ""
                      , s = t.hasAttribute("height") ? ` height="${ot(t.getAttribute("height") || "")}"` : "";
                    return i || s ? `<img alt="${ot(e)}"${i}${s} src="${ot(n)}">` : `![${e}](${n})`
                },
                LI(t) {
                    const e = t.parentNode;
                    if (!e)
                        throw new Error;
                    let n = "";
                    gl(t) || (e.nodeName === "OL" ? rt > 0 && !e.previousSibling ? n = `${cn(t) + rt + 1}\\. ` : n = `${cn(t) + 1}. ` : n = "* ");
                    const i = n.replace(/\S/g, " ")
                      , s = (t.textContent || "").trim().replace(/^/gm, i)
                      , r = document.createElement("pre");
                    return r.textContent = s.replace(i, n),
                    r
                },
                OL(t) {
                    const e = document.createElement("li");
                    return e.appendChild(document.createElement("br")),
                    t.append(e),
                    t
                },
                H1(t) {
                    const e = parseInt(t.nodeName.slice(1));
                    return t.prepend(`${Array(e + 1).join("#")} `),
                    t
                },
                UL(t) {
                    return t
                }
            };
            oe.UL = oe.OL;
            for (let t = 2; t <= 6; ++t)
                oe[`H${t}`] = oe.H1;
            function bl(t) {
                const e = document.createNodeIterator(t, NodeFilter.SHOW_ELEMENT, {
                    acceptNode(s) {
                        return s.nodeName in oe && !hl(s) && (ml(s) || pl(s)) ? NodeFilter.FILTER_ACCEPT : NodeFilter.FILTER_SKIP
                    }
                })
                  , n = [];
                let i = e.nextNode();
                for (; i; )
                    i instanceof HTMLElement && n.push(i),
                    i = e.nextNode();
                n.reverse();
                for (const s of n)
                    s.replaceWith(oe[s.nodeName](s))
            }
            function vl(t, e) {
                const n = t.startContainer;
                if (!n || !n.parentNode || !(n.parentNode instanceof HTMLElement))
                    throw new Error("the range must start within an HTMLElement");
                const i = n.parentNode;
                let s = t.cloneContents();
                if (e) {
                    const a = s.querySelector(e);
                    a && (s = document.createDocumentFragment(),
                    s.appendChild(a))
                }
                rt = 0;
                const r = i.closest("li");
                if (i.closest("pre")) {
                    const a = document.createElement("pre");
                    a.appendChild(s),
                    s = document.createDocumentFragment(),
                    s.appendChild(a)
                } else if (r && r.parentNode && (r.parentNode.nodeName === "OL" && (rt = cn(r)),
                !s.querySelector("li"))) {
                    const a = document.createElement("li");
                    if (!r.parentNode)
                        throw new Error;
                    const c = document.createElement(r.parentNode.nodeName);
                    a.appendChild(s),
                    c.appendChild(a),
                    s = document.createDocumentFragment(),
                    s.appendChild(c)
                }
                return s
            }
            class Qs {
                constructor() {
                    this.selection = window.getSelection()
                }
                closest(e) {
                    const n = this.range.startContainer
                      , i = n instanceof Element ? n : n.parentElement;
                    return i ? i.closest(e) : null
                }
                get active() {
                    var e;
                    return (((e = this.selection) === null || e === void 0 ? void 0 : e.rangeCount) || 0) > 0
                }
                get range() {
                    var e;
                    return ((e = this.selection) === null || e === void 0 ? void 0 : e.rangeCount) ? this.selection.getRangeAt(0) : new Range
                }
                set range(e) {
                    var n, i;
                    (n = this.selection) === null || n === void 0 || n.removeAllRanges(),
                    (i = this.selection) === null || i === void 0 || i.addRange(e)
                }
                get selectionText() {
                    var e;
                    return ((e = this.selection) === null || e === void 0 ? void 0 : e.toString().trim()) || ""
                }
                get quotedText() {
                    return `> ${this.selectionText.replace(/\n/g, `
> `)}

`
                }
                select(e) {
                    this.selection && (this.selection.removeAllRanges(),
                    this.selection.selectAllChildren(e))
                }
                insert(e) {
                    e.value ? e.value = `${e.value}

${this.quotedText}` : e.value = this.quotedText,
                    e.dispatchEvent(new CustomEvent("change",{
                        bubbles: !0,
                        cancelable: !1
                    })),
                    e.focus(),
                    e.selectionStart = e.value.length,
                    e.scrollTop = e.scrollHeight
                }
            }
            w("Q", Qs);
            class wl extends Qs {
                constructor(e="", n) {
                    super();
                    this.scopeSelector = e,
                    this.callback = n
                }
                get selectionText() {
                    var e, n;
                    if (!this.selection)
                        return "";
                    const i = vl(this.range, (e = this.scopeSelector) !== null && e !== void 0 ? e : "");
                    (n = this.callback) === null || n === void 0 || n.call(this, i),
                    bl(i);
                    const s = document.body;
                    if (!s)
                        return "";
                    const r = document.createElement("div");
                    r.appendChild(i),
                    r.style.cssText = "position:absolute;left:-9999px;",
                    s.appendChild(r);
                    let o = "";
                    try {
                        const a = document.createRange();
                        a.selectNodeContents(r),
                        this.selection.removeAllRanges(),
                        this.selection.addRange(a),
                        o = this.selection.toString(),
                        this.selection.removeAllRanges(),
                        a.detach()
                    } finally {
                        s.removeChild(r)
                    }
                    return o.trim()
                }
            }
            w("M", wl);
            let ln = null;
            function El(t) {
                return !!t.id && t.value !== t.defaultValue && t.form !== ln
            }
            function yl(t, e) {
                var n, i;
                const s = (n = e == null ? void 0 : e.selector) !== null && n !== void 0 ? n : ".js-session-resumable"
                  , o = `${(i = e == null ? void 0 : e.keyPrefix) !== null && i !== void 0 ? i : "session-resume:"}${t}`
                  , a = [];
                for (const l of document.querySelectorAll(s))
                    (l instanceof HTMLInputElement || l instanceof HTMLTextAreaElement) && a.push(l);
                let c = a.filter(l=>El(l)).map(l=>[l.id, l.value]);
                if (c.length)
                    try {
                        const l = sessionStorage.getItem(o);
                        if (l !== null) {
                            const d = JSON.parse(l).filter(function(p) {
                                return !c.some(f=>f[0] === p[0])
                            });
                            c = c.concat(d)
                        }
                        sessionStorage.setItem(o, JSON.stringify(c))
                    } catch (l) {}
            }
            function kl(t, e) {
                var n;
                const s = `${(n = e == null ? void 0 : e.keyPrefix) !== null && n !== void 0 ? n : "session-resume:"}${t}`;
                let r;
                try {
                    r = sessionStorage.getItem(s)
                } catch (c) {}
                if (!r)
                    return;
                const o = []
                  , a = [];
                for (const [c,l] of JSON.parse(r)) {
                    const u = new CustomEvent("session:resume",{
                        bubbles: !0,
                        cancelable: !0,
                        detail: {
                            targetId: c,
                            targetValue: l
                        }
                    });
                    if (document.dispatchEvent(u)) {
                        const d = document.getElementById(c);
                        d && (d instanceof HTMLInputElement || d instanceof HTMLTextAreaElement) ? d.value === d.defaultValue && (d.value = l,
                        o.push(d)) : a.push([c, l])
                    }
                }
                if (a.length === 0)
                    try {
                        sessionStorage.removeItem(s)
                    } catch (c) {}
                else
                    sessionStorage.setItem(s, JSON.stringify(a));
                setTimeout(function() {
                    for (const c of o)
                        c.dispatchEvent(new CustomEvent("change",{
                            bubbles: !0,
                            cancelable: !0
                        }))
                }, 0)
            }
            function Tl(t) {
                ln = t.target,
                setTimeout(function() {
                    t.defaultPrevented && (ln = null)
                }, 0)
            }
            function Al(t) {
                var e = null
                  , n = !1
                  , i = void 0
                  , s = void 0
                  , r = void 0;
                function o(f) {
                    if (i !== f.clientX || s !== f.clientY) {
                        var h = t.style.height;
                        r && r !== h && (n = !0,
                        t.style.maxHeight = "",
                        t.removeEventListener("mousemove", o)),
                        r = h
                    }
                    i = f.clientX,
                    s = f.clientY
                }
                var a = t.ownerDocument
                  , c = a.documentElement;
                function l() {
                    for (var f = 0, h = t; h !== a.body && h !== null; )
                        f += h.offsetTop || 0,
                        h = h.offsetParent;
                    var m = f - a.defaultView.pageYOffset
                      , b = c.clientHeight - (m + t.offsetHeight);
                    return {
                        top: m,
                        bottom: b
                    }
                }
                function u() {
                    if (!n && t.value !== e && !(t.offsetWidth <= 0 && t.offsetHeight <= 0)) {
                        var f = l()
                          , h = f.top
                          , m = f.bottom;
                        if (!(h < 0 || m < 0)) {
                            var b = Number(getComputedStyle(t).height.replace(/px/, "")) + m;
                            t.style.maxHeight = b - 100 + "px";
                            var g = t.parentElement;
                            if (g instanceof HTMLElement) {
                                var E = g.style.height;
                                g.style.height = getComputedStyle(g).height,
                                t.style.height = "auto",
                                t.style.height = t.scrollHeight + "px",
                                g.style.height = E,
                                r = t.style.height
                            }
                            e = t.value
                        }
                    }
                }
                function d() {
                    n = !1,
                    t.style.height = "",
                    t.style.maxHeight = ""
                }
                t.addEventListener("mousemove", o),
                t.addEventListener("input", u),
                t.addEventListener("change", u);
                var p = t.form;
                return p && p.addEventListener("reset", d),
                t.value && u(),
                {
                    unsubscribe: function() {
                        t.removeEventListener("mousemove", o),
                        t.removeEventListener("input", u),
                        t.removeEventListener("change", u),
                        p && p.removeEventListener("reset", d)
                    }
                }
            }
            class xl {
                constructor(e) {
                    if (this.map = new Map,
                    e)
                        for (const [n,i] of e)
                            this.set(n, i)
                }
                get(e) {
                    const n = this.map.get(e);
                    return n || new Set
                }
                set(e, n) {
                    let i = this.map.get(e);
                    return i || (i = new Set,
                    this.map.set(e, i)),
                    i.add(n),
                    this
                }
                has(e) {
                    return this.map.has(e)
                }
                delete(e, n) {
                    const i = this.map.get(e);
                    if (!i)
                        return !1;
                    if (!n)
                        return this.map.delete(e);
                    const s = i.delete(n);
                    return i.size || this.map.delete(e),
                    s
                }
                drain(e) {
                    const n = [];
                    for (const i of this.keys())
                        this.delete(i, e) && !this.has(i) && n.push(i);
                    return n
                }
                keys() {
                    return this.map.keys()
                }
                values() {
                    return this.map.values()
                }
                entries() {
                    return this.map.entries()
                }
                [Symbol.iterator]() {
                    return this.entries()
                }
                clear() {
                    this.map.clear()
                }
                get size() {
                    return this.map.size
                }
            }
            w("V", xl);
            async function Ll(t, e) {
                let n;
                const i = new Promise((s,r)=>{
                    n = self.setTimeout(()=>r(new Error("timeout")), t)
                }
                );
                if (!e)
                    return i;
                try {
                    await Promise.race([i, un(e)])
                } catch (s) {
                    throw self.clearTimeout(n),
                    s
                }
            }
            async function Sl(t, e) {
                let n;
                const i = new Promise(s=>{
                    n = self.setTimeout(s, t)
                }
                );
                if (!e)
                    return i;
                try {
                    await Promise.race([i, un(e)])
                } catch (s) {
                    throw self.clearTimeout(n),
                    s
                }
            }
            async function Ml(t, e, n=1 / 0, i) {
                const s = i ? un(i) : null;
                for (let r = 0; r < e; r++)
                    try {
                        return await (s ? Promise.race([t(), s]) : t())
                    } catch (o) {
                        if (o.name === "AbortError" || r === e - 1)
                            throw o;
                        const a = Math.pow(2, r) * 1e3
                          , c = Cl(a * .1);
                        await Sl(Math.min(n, a + c), i)
                    }
                throw new Error("retry failed")
            }
            function un(t) {
                return new Promise((e,n)=>{
                    const i = new Error("aborted");
                    i.name = "AbortError",
                    t.aborted ? n(i) : t.addEventListener("abort", ()=>n(i))
                }
                )
            }
            function Cl(t) {
                return Math.floor(Math.random() * Math.floor(t))
            }
            async function Nl(t, e, n) {
                const i = new WebSocket(t)
                  , s = $l(i);
                try {
                    return await Promise.race([s, Ll(e, n)]),
                    i
                } catch (r) {
                    throw Il(s),
                    r
                }
            }
            async function Il(t) {
                try {
                    (await t).close()
                } catch (e) {}
            }
            function Dl(t, e) {
                return Ml(()=>Nl(t, e.timeout, e.signal), e.attempts, e.maxDelay, e.signal)
            }
            function $l(t) {
                return new Promise((e,n)=>{
                    t.readyState === WebSocket.OPEN ? e(t) : (t.onerror = ()=>{
                        t.onerror = null,
                        t.onopen = null,
                        n(new Error("connect failed"))
                    }
                    ,
                    t.onopen = ()=>{
                        t.onerror = null,
                        t.onopen = null,
                        e(t)
                    }
                    )
                }
                )
            }
            class _l {
                constructor(e, n, i) {
                    this.socket = null,
                    this.opening = null,
                    this.url = e,
                    this.delegate = n,
                    this.policy = i
                }
                async open() {
                    if (this.opening || this.socket)
                        return;
                    this.opening = new AbortController;
                    const e = Object.assign(Object.assign({}, this.policy), {
                        signal: this.opening.signal
                    });
                    try {
                        this.socket = await Dl(this.url, e)
                    } catch (n) {
                        this.delegate.socketDidFinish(this);
                        return
                    } finally {
                        this.opening = null
                    }
                    this.socket.onclose = n=>{
                        this.socket = null,
                        this.delegate.socketDidClose(this, n.code, n.reason),
                        (this.delegate.socketShouldRetry ? !this.delegate.socketShouldRetry(this, n.code) : Hl(n.code)) ? this.delegate.socketDidFinish(this) : setTimeout(()=>this.open(), Pl(100, 100 + (this.delegate.reconnectWindow || 50)))
                    }
                    ,
                    this.socket.onmessage = n=>{
                        this.delegate.socketDidReceiveMessage(this, n.data)
                    }
                    ,
                    this.delegate.socketDidOpen(this)
                }
                close(e, n) {
                    this.opening ? (this.opening.abort(),
                    this.opening = null) : this.socket && (this.socket.onclose = null,
                    this.socket.close(e, n),
                    this.socket = null,
                    this.delegate.socketDidClose(this, e, n),
                    this.delegate.socketDidFinish(this))
                }
                send(e) {
                    this.socket && this.socket.send(e)
                }
                isOpen() {
                    return !!this.socket
                }
            }
            w("W", _l);
            function Pl(t, e) {
                return Math.random() * (e - t) + t
            }
            function Hl(t) {
                return t === Rl || t === Fl
            }
            const Rl = 1008
              , Fl = 1011
              , Js = new WeakSet;
            function Ol(t) {
                return Js.has(t)
            }
            function ql(t, e) {
                return Ol(e) ? (e(t),
                !0) : !1
            }
            function Wl(t) {
                return (...e)=>{
                    const n = t(...e);
                    return Js.add(n),
                    n
                }
            }
            const Ce = new WeakMap;
            class dn {
                constructor(e, n) {
                    this.element = e,
                    this.type = n,
                    this.element.addEventListener(this.type, this),
                    Ce.get(this.element).set(this.type, this)
                }
                set(e) {
                    typeof e == "function" ? this.handleEvent = e.bind(this.element) : typeof e == "object" && typeof e.handleEvent == "function" ? this.handleEvent = e.handleEvent.bind(e) : (this.element.removeEventListener(this.type, this),
                    Ce.get(this.element).delete(this.type))
                }
                static for(e) {
                    Ce.has(e.element) || Ce.set(e.element, new Map);
                    const n = e.attributeName.slice(2)
                      , i = Ce.get(e.element);
                    return i.has(n) ? i.get(n) : new dn(e.element,n)
                }
            }
            function Bl(t, e) {
                return t instanceof It && t.attributeName.startsWith("on") ? (dn.for(t).set(e),
                t.element.removeAttributeNS(t.attributeNamespace, t.attributeName),
                !0) : !1
            }
            function Vl(t, e) {
                return e instanceof hn && t instanceof G ? (e.renderInto(t),
                !0) : !1
            }
            function jl(t, e) {
                return e instanceof DocumentFragment && t instanceof G ? (e.childNodes.length && t.replace(...e.childNodes),
                !0) : !1
            }
            function Ul(t) {
                return typeof t == "object" && Symbol.iterator in t
            }
            function zl(t, e) {
                if (!Ul(e))
                    return !1;
                if (t instanceof G) {
                    const n = [];
                    for (const i of e)
                        if (i instanceof hn) {
                            const s = document.createDocumentFragment();
                            i.renderInto(s),
                            n.push(...s.childNodes)
                        } else
                            i instanceof DocumentFragment ? n.push(...i.childNodes) : n.push(String(i));
                    return n.length && t.replace(...n),
                    !0
                } else
                    return t.value = Array.from(e).join(" "),
                    !0
            }
            function Kl(t, e) {
                ql(t, e) || ai(t, e) || Bl(t, e) || Vl(t, e) || jl(t, e) || zl(t, e) || $t(t, e)
            }
            const fn = new WeakMap
              , Zs = new WeakMap
              , er = new WeakMap;
            class hn {
                constructor(e, n, i) {
                    this.strings = e,
                    this.values = n,
                    this.processor = i
                }
                get template() {
                    if (fn.has(this.strings))
                        return fn.get(this.strings);
                    {
                        const e = document.createElement("template")
                          , n = this.strings.length - 1;
                        return e.innerHTML = this.strings.reduce((i,s,r)=>i + s + (r < n ? `{{ ${r} }}` : ""), ""),
                        fn.set(this.strings, e),
                        e
                    }
                }
                renderInto(e) {
                    const n = this.template;
                    if (Zs.get(e) !== n) {
                        Zs.set(e, n);
                        const i = new ge(n,this.values,this.processor);
                        er.set(e, i),
                        e instanceof G ? e.replace(...i.children) : e.appendChild(i);
                        return
                    }
                    er.get(e).update(this.values)
                }
            }
            const Yl = Dt(Kl);
            function Xl(t, ...e) {
                return new hn(t,e,Yl)
            }
            function Gl(t, e) {
                t.renderInto(e)
            }
            const lu = w("Z", Wl(t=>e=>{
                if (!(e instanceof G))
                    return;
                const n = document.createElement("template");
                n.innerHTML = t;
                const i = document.importNode(n.content, !0);
                e.replace(...i.childNodes)
            }
            ));
            var F, Ne, tr, at, $ = function(t, e) {
                return {
                    name: t,
                    value: e === void 0 ? -1 : e,
                    delta: 0,
                    entries: [],
                    id: "v2-".concat(Date.now(), "-").concat(Math.floor(8999999999999 * Math.random()) + 1e12)
                }
            }, ct = function(t, e) {
                try {
                    if (PerformanceObserver.supportedEntryTypes.includes(t)) {
                        if (t === "first-input" && !("PerformanceEventTiming"in self))
                            return;
                        var n = new PerformanceObserver(function(i) {
                            return i.getEntries().map(e)
                        }
                        );
                        return n.observe({
                            type: t,
                            buffered: !0
                        }),
                        n
                    }
                } catch (i) {}
            }, lt = function(t, e) {
                var n = function i(s) {
                    s.type !== "pagehide" && document.visibilityState !== "hidden" || (t(s),
                    e && (removeEventListener("visibilitychange", i, !0),
                    removeEventListener("pagehide", i, !0)))
                };
                addEventListener("visibilitychange", n, !0),
                addEventListener("pagehide", n, !0)
            }, Ie = function(t) {
                addEventListener("pageshow", function(e) {
                    e.persisted && t(e)
                }, !0)
            }, U = typeof WeakSet == "function" ? new WeakSet : new Set, O = function(t, e, n) {
                var i;
                return function() {
                    e.value >= 0 && (n || U.has(e) || document.visibilityState === "hidden") && (e.delta = e.value - (i || 0),
                    (e.delta || i === void 0) && (i = e.value,
                    t(e)))
                }
            }, De = -1, nr = function() {
                return document.visibilityState === "hidden" ? 0 : 1 / 0
            }, ir = function() {
                lt(function(t) {
                    var e = t.timeStamp;
                    De = e
                }, !0)
            }, mn = function() {
                return De < 0 && (De = nr(),
                ir(),
                Ie(function() {
                    setTimeout(function() {
                        De = nr(),
                        ir()
                    }, 0)
                })),
                {
                    get firstHiddenTime() {
                        return De
                    }
                }
            }, Ql = w("$", function(t, e) {
                var n, i = mn(), s = $("FCP"), r = function(c) {
                    c.name === "first-contentful-paint" && (a && a.disconnect(),
                    c.startTime < i.firstHiddenTime && (s.value = c.startTime,
                    s.entries.push(c),
                    U.add(s),
                    n()))
                }, o = performance.getEntriesByName && performance.getEntriesByName("first-contentful-paint")[0], a = o ? null : ct("paint", r);
                (o || a) && (n = O(t, s, e),
                o && r(o),
                Ie(function(c) {
                    s = $("FCP"),
                    n = O(t, s, e),
                    requestAnimationFrame(function() {
                        requestAnimationFrame(function() {
                            s.value = performance.now() - c.timeStamp,
                            U.add(s),
                            n()
                        })
                    })
                }))
            }), sr = !1, pn = -1, uu = w("_", function(t, e) {
                sr || (Ql(function(l) {
                    pn = l.value
                }),
                sr = !0);
                var n, i = function(l) {
                    pn > -1 && t(l)
                }, s = $("CLS", 0), r = 0, o = [], a = function(l) {
                    if (!l.hadRecentInput) {
                        var u = o[0]
                          , d = o[o.length - 1];
                        r && l.startTime - d.startTime < 1e3 && l.startTime - u.startTime < 5e3 ? (r += l.value,
                        o.push(l)) : (r = l.value,
                        o = [l]),
                        r > s.value && (s.value = r,
                        s.entries = o,
                        n())
                    }
                }, c = ct("layout-shift", a);
                c && (n = O(i, s, e),
                lt(function() {
                    c.takeRecords().map(a),
                    n()
                }),
                Ie(function() {
                    r = 0,
                    pn = -1,
                    s = $("CLS", 0),
                    n = O(i, s, e)
                }))
            }), $e = {
                passive: !0,
                capture: !0
            }, Jl = new Date, rr = function(t, e) {
                F || (F = e,
                Ne = t,
                tr = new Date,
                ar(removeEventListener),
                or())
            }, or = function() {
                if (Ne >= 0 && Ne < tr - Jl) {
                    var t = {
                        entryType: "first-input",
                        name: F.type,
                        target: F.target,
                        cancelable: F.cancelable,
                        startTime: F.timeStamp,
                        processingStart: F.timeStamp + Ne
                    };
                    at.forEach(function(e) {
                        e(t)
                    }),
                    at = []
                }
            }, Zl = function(t) {
                if (t.cancelable) {
                    var e = (t.timeStamp > 1e12 ? new Date : performance.now()) - t.timeStamp;
                    t.type == "pointerdown" ? function(n, i) {
                        var s = function() {
                            rr(n, i),
                            o()
                        }
                          , r = function() {
                            o()
                        }
                          , o = function() {
                            removeEventListener("pointerup", s, $e),
                            removeEventListener("pointercancel", r, $e)
                        };
                        addEventListener("pointerup", s, $e),
                        addEventListener("pointercancel", r, $e)
                    }(e, t) : rr(e, t)
                }
            }, ar = function(t) {
                ["mousedown", "keydown", "touchstart", "pointerdown"].forEach(function(e) {
                    return t(e, Zl, $e)
                })
            }, du = w("a0", function(t, e) {
                var n, i = mn(), s = $("FID"), r = function(a) {
                    a.startTime < i.firstHiddenTime && (s.value = a.processingStart - a.startTime,
                    s.entries.push(a),
                    U.add(s),
                    n())
                }, o = ct("first-input", r);
                n = O(t, s, e),
                o && lt(function() {
                    o.takeRecords().map(r),
                    o.disconnect()
                }, !0),
                o && Ie(function() {
                    var a;
                    s = $("FID"),
                    n = O(t, s, e),
                    at = [],
                    Ne = -1,
                    F = null,
                    ar(addEventListener),
                    a = r,
                    at.push(a),
                    or()
                })
            }), fu = w("a1", function(t, e) {
                var n, i = mn(), s = $("LCP"), r = function(c) {
                    var l = c.startTime;
                    l < i.firstHiddenTime && (s.value = l,
                    s.entries.push(c)),
                    n()
                }, o = ct("largest-contentful-paint", r);
                if (o) {
                    n = O(t, s, e);
                    var a = function() {
                        U.has(s) || (o.takeRecords().map(r),
                        o.disconnect(),
                        U.add(s),
                        n())
                    };
                    ["keydown", "click"].forEach(function(c) {
                        addEventListener(c, a, {
                            once: !0,
                            capture: !0
                        })
                    }),
                    lt(a, !0),
                    Ie(function(c) {
                        s = $("LCP"),
                        n = O(t, s, e),
                        requestAnimationFrame(function() {
                            requestAnimationFrame(function() {
                                s.value = performance.now() - c.timeStamp,
                                U.add(s),
                                n()
                            })
                        })
                    })
                }
            }), hu = w("a2", function(t) {
                var e, n = $("TTFB");
                e = function() {
                    try {
                        var i = performance.getEntriesByType("navigation")[0] || function() {
                            var s = performance.timing
                              , r = {
                                entryType: "navigation",
                                startTime: 0
                            };
                            for (var o in s)
                                o !== "navigationStart" && o !== "toJSON" && (r[o] = Math.max(s[o] - s.navigationStart, 0));
                            return r
                        }();
                        if (n.value = n.delta = i.responseStart,
                        n.value < 0)
                            return;
                        n.entries = [i],
                        t(n)
                    } catch (s) {}
                }
                ,
                document.readyState === "complete" ? setTimeout(e, 0) : addEventListener("pageshow", e)
            }), mu = w("a6", typeof globalThis != "undefined" ? globalThis : typeof window != "undefined" ? window : typeof global != "undefined" ? global : typeof self != "undefined" ? self : {});
            function eu() {
                throw new Error("Dynamic requires are not currently supported by @rollup/plugin-commonjs")
            }
            function tu(t) {
                return t && t.__esModule && Object.prototype.hasOwnProperty.call(t, "default") ? t.default : t
            }
            function nu(t, e) {
                return e = {
                    exports: {}
                },
                t(e, e.exports),
                e.exports
            }
            function iu(t) {
                return t && t.default || t
            }
            var su = Object.defineProperty
              , gn = (t,e)=>su(t, "name", {
                value: e,
                configurable: !0
            });
            const z = new Map;
            function ut(t) {
                for (const e of z.keys())
                    if (customElements.get(e) || t.querySelector(e) || t.matches(e)) {
                        for (const n of z.get(e) || [])
                            n();
                        z.delete(e)
                    }
            }
            gn(ut, "scan");
            let cr = !1;
            function bn() {
                cr = !0,
                ut(document.body),
                new MutationObserver(e=>{
                    if (!!z.size)
                        for (const n of e)
                            for (const i of n.addedNodes)
                                i instanceof Element && ut(i)
                }
                ).observe(document, {
                    subtree: !0,
                    childList: !0
                })
            }
            gn(bn, "prepare");
            function lr(t, e) {
                z.has(t) || z.set(t, []),
                z.get(t).push(e),
                document.readyState === "interactive" || document.readyState === "complete" ? cr ? ut(document.body) : bn() : document.addEventListener("DOMContentLoaded", bn, {
                    once: !0
                })
            }
            gn(lr, "whenSeen");
            /**
 * @license
 * Copyright (c) 2018 The Polymer Project Authors. All rights reserved.
 * This code may only be used under the BSD style license found at
 * http://polymer.github.io/LICENSE.txt
 * The complete set of authors may be found at
 * http://polymer.github.io/AUTHORS.txt
 * The complete set of contributors may be found at
 * http://polymer.github.io/CONTRIBUTORS.txt
 * Code distributed by Google as part of the polymer project is also
 * subject to an additional IP rights grant found at
 * http://polymer.github.io/PATENTS.txt
 */
            const pu = w("ac", wt(t=>e=>{
                if (t === void 0 && e instanceof kt) {
                    if (t !== e.value) {
                        const n = e.committer.name;
                        e.committer.element.removeAttribute(n)
                    }
                } else
                    e.setValue(t)
            }
            ));
            /**
 * @license
 * Copyright (c) 2017 The Polymer Project Authors. All rights reserved.
 * This code may only be used under the BSD style license found at
 * http://polymer.github.io/LICENSE.txt
 * The complete set of authors may be found at
 * http://polymer.github.io/AUTHORS.txt
 * The complete set of contributors may be found at
 * http://polymer.github.io/CONTRIBUTORS.txt
 * Code distributed by Google as part of the polymer project is also
 * subject to an additional IP rights grant found at
 * http://polymer.github.io/PATENTS.txt
 */
            const ur = (t,e)=>{
                const n = t.startNode.parentNode
                  , i = e === void 0 ? t.endNode : e.startNode
                  , s = n.insertBefore(C(), i);
                n.insertBefore(C(), i);
                const r = new Y(t.options);
                return r.insertAfterNode(s),
                r
            }
              , K = (t,e)=>(t.setValue(e),
            t.commit(),
            t)
              , vn = (t,e,n)=>{
                const i = t.startNode.parentNode
                  , s = n ? n.startNode : t.endNode
                  , r = e.endNode.nextSibling;
                r !== s && Xr(i, e.startNode, r, s)
            }
              , wn = t=>{
                Et(t.startNode.parentNode, t.startNode, t.endNode.nextSibling)
            }
              , dr = (t,e,n)=>{
                const i = new Map;
                for (let s = e; s <= n; s++)
                    i.set(t[s], s);
                return i
            }
              , fr = new WeakMap
              , hr = new WeakMap
              , gu = w("ad", wt((t,e,n)=>{
                let i;
                return n === void 0 ? n = e : e !== void 0 && (i = e),
                s=>{
                    if (!(s instanceof Y))
                        throw new Error("repeat can only be used in text bindings");
                    const r = fr.get(s) || []
                      , o = hr.get(s) || []
                      , a = []
                      , c = []
                      , l = [];
                    let u = 0;
                    for (const g of t)
                        l[u] = i ? i(g, u) : u,
                        c[u] = n(g, u),
                        u++;
                    let d, p, f = 0, h = r.length - 1, m = 0, b = c.length - 1;
                    for (; f <= h && m <= b; )
                        if (r[f] === null)
                            f++;
                        else if (r[h] === null)
                            h--;
                        else if (o[f] === l[m])
                            a[m] = K(r[f], c[m]),
                            f++,
                            m++;
                        else if (o[h] === l[b])
                            a[b] = K(r[h], c[b]),
                            h--,
                            b--;
                        else if (o[f] === l[b])
                            a[b] = K(r[f], c[b]),
                            vn(s, r[f], a[b + 1]),
                            f++,
                            b--;
                        else if (o[h] === l[m])
                            a[m] = K(r[h], c[m]),
                            vn(s, r[h], r[f]),
                            h--,
                            m++;
                        else if (d === void 0 && (d = dr(l, m, b),
                        p = dr(o, f, h)),
                        !d.has(o[f]))
                            wn(r[f]),
                            f++;
                        else if (!d.has(o[h]))
                            wn(r[h]),
                            h--;
                        else {
                            const g = p.get(l[m])
                              , E = g !== void 0 ? r[g] : null;
                            if (E === null) {
                                const x = ur(s, r[f]);
                                K(x, c[m]),
                                a[m] = x
                            } else
                                a[m] = K(E, c[m]),
                                vn(s, E, r[f]),
                                r[g] = null;
                            m++
                        }
                    for (; m <= b; ) {
                        const g = ur(s, a[b + 1]);
                        K(g, c[m]),
                        a[m++] = g
                    }
                    for (; f <= h; ) {
                        const g = r[f++];
                        g !== null && wn(g)
                    }
                    fr.set(s, a),
                    hr.set(s, l)
                }
            }
            ))
        }
    }
});
//# sourceMappingURL=chunk-vendor-f03176a2.js.map
