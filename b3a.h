:root {
    --border-width: 1px;
    --border-style: solid;
    --font-size-small: 12px;
    --font-weight-semibold: 500;
    --size-2: 20px
}

.min-height-full {
    min-height: 100vh !important
}

.marketing-section {
    position: relative;
    padding-top: 80px;
    padding-bottom: 80px;
    font-size: 16px;
    line-height: 1.5;
    text-align: center;
    border-bottom: 1px solid var(--color-border-default)
}

.marketing-section::before {
    display: table;
    content: ""
}

.marketing-section::after {
    display: table;
    clear: both;
    content: ""
}

.marketing-section h3 {
    font-size: 21px;
    font-weight: 400
}

.marketing-hero-octicon {
    position: relative;
    width: 100px;
    height: 100px;
    margin: 0 auto 15px;
    text-align: center;
    border: solid 1px var(--color-border-default);
    border-radius: 50px
}

.marketing-hero-octicon .octicon {
    margin-top: 22px;
    color: var(--color-accent-fg)
}

.marketing-hero-octicon .octicon-checklist {
    position: relative;
    right: -3px
}

.hanging-icon-list {
    list-style-type: none
}

.hanging-icon-list li {
    padding-left: 25px;
    margin: 10px 0;
    font-size: 14px
}

.hanging-icon-list .octicon {
    float: left;
    margin-top: 3px;
    margin-left: -25px;
    color: var(--color-fg-muted)
}

.hanging-icon-list .octicon-check {
    color: var(--color-success-fg)
}

.hanging-icon-list .octicon-x {
    color: var(--color-danger-fg)
}

.integrations-hero-octicon.marketing-hero-octicon {
    width: 75px;
    height: 75px;
    border-width: 5px
}

.integrations-hero-octicon.marketing-hero-octicon .octicon {
    margin-top: 15px
}

.marketing-blue-octicon {
    color: #34acbf;
    border-color: #34acbf
}

.marketing-blue-octicon .octicon {
    color: #34acbf
}

.marketing-turquoise-octicon {
    color: #75bbb6;
    border-color: #75bbb6
}

.marketing-turquoise-octicon .octicon {
    color: #75bbb6
}

.marketing-purple-octicon {
    color: #b086b7;
    border-color: #b086b7
}

.marketing-purple-octicon .octicon {
    color: #b086b7
}

.marketing-graphic {
    position: relative
}

.intgrs-dir .marketing-graphic {
    padding-right: 0;
    margin: 0
}

.intgrs-dir .footer {
    margin-top: 40px
}

.intgrs-dir-section h2 {
    margin-top: 0;
    margin-bottom: 20px;
    font-size: 26px;
    font-weight: 300
}

.intgrs-dir-intro {
    padding: 40px 0;
    margin: 0;
    text-align: left;
    background-image: linear-gradient(-110deg, #48227d 0%, #2f569c 100%);
    border-bottom: 0
}

.pagehead+.intgrs-dir-intro {
    margin-top: -20px
}

.intgrs-dir-intro .directory-header-back {
    margin-top: 10px;
    font-size: 18px;
    color: #fff
}

.intgrs-dir-intro .directory-header-back:hover {
    color: #d7def1;
    text-decoration: none
}

.intgrs-dir-intro .directory-header-back .octicon {
    vertical-align: middle
}

.intgrs-dir-intro .directory-header-back .header-link {
    color: var(--color-accent-fg)
}

.intgrs-dir-intro .directory-tag-line {
    margin-bottom: 0;
    font-size: 28px;
    font-weight: 400;
    color: #fff
}

.intgrs-dir-intro .lead {
    margin-top: 10px;
    margin-bottom: 6px;
    font-size: 18px;
    font-weight: 400;
    color: #d7def1
}

.intgrs-lstng-search {
    display: inline-block;
    width: 33%;
    margin-left: 20px
}

.intgrs-lstng-search .subnav-search-input {
    width: 100%
}

.intgrs-lstng-categories-container {
    display: inline-block;
    float: left;
    width: 20%
}

.intgrs-lstng-categories-container .intgrs-lstng-categories {
    top: 0
}

.intgrs-lstng-categories-container .filter-item {
    padding: 6px 10px;
    margin-right: -10px;
    margin-left: -10px
}

.intgrs-lstng-container {
    display: inline-block;
    width: 80%;
    text-align: left
}

.intgrs-lstng-item {
    position: relative;
    display: inline-flex;
    width: 30.8%;
    font-size: 14px;
    border: 1px solid var(--color-border-muted);
    border-radius: 4px;
    transition: border-color .15s ease 0s,transform .15s ease 0s,box-shadow .15s ease 0s,color .15s ease 0s
}

.intgrs-lstng-item:hover {
    border-color: #51a7e8;
    box-shadow: 0 0 5px rgba(81,167,232,.5);
    transform: scale(1.05)
}

.intgrs-lstng-item .intgrs-lstng-logo {
    display: block;
    margin: 0 auto 10px
}

.intgrs-lstng-item .draft-tag {
    position: absolute;
    top: -1px;
    left: 10px
}

.intgrs-lstng-item-link {
    display: block;
    width: 100%;
    height: 181px;
    padding-top: 20px
}

.intgrs-lstng-item-link:hover {
    text-decoration: none
}

.intgrs-lstng-item-link:hover .intgrs-lstng-item-header {
    color: var(--color-accent-fg)
}

.intgrs-lstng-item-header {
    margin: 15px 10px 0;
    font-size: 14px;
    font-weight: 600;
    color: var(--color-fg-default)
}

.intgrs-lstng-item-description {
    position: relative;
    height: 2.8em;
    padding: 0 10px;
    margin-top: 5px;
    overflow: hidden;
    font-size: 13px;
    color: var(--color-fg-muted)
}

.intgrs-lstng-item-description::after {
    position: absolute;
    right: 0;
    bottom: 0;
    padding: 0 15px 0 20px;
    color: transparent;
    content: " ";
    background-image: linear-gradient(to right, rgba(255, 255, 255, 0), #fff 80%)
}

.intgr-admin-link {
    position: relative;
    display: inline-block;
    height: 25px;
    padding-left: 23px;
    font-size: 13px;
    vertical-align: middle;
    border: 1px solid var(--color-border-muted);
    border-radius: 6px
}

.intgr-admin-link.draft-tag {
    padding-left: 25px;
    border: 0
}

.intgr-admin-link.draft-tag .octicon,.intgr-admin-link.draft-tag:hover .octicon {
    color: #fff
}

.intgr-admin-link.draft-tag:hover {
    text-decoration: none;
    background-color: #000
}

.intgr-admin-link:hover .octicon {
    color: var(--color-accent-fg)
}

.intgr-admin-link .octicon {
    position: absolute;
    top: 3px;
    left: 5px;
    color: var(--color-fg-muted)
}

.intgr-feat-header {
    position: relative;
    width: 85%;
    padding: 0 65px 10px;
    color: #d7def1
}

.intgr-feat-header .intgr-admin-link {
    border-color: rgba(215,222,241,.6)
}

.intgr-feat-header .intgr-admin-link .octicon {
    color: #d7def1
}

.intgr-feat-header .intgr-admin-link:hover .octicon {
    color: #fff
}

.intgr-feat-header .marketing-hero-octicon {
    position: absolute;
    top: 0;
    left: 5px;
    width: 50px;
    height: 50px;
    border-width: 3px
}

.intgr-feat-header .marketing-hero-octicon .octicon {
    margin-top: 11px
}

.intgr-feat-header h2 {
    margin: 0;
    font-size: 25px;
    line-height: 50px;
    color: #fff
}

.intgr-feat-header p {
    max-width: 580px;
    margin: 0;
    font-size: 18px
}

.integrations-breadcrumb {
    display: inline-block;
    font-weight: 400;
    color: var(--color-accent-fg)
}

.integrations-breadcrumb-link {
    line-height: 0;
    color: #d7def1
}

.integrations-breadcrumb-link:hover {
    color: #fff;
    text-decoration: none
}

.integrations-auth-wrapper {
    width: 511px;
    margin: 60px auto
}

.integrations-auth-header {
    font-size: 20px;
    text-align: center
}

.integrations-permissions-group dt {
    font-size: 18px;
    font-weight: 400
}

.integrations-permissions-group .integrations-permission {
    position: relative;
    padding-left: 22px;
    margin-bottom: 10px;
    list-style-type: none
}

.integrations-permissions-group .integrations-permission .octicon {
    position: absolute;
    top: 1px;
    left: 0;
    margin-right: 10px
}

.integrations-install-target .select-menu {
    vertical-align: middle
}

.integrations-install-target input[type=radio] {
    margin-right: 10px
}

.integrations-install-target .flash {
    background-color: transparent
}

.integrations-install-target .flash-error {
    background-color: transparent;
    border: 0
}

.integrations-install-target .octicon-lock,.integrations-install-target .octicon-repo {
    margin-right: 3px
}

.integrations-install-target .octicon-lock {
    color: var(--color-attention-fg)
}

.integrations-install-target .private {
    background-color: #fff9ea
}

.integrations-install-target [aria-selected=true].private,.integrations-install-target .navigation-focus.private {
    background-color: #4078c0
}

.integrations-install-target [aria-selected=true].octicon-lock,.integrations-install-target .navigation-focus .octicon-lock {
    color: inherit
}

.integrations-setup-note {
    margin: 10px 0
}

.listgroup-item {
    line-height: inherit
}

.listgroup-item.disabled {
    background-color: var(--color-canvas-subtle)
}

.listgroup-item.disabled .listgroup-item-title {
    color: var(--color-fg-default)
}

.integration-key-management-wrapper .integration-key-downloading {
    display: none
}

.integration-key-management-wrapper .integration-key-list {
    display: none
}

.integration-key-management-wrapper .flash-error {
    display: none
}

.integration-key-management-wrapper .blankslate {
    margin-bottom: 30px
}

.integration-key-management-wrapper .action .deletable {
    display: none
}

.integration-key-management-wrapper .action .undeletable {
    display: block
}

.integration-key-management-wrapper.multi-keys .action .deletable {
    display: block
}

.integration-key-management-wrapper.multi-keys .action .undeletable {
    display: none
}

.integration-key-management-wrapper.error .flash-error {
    display: block
}

.integration-key-management-wrapper.error .integration-key {
    opacity: .5
}

.integration-key-management-wrapper.error .action .deletable {
    display: none
}

.integration-key-management-wrapper.error .action .undeletable {
    display: block
}

.integration-key-management-wrapper.downloading .blankslate {
    display: none
}

.integration-key-management-wrapper.downloading .integration-key-downloading {
    display: block
}

.integration-key-management-wrapper.downloading .integration-key-list {
    display: block
}

.integration-key-management-wrapper.has-keys .blankslate {
    display: none
}

.integration-key-management-wrapper.has-keys .integration-key-list {
    display: block
}

.link-small {
    color: var(--color-fg-muted);
    transition: color 500ms ease
}

.listgroup-item:hover .link-small {
    color: var(--color-accent-fg)
}

.manifest-errors {
    border-left: 6px solid var(--color-danger-emphasis);
    border-radius: 0 6px 6px 0
}

.sub-permissions-error {
    max-width: unset !important
}

.not-found-octocat-wrapper {
    width: 71px;
    height: 71px;
    border-radius: 45px
}

.not-found-octocat-wrapper::after {
    position: absolute;
    top: 58px;
    left: 45px;
    z-index: -2;
    display: block;
    width: 4px;
    height: 4px;
    vertical-align: baseline;
    content: "";
    background: var(--color-canvas-default);
    border-radius: 4px;
    box-shadow: 0 4px 0 #fff,0 8px 0 #fff,0 12px 0 #fff,0 16px 0 #fff,0 20px 0 #fff;
    animation-name: pull-string;
    animation-duration: .75s;
    animation-fill-mode: forwards;
    animation-delay: .5s
}

@keyframes lightbulb {
    0%,8%,14% {
        opacity: .1
    }

    0%,10%,25% {
        opacity: .25
    }

    5%,30%,50%,70% {
        opacity: .5
    }

    16%,60%,80% {
        opacity: .75
    }

    90% {
        opacity: .8
    }

    94% {
        opacity: .5
    }

    100% {
        opacity: 1;
        stddeviation: 0
    }
}

.not-found-lightbulb-ani {
    z-index: 1;
    opacity: .25;
    animation-name: lightbulb;
    animation-duration: 2.5s;
    animation-fill-mode: forwards;
    animation-delay: 1.3s
}

@keyframes pull-string {
    50% {
        transform: translate3d(0, 12px, 0)
    }

    75% {
        opacity: 1;
        transform: none
    }

    100% {
        opacity: 0
    }
}

.billing-plans tbody td {
    width: 25%;
    vertical-align: middle
}

.billing-plans .current {
    background-color: #f2ffed
}

.billing-plans .name {
    font-size: 14px;
    font-weight: 600;
    color: var(--color-fg-default)
}

.billing-plans .coupon {
    font-size: 12px
}

.billing-plans .coupon td {
    color: var(--color-fg-on-emphasis);
    background-color: var(--color-success-emphasis)
}

.billing-plans .coupon .text-right {
    white-space: nowrap
}

.billing-plans .coupon.expiring td {
    background-color: #df6e00
}

.billing-plans .coupon.expiring .coupon-label::after {
    border-bottom-color: #df6e00
}

.billing-plans tbody>.selected {
    background-color: #fdffce
}

.coupon-label {
    position: relative;
    padding: 9px;
    margin: -9px
}

.coupon-label::after {
    position: absolute;
    bottom: 100%;
    left: 15px;
    width: 0;
    height: 0;
    pointer-events: none;
    content: " ";
    border: solid transparent;
    border-width: 5px;
    border-bottom-color: var(--color-success-emphasis)
}

.boxed-group-table .toggle-currency {
    font-size: 11px;
    font-weight: 400
}

.has-removed-contents {
    display: none
}

.currency-notice {
    margin-bottom: 10px
}

.org-login {
    margin-top: -30px;
    margin-bottom: 30px
}

.org-login img {
    width: 450px;
    padding: 1px;
    margin: 10px -25px;
    border: 1px solid var(--color-border-default)
}

.plan-notice {
    padding: 10px;
    margin-bottom: 0;
    border-top: 1px solid var(--color-border-muted)
}

.workflow-dispatch .loading-overlay {
    display: none !important
}

.workflow-dispatch .is-loading .loading-overlay {
    display: flex !important
}

.workflow-dispatch .is-loading .branch-selection {
    display: none
}

.member-list-item .member-username {
    display: inline
}

.member-list-item .member-link {
    display: inline
}

.actor-and-action {
    font-weight: 600
}

.vertical-separator {
    margin-right: 8px;
    margin-left: 5px;
    border-left: 1px solid var(--color-border-default)
}

.audit-log-search .audit-search-form {
    margin-bottom: 10px
}

.audit-log-search .audit-results-actions {
    margin: 15px 0
}

.audit-log-search .audit-search-clear {
    margin-bottom: 0
}

.billing-addon-items table input {
    width: 5em
}

.billing-addon-items td {
    vertical-align: middle;
    border-bottom: 0
}

.billing-addon-items td.fixed {
    width: 150px
}

.billing-addon-items td.black {
    color: var(--color-fg-default)
}

.billing-addon-items tr {
    border-bottom: 1px solid var(--color-border-muted)
}

.billing-addon-items tr:last-child {
    border-bottom-width: 0
}

.billing-addon-items tr:nth-child(even) {
    background-color: var(--color-canvas-subtle)
}

.billing-addon-items tr.total-row {
    color: var(--color-danger-fg);
    background-color: var(--color-canvas-default)
}

.billing-addon-items .new-addon-items {
    margin-left: 5px
}

.billing-addon-items .addon-cost {
    color: var(--color-fg-muted)
}

.billing-addon-items .discounted-original-price {
    color: var(--color-fg-muted)
}

.billing-addon-items .form-submit,.billing-addon-items .payment-method {
    margin-left: 8px
}

.billing-addon-items .payment-summary {
    margin-right: 8px;
    margin-left: 8px
}

.billing-credit-card .javascript-disabled-overlay {
    position: absolute;
    top: 0;
    left: 0;
    z-index: 1;
    display: none;
    width: 100%;
    height: 100%;
    background-color: var(--color-canvas-default);
    opacity: .5
}

.billing-credit-card.disabled .javascript-disabled-overlay {
    display: block
}

.billing-extra-box {
    padding-left: 10px;
    margin: 10px 0;
    border-left: 6px solid var(--color-border-muted)
}

.billing-vat-box {
    padding-left: 10px;
    margin: 10px 0;
    border-left: 6px solid var(--color-border-muted)
}

.billing-section .action-button {
    float: right;
    margin-bottom: 5px;
    margin-left: 10px
}

.billing-section .section-label {
    position: absolute;
    width: 85px;
    font-weight: 400;
    color: var(--color-fg-muted);
    text-align: right
}

.billing-section .section-content {
    margin-left: 100px;
    color: var(--color-fg-default)
}

.billing-section:last-child {
    border-bottom: 0
}

.billing-section .usage-bar {
    max-width: 304px
}

.usage-bar {
    width: 100%;
    margin: 5px 0 0;
    background: #eee;
    border-radius: 20px
}

.usage-bar.exceeded .progress {
    background-color: var(--color-danger-emphasis) !important
}

.usage-bar .progress {
    position: relative;
    max-width: 100%;
    height: 5px;
    background-color: var(--color-success-emphasis);
    border-radius: 20px;
    transition: width .3s
}

.usage-bar .progress.no-highlight {
    background: var(--color-neutral-muted)
}

.usage-bar .progress--orange {
    background-color: var(--color-severe-emphasis)
}

.usage-bar .progress--purple {
    background-color: var(--color-done-emphasis)
}

.lfs-data-pack-field {
    margin: -6px 0
}

.packs-table .desc {
    width: 1%;
    white-space: nowrap
}

.lfs-data-icon {
    color: var(--color-fg-muted);
    text-align: center
}

.lfs-data-icon.dark {
    color: var(--color-fg-default)
}

.lfs-data-icon.octicon-database {
    margin-right: 3px;
    margin-left: 2px
}

.setup-wrapper .paypal-container {
    margin-bottom: 30px
}

.setup-wrapper .paypal-logged-in .paypal-container {
    margin-bottom: 10px
}

.payment-methods {
    position: relative
}

.payment-methods .selected-payment-method {
    display: none
}

.payment-methods .selected-payment-method::before {
    display: table;
    content: ""
}

.payment-methods .selected-payment-method::after {
    display: table;
    clear: both;
    content: ""
}

.payment-methods .selected-payment-method.active {
    display: block
}

.payment-methods .form-group dd .form-control.short.input-vat {
    width: 300px
}

.payment-methods .pay-with-header {
    margin: 5px 0
}

.payment-methods .pay-with-paypal .setup-creditcard-form,.payment-methods .pay-with-paypal .paypal-form-actions,.payment-methods .pay-with-paypal .terms,.payment-methods .pay-with-paypal .paypal-signed-in,.payment-methods .pay-with-paypal .paypal-down-flash,.payment-methods .pay-with-paypal .loading-paypal-spinner {
    display: none
}

.payment-methods.paypal-loading .loading-paypal-spinner {
    display: block
}

.payment-methods.paypal-down .paypal-down-flash {
    display: block
}

.payment-methods.paypal-logged-in .paypal-sign-in {
    display: none
}

.payment-methods.paypal-logged-in .setup-creditcard-form,.payment-methods.paypal-logged-in .paypal-form-actions,.payment-methods.paypal-logged-in .terms,.payment-methods.paypal-logged-in .paypal-signed-in {
    display: block
}

.payment-methods.has-paypal-account .paypal-sign-in {
    display: none
}

.payment-methods.has-paypal-account .paypal-signed-in {
    display: block
}

.paypal-label {
    margin: 15px 0 10px;
    font-weight: 600
}

.paypal-container {
    display: inline-block;
    margin-bottom: 15px;
    vertical-align: top;
    background-color: var(--color-canvas-subtle);
    border-radius: 4px
}

.braintree-paypal-loggedin {
    padding: 11px 16px !important;
    background-position: 12px 50% !important;
    border: 1px solid var(--color-border-muted) !important;
    border-radius: 4px
}

.bt-pp-name {
    margin-left: 20px !important
}

.bt-pp-email {
    margin-left: 15px !important
}

.bt-pp-cancel {
    font-size: 0 !important;
    line-height: 1 !important;
    color: var(--color-danger-fg) !important;
    text-decoration: none !important
}

.payment-history .id,.payment-history .date,.payment-history .receipt,.payment-history .status,.payment-history .amount {
    white-space: nowrap
}

.payment-history .break-all {
    word-break: break-all
}

.payment-history .receipt {
    text-align: center
}

.payment-history .currency,.payment-history .status {
    color: var(--color-fg-muted)
}

.payment-history .status-icon {
    width: 14px;
    text-align: center
}

.payment-history .succeeded .status {
    color: var(--color-success-fg)
}

.payment-history .refunded,.payment-history .failed {
    background: var(--color-canvas-subtle)
}

.payment-history .refunded td,.payment-history .failed td {
    opacity: .5
}

.payment-history .refunded .receipt,.payment-history .refunded .status,.payment-history .failed .receipt,.payment-history .failed .status {
    opacity: 1
}

.payment-history .refunded .status {
    color: var(--color-fg-muted)
}

.payment-history .failed .status {
    color: var(--color-danger-fg)
}

.paypal-icon {
    margin: 0 2px 0 1px;
    vertical-align: middle
}

.boxed-group .boxed-group-content {
    margin: 10px
}

.currency-container .local-currency,.currency-container .local-currency-block {
    display: none
}

.currency-container.open .local-currency {
    display: inline
}

.currency-container.open .local-currency-block {
    display: block
}

.currency-container.open .default-currency {
    display: none
}

.strong-label {
    display: inline-block;
    margin-bottom: 5px;
    font-weight: 600
}

.discounted-original-price {
    font-weight: 400;
    color: var(--color-fg-muted);
    text-decoration: line-through
}

.billing-manager-input {
    width: 500px
}

.billing-manager-banner {
    padding: 30px 20px;
    margin-bottom: 30px;
    overflow: hidden;
    background: var(--color-canvas-subtle);
    border-bottom: 1px solid var(--color-border-muted)
}

.billing-manager-banner .container {
    position: relative
}

.billing-manager-banner-text {
    margin-left: 210px;
    font-size: 14px;
    color: var(--color-fg-muted)
}

.billing-manager-banner-text .btn {
    margin-top: 8px;
    margin-right: 8px
}

.billing-manager-banner-title {
    font-size: 12px;
    font-weight: 600;
    color: var(--color-fg-muted)
}

.billing-manager-icon {
    position: absolute;
    top: -35px;
    left: 0;
    width: 180px;
    height: 180px;
    font-size: 180px;
    color: var(--color-fg-muted)
}

.seats-change-arrow {
    margin: 0 10px
}

.plan-choice {
    position: relative;
    display: block;
    padding: 16px;
    padding-left: 40px;
    font-weight: 400;
    background-color: var(--color-canvas-subtle);
    border: 1px solid var(--color-border-default)
}

.plan-choice.open,.plan-choice.selected {
    background-color: var(--color-canvas-default)
}

.plan-choice--experiment {
    cursor: pointer;
    transition: transform .3s,box-shadow .3s,border-color .3s
}

.plan-choice--experiment.open,.plan-choice--experiment.selected {
    border-color: var(--color-border-default);
    box-shadow: var(--color-shadow-large);
    transform: scale(1.025)
}

.plan-choice--experiment.open .plan-choice-icon,.plan-choice--experiment.selected .plan-choice-icon {
    background-color: var(--color-success-emphasis);
    box-shadow: var(--color-shadow-small)
}

.plan-choice--experiment.open .plan-choice-icon .octicon,.plan-choice--experiment.selected .plan-choice-icon .octicon {
    transform: scale(1)
}

.plan-choice--experiment.plan-choice--green.open,.plan-choice--experiment.plan-choice--green.selected {
    border-color: var(--color-success-emphasis)
}

.plan-choice--experiment.plan-choice--green.open .plan-choice-icon,.plan-choice--experiment.plan-choice--green.selected .plan-choice-icon {
    background-color: var(--color-success-emphasis)
}

.plan-choice--experiment.plan-choice--purple.open,.plan-choice--experiment.plan-choice--purple.selected {
    border-color: var(--color-done-emphasis)
}

.plan-choice--experiment.plan-choice--purple.open .plan-choice-icon,.plan-choice--experiment.plan-choice--purple.selected .plan-choice-icon {
    background-color: var(--color-done-fg)
}

.plan-choice-icon {
    transition: box-shadow .3s
}

.plan-choice-icon .octicon {
    transition: transform .2s;
    transform: scale(0.5)
}

.plan-choice-radio {
    position: absolute;
    top: 18px;
    left: 15px
}

.plan-choice-exp {
    margin-top: 5px;
    font-size: 12px;
    color: var(--color-fg-muted)
}

.seat-field {
    width: 50px;
    margin-right: 5px
}

.billing-line-items {
    margin-top: 10px
}

.billing-line-item {
    padding: 10px 0;
    font-size: 12px;
    list-style: none;
    border-top: 1px solid var(--color-border-default)
}

.billing-line-item::before {
    display: table;
    content: ""
}

.billing-line-item::after {
    display: table;
    clear: both;
    content: ""
}

.billing-line-item-last {
    font-weight: 600;
    border-top-width: 3px
}

.line-item-value {
    float: right
}

.condensed-payment-methods .vat-field {
    width: 100%
}

.condensed-payment-methods .state-field {
    width: 30%
}

.condensed-payment-methods .postcode-field {
    width: 28%
}

.condensed-payment-methods .country-field {
    width: 42%
}

.condensed-payment-methods .is-international .country-field {
    width: 72%
}

.condensed-payment-methods .is-international.no-postcodes .country-field {
    width: 100%
}

.zuora-billing-section.PaymentMethod--creditcard:not(.has-removed-contents)~.SignUpContinueActions {
    display: none
}

.zuora-billing-section.PaymentMethod--creditcard-added~.SignUpContinueActions {
    display: block
}

.zuora-billing-section.PaymentMethod--paypal~.SignUpContinueActions {
    display: block
}

.new-org-billing-form .z_hppm_iframe {
    width: 100% !important
}

.billing-tooltip-underline {
    cursor: help;
    border-bottom: 1px dotted
}

.billing-box-accordion[open] .octicon-chevron-right {
    height: auto;
    transform: rotate(90deg)
}

.billing-box-accordion:hover .billing-box-accordion-state .octicon {
    color: var(--color-fg-muted)
}

.billing-box-accordion-chevron[open] .octicon-chevron-right {
    height: auto;
    transform: rotate(90deg)
}

.billing-box-accordion-state .octicon {
    color: var(--color-fg-muted);
    transition: transform .09s ease-out
}

.billing-box-progress {
    padding-top: 1px;
    margin-bottom: 6px
}

.Details-element:focus {
    outline: none
}

.organization-radio-button-budget-disabled {
    color: var(--color-fg-muted);
    background-color: var(--color-canvas-subtle)
}

.organization-radio-button-budget-disabled label p {
    color: var(--color-fg-muted) !important
}

.required-asterisked::after {
    color: var(--color-danger-fg);
    content: " *"
}

.blame-commit {
    -webkit-user-select: none;
    user-select: none
}

.blame-commit[data-heat="1"] {
    border-right: 2px solid #f66a0a
}

.blame-commit[data-heat="2"] {
    border-right: 2px solid rgba(246,106,10,.9)
}

.blame-commit[data-heat="3"] {
    border-right: 2px solid rgba(246,106,10,.8)
}

.blame-commit[data-heat="4"] {
    border-right: 2px solid rgba(246,106,10,.7)
}

.blame-commit[data-heat="5"] {
    border-right: 2px solid rgba(246,106,10,.6)
}

.blame-commit[data-heat="6"] {
    border-right: 2px solid rgba(246,106,10,.5)
}

.blame-commit[data-heat="7"] {
    border-right: 2px solid rgba(246,106,10,.4)
}

.blame-commit[data-heat="8"] {
    border-right: 2px solid rgba(246,106,10,.3)
}

.blame-commit[data-heat="9"] {
    border-right: 2px solid rgba(246,106,10,.2)
}

.blame-commit[data-heat="10"] {
    border-right: 2px solid rgba(246,106,10,.1)
}

.heat[data-heat="1"] {
    background: #f66a0a
}

.heat[data-heat="2"] {
    background: rgba(246,106,10,.9)
}

.heat[data-heat="3"] {
    background: rgba(246,106,10,.8)
}

.heat[data-heat="4"] {
    background: rgba(246,106,10,.7)
}

.heat[data-heat="5"] {
    background: rgba(246,106,10,.6)
}

.heat[data-heat="6"] {
    background: rgba(246,106,10,.5)
}

.heat[data-heat="7"] {
    background: rgba(246,106,10,.4)
}

.heat[data-heat="8"] {
    background: rgba(246,106,10,.3)
}

.heat[data-heat="9"] {
    background: rgba(246,106,10,.2)
}

.heat[data-heat="10"] {
    background: rgba(246,106,10,.1)
}

.blame-commit-date {
    font-size: 11px;
    line-height: 25px;
    flex-shrink: 0
}

.blame-commit-date[data-heat="1"] {
    color: #c24e00
}

.blame-commit-date[data-heat="2"] {
    color: #ac571f
}

.blame-commit-date[data-heat="3"] {
    color: #a35b2c
}

.blame-commit-date[data-heat="4"] {
    color: #9a5f38
}

.blame-commit-date[data-heat="5"] {
    color: #926245
}

.blame-commit-date[data-heat="6"] {
    color: #896651
}

.blame-commit-date[data-heat="7"] {
    color: #806a5e
}

.blame-commit-date[data-heat="8"] {
    color: #776d6a
}

.blame-commit-date[data-heat="9"] {
    color: #6e7177
}

.blame-commit-date[data-heat="10"] {
    color: #6a737d
}

.line-age-legend .heat {
    width: 2px;
    height: 10px;
    margin: 2px 1px 0
}

.blame-breadcrumb .css-truncate-target {
    max-width: 680px
}

.blame-commit-info {
    width: 450px;
    height: 26px
}

.blame-commit-content {
    flex-grow: 2;
    overflow: hidden
}

.blame-commit-message {
    text-overflow: ellipsis
}

.blame-commit-message .message.blank {
    color: var(--color-fg-muted)
}

.blob-reblame {
    min-width: 24px;
    -webkit-user-select: none;
    user-select: none
}

.reblame-link {
    padding-top: 2px;
    color: var(--color-fg-muted);
    opacity: .3
}

.blame-hunk g-emoji {
    font-size: 14px !important
}

.blame-hunk:hover .reblame-link {
    opacity: 1
}

.blame-container .blame-blob-num,.blame-container .blob-code-inner {
    padding-top: 3px;
    padding-bottom: 3px
}

.blame-container .blob-code-inner {
    flex-grow: 1
}

.editor-abort {
    display: inline;
    font-size: 14px
}

.blob-interaction-bar {
    position: relative;
    background-color: var(--color-canvas-subtle);
    border-bottom: 1px solid var(--color-border-default)
}

.blob-interaction-bar::before {
    display: table;
    content: ""
}

.blob-interaction-bar::after {
    display: table;
    clear: both;
    content: ""
}

.blob-interaction-bar .octicon-search {
    position: absolute;
    top: 6px;
    left: 10px;
    font-size: 12px;
    color: var(--color-fg-muted)
}

.blob-filter {
    width: 100%;
    padding: 4px 20px 5px 30px;
    font-size: 12px;
    border: 0;
    border-radius: 0;
    outline: none
}

.blob-filter:focus {
    outline: none
}

.html-blob {
    margin-bottom: 15px
}

.TagsearchPopover {
    width: inherit;
    max-width: 600px
}

.TagsearchPopover-content {
    max-height: 300px
}

.TagsearchPopover-list .TagsearchPopover-list-item:hover {
    background-color: var(--color-canvas-subtle)
}

.TagsearchPopover-list .TagsearchPopover-list-item .TagsearchPopover-item:hover {
    text-decoration: none
}

.TagsearchPopover-list .blob-code-inner {
    white-space: pre-wrap
}

.blob-code-content .bidi-line-alert {
    position: absolute;
    left: 0;
    margin: -2px 2px
}

.csv-data .bidi-line-alert {
    position: absolute;
    margin: 2px 4px
}

.linejump .linejump-input {
    width: 340px;
    background-color: var(--color-canvas-subtle)
}

.linejump .linejump-input,.linejump .btn {
    padding: 10px 15px;
    font-size: 16px
}

.CopyBlock {
    line-height: 20px;
    cursor: pointer
}

.CopyBlock .octicon-copy {
    display: none
}

.CopyBlock:hover,.CopyBlock:focus,.CopyBlock:active {
    background-color: var(--color-canvas-default);
    outline: none
}

.CopyBlock:hover .octicon-copy,.CopyBlock:focus .octicon-copy,.CopyBlock:active .octicon-copy {
    display: inline-block
}

.blob-header.is-stuck {
    border-top: 0;
    border-top-left-radius: 0;
    border-top-right-radius: 0
}

.commit-form-avatar {
    margin-left: -64px
}

.file-commit-form {
    padding-left: 64px
}

.file-commit-form--full {
    position: absolute;
    bottom: 0;
    left: 0;
    z-index: 10;
    width: 100%;
    padding-top: 16px;
    padding-left: 0;
    margin-top: 16px;
    margin-bottom: 16px;
    background: var(--color-canvas-default)
}

@media(min-width: 1012px) {
    .file-commit-form--full {
        top:0;
        right: 0;
        bottom: auto;
        left: auto;
        width: auto;
        margin-top: 0;
        margin-bottom: 0
    }
}

.file-commit-form--full .commit-form {
    padding: 0;
    margin-bottom: 24px;
    border: 0
}

.file-commit-form--full .commit-form::before {
    display: none
}

.file-commit-form-dropdown {
    position: fixed;
    top: 0;
    left: 0;
    width: 100%;
    height: 100%
}

.file-commit-form-dropdown::after {
    display: none
}

@media(min-width: 1012px) {
    .file-commit-form-dropdown {
        position:absolute;
        top: auto;
        left: auto;
        width: 420px;
        height: auto
    }

    .file-commit-form-dropdown::after {
        display: inline-block
    }
}

.commit-form::after,.commit-form::before {
    position: absolute;
    top: 11px;
    right: 100%;
    left: -8px;
    display: block;
    width: 8px;
    height: 16px;
    pointer-events: none;
    content: " ";
    -webkit-clip-path: polygon(0 50%, 100% 0, 100% 100%);
    clip-path: polygon(0 50%, 100% 0, 100% 100%)
}

.commit-form::after {
    margin-left: 1px;
    background-color: var(--color-canvas-default);
    background-image: linear-gradient(var(--color-canvas-default), var(--color-canvas-default))
}

.commit-form::before {
    background-color: var(--color-border-default)
}

.quick-pull-new-branch-icon {
    top: 9px;
    left: 10px
}

.code-formatting-menu {
    width: 260px
}

.file-test-workflow-dropdown {
    top: 6px;
    width: 378px;
    max-width: 378px !important
}

.CodeMirror-hints {
    position: absolute;
    z-index: 10;
    max-height: 20em;
    margin: 0;
    overflow-y: auto;
    font-family: SFMono-Regular,Consolas,"Liberation Mono",Menlo,monospace;
    font-size: 12px;
    list-style: none;
    background-color: var(--color-canvas-default);
    border: 1px solid var(--color-border-default);
    border-radius: 6px;
    box-shadow: var(--color-shadow-medium)
}

.CodeMirror-hint {
    padding: 2px 8px;
    margin: 0;
    color: var(--color-fg-default);
    white-space: pre;
    cursor: pointer
}

.CodeMirror-hint .CodeMirror-hint:first-child {
    border-top-left-radius: 6px;
    border-top-right-radius: 6px
}

.CodeMirror-hint .CodeMirror-hint:last-child {
    border-bottom-right-radius: 6px;
    border-bottom-left-radius: 6px
}

.CodeMirror-hint-active {
    color: var(--color-fg-on-emphasis);
    background-color: var(--color-accent-emphasis)
}

.CodeMirror-lint-tooltip {
    position: fixed;
    z-index: 100;
    min-width: 300px;
    max-width: 600px;
    opacity: 0;
    transition: opacity .4s
}

.CodeMirror-lint-mark-error {
    position: relative;
    cursor: help
}

.CodeMirror-lint-mark-error::before {
    position: absolute;
    top: 90%;
    width: 100%;
    height: .25em;
    content: "";
    background: linear-gradient(135deg, transparent, transparent 45%, var(--color-danger-emphasis), transparent 55%, transparent 100%),linear-gradient(45deg, transparent, transparent 45%, var(--color-danger-emphasis), transparent 55%, transparent 100%);
    background-repeat: repeat-x,repeat-x;
    background-size: .5em .5em
}

.CodeMirror-lint-mark-warning {
    position: relative;
    cursor: help
}

.CodeMirror-lint-mark-warning::before {
    position: absolute;
    top: 90%;
    width: 100%;
    height: .25em;
    content: "";
    background: linear-gradient(135deg, transparent, transparent 45%, var(--color-attention-emphasis), transparent 55%, transparent 100%),linear-gradient(45deg, transparent, transparent 45%, var(--color-attention-emphasis), transparent 55%, transparent 100%);
    background-repeat: repeat-x,repeat-x;
    background-size: .5em .5em
}

.CodeMirror-lint-mark-info {
    position: relative;
    cursor: help
}

.CodeMirror-lint-mark-info::before {
    position: absolute;
    top: 90%;
    width: 100%;
    height: .25em;
    content: "";
    background: linear-gradient(135deg, transparent, transparent 45%, var(--color-accent-emphasis), transparent 55%, transparent 100%),linear-gradient(45deg, transparent, transparent 45%, var(--color-accent-emphasis), transparent 55%, transparent 100%);
    background-repeat: repeat-x,repeat-x;
    background-size: .5em .5em
}

.CodeMirror-hint-active .CodeMirror-hint-description {
    color: var(--color-fg-on-emphasis) !important
}

.merge-pr {
    padding-top: 10px;
    margin: 20px 0 0;
    border-top: 1px solid var(--color-border-default)
}

.merge-pr.open .merge-branch-form {
    display: block
}

.merge-pr.open .branch-action {
    display: none
}

.merge-pr.is-merging-jump.open .merge-branch-form,.merge-pr.is-merging-group.open .merge-branch-form,.merge-pr.is-merging-solo.open .merge-branch-form {
    display: none
}

.merge-pr.is-merging-jump.open .queue-branch-form,.merge-pr.is-merging-group.open .queue-branch-form,.merge-pr.is-merging-solo.open .queue-branch-form {
    display: block
}

.status-heading {
    margin-bottom: 1px
}

.merge-status-list {
    max-height: 0;
    padding: 0;
    margin: 15px -15px -16px -55px;
    overflow-y: auto;
    border: solid var(--color-border-default);
    border-width: 1px 0 0;
    transition: max-height .25s ease-in-out
}

.statuses-toggle-opened {
    display: none
}

.merge-status-item {
    position: relative;
    padding: 10px 15px;
    background-color: var(--color-canvas-subtle);
    border-bottom: 1px solid var(--color-border-default)
}

.merge-status-item:last-child:not(.review-item) {
    border-bottom: 0
}

.merge-status-item .css-truncate-target {
    max-width: 100%
}

.merge-status-item .dismiss-review-form {
    display: none
}

.merge-status-item.open .review-status-item {
    display: none !important
}

.merge-status-item.open .dismiss-review-form {
    display: block
}

.status-meta {
    color: var(--color-fg-muted)
}

.status-meta-file-name {
    padding: .2em .4em;
    margin: 0;
    font-size: 85%;
    background-color: rgba(27,31,35,.05);
    border-radius: 6px
}

.status-actions {
    margin-left: auto
}

.branch-action-item-icon {
    float: left;
    margin-left: -40px
}

.merge-status-icon {
    min-width: 30px;
    margin-right: 12px
}

.branch-action {
    padding-left: 55px;
    margin-top: 16px;
    margin-bottom: 16px
}

.branch-action .merge-branch-heading {
    margin-bottom: 4px
}

.branch-action-icon {
    float: left;
    width: 40px;
    height: 40px;
    margin-left: -55px;
    color: var(--color-fg-on-emphasis);
    border-radius: 6px
}

.branch-action-body {
    position: relative;
    background-color: var(--color-canvas-default);
    border: 1px solid var(--color-border-default);
    border-radius: 6px
}

.branch-action-body .spinner {
    display: block;
    float: left;
    width: 32px;
    height: 32px;
    margin-right: 15px;
    background: url("/images/spinners/octocat-spinner-32.gif") no-repeat
}

.branch-action-body .merge-message,.branch-action-body .merge-branch-form,.branch-action-body .queue-branch-form {
    padding: 16px;
    background-color: var(--color-canvas-subtle);
    border-top: 1px solid var(--color-border-default);
    border-bottom-right-radius: 6px;
    border-bottom-left-radius: 6px
}

.post-merge-message {
    padding: 16px
}

.branch-action-item {
    padding: 15px 15px 15px 55px;
    font-size: 13px;
    line-height: 1.4
}

.branch-action-item+.branch-action-item,.branch-action-item+.mergeability-details {
    border-top: 1px solid var(--color-border-default)
}

.branch-action-item.open>.merge-status-list-wrapper>.merge-status-list,.branch-action-item.open>.merge-status-list {
    max-height: 231px;
    margin-bottom: -15px
}

.branch-action-item.open .statuses-toggle-opened {
    display: inline
}

.branch-action-item.open .statuses-toggle-closed {
    display: none
}

.branch-action-btn {
    margin-left: 15px
}

.branch-action-item-simple {
    padding-left: 15px
}

.branch-action-item-simple .merge-status-list {
    margin-left: -15px
}

.branch-action-item-simple .merge-status-item {
    padding-left: 12px
}

.branch-action-state-clean .branch-action-icon {
    color: var(--color-fg-on-emphasis);
    background-color: var(--color-success-emphasis);
    border: 1px solid transparent
}

.branch-action-state-clean .branch-action-body {
    border-color: var(--color-success-emphasis)
}

.branch-action-state-clean .branch-action-body::after,.branch-action-state-clean .branch-action-body::before {
    position: absolute;
    top: 11px;
    right: 100%;
    left: -8px;
    display: block;
    width: 8px;
    height: 16px;
    pointer-events: none;
    content: " ";
    -webkit-clip-path: polygon(0 50%, 100% 0, 100% 100%);
    clip-path: polygon(0 50%, 100% 0, 100% 100%)
}

.branch-action-state-clean .branch-action-body::after {
    margin-left: 1px;
    background-color: var(--color-canvas-default);
    background-image: linear-gradient(var(--color-canvas-default), var(--color-canvas-default))
}

.branch-action-state-clean .branch-action-body::before {
    background-color: var(--color-success-emphasis)
}

.branch-action-state-unknown .branch-action-icon,.branch-action-state-unstable .branch-action-icon {
    color: var(--color-fg-on-emphasis);
    background-color: var(--color-attention-emphasis);
    border: 1px solid transparent
}

.branch-action-state-unknown .branch-action-body,.branch-action-state-unstable .branch-action-body {
    border-color: var(--color-attention-emphasis)
}

.branch-action-state-unknown .branch-action-body::after,.branch-action-state-unknown .branch-action-body::before,.branch-action-state-unstable .branch-action-body::after,.branch-action-state-unstable .branch-action-body::before {
    position: absolute;
    top: 11px;
    right: 100%;
    left: -8px;
    display: block;
    width: 8px;
    height: 16px;
    pointer-events: none;
    content: " ";
    -webkit-clip-path: polygon(0 50%, 100% 0, 100% 100%);
    clip-path: polygon(0 50%, 100% 0, 100% 100%)
}

.branch-action-state-unknown .branch-action-body::after,.branch-action-state-unstable .branch-action-body::after {
    margin-left: 1px;
    background-color: var(--color-canvas-default);
    background-image: linear-gradient(var(--color-canvas-default), var(--color-canvas-default))
}

.branch-action-state-unknown .branch-action-body::before,.branch-action-state-unstable .branch-action-body::before {
    background-color: var(--color-attention-emphasis)
}

.branch-action-state-merged .branch-action-icon {
    color: var(--color-fg-on-emphasis);
    background-color: var(--color-done-emphasis);
    border: 1px solid transparent
}

.branch-action-state-merged .branch-action-body {
    border-color: var(--color-done-emphasis)
}

.branch-action-state-merged .branch-action-body::after,.branch-action-state-merged .branch-action-body::before {
    position: absolute;
    top: 11px;
    right: 100%;
    left: -8px;
    display: block;
    width: 8px;
    height: 16px;
    pointer-events: none;
    content: " ";
    -webkit-clip-path: polygon(0 50%, 100% 0, 100% 100%);
    clip-path: polygon(0 50%, 100% 0, 100% 100%)
}

.branch-action-state-merged .branch-action-body::after {
    margin-left: 1px;
    background-color: var(--color-canvas-default);
    background-image: linear-gradient(var(--color-canvas-default), var(--color-canvas-default))
}

.branch-action-state-merged .branch-action-body::before {
    background-color: var(--color-done-emphasis)
}

.branch-action-state-dirty .branch-action-icon,.branch-action-state-closed-dirty .branch-action-icon,.is-rebasing .branch-action-state-dirty-if-rebasing .branch-action-icon {
    color: var(--color-fg-on-emphasis);
    background-color: var(--color-neutral-emphasis);
    border: 1px solid transparent
}

.branch-action-state-dirty .branch-action-body,.branch-action-state-closed-dirty .branch-action-body,.is-rebasing .branch-action-state-dirty-if-rebasing .branch-action-body {
    border-color: var(--color-border-default)
}

.branch-action-state-dirty .branch-action-body::after,.branch-action-state-dirty .branch-action-body::before,.branch-action-state-closed-dirty .branch-action-body::after,.branch-action-state-closed-dirty .branch-action-body::before,.is-rebasing .branch-action-state-dirty-if-rebasing .branch-action-body::after,.is-rebasing .branch-action-state-dirty-if-rebasing .branch-action-body::before {
    position: absolute;
    top: 11px;
    right: 100%;
    left: -8px;
    display: block;
    width: 8px;
    height: 16px;
    pointer-events: none;
    content: " ";
    -webkit-clip-path: polygon(0 50%, 100% 0, 100% 100%);
    clip-path: polygon(0 50%, 100% 0, 100% 100%)
}

.branch-action-state-dirty .branch-action-body::after,.branch-action-state-closed-dirty .branch-action-body::after,.is-rebasing .branch-action-state-dirty-if-rebasing .branch-action-body::after {
    margin-left: 1px;
    background-color: var(--color-canvas-default);
    background-image: linear-gradient(var(--color-canvas-default), var(--color-canvas-default))
}

.branch-action-state-dirty .branch-action-body::before,.branch-action-state-closed-dirty .branch-action-body::before,.is-rebasing .branch-action-state-dirty-if-rebasing .branch-action-body::before {
    background-color: var(--color-border-default)
}

.branch-action-state-error .branch-action-icon,.is-merging .branch-action-state-error-if-merging .branch-action-icon {
    color: var(--color-fg-on-emphasis);
    background-color: var(--color-danger-emphasis);
    border: 1px solid transparent
}

.branch-action-state-error .branch-action-body,.is-merging .branch-action-state-error-if-merging .branch-action-body {
    border-color: var(--color-danger-emphasis)
}

.branch-action-state-error .branch-action-body::after,.branch-action-state-error .branch-action-body::before,.is-merging .branch-action-state-error-if-merging .branch-action-body::after,.is-merging .branch-action-state-error-if-merging .branch-action-body::before {
    position: absolute;
    top: 11px;
    right: 100%;
    left: -8px;
    display: block;
    width: 8px;
    height: 16px;
    pointer-events: none;
    content: " ";
    -webkit-clip-path: polygon(0 50%, 100% 0, 100% 100%);
    clip-path: polygon(0 50%, 100% 0, 100% 100%)
}

.branch-action-state-error .branch-action-body::after,.is-merging .branch-action-state-error-if-merging .branch-action-body::after {
    margin-left: 1px;
    background-color: var(--color-canvas-default);
    background-image: linear-gradient(var(--color-canvas-default), var(--color-canvas-default))
}

.branch-action-state-error .branch-action-body::before,.is-merging .branch-action-state-error-if-merging .branch-action-body::before {
    background-color: var(--color-danger-emphasis)
}

.enqueued-pull-request .branch-action-body::after,.enqueued-pull-request .branch-action-body::before {
    position: absolute;
    top: 11px;
    right: 100%;
    left: -8px;
    display: block;
    width: 8px;
    height: 16px;
    pointer-events: none;
    content: " ";
    -webkit-clip-path: polygon(0 50%, 100% 0, 100% 100%);
    clip-path: polygon(0 50%, 100% 0, 100% 100%)
}

.enqueued-pull-request .branch-action-body::after {
    margin-left: 1px;
    background-color: var(--color-canvas-default);
    background-image: linear-gradient(var(--color-canvas-default), var(--color-canvas-default))
}

.enqueued-pull-request .branch-action-body::before {
    background-color: var(--color-attention-emphasis)
}

@media only screen and (-webkit-min-device-pixel-ratio: 2),only screen and (min--moz-device-pixel-ratio: 2),only screen and (-moz-min-device-pixel-ratio: 2),only screen and (min-device-pixel-ratio: 2),only screen and (min-resolution: 192dpi),only screen and (min-resolution: 2dppx) {
    .branch-action-body .spinner {
        background-image:url("/images/spinners/octocat-spinner-64.gif");
        background-size: 32px 32px
    }
}

.merge-branch-form,.queue-branch-form {
    display: none;
    margin: 15px 0
}

.merge-branch-form .commit-form,.queue-branch-form .commit-form {
    border-color: var(--color-success-emphasis)
}

.merge-branch-form .commit-form::before,.queue-branch-form .commit-form::before {
    display: none
}

@media(min-width: 768px) {
    .merge-branch-form .commit-form::before,.queue-branch-form .commit-form::before {
        display:block;
        border-right-color: var(--color-border-default)
    }
}

.merge-branch-form .commit-form::after,.queue-branch-form .commit-form::after {
    display: none
}

@media(min-width: 768px) {
    .merge-branch-form .commit-form::after,.queue-branch-form .commit-form::after {
        display:block
    }
}

.merge-branch-form.error .commit-form,.merge-branch-form.danger .commit-form,.queue-branch-form.error .commit-form,.queue-branch-form.danger .commit-form {
    border-color: var(--color-danger-emphasis)
}

.merge-branch-form.error .commit-form::before,.merge-branch-form.danger .commit-form::before,.queue-branch-form.error .commit-form::before,.queue-branch-form.danger .commit-form::before {
    border-right-color: var(--color-danger-emphasis)
}

.merge-button-matrix-merge-form .merge-branch-form {
    display: block
}

.completeness-indicator {
    width: 30px;
    height: 30px;
    text-align: center
}

.completeness-indicator .octicon {
    display: block;
    margin-top: 6px;
    margin-right: auto;
    margin-left: auto
}

.completeness-indicator .octicon-alert {
    margin-top: 6px
}

.completeness-indicator-success {
    color: var(--color-fg-on-emphasis);
    background-color: var(--color-success-emphasis);
    border: 1px solid transparent;
    border-radius: 50%
}

.completeness-indicator-error {
    color: var(--color-fg-on-emphasis);
    background-color: var(--color-danger-emphasis);
    border: 1px solid transparent;
    border-radius: 50%
}

.completeness-indicator-problem {
    color: var(--color-fg-on-emphasis);
    background-color: var(--color-neutral-emphasis);
    border: 1px solid transparent;
    border-radius: 50%
}

.completeness-indicator-warning {
    color: var(--color-fg-on-emphasis);
    background-color: var(--color-attention-emphasis);
    border: 1px solid transparent;
    border-radius: 50%
}

.pull-merging .pull-merging-error {
    display: none
}

.pull-merging.is-error .pull-merging-error {
    display: block
}

.pull-merging.is-error .merge-pr {
    display: none
}

.RecentBranches {
    background-color: var(--color-attention-subtle);
    border: 1px solid var(--color-attention-emphasis);
    border-radius: 6px
}

.RecentBranches-item {
    line-height: 28px;
    color: var(--color-fg-default)
}

.RecentBranches-item+.RecentBranches-item {
    border-top: 1px solid var(--color-attention-emphasis)
}

.RecentBranches-item-link {
    color: var(--color-fg-default)
}

.RecentBranches-item-link.css-truncate-target {
    max-width: 400px
}

.range-editor {
    position: relative;
    padding: 5px 15px 5px 40px;
    margin-top: 15px;
    margin-bottom: 15px;
    background-color: var(--color-canvas-subtle);
    border: 1px solid var(--color-border-default);
    border-radius: 6px
}

.range-editor .dots {
    font-size: 16px
}

.range-editor .select-menu {
    position: relative;
    display: inline-block
}

.range-editor .select-menu.fork-suggester {
    display: none
}

.range-editor .branch-name {
    line-height: 22px
}

.range-editor .branch .css-truncate-target,.range-editor .fork-suggester .css-truncate-target {
    max-width: 180px
}

.range-editor .pre-mergability {
    display: inline-block;
    padding: 5px;
    line-height: 26px;
    vertical-align: middle
}

.range-editor .pre-mergability .octicon {
    vertical-align: text-bottom
}

.range-editor.is-cross-repo .select-menu.fork-suggester {
    display: inline-block
}

.range-editor-icon {
    float: left;
    margin-top: 10px;
    margin-left: -25px;
    color: var(--color-fg-muted)
}

.compare-pr-header {
    display: none
}

.is-pr-composer-expanded .compare-show-header {
    display: none
}

.is-pr-composer-expanded .compare-pr-header {
    display: block
}

.range-cross-repo-pair {
    display: inline-block;
    padding: 5px;
    white-space: nowrap
}

.branches .clear-search {
    display: none
}

.branches .loading-overlay {
    position: absolute;
    top: 0;
    z-index: 20;
    display: none;
    width: 100%;
    height: 100%;
    padding-top: 50px;
    text-align: center
}

.branches .loading-overlay::before {
    position: absolute;
    top: 0;
    right: 0;
    bottom: 0;
    left: 0;
    content: "";
    background-color: var(--color-canvas-default);
    opacity: .7
}

.branches .loading-overlay .spinner {
    display: inline-block
}

.branches.is-loading .loading-overlay {
    display: block
}

.branches.is-search-mode .clear-search {
    display: inline-block
}

.branch-a-b-count .count-half {
    position: relative;
    float: left;
    width: 90px;
    padding-bottom: 6px;
    text-align: right
}

.branch-a-b-count .count-half:last-child {
    text-align: left;
    border-left: 1px solid var(--color-border-default)
}

.branch-a-b-count .count-value {
    position: relative;
    top: -1px;
    display: block;
    padding: 0 3px;
    font-size: 10px
}

.branch-a-b-count .bar {
    position: absolute;
    min-width: 3px;
    height: 4px
}

.branch-a-b-count .meter {
    position: absolute;
    height: 4px;
    background-color: var(--color-neutral-muted)
}

.branch-a-b-count .meter.zero {
    background-color: transparent
}

.branch-a-b-count .bar-behind {
    right: 0;
    border-radius: 6px 0 0 6px
}

.branch-a-b-count .bar-behind .meter {
    right: 0;
    border-radius: 6px 0 0 6px
}

.branch-a-b-count .bar-ahead {
    left: 0;
    border-radius: 0 6px 6px 0
}

.branch-a-b-count .bar-ahead .meter {
    border-radius: 0 6px 6px 0
}

.branch-a-b-count .bar-ahead.even,.branch-a-b-count .bar-behind.even {
    min-width: 2px;
    background: #eaecef
}

@media(max-width: 767px) {
    .branch-info-dropdown-size {
        top:6px;
        width: 300px;
        max-width: 300px !important
    }

    .branch-contribute-right {
        right: auto;
        left: -10px
    }

    .branch-contribute-right::before,.branch-contribute-right::after {
        right: auto;
        left: 10px
    }
}

@media(min-width: 767px) {
    .branch-info-dropdown-size {
        top:6px;
        width: 378px;
        max-width: 378px !important
    }
}

.admin-options-block .admin-option-button {
    margin-top: 8px
}

.admin-options-block .policy-enforcement {
    display: inline;
    margin-left: 8px;
    color: var(--color-fg-muted)
}

.admin-options-block .policy-enforcement label {
    font-size: 13px
}

.admin-options-block .disabled {
    color: var(--color-fg-muted)
}

.admin-options-block .disabled .note {
    color: var(--color-fg-muted)
}

.overflow-scroll-y {
    overflow-x: hidden !important;
    overflow-y: scroll !important
}

.business-menu-item:not([aria-current=page])+.business-sub-menu {
    display: none
}

.business-menu-icon {
    width: 16px;
    margin-right: 8px
}

.deprovisioning-checkbox>.show-if-disabled {
    display: none
}

.deprovisioning-checkbox.checkbox-disabled {
    color: var(--color-fg-muted)
}

.deprovisioning-checkbox.checkbox-disabled>.show-if-disabled {
    display: inherit
}

body.full-width-p-0 .new-discussion-timeline {
    padding: 0 !important
}

body.full-width-p-0 .footer .mt-6 {
    margin-top: 0 !important;
    border-top: 0 !important
}

body.full-width-p-0 .tabnav .tabnav-extra {
    margin-right: 24px
}

body.full-width-p-0 .tabnav .tabnav-tabs {
    margin-left: 16px
}

.checks-summary-conclusion {
    width: 32px;
    height: 32px;
    line-height: 32px;
    border-radius: 50%
}

.actions-full-screen .pagehead,.actions-full-screen .hide-full-screen,.actions-full-screen .Header-old,.actions-full-screen .Header {
    display: none
}

.checks-list-item.selected .checks-list-item-name {
    background-color: var(--color-accent-emphasis) !important
}

.checks-list-item.selected .selected-color-white {
    color: var(--color-fg-on-emphasis) !important
}

.checks-list-item-icon {
    width: 16px
}

.checks-summary-meta .octicon {
    width: 16px
}

.checks-results-items .octicon-fold {
    display: none
}

.checks-results-items .Details--on .octicon-fold {
    display: inline-block
}

.checks-results-items .Details--on .octicon-unfold {
    display: none
}

.check-annotation {
    border-left: 0;
    border-top-left-radius: 0;
    border-bottom-left-radius: 0
}

.check-annotation::after {
    position: absolute;
    top: -1px;
    bottom: -1px;
    left: 0;
    display: block;
    width: 4px;
    content: " "
}

.check-annotation .annotation-actions {
    top: 4px;
    right: 8px
}

.check-annotation .annotation-octicon {
    width: 16px
}

.check-annotation.Details--on .Details-content--hidden {
    display: block !important
}

.annotation-title {
    word-break: break-all
}

.check-annotation-failure::after {
    background-color: var(--color-danger-emphasis)
}

.check-annotation-failure .annotation-title {
    color: var(--color-danger-fg)
}

.check-annotation-warning::after {
    background-color: var(--color-attention-emphasis)
}

.check-annotation-warning .octicon-alert {
    color: var(--color-attention-fg)
}

.check-annotation-warning .annotation-title {
    color: var(--color-attention-fg)
}

.neutral-check {
    color: var(--color-fg-muted)
}

.CheckRunContainer {
    background-color: var(--color-checks-bg);
    border-top: var(--color-checks-container-border-width) solid var(--color-border-default);
    border-left: var(--color-checks-container-border-width) solid var(--color-border-default)
}

.CheckRun {
    background-color: var(--color-checks-bg);
    border-color: var(--color-border-muted) !important;
    border-width: var(--color-checks-run-border-width) !important
}

.CheckStep-header {
    height: 36px;
    line-height: 20px;
    color: var(--color-checks-text-secondary)
}

.CheckStep-header-dropdown-menu {
    color: var(--color-scale-white);
    background: var(--color-checks-dropdown-bg);
    border-color: var(--color-checks-dropdown-border);
    box-shadow: 0 8px 24px var(--color-checks-dropdown-shadow) !important
}

.CheckStep-header-dropdown-menu::before {
    border-bottom-color: var(--color-checks-dropdown-border)
}

.CheckStep-header-dropdown-menu::after {
    border-bottom-color: var(--color-checks-dropdown-bg)
}

.CheckStep-header-dropdown-menu .dropdown-header {
    color: var(--color-checks-text-secondary)
}

.CheckStep-header-dropdown-menu .dropdown-divider {
    border-top-color: var(--color-checks-dropdown-border)
}

.CheckStep-header-dropdown-menu .dropdown-item {
    color: var(--color-checks-dropdown-text) !important
}

.CheckStep-header-dropdown-menu .dropdown-item:hover {
    color: var(--color-checks-dropdown-hover-text) !important;
    background-color: var(--color-checks-dropdown-hover-bg) !important
}

.CheckStep-header-dropdown-menu.dropdown-menu-w::before {
    border-color: transparent transparent transparent var(--color-checks-dropdown-border)
}

.CheckStep-header-dropdown-menu.dropdown-menu-w::after {
    border-color: transparent transparent transparent var(--color-checks-dropdown-bg)
}

.CheckStep-header-dropdown-menu.dropdown-menu-e::before {
    border-color: transparent var(--color-checks-dropdown-border) transparent transparent
}

.CheckStep-header-dropdown-menu.dropdown-menu-e::after {
    border-color: transparent var(--color-checks-dropdown-bg) transparent transparent
}

.CheckStep-header-dropdown-menu.dropdown-menu-ne::before {
    border-color: var(--color-checks-dropdown-border) transparent transparent transparent
}

.CheckStep-header-dropdown-menu.dropdown-menu-ne::after {
    border-color: var(--color-checks-dropdown-bg) transparent transparent transparent
}

.CheckRun-search details[open] .CheckStep-header-dropdown,.CheckStep-header-dropdown:hover {
    color: var(--color-checks-dropdown-btn-hover-text);
    background-color: var(--color-checks-dropdown-btn-hover-bg) !important
}

.CheckRun-search details[open] .octicon,.CheckStep-header-dropdown:hover .octicon {
    color: var(--color-checks-btn-hover-icon) !important
}

.CheckStep[open] .CheckStep-header {
    color: var(--color-checks-text-primary)
}

.CheckStep[open] .CheckStep-header,.CheckStep-header:hover {
    background-color: var(--color-checks-step-header-open-bg);
    box-shadow: 0 -2px 0 2px var(--color-checks-bg)
}

.WorkflowRunLogsScroll {
    scrollbar-width: thin;
    scrollbar-color: var(--color-checks-scrollbar-thumb-bg) var(--color-checks-bg)
}

.WorkflowRunLogsScroll::-webkit-scrollbar {
    width: 12px
}

.WorkflowRunLogsScroll::-webkit-scrollbar-thumb {
    background-color: var(--color-checks-scrollbar-thumb-bg);
    border-color: var(--color-checks-bg);
    border-style: solid;
    border-width: 3px;
    border-radius: 6px
}

.CheckStep-header-label {
    color: var(--color-checks-header-label-text)
}

.CheckStep[open] .CheckStep-header-label {
    color: var(--color-checks-header-label-open-text)
}

.CheckRun-search {
    width: 280px
}

.CheckRun-header {
    height: 80px;
    background-color: var(--color-checks-bg);
    border-top: 0;
    border-bottom: 1px solid var(--color-checks-header-border)
}

.CheckRun-header summary {
    padding: 6px 8px 5px
}

.CheckRun-header .btn-link:not([disabled]),.CheckRun-header .btn.btn-link:not([disabled]) .octicon,.CheckRun-header .btn-link:not([disabled]) .octicon {
    color: var(--color-checks-btn-icon)
}

.CheckRun-header .btn-link:hover:not([disabled]),.CheckRun-header .btn.btn-link:hover:not([disabled]) .octicon {
    color: var(--color-checks-btn-hover-icon);
    background-color: var(--color-checks-btn-hover-bg)
}

.CheckRun-header-timestamp {
    color: var(--color-checks-text-secondary)
}

.CheckRun-log-title {
    color: var(--color-checks-text-primary)
}

.Deployment-header-text {
    color: var(--color-checks-text-primary)
}

.CheckRun-search-input {
    padding-top: 6px;
    padding-right: 88px;
    padding-bottom: 6px;
    color: var(--color-checks-input-text);
    background-color: var(--color-checks-input-bg);
    border-color: transparent;
    box-shadow: var(--color-checks-input-shadow) !important
}

.CheckRun-search-input::placeholder {
    color: var(--color-checks-input-placeholder-text)
}

.CheckRun-search-input:focus {
    color: var(--color-checks-text-primary)
}

.CheckStep-chevron {
    transition: transform .1s
}

[open] .CheckStep-chevron {
    transform: rotate(90deg)
}

.CheckRun-header-counter {
    color: var(--color-checks-text-secondary);
    background-color: var(--color-checks-input-bg)
}

.CheckRun-search-icon {
    color: var(--color-checks-header-icon)
}

.CheckStep-line {
    line-height: 20px;
    color: var(--color-checks-line-text)
}

.CheckStep-line .CheckStep-line-number {
    width: 48px;
    overflow: hidden;
    color: var(--color-checks-line-num-text);
    text-align: right;
    text-decoration: none;
    text-overflow: ellipsis;
    white-space: nowrap;
    -webkit-user-select: none;
    user-select: none
}

.CheckStep-line .CheckStep-line-timestamp {
    display: none;
    color: var(--color-checks-line-timestamp-text)
}

.CheckStep-line .CheckStep-line-content {
    overflow-x: auto;
    white-space: pre-wrap
}

.CheckStep-line .CheckStep-line-content a {
    color: var(--color-checks-line-text);
    text-decoration: underline
}

.CheckStep-line:hover {
    color: var(--color-checks-text-primary);
    background-color: var(--color-checks-line-hover-bg)
}

.CheckStep-line.selected {
    color: var(--color-checks-text-primary);
    background-color: var(--color-checks-line-selected-bg) !important
}

.CheckStep-line.selected .CheckStep-line-number {
    color: var(--color-checks-line-selected-num-text);
    text-decoration: underline
}

.CheckStep-line .dt-fm {
    padding-top: 2px;
    padding-bottom: 1px;
    color: var(--color-checks-line-dt-fm-text) !important;
    background: var(--color-checks-line-dt-fm-bg);
    border-radius: 2px
}

.CheckStep-line .dt-fm.select {
    color: var(--color-fg-on-emphasis) !important;
    background: var(--color-accent-emphasis)
}

.CheckRun-line {
    color: var(--color-checks-line-text);
    background-color: var(--color-checks-line-selected-bg)
}

.CheckRun-line .CheckRun-line-timestamp {
    display: none;
    color: var(--color-checks-line-timestamp-text)
}

.CheckRun-line:hover {
    color: var(--color-checks-text-primary)
}

.CheckRun-show-timestamps .CheckStep-line-timestamp {
    display: inline
}

.Blocked-Check-Warning {
    padding-top: 1px;
    padding-bottom: 1px;
    margin-right: 24px;
    margin-left: 24px;
    background-color: var(--color-checks-gate-bg) !important
}

.Blocked-Check-Warning .Content-Text {
    color: var(--color-checks-gate-text)
}

.Blocked-Check-Warning .Blocked-Check-Text {
    color: var(--color-checks-gate-waiting-text)
}

.CheckStep {
    padding-right: 6px
}

.CheckStep .log-line-command {
    color: var(--color-checks-logline-command-text)
}

.CheckStep .log-line-command a {
    color: var(--color-checks-logline-command-text)
}

.CheckStep .log-line-command .CheckStep-line-number {
    color: var(--color-checks-logline-num-text)
}

.CheckStep .log-line-debug {
    color: var(--color-checks-logline-debug-text)
}

.CheckStep .log-line-debug a {
    color: var(--color-checks-logline-debug-text)
}

.CheckStep .log-line-debug .CheckStep-line-number {
    color: var(--color-checks-logline-num-text)
}

.CheckStep .log-download-error {
    margin-left: 8px;
    color: var(--color-checks-logline-error-text);
    background-color: var(--color-checks-logline-error-bg)
}

.CheckStep .log-line-error {
    background-color: var(--color-checks-logline-error-bg)
}

.CheckStep .log-line-error .CheckStep-line-content {
    color: var(--color-checks-logline-error-text)
}

.CheckStep .log-line-error .CheckStep-line-number {
    color: var(--color-checks-logline-error-num-text)
}

.CheckStep .log-line-info {
    font-weight: 600;
    color: var(--color-checks-logline-text)
}

.CheckStep .log-line-info a {
    color: var(--color-checks-logline-text)
}

.CheckStep .log-line-info .CheckStep-line-number {
    color: var(--color-checks-logline-num-text)
}

.CheckStep .log-line-verbose {
    font-weight: 600;
    color: var(--color-checks-logline-text)
}

.CheckStep .log-line-verbose a {
    color: var(--color-checks-logline-text)
}

.CheckStep .log-line-verbose .CheckStep-line-number {
    color: var(--color-checks-logline-num-text)
}

.CheckStep .log-line-warning {
    background-color: var(--color-checks-logline-warning-bg)
}

.CheckStep .log-line-warning .CheckStep-line-content {
    color: var(--color-checks-logline-warning-text)
}

.CheckStep .log-line-warning .CheckStep-line-number {
    color: var(--color-checks-logline-warning-num-text)
}

.CheckStep .log-line-notice a {
    color: var(--color-checks-logline-text)
}

.CheckStep .log-line-notice .CheckStep-line-number {
    color: var(--color-checks-logline-num-text)
}

.CheckStep .log-line-section {
    font-weight: 600;
    color: var(--color-checks-logline-section-text)
}

.CheckStep .log-line-section a {
    color: var(--color-checks-logline-section-text)
}

.CheckStep .log-line-section .CheckStep-line-number {
    color: var(--color-checks-logline-num-text)
}

.CheckStep .CheckStep-error-text {
    font-weight: 600;
    color: var(--color-checks-step-error-text)
}

.CheckStep .CheckStep-warning-text {
    font-weight: 600;
    color: var(--color-checks-step-warning-text)
}

.CheckStep .CheckStep-notice-text {
    font-weight: 600
}

.CheckStep a:hover {
    color: var(--color-checks-text-link) !important
}

.CheckStep .ansifg-b {
    color: var(--color-checks-ansi-black)
}

.CheckStep .ansifg-r {
    color: var(--color-checks-ansi-red)
}

.CheckStep .ansifg-g {
    color: var(--color-checks-ansi-green)
}

.CheckStep .ansifg-y {
    color: var(--color-checks-ansi-yellow)
}

.CheckStep .ansifg-bl {
    color: var(--color-checks-ansi-blue)
}

.CheckStep .ansifg-m {
    color: var(--color-checks-ansi-magenta)
}

.CheckStep .ansifg-c {
    color: var(--color-checks-ansi-cyan)
}

.CheckStep .ansifg-w {
    color: var(--color-checks-ansi-white)
}

.CheckStep .ansifg-gr {
    color: var(--color-checks-ansi-gray)
}

.CheckStep .ansifg-b-br {
    color: var(--color-checks-ansi-black-bright)
}

.CheckStep .ansifg-r-br {
    color: var(--color-checks-ansi-red-bright)
}

.CheckStep .ansifg-g-br {
    color: var(--color-checks-ansi-green-bright)
}

.CheckStep .ansifg-y-br {
    color: var(--color-checks-ansi-yellow-bright)
}

.CheckStep .ansifg-bl-br {
    color: var(--color-checks-ansi-blue-bright)
}

.CheckStep .ansifg-m-br {
    color: var(--color-checks-ansi-magenta-bright)
}

.CheckStep .ansifg-c-br {
    color: var(--color-checks-ansi-cyan-bright)
}

.CheckStep .ansifg-w-br {
    color: var(--color-checks-ansi-white-bright)
}

.CheckStep .ansibg-b {
    background-color: var(--color-checks-ansi-black)
}

.CheckStep .ansibg-r {
    background-color: var(--color-checks-ansi-red)
}

.CheckStep .ansibg-g {
    background-color: var(--color-checks-ansi-green)
}

.CheckStep .ansibg-y {
    background-color: var(--color-checks-ansi-yellow)
}

.CheckStep .ansibg-bl {
    background-color: var(--color-checks-ansi-blue)
}

.CheckStep .ansibg-m {
    background-color: var(--color-checks-ansi-magenta)
}

.CheckStep .ansibg-c {
    background-color: var(--color-checks-ansi-cyan)
}

.CheckStep .ansibg-w {
    background-color: var(--color-checks-ansi-white)
}

.CheckStep .ansibg-gr {
    background-color: var(--color-checks-ansi-gray)
}

.CheckStep .ansibg-b-br {
    background-color: var(--color-checks-ansi-black-bright)
}

.CheckStep .ansibg-r-br {
    background-color: var(--color-checks-ansi-red-bright)
}

.CheckStep .ansibg-g-br {
    background-color: var(--color-checks-ansi-green-bright)
}

.CheckStep .ansibg-y-br {
    background-color: var(--color-checks-ansi-yellow-bright)
}

.CheckStep .ansibg-bl-br {
    background-color: var(--color-checks-ansi-blue-bright)
}

.CheckStep .ansibg-m-br {
    background-color: var(--color-checks-ansi-magenta-bright)
}

.CheckStep .ansibg-c-br {
    background-color: var(--color-checks-ansi-cyan-bright)
}

.CheckStep .ansibg-w-br {
    background-color: var(--color-checks-ansi-white-bright)
}

.CheckStep .bright {
    filter: brightness(1.5)
}

.code-frequency .addition {
    fill: #2cbe4e;
    fill-opacity: 1
}

.code-frequency .deletion {
    fill: var(--color-danger-emphasis);
    fill-opacity: 1
}

.cadd {
    font-weight: 600;
    color: var(--color-success-fg)
}

.cdel {
    font-weight: 600;
    color: var(--color-danger-fg)
}

.code-list .file-box {
    border: 1px solid var(--color-border-default);
    border-radius: 6px
}

.code-list .title {
    min-height: 24px;
    margin: -3px 0 10px 38px;
    font-weight: 600;
    line-height: 1.2
}

.code-list .repo-specific .title,.code-list .repo-specific .full-path {
    margin-left: 0
}

.code-list .match-count,.code-list .updated-at {
    margin: 0;
    font-weight: 400
}

.code-list .language {
    float: right;
    margin-left: 10px;
    font-size: 12px;
    color: rgba(51,51,51,.75)
}

.code-list .avatar {
    float: left
}

.code-list .code-list-item+.code-list-item {
    border-top: 1px solid var(--color-border-muted)
}

.code-list .blob-num {
    padding: 0
}

.code-list .blob-num::before {
    content: normal
}

.code-list .blob-num a {
    padding: 0 10px;
    color: inherit
}

.code-list .blob-num a:hover {
    color: var(--color-accent-fg)
}

.code-list .blob-code {
    white-space: pre-wrap
}

.code-list .divider .blob-num,.code-list .divider .blob-code {
    padding-top: 0;
    padding-bottom: 0;
    cursor: default;
    background-color: var(--color-canvas-subtle)
}

.code-list .divider .blob-num {
    height: 18px;
    padding: 0 10px;
    line-height: 15px;
    background-color: var(--color-canvas-subtle)
}

.code-list .full-path {
    margin: 0 0 0 40px
}

.code-list .full-path .octicon-repo {
    color: var(--color-fg-muted)
}

.code-list .full-path .octicon-lock {
    color: var(--color-attention-fg)
}

.code-list .full-path a {
    color: var(--color-fg-muted)
}

.code-list-item-private .file-box {
    border: 1px solid var(--color-attention-muted)
}

.code-list-item-private .blob-num {
    background-color: var(--color-attention-subtle);
    border-right: 1px solid var(--color-attention-muted)
}

.code-list-item-private .blob-num a {
    color: var(--color-attention-fg)
}

.code-list-item-private .divider .blob-num,.code-list-item-private .divider .blob-code {
    color: var(--color-attention-fg);
    background-color: var(--color-attention-subtle)
}

.code-scanning-alert-warning-message {
    border-color: var(--color-attention-emphasis) !important
}

.code-scanning-font-size-inherit {
    font-size: inherit !important
}

.cs-message .md-list {
    padding-left: 2em
}

.codesearch-head.pagehead h1 {
    width: 250px;
    line-height: 33px
}

@media(min-width: 768px) {
    .advanced-search-form .flattened dt {
        width:230px
    }

    .advanced-search-form .flattened dt label {
        font-weight: 400
    }

    .advanced-search-form .flattened dd {
        margin-left: 250px
    }

    .advanced-search-form .form-checkbox {
        margin-left: 250px
    }
}

.codesearch-results .code-list .title a {
    word-wrap: break-word
}

.codesearch-results .repo-list-item {
    border-bottom: 0
}

.codesearch-results .repo-list-item+.repo-list-item {
    border-top: 1px solid var(--color-border-default)
}

.search-form-fluid .TableObject-item--primary {
    position: relative;
    padding-right: 8px
}

.search-form-fluid .completed-query {
    position: absolute;
    z-index: 1;
    padding: inherit;
    margin: 0;
    overflow: hidden;
    white-space: nowrap
}

.search-form-fluid .completed-query span {
    opacity: 0
}

.search-form-fluid .search-page-label {
    position: relative;
    display: block;
    font-weight: 400;
    cursor: text
}

.search-form-fluid .search-page-label.focus .completed-query {
    opacity: .6
}

.search-form-fluid .search-page-input {
    position: relative;
    z-index: 2;
    min-height: 0;
    padding: 0;
    margin: 0;
    background: none;
    border: 0;
    box-shadow: none
}

.search-form-fluid .search-page-input:focus {
    box-shadow: none
}

.topics-row-container {
    height: 30px;
    overflow: hidden
}

@media(max-width: 544px) {
    .codesearch-pagination-container a:not(.next_page):not(.previous_page),.codesearch-pagination-container .gap {
        display:none
    }

    .codesearch-pagination-container .previous_page,.codesearch-pagination-container .next_page {
        width: 100%
    }

    .codesearch-pagination-container .current {
        color: var(--color-fg-muted);
        background: var(--color-canvas-default);
        border-color: var(--color-border-default)
    }

    .codesearch-pagination-container .current::after {
        content: " of " attr(data-total-pages)
    }
}

.codespaces-list-box .Box-header:not(:first-child) {
    border-top-left-radius: 0;
    border-top-right-radius: 0
}

.codespaces-index-list-branch-link {
    background-color: var(--color-accent-subtle)
}

.disabled-sku {
    color: var(--color-fg-muted)
}

.cloud-panel .welcome-image {
    background: url("/images/modules/site/codespaces/dropdown-background-light.png");
    background-repeat: no-repeat;
    background-position: bottom center;
    background-size: contain
}

@media(prefers-color-scheme: light) {
    .cloud-panel .welcome-image {
        background:url("/images/modules/site/codespaces/dropdown-background-light.png");
        background-repeat: no-repeat;
        background-position: bottom center;
        background-size: contain
    }
}

@media(prefers-color-scheme: dark) {
    .cloud-panel .welcome-image {
        background:url("/images/modules/site/codespaces/dropdown-background-dark.png");
        background-repeat: no-repeat;
        background-position: bottom center;
        background-size: contain
    }
}

@media(prefers-color-scheme: no-preference) {
    .cloud-panel .welcome-image {
        background:url("/images/modules/site/codespaces/dropdown-background-light.png");
        background-repeat: no-repeat;
        background-position: bottom center;
        background-size: contain
    }
}

.commit-activity-graphs .dots {
    display: none
}

.commit-activity-master {
    margin-top: 20px
}

.is-graph-loading .commit-activity-master {
    display: none
}

rect {
    shape-rendering: crispedges
}

rect.max {
    fill: var(--color-attention-fg)
}

g.bar {
    fill: var(--color-success-fg)
}

g.mini {
    fill: var(--color-severe-fg)
}

g.active rect {
    fill: var(--color-danger-fg)
}

circle.focus {
    fill: var(--color-fg-muted)
}

.dot text {
    fill: var(--color-fg-muted);
    stroke: none
}

.CommunityTemplate-markdown {
    height: 800px;
    overflow-y: scroll;
    font-size: 14px
}

.CommunityTemplate-highlight {
    padding: 2px 4px;
    margin: 0;
    font-family: ui-monospace,SFMono-Regular,SF Mono,Menlo,Consolas,Liberation Mono,monospace;
    font-size: 12px;
    font-style: normal;
    font-weight: 600;
    color: var(--color-fg-default);
    cursor: pointer;
    background-color: var(--color-attention-emphasis);
    border-radius: 6px
}

.CommunityTemplate-highlight--focus {
    color: var(--color-fg-on-emphasis);
    background-color: var(--color-accent-emphasis)
}

.community-checklist .progress-bar {
    background: linear-gradient(to right, var(--color-attention-emphasis), #c5e300, var(--color-success-emphasis));
    background-color: transparent
}

.community-checklist .progress {
    float: right;
    background-color: var(--color-canvas-subtle)
}

.community-checklist .checklist-dot {
    color: var(--color-attention-fg)
}

body.full-width-p0 .container,body.full-width-p0 .container-lg {
    width: 100%;
    max-width: none;
    padding-right: 16px;
    padding-left: 16px
}

body.full-width-p0 .container-lg.new-discussion-timeline {
    padding-right: 0 !important;
    padding-left: 0 !important
}

.community-graph {
    width: 335px
}

@media(min-width: 544px) {
    .community-graph {
        width:428px
    }
}

.community-graph .tick-x line {
    stroke: var(--color-border-muted);
    stroke-dasharray: 5
}

.community-graph .tick-y line {
    stroke: var(--color-border-muted)
}

.community-graph .tick-labels-x .tick text {
    font-size: 12px;
    color: var(--color-fg-muted);
    transform: translateY(4px)
}

.community-graph .tick-labels-y .tick text {
    font-size: 12px;
    color: var(--color-fg-muted);
    transform: translateX(-4px)
}

.community-graph .domain {
    stroke: none
}

.community-graph .tick-y .tick:first-of-type line {
    stroke: var(--color-neutral-emphasis-plus)
}

.community-graph .tick-x .tick:first-of-type line {
    stroke: var(--color-neutral-emphasis-plus);
    stroke-dasharray: none
}

.community-graph .axis-label {
    font-size: 12px;
    font-weight: 500;
    fill: var(--color-fg-muted)
}

.community-graph .legend-text {
    font-size: 12px;
    fill: var(--color-fg-muted)
}

.community-graph .discussions-line {
    fill-opacity: 0;
    stroke: var(--color-success-fg);
    stroke-width: 3px;
    stroke-dasharray: 6 1
}

.community-graph circle.discussions-line {
    fill: var(--color-success-fg);
    fill-opacity: 0;
    stroke: none
}

.community-graph circle.discussions-line:hover {
    fill-opacity: 1
}

.community-graph .issues-line,.community-graph .contributors-line {
    fill-opacity: 0;
    stroke: var(--color-accent-fg);
    stroke-width: 3px
}

.community-graph circle.issues-line,.community-graph circle.contributors-line {
    fill: var(--color-accent-fg);
    fill-opacity: 0;
    stroke: none
}

.community-graph circle.issues-line:hover,.community-graph circle.contributors-line:hover {
    fill-opacity: 1
}

.community-graph .pull-requests-line {
    fill-opacity: 0;
    stroke: var(--color-done-fg);
    stroke-width: 3px;
    stroke-dasharray: 3
}

.community-graph circle.pull-requests-line {
    fill: var(--color-done-fg);
    fill-opacity: 0;
    stroke: none
}

.community-graph circle.pull-requests-line:hover {
    fill-opacity: 1
}

.community-graph .logged-in-views {
    fill: var(--color-accent-fg)
}

.community-graph .anonymous-views {
    fill: var(--color-severe-fg)
}

span.no-nl-marker {
    position: relative;
    color: var(--color-danger-fg);
    vertical-align: middle
}

.symlink .no-nl-marker {
    display: none
}

.contributions-setting-menu {
    z-index: 80;
    width: 330px
}

.ContributionCalendar.days-selected .ContributionCalendar-day {
    opacity: .5
}

.ContributionCalendar.days-selected .ContributionCalendar-day.active {
    opacity: 1
}

.ContributionCalendar-label {
    font-size: 9px;
    fill: var(--color-fg-default)
}

.ContributionCalendar-day,.ContributionCalendar-day[data-level="0"] {
    fill: var(--color-calendar-graph-day-bg);
    shape-rendering: geometricPrecision;
    outline: 1px solid var(--color-calendar-graph-day-border);
    outline-offset: -1px
}

.ContributionCalendar-day[data-level="1"] {
    fill: var(--color-calendar-graph-day-L1-bg);
    outline: 1px solid var(--color-calendar-graph-day-L1-border)
}

.ContributionCalendar-day[data-level="2"] {
    fill: var(--color-calendar-graph-day-L2-bg);
    outline: 1px solid var(--color-calendar-graph-day-L2-border)
}

.ContributionCalendar-day[data-level="3"] {
    fill: var(--color-calendar-graph-day-L3-bg);
    outline: 1px solid var(--color-calendar-graph-day-L3-border)
}

.ContributionCalendar-day[data-level="4"] {
    fill: var(--color-calendar-graph-day-L4-bg);
    outline: 1px solid var(--color-calendar-graph-day-L4-border)
}

.ContributionCalendar[data-holiday=halloween] .ContributionCalendar-day[data-level="1"] {
    fill: var(--color-calendar-halloween-graph-day-L1-bg)
}

.ContributionCalendar[data-holiday=halloween] .ContributionCalendar-day[data-level="2"] {
    fill: var(--color-calendar-halloween-graph-day-L2-bg)
}

.ContributionCalendar[data-holiday=halloween] .ContributionCalendar-day[data-level="3"] {
    fill: var(--color-calendar-halloween-graph-day-L3-bg)
}

.ContributionCalendar[data-holiday=halloween] .ContributionCalendar-day[data-level="4"] {
    fill: var(--color-calendar-halloween-graph-day-L4-bg)
}

.graph-before-activity-overview {
    border-top-left-radius: 6px;
    border-top-right-radius: 6px
}

.activity-overview-box {
    border-top-left-radius: 0;
    border-top-right-radius: 0
}

.contribution-activity .select-menu-button {
    position: relative;
    top: -4px
}

.contribution-activity.loading .contribution-activity-listing {
    display: none
}

.contribution-activity.loading .contribution-activity-show-more {
    display: none
}

.contribution-activity.loading .contribution-activity-spinner {
    display: block
}

.contribution-activity-spinner {
    display: none
}

li.contribution {
    padding: 10px 0;
    list-style: none
}

li.contribution h3 {
    display: inline-block;
    margin: 0;
    font-size: 14px
}

li.contribution .cmeta {
    display: block;
    font-size: 12px
}

li.contribution .d {
    color: var(--color-fg-default)
}

li.contribution .a {
    color: var(--color-fg-default)
}

li.contribution .num {
    color: var(--color-fg-muted)
}

.activity-overview-axis,.activity-overview-point {
    stroke: var(--color-calendar-graph-day-L4-bg)
}

.halloween-activity-overview .activity-overview-axis,.halloween-activity-overview .activity-overview-point {
    stroke: var(--color-calendar-halloween-graph-day-L4-bg)
}

.activity-overview-label {
    fill: var(--color-fg-muted)
}

.activity-overview-percentage {
    font-size: 10px;
    fill: var(--color-fg-muted)
}

.tint-box {
    position: relative;
    margin-bottom: 10px;
    background: var(--color-canvas-subtle);
    border-radius: 6px
}

.tint-box.transparent {
    background: var(--color-canvas-default)
}

.tint-box .activity {
    padding-top: 100px;
    margin-top: 0
}

.contrib-person path {
    fill: var(--color-severe-fg)
}

.contrib-person .midlabel {
    fill: var(--color-neutral-emphasis)
}

.coupons .setup-plans td img {
    margin-top: -2px;
    vertical-align: middle
}

.coupons .coupon-form-body {
    width: 270px;
    padding: 20px;
    margin: 100px auto 60px;
    font-size: 14px;
    text-align: center;
    background-color: var(--color-canvas-subtle);
    border: 1px solid var(--color-border-default);
    border-radius: 6px
}

.coupons .coupon-form-body .input-block {
    margin-bottom: 16px
}

.coupons .coupon-form-body .btn {
    display: block;
    width: 100%
}

.coupon-icon {
    width: 80px;
    height: 80px;
    margin: 0 auto 16px;
    color: var(--color-accent-fg);
    border: 1px solid var(--color-border-default);
    border-radius: 40px
}

.coupon-icon .octicon {
    margin-top: 16px;
    margin-right: 2px
}

.coupons-list-options .select-menu {
    display: inline-block;
    margin-right: 8px
}

.coupons-list-options .pagination {
    float: right;
    margin: 0
}

.user-repos .mini-repo-list-item {
    padding-right: 6px
}

.user-repos .mini-repo-list-item .repo-and-owner {
    max-width: 100%
}

.user-repos .mini-repo-list-item .owner {
    max-width: 145px
}

.repo-private-icon {
    fill: var(--color-attention-fg)
}

.dashboard-rollup-items>.dashboard-rollup-item {
    border-top: 1px solid var(--color-border-default)
}

@keyframes broadCastMaskFade {
    0% {
        opacity: 0
    }

    30% {
        opacity: 1
    }

    70% {
        opacity: 1
    }

    100% {
        opacity: 0
    }
}

.dashboard h1 {
    margin-bottom: .5em;
    font-size: 160%
}

.dashboard h1 a {
    font-size: 70%;
    font-weight: 400
}

.dashboard .notice {
    padding: 16px;
    margin-top: 0;
    margin-bottom: 0;
    text-align: center
}

.news-full,.page-profile .news {
    float: none;
    width: auto
}

.dashboard-break-word {
    -webkit-hyphens: auto;
    hyphens: auto;
    word-break: break-word
}

.news .bio g-emoji,.news .repo-description g-emoji {
    display: inline-block
}

.dashboard-underlined-link:hover,.dashboard-underlined-link:hover * {
    text-decoration: underline
}

.suggest-icon {
    width: 48px;
    height: 48px;
    padding: 4px
}

.suggest-icon svg,.suggest-icon path {
    fill: #fff
}

.suggest-icon svg::before,.suggest-icon path::before {
    bottom: -6px;
    left: -4px;
    background-color: #9e7bff
}

.suggest-icon svg::after,.suggest-icon path::after {
    top: -5px;
    right: -5px;
    width: 5px;
    height: 5px;
    background-color: #6c84e9
}

.suggest-icon .suggest-icon-bubble {
    position: absolute;
    width: 6px;
    height: 6px;
    background-color: #6c84e9;
    border-radius: 50%
}

.suggest-icon .suggest-icon-bubble:nth-of-type(2n) {
    width: 4px;
    height: 4px;
    background-color: #9e7bff
}

.suggest-icon .suggest-icon-bubble:nth-of-type(1) {
    bottom: -7px;
    left: -7px
}

.suggest-icon .suggest-icon-bubble:nth-of-type(2) {
    top: -4px;
    right: 4px
}

.suggest-icon .suggest-icon-bubble:nth-of-type(3) {
    top: -7px;
    right: -8px
}

.dashboard-notice {
    position: relative;
    padding: 15px 15px 15px 55px;
    margin-bottom: 20px;
    font-size: 14px;
    background-color: var(--color-canvas-subtle);
    border: 1px solid var(--color-border-default);
    border-radius: 6px
}

.dashboard-notice .dismiss {
    position: absolute;
    top: 10px;
    right: 10px;
    width: 16px;
    height: 16px;
    color: var(--color-fg-muted);
    cursor: pointer
}

.dashboard-notice .dismiss:hover {
    color: var(--color-fg-muted)
}

.dashboard-notice .notice-icon {
    position: absolute;
    top: 15px;
    left: 15px
}

.dashboard-notice .octicon-organization {
    color: var(--color-accent-fg)
}

.dashboard-notice h2 {
    margin-top: 9px;
    margin-bottom: 16px;
    font-size: 18px;
    font-weight: 400;
    color: var(--color-fg-default)
}

.dashboard-notice p.no-title {
    padding-right: 5px
}

.dashboard-notice ul {
    margin-left: 18px
}

.dashboard-notice li {
    padding-bottom: 15px
}

.dashboard-notice .coupon {
    padding: 10px;
    margin: 15px 0;
    font-size: 20px;
    font-weight: 600;
    text-align: center;
    background: var(--color-canvas-default);
    border: 1px dashed var(--color-border-default)
}

.dashboards-overview-lead {
    width: 700px
}

.dashboards-overview-cards .boxed-group {
    width: 100%;
    margin: 10px 0
}

.dashboards-overview-cards .boxed-group .graph-canvas path {
    stroke-opacity: .5
}

.dashboards-overview-cards .is-no-activity .blankslate {
    display: block
}

.dashboards-overview-cards .is-no-activity .dashboards-overview-graph {
    display: none
}

.dashboards-overview-cards .blankslate {
    display: none;
    padding-top: 47px;
    background-color: var(--color-canvas-default);
    border: 0;
    box-shadow: none
}

.dashboards-overview-cards .octicon-arrow-down,.dashboards-overview-cards .octicon-arrow-up {
    display: none
}

.dashboards-overview-cards .is-increase .octicon-arrow-up {
    display: inline-block
}

.dashboards-overview-cards .is-decrease .octicon-arrow-down {
    display: inline-block
}

.dashboards-overview-cards .octicon-arrow-down {
    color: var(--color-danger-fg)
}

.dashboards-overview-cards .octicon-arrow-up {
    color: #1db34f
}

.dashboards-overview-cards .graph-canvas .dots {
    padding: 43px 0
}

.dashboards-overview-cards .summary-stats {
    height: 78px
}

.dashboards-overview-cards .summary-stats .metric-0 {
    color: #1db34f
}

.dashboards-overview-cards .summary-stats .metric-1 {
    color: var(--color-accent-fg)
}

.dashboards-overview-cards .summary-stats .totals-num {
    margin: 0 7px
}

.dashboards-overview-cards .summary-stats .single {
    width: 100%
}

.dashboards-overview-cards .dashboards-overview-graph {
    height: 160px
}

.dashboards-overview-cards .dashboards-overview-graph path {
    fill: none;
    stroke-width: 2
}

.dashboards-overview-cards .dashboards-overview-graph path.metric-0 {
    stroke: #1db34f
}

.dashboards-overview-cards .dashboards-overview-graph path.metric-1 {
    stroke: #1d7fb3
}

.dashboards-overview-cards .dashboards-overview-graph .y line {
    stroke: #1db34f
}

.dashboards-overview-cards .dashboards-overview-graph .y.unique line {
    stroke: #1d7fb3
}

.dashboards-overview-cards .dashboards-overview-graph .overlay {
    fill-opacity: 0
}

.dashboards-overview-cards .metric-0 circle {
    fill: #1db34f;
    stroke: #fff;
    stroke-width: 2
}

.dashboards-overview-cards .dots.metric-1 circle {
    fill: #1d7fb3;
    stroke: #fff;
    stroke-width: 2
}

dl.form.developer-select-account {
    margin-top: 0
}

.developer-wrapper .setup-info-module .features-list {
    margin-left: 16px
}

.developer-wrapper .setup-info-module .features-list .octicon {
    margin-left: -17px
}

.developer-thanks h2 {
    font-size: 38px;
    font-weight: 400
}

.developer-thanks .hook {
    margin-top: 2px;
    margin-bottom: 30px;
    font-size: 18px;
    font-weight: 300;
    color: var(--color-fg-muted)
}

.developer-thanks-image {
    position: relative;
    bottom: -45px;
    float: left;
    width: 400px
}

.developer-thanks-section {
    margin: 130px 0 0 470px
}

.developer-next-steps {
    font-size: 18px;
    font-weight: 300;
    list-style: none
}

.developer-next-steps li {
    margin-top: 10px
}

.developer-next-steps li:first-child {
    margin-top: 0
}

.developer-next-steps .octicon {
    margin-right: 10px;
    color: var(--color-success-fg);
    vertical-align: middle
}

.file-diff-split[data-lock-side-selection=left] [data-split-side=right],.file-diff-split[data-lock-side-selection=right] [data-split-side=left] {
    -webkit-user-select: none;
    user-select: none
}

.invisible {
    position: absolute;
    opacity: 0
}

.timeline-comment.timeline-chosen-answer {
    border: 2px solid var(--color-success-emphasis)
}

.discussion-nested-comment-timeline-item::before {
    left: 25px
}

@media(min-width: 544px) {
    .discussion-nested-comment-timeline-item::before {
        left:30px
    }
}

.discussion-primer-next-nested-comment-timeline-item::before {
    left: 30px
}

.discussion-nested-comment-timeline-item:first-child::before {
    top: 16px
}

.discussion-nested-comment-group {
    margin-left: 32px
}

.discussion-nested-comment-paging-form::before {
    width: 0;
    background-color: transparent
}

.discussion-nested-comment-paging-badge .octicon {
    fill: var(--color-border-muted);
    transform: rotate(90deg)
}

.discussion-nested-comment-paging-form-body {
    margin-left: 24px
}

:target .discussion-nested-comment-group .timeline-comment {
    box-shadow: none
}

.discussion-nested-comment-timeline-item:target {
    box-shadow: var(--color-primer-shadow-focus)
}

:target .nested-discussion-timeline-comment {
    box-shadow: none
}

.inline-comment-form-container.open .discussion-nested-comment-inline-form .previewable-comment-form {
    display: block
}

.page-responsive .discussion-add-reaction-button {
    opacity: 1
}

.icon-discussion-answered {
    color: var(--color-success-fg)
}

.icon-discussion-answered,.icon-discussion-answered path {
    fill: var(--color-success-emphasis)
}

.icon-discussion-white {
    color: var(--color-discussions-state-answered-icon) !important
}

.icon-discussion-white,.icon-discussion-white path {
    fill: var(--color-discussions-state-answered-icon) !important
}

.icon-discussion-gray {
    color: var(--color-fg-default)
}

.icon-discussion-gray,.icon-discussion-gray path {
    fill: var(--color-fg-default)
}

.is-comment-editing .discussion-comment .previewable-comment-form {
    display: none
}

.is-comment-editing .discussion-comment .timeline-comment-actions,.is-comment-editing .discussion-comment .edit-comment-hide {
    display: block
}

.discussion-comment .previewable-edit.is-comment-editing .timeline-comment-header {
    display: flex !important
}

.discussion-timeline-item::before {
    display: none
}

.discussion-event-timeline-item::before {
    left: -6px
}

.discussion-event-wrapper:last-child .discussion-event-timeline-item {
    padding-bottom: 0 !important
}

.discussion-event-wrapper:last-child .discussion-event-timeline-item::before {
    display: none
}

.bg-discussions-row-emoji-box {
    width: 42px !important;
    height: 42px !important;
    background: var(--color-bg-discussions-row-emoji-box)
}

.bg-discussions-row-emoji-box-small {
    width: 30px !important;
    height: 30px !important;
    background: var(--color-bg-discussions-row-emoji-box)
}

.discussions-emoji-box {
    font-size: 14px !important;
    line-height: 14px !important;
    vertical-align: 0 !important;
    cursor: default
}

@media(min-width: 768px) {
    .discussions-emoji-box {
        font-size:16px !important;
        line-height: 16px !important;
        vertical-align: 0 !important
    }
}

.discussion-vote-form .slidey-boi {
    transition: .4s ease-in-out;
    transform: perspective(1px) translateY(0%)
}

.discussion-vote-form.is-upvoted .slidey-boi {
    transform: perspective(1px) translateY(-50%)
}

.sidebar-emoji-box {
    width: auto !important;
    height: auto !important
}

.errored .discussion-category-picker {
    border-color: var(--color-danger-emphasis)
}

.comment-body div[type=discussions-op-text] {
    padding: 8px;
    border: 1px solid var(--color-border-muted) !important;
    border-radius: 6px
}

.comment-body div[type=discussions-op-text] p {
    margin-bottom: 0
}

.discussion-Link--primary:visited {
    color: var(--color-fg-muted) !important
}

.label-select-menu .color {
    display: inline-block;
    width: 14px;
    height: 14px;
    margin-top: -1px;
    margin-right: 2px;
    vertical-align: middle;
    border-radius: 7px
}

.label-select-menu .select-menu-item:hover,.label-select-menu .select-menu-item:focus,.label-select-menu .select-menu-item[aria-checked=true]:hover,.label-select-menu .select-menu-item[aria-checked=true]:focus {
    color: inherit;
    background-color: var(--color-neutral-subtle)
}

.label-select-menu .select-menu-item-icon,.label-select-menu .label-options-icon {
    color: inherit !important
}

.user-has-reacted .octicon {
    fill: var(--color-accent-fg)
}

.discussion-footer-answer-icon {
    width: 26px;
    height: 26px
}

.discussion-footer-answer-button {
    padding: 0 10px !important;
    line-height: inherit
}

.discussion-footer-answered-badge {
    padding: 0 10px 0 6px !important;
    line-height: inherit
}

.discussion-spotlights-sortable>.discussions-spotlight-wrapper:first-child {
    padding-left: 0 !important
}

.discussion-spotlights-sortable .sortable-drag {
    padding: 0 !important;
    background-color: transparent
}

.discussion-spotlight-modal {
    width: 560px;
    overflow-y: auto
}

.discussion-spotlight-pattern-container {
    mix-blend-mode: soft-light;
    background-position: 20px 20px;
    background-size: 35px;
    opacity: .5
}

.discussion-spotlight-pattern-zap {
    background-image: url("/static/images/icons/spotlight/zap-pattern.svg")
}

.discussion-spotlight-pattern-chevron-up {
    background-image: url("/static/images/icons/spotlight/chevron-up-pattern.svg")
}

.discussion-spotlight-pattern-dot-fill {
    background-image: url("/static/images/icons/spotlight/dot-fill-pattern.svg")
}

.discussion-spotlight-pattern-dot {
    background-image: url("/static/images/icons/spotlight/dot-pattern.svg")
}

.discussion-spotlight-pattern-heart-fill {
    background-image: url("/static/images/icons/spotlight/heart-fill-pattern.svg")
}

.discussion-spotlight-pattern-plus {
    background-image: url("/static/images/icons/spotlight/plus-pattern.svg")
}

.discussion-spotlight {
    height: 188px;
    flex: 1 1 auto;
    overflow: hidden
}

.discussion-spotlight-preview {
    height: 160px
}

.discussion-spotlight-gradient {
    width: 35px;
    height: 35px
}

.discussion-spotlight-gradient .discussion-spotlight-gradient-selected-indicator {
    display: none
}

.discussion-spotlight-gradient[aria-selected=true] {
    box-shadow: inset 0 1px 2px rgba(27,31,35,.075),0 0 0 .2em rgba(3,102,214,.3)
}

.discussion-spotlight-gradient[aria-selected=true] .discussion-spotlight-gradient-selected-indicator {
    display: inline-block
}

.discussion-spotlight-emoji {
    top: calc(35% - 35px);
    left: calc(50% - 48px);
    width: 96px;
    height: 96px;
    font-size: 96px;
    text-shadow: 0 3px 14px rgba(0,0,0,.3)
}

.discussion-spotlight-details {
    pointer-events: none
}

.discussion-spotlight-details>* {
    pointer-events: auto
}

.discussion-spotlight-handle {
    cursor: pointer;
    background: var(--color-primer-canvas-backdrop)
}

.donut-chart>.error,.donut-chart>.cancelled,.donut-chart>.action_required,.donut-chart>.timed_out,.donut-chart>.failure {
    fill: var(--color-checks-donut-error)
}

.donut-chart>.expected,.donut-chart>.queued,.donut-chart>.in_progress,.donut-chart>.waiting,.donut-chart>.requested,.donut-chart>.pending {
    fill: var(--color-checks-donut-pending)
}

.donut-chart>.success {
    fill: var(--color-checks-donut-success)
}

.donut-chart>.neutral,.donut-chart>.stale,.donut-chart>.skipped {
    fill: var(--color-checks-donut-neutral)
}

.survey-question-form .other-text-form,.survey-question-form .other-text-form-block {
    display: none;
    margin-top: 0
}

.survey-question-form.is-other-selected .other-text-form {
    display: inline-block
}

.survey-question-form.is-other-selected .other-text-form-block {
    display: block
}

.ghe-license-status {
    padding: 40px 0;
    font-size: 16px;
    text-align: center
}

.ghe-license-status .octocat {
    width: 225px;
    margin-bottom: 20px
}

.ghe-license-status h1 {
    margin-bottom: 10px
}

.ghe-license-status p {
    margin-bottom: 5px;
    color: var(--color-fg-muted)
}

.ghe-license-expiry-icon {
    margin: 5px 10px 0 0;
    color: var(--color-attention-fg)
}

.feature-preview-dialog {
    width: 90vw;
    max-width: 880px;
    height: 60vh;
    min-height: 240px;
    max-height: 700px
}

.feature-preview-dialog .feature-preview-info {
    height: 60vh;
    min-height: calc(240px - 57px);
    max-height: calc(100% - 57px)
}

.file {
    position: relative;
    margin-top: 16px;
    margin-bottom: 16px;
    border: 1px solid var(--color-border-default, #ddd);
    border-radius: 6px
}

.file .drag-and-drop {
    border: 0;
    border-top: 1px dashed var(--color-border-default)
}

.file:target {
    border-color: var(--color-accent-emphasis);
    box-shadow: var(--color-primer-shadow-focus)
}

.file .data.empty {
    padding: 5px 10px;
    color: var(--color-fg-muted)
}

.file:not(.open) .file-header.file-header--expandable {
    border-bottom: 0;
    border-radius: 6px
}

.file .data.suppressed,.file.open .image {
    display: none
}

.file.open .data.suppressed {
    display: block
}

.file .image {
    position: relative;
    padding: 30px;
    text-align: center;
    background-color: #ddd
}

.file .image table {
    margin: 0 auto
}

.file .image td {
    padding: 0 5px;
    color: var(--color-fg-muted);
    text-align: center;
    vertical-align: top
}

.file .image td img {
    max-width: 100%
}

.file .image .border-wrap {
    position: relative;
    display: inline-block;
    line-height: 0;
    background-color: var(--color-canvas-default);
    border: 1px solid var(--color-border-default)
}

.file .image a {
    display: inline-block;
    line-height: 0
}

.file .image img,.file .image canvas {
    max-width: 600px;
    background: url("/images/modules/commit/trans_bg.gif") right bottom #eee;
    border: 1px solid #fff
}

.file .image .view img,.file .image .view canvas {
    position: relative;
    top: 0;
    right: 0;
    max-width: inherit;
    background: url("/images/modules/commit/trans_bg.gif") right bottom #eee
}

.file .image .view>span {
    vertical-align: middle
}

.file .empty {
    background: none
}

.file-sidebar-container .file {
    border-top-right-radius: 0;
    border-bottom-right-radius: 0
}

.file-header {
    padding: 5px 10px;
    background-color: var(--color-canvas-subtle);
    border-bottom: 1px solid var(--color-border-default);
    border-top-left-radius: 6px;
    border-top-right-radius: 6px
}

.file-header::before {
    display: table;
    content: ""
}

.file-header::after {
    display: table;
    clear: both;
    content: ""
}

.file-actions {
    float: right;
    padding-top: 2px;
    font-size: 13px
}

.file-actions select {
    margin-left: 5px
}

.file-info {
    font-family: ui-monospace,SFMono-Regular,SF Mono,Menlo,Consolas,Liberation Mono,monospace;
    font-size: 12px;
    line-height: 32px
}

.file-info .octicon {
    vertical-align: text-bottom
}

.sticky-file-header {
    position: sticky;
    top: 60px;
    z-index: 6
}

.sticky-file-header.has-open-dropdown {
    z-index: 10
}

.file-info-divider {
    display: inline-block;
    width: 1px;
    height: 18px;
    margin-right: 3px;
    margin-left: 3px;
    vertical-align: middle;
    border-left: 1px solid var(--color-border-default)
}

.file-mode {
    text-transform: capitalize
}

.file-blankslate {
    border: 0;
    border-radius: 0 0 6px 6px
}

.diff-progressive-loader {
    min-height: 150px
}

.load-diff-button,.load-diff-retry {
    z-index: 1;
    min-height: 32px
}

.diff-placeholder-svg {
    clip: rect(1px, 1px, 1px, 1px);
    -webkit-clip-path: inset(50%);
    clip-path: inset(50%)
}

.hidden-diff-reason {
    z-index: 2
}

.ghae-bootstrap-container {
    min-height: calc(100vh - 54px)
}

.ghae-bootstrap-incomplete-step {
    color: var(--color-fg-muted);
    background-color: var(--color-canvas-subtle)
}

.ghae-bootstrap-complete-step {
    color: var(--color-fg-on-emphasis);
    background-color: var(--color-success-emphasis)
}

.ghae-enterprise-name-form-error {
    left: 50%;
    transform: translateX(-50%)
}

.graphs h2.ghead::after {
    display: block;
    height: 0;
    clear: both;
    visibility: hidden;
    content: "."
}

.graphs.wheader h2 {
    padding: 1px
}

.graphs .area {
    fill: var(--color-success-emphasis);
    fill-opacity: .5
}

.graphs .path {
    fill: none;
    stroke: var(--color-success-emphasis);
    stroke-opacity: 1;
    stroke-width: 2px
}

.graphs .dot {
    fill: var(--color-success-emphasis);
    stroke: #1e7e34;
    stroke-width: 2px
}

.graphs .dot.padded {
    stroke: var(--color-canvas-default);
    stroke-width: 1px
}

.graphs .dot.padded circle:hover {
    fill: var(--color-accent-emphasis)
}

.graphs .d3-tip {
    fill: var(--color-neutral-emphasis)
}

.graphs .d3-tip text {
    font-size: 11px;
    fill: var(--color-canvas-default)
}

.graphs .dir {
    float: right;
    padding-top: 5px;
    font-size: 12px;
    font-weight: 400;
    line-height: 100%;
    color: var(--color-fg-muted)
}

.graphs .selection .overlay {
    visibility: none
}

.graphs .selection .selection {
    fill: var(--color-neutral-emphasis);
    fill-opacity: .1;
    stroke: var(--color-fg-default);
    stroke-dasharray: 3 3;
    stroke-opacity: .4;
    stroke-width: 1px;
    shape-rendering: crispedges
}

.graph-filter h3 {
    display: inline-block;
    font-size: 24px;
    font-weight: 300
}

.graph-filter .info {
    margin-bottom: 20px;
    color: var(--color-fg-muted)
}

.graph-canvas .activity {
    width: 400px;
    padding: 10px;
    margin: 100px auto 0;
    color: var(--color-fg-default);
    text-align: center;
    border-radius: 6px
}

.graph-canvas .dots {
    margin: 0 auto
}

.graph-canvas>.activity {
    display: none
}

.graph-canvas .axis {
    font-size: 10px
}

.graph-canvas .axis line {
    stroke: var(--color-border-default);
    shape-rendering: crispedges
}

.graph-canvas .axis text {
    fill: var(--color-fg-muted)
}

.graph-canvas .axis path {
    display: none
}

.graph-canvas .axis .zero line {
    stroke: var(--color-accent-emphasis);
    stroke-dasharray: 3 3;
    stroke-width: 1.5
}

.graph-canvas text.axis {
    fill: var(--color-fg-muted)
}

.graph-canvas .graph-loading,.graph-canvas .graph-error,.graph-canvas .graph-no-usable-data,.graph-canvas .graph-empty {
    display: none
}

.graph-canvas.is-graph-loading>.activity,.graph-canvas.is-graph-without-usable-data>.activity,.graph-canvas.is-graph-empty>.activity {
    display: block
}

.graph-canvas.is-graph-loading .graph-loading,.graph-canvas.is-graph-empty .graph-empty,.graph-canvas.is-graph-without-usable-data .graph-no-usable-data,.graph-canvas.is-graph-load-error .graph-error {
    display: block
}

.svg-tip {
    position: absolute;
    z-index: 99999;
    padding: 8px 16px;
    font-size: 12px;
    color: var(--color-fg-on-emphasis);
    text-align: center;
    background: var(--color-neutral-emphasis-plus);
    border-radius: 6px
}

.svg-tip.is-visible {
    display: block
}

.svg-tip::after {
    position: absolute;
    bottom: -10px;
    left: 50%;
    width: 5px;
    height: 5px;
    box-sizing: border-box;
    margin: 0 0 0 -5px;
    content: " ";
    border: 5px solid transparent;
    border-top-color: var(--color-neutral-emphasis-plus)
}

.svg-tip.left::after {
    left: 10%
}

.svg-tip.right::after {
    left: 90%
}

.svg-tip.comparison {
    padding: 0;
    text-align: left;
    pointer-events: none
}

.svg-tip.comparison .title {
    display: block;
    padding: 8px;
    margin: 0;
    font-weight: 600;
    line-height: 1;
    pointer-events: none
}

.svg-tip.comparison ul {
    padding: 4px 8px 8px 8px;
    margin: 0;
    white-space: nowrap;
    list-style: none
}

.svg-tip.comparison li {
    display: inline-block;
    padding-top: 16px
}

.svg-tip.comparison .metric-0,.svg-tip.comparison .metric-1 {
    position: relative
}

.svg-tip.comparison .metric-0::before,.svg-tip.comparison .metric-1::before {
    position: absolute;
    top: 0;
    right: 0;
    left: 0;
    height: 4px;
    content: "";
    border: 1px solid var(--color-border-default);
    border-radius: 6px
}

.svg-tip.comparison .metric-0::before {
    background-color: var(--color-success-emphasis)
}

.svg-tip.comparison .metric-1::before {
    background-color: var(--color-accent-emphasis)
}

.svg-tip-one-line {
    white-space: nowrap
}

.LoadingDependencies {
    position: absolute;
    left: 0;
    width: 100%;
    animation: fadeOut;
    animation-duration: .6s;
    animation-fill-mode: forwards;
    animation-timing-function: ease-in
}

.LoadingDependencies--loading {
    position: relative
}

.LoadingDependencies--loading .octicon {
    opacity: 0;
    animation: dropBox;
    animation-duration: 1.25s;
    animation-fill-mode: forwards;
    animation-timing-function: linear;
    animation-delay: 1s;
    animation-iteration-count: infinite
}

.LoadingDependencies--loading .octicon:nth-child(2) {
    position: absolute;
    left: calc(50% - 27px);
    animation-delay: 1.61s
}

@keyframes fadeOut {
    0% {
        opacity: 1
    }

    100% {
        opacity: 0
    }
}

@keyframes dropBox {
    0% {
        opacity: 1;
        transform: translateY(-110%)
    }

    7% {
        opacity: 1;
        transform: translateY(20%);
        transform: translateX(0)
    }

    80% {
        opacity: 1
    }

    100% {
        opacity: 0;
        transform: translateX(-250%)
    }
}

.team-breadcrumb .team-breadcrumb-item {
    display: inline-block
}

.team-breadcrumb .team-breadcrumb-item::after {
    padding-right: .5em;
    padding-left: .5em;
    color: var(--color-neutral-muted);
    content: "/"
}

.team-breadcrumb .team-breadcrumb-item-selected::after {
    content: none
}

.team-discussions-container {
    min-height: 100vh
}

.team-left-column {
    max-width: 100%
}

@media(min-width: 768px) {
    .team-left-column {
        max-width:350px
    }
}

.team-left-column .team-avatar {
    width: 80px;
    height: 80px
}

@media(min-width: 768px) {
    .team-left-column .team-avatar {
        width:140px;
        height: 140px
    }
}

.team-discussions {
    max-width: 768px
}

.team-discussions .previewable-comment-form .comment {
    border: 0
}

.team-discussions .previewable-comment-form .toolbar-commenting.toolbar-commenting.toolbar-commenting {
    background: transparent
}

.team-discussions .previewable-comment-form .tabnav-tab.selected {
    background-color: var(--color-canvas-default)
}

.discussion-post {
    opacity: 1;
    transition: opacity 400ms
}

.discussion-post .timeline-comment::after,.discussion-post .timeline-comment::before {
    display: none
}

.discussion-post .post-author {
    margin-top: -6px
}

.discussion-post .post-author-timestamp {
    margin-top: -3px
}

.discussion-post.fade-out {
    opacity: 0
}

.discussion-post .timeline-inline-comments {
    background: var(--color-canvas-subtle)
}

.discussion-post .team-discussion-timeline::before {
    bottom: 20px
}

.discussion-post .reply-comment:first-child {
    border-top: 1px solid var(--color-border-default)
}

.discussion-post .reply-comment:first-child .review-comment {
    padding-top: 16px
}

.discussion-post .reply-comment .review-comment {
    padding: 8px 16px
}

.discussion-post .reply-comment .review-comment.is-comment-editing {
    padding: 0;
    background: var(--color-canvas-subtle)
}

.discussion-post .comment .comment-reactions {
    margin-left: 16px;
    border-top: 0 !important
}

.discussion-post .comment .reaction-summary-item {
    margin-bottom: 16px
}

.discussion-post .reaction-summary-item:not(.add-reaction-btn) {
    padding: 0 8px;
    font-size: 12px;
    line-height: 26px;
    border: 1px solid var(--color-border-default, #d2dff0);
    border-radius: 6px
}

.discussion-post .reaction-summary-item:not(.add-reaction-btn) .emoji {
    font-size: 16px;
    vertical-align: sub
}

.discussion-post .reaction-summary-item:not(.add-reaction-btn)+.reaction-summary-item {
    margin-left: 8px
}

.discussion-post .reply-comments-holder {
    position: relative
}

.discussion-post .reply-comments-holder::before {
    position: absolute;
    top: 51px;
    bottom: 0;
    left: 29px;
    width: 2px;
    content: "";
    background-color: var(--color-border-muted)
}

.discussion-post .add-reaction-btn {
    padding: 4px 10px
}

.discussion-post .pin-btn:disabled {
    pointer-events: none
}

.discussion-post .pinned {
    color: var(--color-severe-fg);
    opacity: 1
}

.discussion-post .loading-spinner {
    display: none;
    float: left;
    margin-top: 12px
}

.discussion-post .loading .loading-spinner {
    display: block
}

.discussion-post~.blankslate {
    display: none
}

.team-discussion-new-post .review-thread-reply-button:disabled {
    cursor: inherit;
    background-color: var(--color-canvas-subtle);
    border: 0;
    box-shadow: none
}

.team-project-suggestion-number {
    font-weight: 300;
    color: #a3aab1
}

.team-discussion-nav-disabled {
    pointer-events: none
}

.team-group-mapping-search-results .select-menu-loading {
    display: inherit
}

.team-group-mapping-search-results .select-menu-error {
    display: none
}

.team-group-mapping-search-results.is-error .select-menu-loading {
    display: none
}

.team-group-mapping-search-results.is-error .select-menu-error {
    display: inherit
}

.external-group-search-results .select-menu-loading {
    display: inherit
}

.external-group-search-results .select-menu-error {
    display: none
}

.external-group-search-results.is-error .select-menu-loading {
    display: none
}

.external-group-search-results.is-error .select-menu-error {
    display: inherit
}

.review_assignment_toggler>.assignment_form {
    display: none
}

.review_assignment_toggler.on>.assignment_form {
    display: block
}

.team-member-exclusion-toggler>.member-exclusion {
    display: none
}

.team-member-exclusion-toggler.on>.member-exclusion {
    display: block
}

.hooks-listing .boxed-group-action.select-menu {
    z-index: auto
}

.hooks-listing .boxed-group-inner {
    padding: 0 10px;
    margin-bottom: 10px
}

.hook-item a:hover {
    text-decoration: none
}

.hook-item .item-status {
    float: left;
    width: 16px;
    margin-right: 8px;
    text-align: center
}

.hook-item .description {
    color: var(--color-fg-muted)
}

.hook-item .description .css-truncate-target {
    max-width: 160px
}

.hook-item .icon-for-success,.hook-item .icon-for-failure,.hook-item .icon-for-pending,.hook-item .icon-for-inactive {
    display: none
}

.hook-item.success .icon-for-success {
    display: inline-block;
    color: var(--color-success-fg)
}

.hook-item.failure .icon-for-failure {
    display: inline-block;
    color: var(--color-danger-fg)
}

.hook-item.pending .icon-for-pending {
    display: inline-block;
    color: var(--color-fg-muted)
}

.hook-item.inactive .icon-for-inactive {
    display: inline-block;
    color: var(--color-fg-muted)
}

.hook-item .icon-for-enabled,.hook-item .icon-for-disabled {
    display: none
}

.hook-item.enabled .icon-for-enabled {
    display: inline-block;
    color: var(--color-success-fg)
}

.hook-item.disabled .icon-for-disabled {
    display: inline-block;
    color: var(--color-fg-muted)
}

.hook-item .hook-error-message {
    margin-left: 24px;
    color: var(--color-danger-fg)
}

.hook-url.css-truncate-target {
    max-width: 360px
}

.hook-events-field .hook-event-selector {
    display: none
}

.hook-events-field.is-custom .hook-event-selector {
    display: block
}

.hook-event-selector {
    margin-left: 10px
}

.hook-event {
    display: inline-block;
    width: 310px;
    padding: 5px 0 5px 30px;
    margin: 0
}

.hook-event p {
    font-weight: 400
}

.hook-event-choice {
    font-weight: 400
}

.hooks-oap-warning {
    margin-top: 0
}

.hooks-oap-warning ul {
    margin: 10px 0
}

.hooks-oap-warning ul li {
    margin-left: 16px
}

.hook-deliveries-list .spinner {
    display: inline-block;
    margin: 0;
    vertical-align: top
}

.hook-deliveries-list .hook-delivery-item:hover {
    background-color: transparent
}

.hook-deliveries-list .item-status {
    display: inline-block;
    width: 16px;
    margin-right: 5px;
    text-align: center
}

.hook-deliveries-list .item-status .icon-for-success,.hook-deliveries-list .item-status .icon-for-failure,.hook-deliveries-list .item-status .icon-for-pending {
    display: none
}

.hook-deliveries-list .item-status.success {
    color: var(--color-success-fg);
    visibility: visible
}

.hook-deliveries-list .item-status.success .icon-for-success {
    display: inline-block
}

.hook-deliveries-list .item-status.failure {
    color: var(--color-danger-fg)
}

.hook-deliveries-list .item-status.failure .icon-for-failure {
    display: inline-block
}

.hook-deliveries-list .item-status.pending {
    color: var(--color-fg-muted)
}

.hook-deliveries-list .item-status.pending .icon-for-pending {
    display: inline-block
}

.boxed-group-list li.hook-delivery-item {
    padding: 10px
}

.hook-delivery-time {
    float: right;
    margin-right: 10px;
    font-size: 10px;
    color: var(--color-fg-muted)
}

.hook-delivery-guid {
    display: inline-block;
    padding: 2px 6px;
    font-family: ui-monospace,SFMono-Regular,SF Mono,Menlo,Consolas,Liberation Mono,monospace;
    font-size: 12px;
    color: var(--color-fg-muted);
    background-color: var(--color-accent-subtle);
    border-radius: 6px
}

.hook-delivery-guid .octicon {
    margin: 1px -2px 0 0;
    color: var(--color-fg-muted)
}

.hook-delivery-actions {
    padding-top: 1px
}

.boxed-group-list>li.hook-delivery-item .btn-sm {
    margin: 0
}

.hook-delivery-container hr {
    margin: 10px 0
}

.hook-delivery-container pre {
    padding: 7px 12px;
    margin: 10px 0;
    overflow: auto;
    font-size: 13px;
    line-height: 1.5;
    background-color: var(--color-canvas-subtle);
    border: 1px solid var(--color-border-default);
    border-radius: 6px
}

.hook-delivery-container .tabnav {
    margin: 10px 0
}

.hook-delivery-container h4.remote-call-header {
    margin: 20px 0 10px;
    border-bottom: 1px solid var(--color-border-default)
}

.hook-delivery-response-status {
    display: inline-block;
    padding: 4px 6px 3px;
    margin-left: 4px;
    font-family: ui-monospace,SFMono-Regular,SF Mono,Menlo,Consolas,Liberation Mono,monospace;
    font-size: 10px;
    line-height: 1.1;
    color: var(--color-fg-on-emphasis);
    background-color: var(--color-danger-emphasis);
    border: 1px solid transparent;
    border-radius: 6px
}

.hook-delivery-response-status[data-response-status^="2"] {
    background-color: var(--color-success-emphasis)
}

.redelivery-dialog .pending-message {
    display: block
}

.redelivery-dialog .failure-message {
    display: none
}

.redelivery-dialog.failed {
    color: var(--color-danger-fg);
    background-color: var(--color-danger-subtle);
    border-color: var(--color-danger-emphasis)
}

.redelivery-dialog.failed .pending-message {
    display: none
}

.redelivery-dialog.failed .failure-message {
    display: block
}

.item-name {
    float: left;
    font-weight: 600
}

.hovercard-icon {
    width: 16px
}

.integration-meta-head {
    font-size: 16px;
    color: var(--color-fg-muted)
}

.integrations-select-repos {
    max-height: 138px;
    overflow-y: scroll;
    border-radius: 6px
}

.integrations-select-repos .mini-repo-list-item {
    padding: 8px 64px 8px 30px
}

.integrations-select-repos .mini-repo-list-item:hover .repo,.integrations-select-repos .mini-repo-list-item:hover .owner {
    text-decoration: none
}

.integrations-select-repos .mini-repo-list-item .css-truncate-target {
    max-width: 345px
}

.integrations-select-repos::-webkit-scrollbar {
    width: 10px
}

.integrations-select-repos::-webkit-scrollbar-thumb {
    background-color: rgba(0,0,0,.5);
    border: solid var(--color-canvas-default) 2px;
    border-radius: 6px;
    box-shadow: 0 0 1px rgba(255,255,255,.5)
}

.integrations-select-repos::-webkit-scrollbar-track-piece {
    background: transparent
}

.integrations-repository-picker {
    width: 440px
}

.target-avatar {
    position: relative;
    top: -2px
}

.issue-list-item+.issue-list-item {
    border-top: solid 1px var(--color-border-muted)
}

.pinned-issue-item .pinned-issue-handle {
    cursor: grab
}

.pinned-issue-item.is-dragging,.pinned-issue-item.is-dragging .pinned-issue-handle {
    cursor: grabbing
}

.pinned-issue-item.is-dragging {
    background-color: var(--color-accent-subtle)
}

.pinned-issue-item.sortable-ghost {
    background-color: var(--color-accent-subtle);
    opacity: 0
}

.issues-reset-query-wrapper {
    margin-bottom: 20px
}

.label-link:hover {
    text-decoration: none
}

.issues-reset-query {
    font-weight: 600;
    color: var(--color-fg-muted)
}

.issues-reset-query:hover {
    color: var(--color-accent-fg);
    text-decoration: none
}

.issues-reset-query:hover .issues-reset-query-icon {
    background-color: var(--color-accent-emphasis)
}

.issues-reset-query-icon {
    width: 18px;
    height: 18px;
    padding: 1px;
    margin-right: 3px;
    color: var(--color-fg-on-emphasis);
    text-align: center;
    background-color: var(--color-neutral-emphasis);
    border-radius: 6px
}

.table-list-milestones .stats {
    gap: 0 15px
}

.table-list-milestones .table-list-cell {
    padding: 15px 20px
}

.table-list-milestones .stat {
    display: inline-block;
    font-size: 14px;
    font-weight: 600;
    line-height: 1.2;
    color: var(--color-fg-muted);
    white-space: nowrap
}

.table-list-milestones .stat a {
    color: inherit
}

.table-list-milestones .stat-label {
    font-weight: 400;
    color: var(--color-fg-muted)
}

.milestone-title {
    width: 500px
}

.milestone-title-link {
    margin-top: 0;
    margin-bottom: 5px;
    font-size: 24px;
    font-weight: 400;
    line-height: 1.2
}

.milestone-title-link a {
    color: var(--color-fg-default, #333)
}

.milestone-title-link a:hover {
    color: var(--color-accent-fg)
}

.milestone-progress {
    width: auto;
    max-width: 420px
}

.milestone-progress .progress-bar {
    margin-top: 7px;
    margin-bottom: 12px
}

.milestone-meta {
    font-size: 14px
}

.milestone-meta-item {
    display: inline-block;
    margin-right: 10px
}

.milestone-meta-item .octicon {
    width: 16px;
    text-align: center
}

.milestone-description-html {
    display: none
}

.milestone-description {
    margin-top: 5px
}

.milestone-description .expand-more {
    color: var(--color-accent-fg);
    cursor: pointer
}

.milestone-description .expand-more:hover {
    text-decoration: underline
}

.milestone-description.open .milestone-description-plaintext {
    display: none
}

.milestone-description.open .milestone-description-html {
    display: block
}

.milestones-flexbox-gap {
    gap: 10px
}

.issue-reorder-warning {
    z-index: 110
}

.task-progress {
    color: var(--color-fg-muted);
    text-decoration: none;
    vertical-align: top
}

.task-progress .octicon {
    margin-right: 5px;
    color: var(--color-fg-muted, #999);
    vertical-align: bottom
}

.task-progress .progress-bar {
    display: inline-block;
    width: 80px;
    height: 5px;
    vertical-align: 2px;
    background-color: var(--color-neutral-muted)
}

.task-progress .progress-bar .progress {
    background-color: var(--color-border-default)
}

.task-progress-counts {
    display: inline-block;
    margin-right: 6px;
    margin-left: -2px;
    font-size: 12px
}

a.task-progress:hover {
    color: var(--color-accent-fg)
}

a.task-progress:hover .octicon {
    color: inherit
}

a.task-progress:hover .progress-bar .progress {
    background-color: var(--color-accent-emphasis)
}

.issue-meta-section .octicon {
    color: var(--color-fg-muted, #ccc);
    vertical-align: bottom
}

.issue-milestone {
    max-width: 240px
}

.issue-milestone .css-truncate-target {
    max-width: 100px
}

.milestone-link .octicon {
    font-size: 14px
}

.milestone-link:hover .octicon {
    color: inherit
}

.new-pr-form {
    margin-top: 15px;
    margin-bottom: 20px
}

.new-pr-form::before {
    display: table;
    content: ""
}

.new-pr-form::after {
    display: table;
    clear: both;
    content: ""
}

.new-pr-form .discussion-timeline::before {
    display: none
}

.label-select-menu .description {
    margin-left: 19px
}

.label-select-menu .color {
    display: inline-block;
    width: 14px;
    height: 14px;
    margin-top: -1px;
    margin-right: 2px;
    vertical-align: middle;
    border-radius: 7px
}

.label-select-menu [aria-checked=true] .select-menu-item-icon,.label-select-menu [aria-checked=mixed] .select-menu-item-icon,.label-select-menu .selected .select-menu-item-icon {
    color: inherit !important
}

.label-select-menu [aria-checked=true] .octicon-circle-slash,.label-select-menu [aria-checked=mixed] .octicon-circle-slash,.label-select-menu .selected .octicon-circle-slash {
    color: var(--color-fg-muted)
}

.label-select-menu [aria-checked=true]:active,.label-select-menu [aria-checked=mixed]:active,.label-select-menu .selected:active {
    background-color: transparent !important
}

.label-select-menu .select-menu-item {
    position: relative
}

.label-select-menu .select-menu-item:hover,.label-select-menu .select-menu-item:focus,.label-select-menu .select-menu-item[aria-selected=true],.label-select-menu .select-menu-item.navigation-focus {
    color: inherit;
    background-color: var(--color-neutral-subtle)
}

.label-select-menu .select-menu-item:hover .select-menu-item-icon,.label-select-menu .select-menu-item:focus .select-menu-item-icon,.label-select-menu .select-menu-item[aria-selected=true] .select-menu-item-icon,.label-select-menu .select-menu-item.navigation-focus .select-menu-item-icon {
    color: transparent
}

.label-select-menu .select-menu-item:hover .label-options-icon,.label-select-menu .select-menu-item:focus .label-options-icon,.label-select-menu .select-menu-item[aria-selected=true] .label-options-icon,.label-select-menu .select-menu-item.navigation-focus .label-options-icon {
    color: inherit
}

.label-select-menu>form {
    position: relative
}

.subnav .btn+.issues-search {
    padding-right: 10px;
    border-right: 1px solid var(--color-border-muted)
}

.reaction-sort-item {
    float: left;
    width: 39px;
    padding: 5px;
    margin-top: 5px;
    text-align: center;
    pointer-events: all;
    border: solid 1px transparent;
    border-radius: 6px;
    opacity: .7
}

.reaction-sort-item:focus,.reaction-sort-item:hover {
    text-decoration: none;
    background-color: var(--color-accent-emphasis);
    opacity: 1
}

.reaction-sort-item[aria-checked=true] {
    background-color: var(--color-accent-subtle);
    border-color: var(--color-accent-emphasis);
    opacity: 1
}

.issue-keyword {
    border-bottom: 1px dotted var(--color-border-default)
}

.issue-keyword:hover {
    border-bottom: 0
}

.new-label-color-dimensions {
    width: 24px;
    height: 24px
}

.select-menu-item[aria-selected=true]>.octicon.label-options-icon,.select-menu-item.navigation-focus>.octicon.label-options-icon {
    color: var(--color-fg-default)
}

.new-label-color-input:invalid {
    color: var(--color-danger-fg)
}

.issue-form-textarea {
    height: 100px !important;
    min-height: 100px !important
}

.issue-forms-wysiwyg-container .comment-form-head {
    background: var(--color-canvas-subtle) !important
}

.issue-forms-wysiwyg-container .comment-body {
    border-bottom: 0 !important
}

.issue-form-body>:first-child {
    margin-top: 0 !important
}

.repository-lang-stats {
    position: relative
}

.repository-lang-stats ol.repository-lang-stats-numbers li {
    display: table-cell;
    width: 1%;
    padding: 10px 5px;
    text-align: center;
    white-space: nowrap;
    border-bottom: 0
}

.repository-lang-stats ol.repository-lang-stats-numbers li span.percent {
    float: none
}

.repository-lang-stats ol.repository-lang-stats-numbers li>a,.repository-lang-stats ol.repository-lang-stats-numbers li>span {
    font-weight: 600;
    color: var(--color-fg-muted);
    text-decoration: none
}

.repository-lang-stats ol.repository-lang-stats-numbers li .lang {
    color: var(--color-fg-default)
}

.repository-lang-stats ol.repository-lang-stats-numbers li .language-color {
    display: inline-block;
    width: 10px;
    height: 10px;
    border-radius: 50%
}

.repository-lang-stats ol.repository-lang-stats-numbers li a:hover {
    background: transparent
}

.repository-lang-stats-graph {
    width: 100%;
    overflow: hidden;
    white-space: nowrap;
    cursor: pointer;
    -webkit-user-select: none;
    user-select: none;
    border: 1px solid var(--color-border-default);
    border-top: 0;
    border-bottom-right-radius: 6px;
    border-bottom-left-radius: 6px
}

.repository-lang-stats-graph .language-color {
    line-height: 8px;
    text-indent: -9999px
}

.repository-lang-stats-graph .language-color:first-child {
    border-bottom-left-radius: 6px
}

.repository-lang-stats-graph .language-color:last-child {
    border-bottom-right-radius: 6px
}

.repository-lang-stats-graph .language-color:not(:first-child) {
    border-left: 1px solid var(--color-canvas-default)
}

.facebox-loading,.octocat-spinner {
    min-height: 64px;
    background-image: url("/images/spinners/octocat-spinner-64.gif");
    background-repeat: no-repeat;
    background-position: center center
}

.octocat-spinner-32 {
    min-height: 32px;
    background-image: url("/images/spinners/octocat-spinner-32.gif");
    background-repeat: no-repeat;
    background-position: center center
}

@media only screen and (-webkit-min-device-pixel-ratio: 2),only screen and (min--moz-device-pixel-ratio: 2),only screen and (-moz-min-device-pixel-ratio: 2),only screen and (min-device-pixel-ratio: 2),only screen and (min-resolution: 192dpi),only screen and (min-resolution: 2dppx) {
    .facebox-loading,.octocat-spinner {
        background-image:url("/images/spinners/octocat-spinner-128.gif");
        background-size: 64px 64px
    }

    .octocat-spinner-32 {
        background-image: url("/images/spinners/octocat-spinner-64.gif");
        background-size: 32px 32px
    }
}

.map-container .activity {
    top: 120px;
    left: 340px;
    z-index: 99999
}

.map-container .is-graph-loading .activity {
    display: block
}

.map {
    height: 350px
}

.map-background {
    pointer-events: all;
    fill: #0366d6
}

.map-background-zoom {
    cursor: grab
}

.map-land {
    fill: none;
    stroke: #256aae;
    stroke-width: 2;
    shape-rendering: crispedges
}

.map-country {
    fill: #d7c7ad;
    shape-rendering: crispedges;
    cursor: pointer
}

.map-country.hk {
    stroke: #a5967e
}

.map-country:hover {
    fill: #c8b28e
}

.map-country.active {
    fill: #f6e5ca
}

.map-borders {
    fill: none;
    stroke: #a5967e;
    shape-rendering: crispedges
}

.map-graticule {
    pointer-events: none;
    fill: none;
    stroke: #fff;
    stroke-opacity: .2;
    shape-rendering: crispedges
}

.map-graticule :nth-child(2n) {
    stroke-dasharray: 2,2
}

.map-legend .map-legend-circle {
    fill-opacity: 0;
    stroke: #fff;
    stroke-width: 1.5
}

.map-legend .map-legend-text {
    font-size: 10px;
    fill: #fff;
    text-anchor: end
}

.map-legend .map-legend-link {
    stroke: #fff;
    stroke-width: 1.5
}

.map-point {
    pointer-events: none;
    fill: #f66a0a
}

.map-point:hover {
    fill: #e36209
}

.map-country-info {
    top: 8px;
    right: 8px;
    pointer-events: none;
    opacity: 0
}

.MarketplaceJumbotron {
    background-color: var(--color-neutral-emphasis);
    background-image: url("/images/modules/marketplace/bg-hero.svg");
    background-repeat: repeat-y;
    background-position: center top;
    background-size: 150% auto
}

@media(min-width: 768px) {
    .MarketplaceJumbotron {
        background-repeat:no-repeat;
        background-size: cover
    }
}

.CircleBadge--feature {
    position: relative;
    top: 0;
    transition: top .15s ease-in,box-shadow .12s ease-in
}

.MarketplaceFeature {
    min-width: 250px
}

.MarketplaceFeature-text {
    opacity: .7;
    transition: opacity .12s ease-in
}

.MarketplaceFeature-link:hover .CircleBadge--feature {
    top: -3px;
    box-shadow: 0 3px 8px 0 rgba(0,0,0,.2)
}

.MarketplaceFeature-link:hover .MarketplaceFeature-text {
    opacity: 1
}

.MarketplaceFeature-link:active .CircleBadge--feature {
    top: 0;
    box-shadow: 0
}

.MarketplaceSideNav {
    -webkit-overflow-scrolling: touch;
    background-color: var(--color-canvas-subtle)
}

@media(min-width: 768px) {
    .MarketplaceSideNav {
        background-color:var(--color-canvas-default);
        border-right: 1px solid var(--color-border-default)
    }
}

.ScreenshotCarousel {
    border: 1px solid var(--color-border-default);
    border-radius: 6px
}

.ScreenshotCarousel-screenshot {
    padding: 16px
}

.ScreenshotCarousel-nav {
    display: flex;
    overflow-x: auto;
    align-items: top;
    box-shadow: inset 0 1px 0 var(--color-border-default)
}

.ScreenshotCarousel-navitem {
    width: 20%;
    min-width: 120px;
    padding: 16px;
    cursor: pointer;
    border-right: 1px solid var(--color-border-default)
}

.ScreenshotCarousel-navitem:last-child {
    border-right: 0
}

.ScreenshotCarousel-navitem.selected {
    background-color: var(--color-canvas-subtle);
    box-shadow: inset 0 0 4px rgba(36,41,46,.15)
}

.marketplace-listing-screenshot-container {
    width: 175px;
    min-height: 175px;
    background-repeat: no-repeat;
    background-position: center center;
    background-size: cover
}

.marketplace-listing-screenshot-zoom {
    display: none;
    cursor: move
}

.marketplace-listing-details-sidebar {
    order: 2
}

@media(min-width: 768px) {
    .marketplace-listing-details-sidebar {
        order:1
    }
}

.marketplace-listing-details-description {
    order: 1
}

@media(min-width: 768px) {
    .marketplace-listing-details-description {
        order:2
    }
}

.marketplace-listing-screenshot-link {
    height: 100px;
    cursor: move
}

.marketplace-listing-screenshot-link:hover .marketplace-listing-screenshot-zoom,.marketplace-listing-screenshot-link:focus .marketplace-listing-screenshot-zoom {
    top: 0;
    left: 0;
    display: block;
    width: 100%;
    height: 100%;
    padding-top: 28px;
    background-color: rgba(255,255,255,.75)
}

.marketplace-integratable-logo {
    width: 40px;
    height: 40px
}

.marketplace-listing-save-notice,.marketplace-listing-save-error {
    display: none;
    opacity: 0;
    transition: opacity .15s linear
}

.marketplace-listing-save-notice.visible,.marketplace-listing-save-error.visible {
    display: inline-block;
    opacity: 1
}

.marketplace-listing-screenshot-delete-form {
    position: absolute;
    bottom: -24px;
    width: 100%;
    text-align: center
}

.marketplace-plan-dollar-field-container .price-note {
    display: none
}

.marketplace-plan-dollar-field-container.is-errored .price-note {
    display: block
}

.marketplace-plan-dollar-field-container.is-errored .form-control {
    border-color: var(--color-danger-emphasis)
}

.marketplace-plan-emphasis {
    color: var(--color-fg-default)
}

.selected .marketplace-plan-emphasis {
    color: var(--color-fg-on-emphasis)
}

.marketplace-plan-unit-name-preview::before {
    content: "per "
}

.marketplace-plan-per-time {
    clear: right
}

.marketplace-billing-modal {
    width: 540px;
    max-height: 90vh;
    margin-top: 5vh
}

.marketplace-listing-markdown,.marketplace-url-link {
    word-wrap: break-word;
    white-space: pre-wrap
}

.marketplace-listing-markdown {
    line-height: 1.4
}

.marketplace-product-callout {
    border-color: var(--color-border-default) !important
}

.marketplace-product-callout::before,.marketplace-product-callout::after {
    display: none
}

.marketplace-product-callout .branch-action-item-icon {
    color: var(--color-fg-muted);
    background-color: var(--color-canvas-subtle)
}

.filter-item.selected .Label--secondary {
    color: var(--color-fg-on-emphasis);
    border-color: var(--color-fg-on-emphasis)
}

.MarketplaceEdit-body {
    min-height: 570px
}

.MarketplaceEdit-body .pricing-model-selector {
    width: calc(100% - 12px);
    max-width: 100% !important
}

.MarketplaceEdit-body .menu {
    border-right: 0;
    border-left: 0;
    border-radius: 0
}

.MarketplaceEdit-body .menu-item {
    padding: 12px 16px;
    background: var(--color-canvas-subtle)
}

.MarketplaceEdit-body .menu-item.selected {
    background: var(--color-canvas-default)
}

.MarketplaceEdit-body .menu-item:hover {
    background: var(--color-canvas-subtle)
}

.MarketplaceEdit-body .menu-item.selected::before {
    position: absolute;
    top: 0;
    bottom: 0;
    left: 0;
    width: 3px;
    content: "";
    background-color: var(--color-severe-emphasis)
}

.MarketplaceEdit-body .menu-item:first-child::before {
    border-top-left-radius: 0
}

.MarketplaceEdit-body .CircleIcon {
    display: inline-block;
    width: 32px;
    height: 32px;
    font-weight: 600;
    line-height: 32px;
    color: var(--color-fg-muted);
    text-align: center;
    background: #e6ebf1;
    border-radius: 50%
}

.MarketplaceEdit-body .CircleIcon .octicon {
    display: inline-block
}

.MarketplaceInsights-graph .insights-month .tick:nth-child(2n) {
    visibility: hidden
}

.BarChart {
    border-radius: 6px
}

.BarChart-bar {
    height: 10px;
    border-right: 1px solid var(--color-canvas-default)
}

.BarChart-bar--green {
    background-color: var(--color-success-emphasis)
}

.BarChart-bar--orange {
    background-color: var(--color-severe-emphasis)
}

.BarChart-bar--yellow {
    background-color: var(--color-attention-emphasis)
}

.CircleBadge--tiny {
    width: 32px;
    height: 32px
}

.CircleBadge--github {
    position: relative
}

.CircleBadge--github.CircleBadge--large::after {
    right: 5px;
    bottom: 5px
}

.CircleBadge--github.CircleBadge--small::after {
    right: -5px;
    bottom: -5px
}

.CircleBadge--github::after {
    position: absolute;
    right: 0;
    bottom: 0;
    display: block;
    width: 22px;
    height: 22px;
    padding: 3px;
    line-height: 0;
    content: "";
    background: var(--color-canvas-default) url("data:image/svg+xml;base64,PD94bWwgdmVyc2lvbj0iMS4wIiBlbmNvZGluZz0iVVRGLTgiPz48c3ZnIHdpZHRoPSIyMnB4IiBoZWlnaHQ9IjIycHgiIHZpZXdCb3g9IjAgMCAyMiAyMiIgdmVyc2lvbj0iMS4xIiB4bWxucz0iaHR0cDovL3d3dy53My5vcmcvMjAwMC9zdmciIHhtbG5zOnhsaW5rPSJodHRwOi8vd3d3LnczLm9yZy8xOTk5L3hsaW5rIj4gICAgICAgIDx0aXRsZT5TaGFwZSBDb3B5PC90aXRsZT4gICAgPGRlc2M+Q3JlYXRlZCB3aXRoIFNrZXRjaC48L2Rlc2M+ICAgIDxkZWZzPjwvZGVmcz4gICAgPGcgaWQ9IktpdGNoZW4tc2luayIgc3Ryb2tlPSJub25lIiBzdHJva2Utd2lkdGg9IjEiIGZpbGw9Im5vbmUiIGZpbGwtcnVsZT0iZXZlbm9kZCI+ICAgICAgICA8ZyBpZD0iT2N0aWNvbnMiIHRyYW5zZm9ybT0idHJhbnNsYXRlKC0zNzAuMDAwMDAwLCAtMTU4NC4wMDAwMDApIiBmaWxsPSIjMUIxRjIzIj4gICAgICAgICAgICA8cGF0aCBkPSJNMzgxLDE1ODQgQzM3NC45MjI1LDE1ODQgMzcwLDE1ODguOTIyNSAzNzAsMTU5NSBDMzcwLDE1OTkuODY3NSAzNzMuMTQ4NzUsMTYwMy45Nzg3NSAzNzcuNTIxMjUsMTYwNS40MzYyNSBDMzc4LjA3MTI1LDE2MDUuNTMyNSAzNzguMjc3NSwxNjA1LjIwMjUgMzc4LjI3NzUsMTYwNC45MTM3NSBDMzc4LjI3NzUsMTYwNC42NTI1IDM3OC4yNjM3NSwxNjAzLjc4NjI1IDM3OC4yNjM3NSwxNjAyLjg2NSBDMzc1LjUsMTYwMy4zNzM3NSAzNzQuNzg1LDE2MDIuMTkxMjUgMzc0LjU2NSwxNjAxLjU3MjUgQzM3NC40NDEyNSwxNjAxLjI1NjI1IDM3My45MDUsMTYwMC4yOCAzNzMuNDM3NSwxNjAwLjAxODc1IEMzNzMuMDUyNSwxNTk5LjgxMjUgMzcyLjUwMjUsMTU5OS4zMDM3NSAzNzMuNDIzNzUsMTU5OS4yOSBDMzc0LjI5LDE1OTkuMjc2MjUgMzc0LjkwODc1LDE2MDAuMDg3NSAzNzUuMTE1LDE2MDAuNDE3NSBDMzc2LjEwNSwxNjAyLjA4MTI1IDM3Ny42ODYyNSwxNjAxLjYxMzc1IDM3OC4zMTg3NSwxNjAxLjMyNSBDMzc4LjQxNSwxNjAwLjYxIDM3OC43MDM3NSwxNjAwLjEyODc1IDM3OS4wMiwxNTk5Ljg1Mzc1IEMzNzYuNTcyNSwxNTk5LjU3ODc1IDM3NC4wMTUsMTU5OC42MyAzNzQuMDE1LDE1OTQuNDIyNSBDMzc0LjAxNSwxNTkzLjIyNjI1IDM3NC40NDEyNSwxNTkyLjIzNjI1IDM3NS4xNDI1LDE1OTEuNDY2MjUgQzM3NS4wMzI1LDE1OTEuMTkxMjUgMzc0LjY0NzUsMTU5MC4wNjM3NSAzNzUuMjUyNSwxNTg4LjU1MTI1IEMzNzUuMjUyNSwxNTg4LjU1MTI1IDM3Ni4xNzM3NSwxNTg4LjI2MjUgMzc4LjI3NzUsMTU4OS42Nzg3NSBDMzc5LjE1NzUsMTU4OS40MzEyNSAzODAuMDkyNSwxNTg5LjMwNzUgMzgxLjAyNzUsMTU4OS4zMDc1IEMzODEuOTYyNSwxNTg5LjMwNzUgMzgyLjg5NzUsMTU4OS40MzEyNSAzODMuNzc3NSwxNTg5LjY3ODc1IEMzODUuODgxMjUsMTU4OC4yNDg3NSAzODYuODAyNSwxNTg4LjU1MTI1IDM4Ni44MDI1LDE1ODguNTUxMjUgQzM4Ny40MDc1LDE1OTAuMDYzNzUgMzg3LjAyMjUsMTU5MS4xOTEyNSAzODYuOTEyNSwxNTkxLjQ2NjI1IEMzODcuNjEzNzUsMTU5Mi4yMzYyNSAzODguMDQsMTU5My4yMTI1IDM4OC4wNCwxNTk0LjQyMjUgQzM4OC4wNCwxNTk4LjY0Mzc1IDM4NS40Njg3NSwxNTk5LjU3ODc1IDM4My4wMjEyNSwxNTk5Ljg1Mzc1IEMzODMuNDIsMTYwMC4xOTc1IDM4My43NjM3NSwxNjAwLjg1NzUgMzgzLjc2Mzc1LDE2MDEuODg4NzUgQzM4My43NjM3NSwxNjAzLjM2IDM4My43NSwxNjA0LjU0MjUgMzgzLjc1LDE2MDQuOTEzNzUgQzM4My43NSwxNjA1LjIwMjUgMzgzLjk1NjI1LDE2MDUuNTQ2MjUgMzg0LjUwNjI1LDE2MDUuNDM2MjUgQzM4OC44NTEyNSwxNjAzLjk3ODc1IDM5MiwxNTk5Ljg1Mzc1IDM5MiwxNTk1IEMzOTIsMTU4OC45MjI1IDM4Ny4wNzc1LDE1ODQgMzgxLDE1ODQgTDM4MSwxNTg0IFoiIGlkPSJTaGFwZS1Db3B5Ij48L3BhdGg+ICAgICAgICA8L2c+ICAgIDwvZz48L3N2Zz4=") center no-repeat;
    border-radius: 100px
}

body.page-responsive .flash-full .container {
    width: 100%;
    max-width: 980px
}

.ClipboardButton {
    position: relative
}

.ClipboardButton.ClipboardButton--success {
    border-color: var(--color-success-emphasis);
    box-shadow: 0 0 0 .2em rgba(52,208,88,.4)
}

.ClipboardButton.ClipboardButton--success:focus {
    box-shadow: 0 0 0 .2em rgba(52,208,88,.4)
}

@media(min-width: 768px) {
    .MarketplacePlan--sticky {
        position:sticky;
        top: 24px;
        z-index: 999
    }
}

@media(max-width: 544px) {
    .Box--full {
        right:0;
        bottom: 0;
        left: 0;
        width: 100%;
        max-width: none;
        max-height: none;
        margin: 0;
        border-radius: 0;
        transform: none
    }
}

.MarketplaceBackground-wrapper {
    position: relative
}

.MarketplaceBackground-recommendations {
    position: relative;
    top: -90px;
    width: 313px;
    margin-top: -150px;
    margin-bottom: -120px;
    overflow: hidden
}

.MarketplaceBackground-recommendations img {
    position: relative;
    top: 0;
    right: 225px;
    width: 549px
}

@media(min-width: 544px) {
    .MarketplaceBackground-recommendations {
        position:relative;
        width: 463px;
        margin-top: -180px;
        margin-bottom: 70px;
        overflow: hidden
    }

    .MarketplaceBackground-recommendations img {
        right: 305px;
        width: 730px
    }
}

@media(min-width: 768px) {
    .MarketplaceBackground-recommendations {
        position:absolute;
        top: -228px;
        right: -69px;
        width: 633px
    }

    .MarketplaceBackground-recommendations img {
        right: 195px;
        width: 750px
    }
}

@media(min-width: 1012px) {
    .MarketplaceBackground-recommendations {
        top:-268px;
        right: 0;
        width: 1040px
    }

    .MarketplaceBackground-recommendations img {
        right: -115px;
        width: 900px
    }
}

@media(min-width: 1280px) {
    .MarketplaceBackground-recommendations {
        top:-325px;
        right: 105px;
        width: 1040px
    }

    .MarketplaceBackground-recommendations img {
        right: 0;
        width: 1040px
    }
}

.MarketplaceBackground-buffer {
    padding-top: 40px;
    margin-top: -146px;
    background: var(--color-canvas-subtle)
}

@media(min-width: 544px) {
    .MarketplaceBackground-buffer {
        padding-top:120px;
        margin-top: -233px
    }
}

@media(min-width: 768px) {
    .MarketplaceBackground-buffer {
        margin-top:-109px
    }
}

@media(min-width: 1012px) {
    .MarketplaceBackground-buffer {
        margin-top:-89px
    }
}

.MarketplaceHeader {
    overflow: hidden
}

.Link--muted.filter-item.selected {
    color: var(--color-fg-on-emphasis) !important
}

.MarketplaceBody {
    position: relative
}

@media(min-width: 544px) {
    .MarketplaceBody {
        top:-72px;
        z-index: 2
    }
}

.MarketplaceDetails .octicon {
    transition: transform 200ms linear;
    transform: scaleY(1)
}

.MarketplaceDetails[open] .octicon {
    transform: scaleY(-1)
}

.MarketplaceAnnouncement {
    color: #fff;
    background: linear-gradient(90deg, #257bf9, #2426ca)
}

.MarketplaceAnnouncement-icon {
    width: 80px;
    opacity: .9
}

.MarketplaceAnnouncement-description {
    opacity: .7
}

.member-list-item .table-list-cell-checkbox {
    width: 30px
}

.member-list-item.adminable .member-info {
    padding-left: 5px
}

.member-list-item .member-avatar-cell {
    width: 64px
}

.member-info {
    width: 450px
}

.member-info .css-truncate-target {
    max-width: 430px
}

.member-meta .select-menu-modal {
    width: 310px
}

.member-meta .select-menu-modal-holder {
    right: 0;
    text-align: left
}

.triage-mode .none-selected {
    display: none
}

.merge-branch-heading {
    margin: 0;
    line-height: 1;
    color: var(--color-fg-default)
}

.merge-branch-description {
    margin-right: 160px;
    margin-bottom: -5px;
    line-height: 1.6em;
    color: var(--color-fg-muted)
}

.alt-merge-options {
    display: inline-block;
    margin-bottom: 0;
    margin-left: 4px;
    vertical-align: middle
}

.merged .merge-branch-description .commit-ref .css-truncate-target {
    max-width: 180px
}

.merge-branch-prh-output {
    margin-top: 10px
}

.merge-branch-form,.queue-branch-form {
    display: none;
    padding-left: 60px
}

.merge-branch-manually {
    display: none;
    padding-top: 16px;
    margin-top: 16px;
    background-color: transparent;
    border-top: 1px solid var(--color-border-default)
}

.merge-branch-manually p {
    margin-bottom: 0
}

.merge-branch-manually h3 {
    margin-bottom: 10px
}

.merge-branch-manually .intro {
    padding-bottom: 10px;
    margin-top: 0
}

.merge-branch-manually .step {
    margin: 15px 0 5px
}

.open .merge-branch-manually {
    display: block
}

.select-menu-merge-method {
    width: 310px
}

.select-menu-merge-method .select-menu-item:hover,.select-menu-merge-method .select-menu-item:hover .octicon,.select-menu-merge-method .select-menu-item:hover .select-menu-item-text {
    color: var(--color-fg-on-emphasis);
    background-color: var(--color-accent-emphasis)
}

.select-menu-merge-method .select-menu-item:hover .description {
    color: var(--color-fg-on-emphasis)
}

.merge-pr.is-squashing .commit-author-fields {
    display: none
}

.merge-pr.is-rebasing .commit-form-fields {
    display: none;
    transition: opacity .15s linear 0s,margin-top .25s ease .1s
}

.merge-pr .btn-group-merge,.merge-pr .btn-group-merge-group,.merge-pr .merge-queue-info,.merge-pr .merge-queue-group-time-to-merge,.merge-pr.is-squashing .btn-group-squash,.merge-pr.is-rebasing .btn-group-rebase,.merge-pr.is-updating-via-merge .btn-group-update-merge,.merge-pr.is-updating-via-rebase .btn-group-update-rebase,.merge-pr.is-merging-solo .btn-group-merge-solo,.merge-pr.is-merging-solo .merge-queue-solo-time-to-merge,.merge-pr.is-merging-jump .btn-group-merge-jump,.merge-pr.is-merging-group .btn-group-merge-group,.merge-pr.is-merging .btn-group-merge-directly,.merge-pr.is-merging .merging-directly-warning {
    display: inline-block
}

.merge-pr .merging-body,.merge-pr .rebasing-body,.merge-pr .squashing-body,.merge-pr .merging-body-merge-warning,.merge-pr .merging-directly-warning,.merge-pr.is-merging .merge-queue-info,.merge-pr.is-merging-group .merge-queue-solo-time-to-merge,.merge-pr.is-merging-solo .merge-queue-group-time-to-merge,.merge-pr.is-merging .branch-action-state-error-if-merging .merging-body {
    display: none
}

.merge-pr.is-merging .merging-body,.merge-pr.is-merging-solo .merging-body,.merge-pr.is-merging-jump .merging-body,.merge-pr.is-merging-group .merging-body,.merge-pr.is-rebasing .rebasing-body,.merge-pr.is-squashing .squashing-body,.merge-pr.is-merging .branch-action-state-error-if-merging .merging-body-merge-warning {
    display: block
}

.merge-pr .btn-group-squash,.merge-pr .btn-group-merge-solo,.merge-pr .btn-group-merge-jump,.merge-pr .btn-group-merge-directly,.merge-pr .btn-group-rebase,.merge-pr .btn-group-update-merge,.merge-pr .btn-group-update-rebase,.merge-pr.is-squashing .btn-group-merge,.merge-pr.is-rebasing .btn-group-merge,.merge-pr.is-merging-solo .btn-group-merge-group,.merge-pr.is-merging-jump .btn-group-merge-group,.merge-pr.is-merging .btn-group-merge-group {
    display: none;
    margin-left: 0
}

.commit-form-fields {
    transition: opacity .15s linear .1s,margin-top .25s ease 0s
}

.unavailable-merge-method {
    display: block;
    margin-top: 6px;
    color: var(--color-severe-fg)
}

[aria-selected=true].disabled .unavailable-merge-method,.navigation-focus.disabled .unavailable-merge-method {
    color: var(--color-fg-on-emphasis)
}

.network .network-tree {
    vertical-align: middle
}

.network .gravatar {
    margin-right: 4px;
    vertical-align: middle;
    border-radius: 6px
}

.network .octicon {
    display: inline-block;
    width: 16px;
    margin-left: 2px;
    text-align: center;
    vertical-align: middle
}

.internal-repo-avatar {
    right: 4px;
    bottom: -4px;
    border: solid 2px var(--color-canvas-default)
}

.owner-reponame dl.form-group {
    margin-top: 5px;
    margin-bottom: 0
}

.owner-reponame .slash {
    float: left;
    padding-top: 32px;
    margin: 0 8px;
    font-size: 21px;
    color: var(--color-fg-muted)
}

.reponame-suggestion {
    color: var(--color-success-fg);
    cursor: pointer
}

.upgrade-upsell {
    padding-left: 33px
}

.cc-upgrade {
    padding-left: 20px
}

.news .release {
    margin-top: 0;
    margin-bottom: 0
}

.news blockquote {
    color: var(--color-fg-muted)
}

.news h1 {
    margin-bottom: 0
}

.news .alert {
    position: relative;
    padding: 0 0 1em 45px;
    overflow: hidden;
    border-top: 1px solid #eff3f6
}

.news .alert .commits {
    padding-left: 40px
}

.news .alert .css-truncate.css-truncate-target,.news .alert .css-truncate .css-truncate-target {
    max-width: 180px
}

.news .alert p {
    margin: 0
}

.news .alert .markdown-body blockquote {
    padding: 0 0 0 40px;
    border-width: 0
}

.news .alert .octicon {
    color: var(--color-fg-muted)
}

.news .alert .dashboard-event-icon {
    position: absolute;
    top: 18px;
    left: 22px;
    transform: translateX(-50%)
}

.news .alert .body {
    padding: 1em 0 0;
    overflow: hidden;
    font-size: 14px;
    border-bottom: 0
}

.news .alert .time {
    font-size: 12px;
    color: var(--color-fg-muted)
}

.news .alert .title {
    padding: 0;
    font-weight: 600
}

.news .alert .title .subtle {
    color: var(--color-fg-muted)
}

.news .alert .gravatar {
    float: left;
    margin-right: .6em;
    line-height: 0;
    background-color: var(--color-canvas-default);
    border-radius: 6px
}

.news .alert .simple .title {
    display: inline-block;
    font-size: 13px;
    font-weight: 400;
    color: var(--color-fg-muted)
}

.news .alert .simple .time {
    display: inline-block
}

.news .alert:first-child {
    border-top: 0
}

.news .alert:first-child .body {
    padding-top: 0
}

.news .alert:first-child .dashboard-event-icon {
    top: 0
}

.news .github-welcome .done {
    color: var(--color-fg-muted);
    text-decoration: line-through
}

.news .commits li {
    margin-top: .15em;
    list-style-type: none
}

.news .commits li.more {
    padding-top: 2px;
    font-size: 11px
}

.news .commits li .committer {
    display: none;
    padding-left: .5em
}

.news .commits li img {
    margin: 0 1px 0 0;
    vertical-align: middle;
    background-color: var(--color-canvas-default);
    border-radius: 6px
}

.news .commits li img.emoji {
    padding: 0;
    margin: 0;
    border: 0
}

.news .commits li .message {
    display: inline-block;
    max-width: 390px;
    margin-top: 2px;
    overflow: hidden;
    font-size: 13px;
    line-height: 1.3;
    text-overflow: ellipsis;
    white-space: nowrap;
    vertical-align: top
}

.news div.message,.news li blockquote {
    display: inline;
    font-size: 13px;
    color: var(--color-fg-muted)
}

.notification-routing .notification-email .edit-link {
    margin-right: 10px;
    font-weight: 600
}

.notification-routing .notification-email .btn-sm {
    float: none;
    margin: -2px 0 0
}

.notification-routing .notification-email .edit-form {
    display: none
}

.notification-routing .notification-email.open .edit-form {
    display: block
}

.notification-routing .notification-email.open .email-display {
    display: none
}

.oauth-permissions-details {
    position: relative;
    padding: 16px;
    margin: 0;
    list-style: none;
    border-bottom: 1px solid var(--color-border-muted)
}

.oauth-permissions-details:first-child {
    border-radius: 6px 6px 0 0
}

.oauth-permissions-details:last-child {
    border: 0;
    border-radius: 0 0 6px 6px
}

.oauth-permissions-details.oauth-public-data-only {
    border-radius: 6px
}

.oauth-permissions-details .markdown-body {
    font-size: 13px
}

.oauth-permissions-details .content {
    display: none;
    margin-left: 45px
}

.oauth-permissions-details .content .form-checkbox {
    margin-left: 0
}

.oauth-permissions-details .content .form-checkbox:last-child {
    margin-bottom: 0
}

.oauth-permissions-details .octicon {
    float: left;
    color: var(--color-fg-muted);
    text-align: center
}

.oauth-permissions-details .permission-help {
    font-size: 13px
}

.oauth-permissions-details .permission-help ul {
    padding-left: 20px;
    margin: 1em 0
}

.oauth-permissions-details .permission-summary {
    margin-left: 45px
}

.oauth-permissions-details .permission-summary .access-details {
    position: relative;
    color: var(--color-fg-muted)
}

.oauth-permissions-details .permission-summary em.highlight {
    position: relative;
    padding: 2px 3px;
    margin-right: -2px;
    margin-left: -3px;
    font-style: normal;
    color: var(--color-fg-default);
    background: var(--color-search-keyword-hl);
    border-radius: 6px
}

.oauth-permissions-details .permission-title {
    display: block;
    color: var(--color-fg-default)
}

.oauth-permissions-details a.btn-sm {
    float: right;
    margin-top: 4px
}

.oauth-permissions-details.open a.btn-sm {
    background-color: #dcdcdc;
    background-image: none;
    border-color: #b5b5b5;
    box-shadow: inset 0 2px 4px rgba(0,0,0,.15)
}

.oauth-permissions-details.open .content {
    display: block
}

.oauth-permissions-details.default:not(.delete) .no-access,.oauth-permissions-details.default:not(.delete) .default-access,.oauth-permissions-details.none .no-access,.oauth-permissions-details.none .default-access {
    display: inline
}

.oauth-permissions-details.default:not(.delete) .access-details,.oauth-permissions-details.default:not(.delete) .permission-title,.oauth-permissions-details.none .access-details,.oauth-permissions-details.none .permission-title {
    color: var(--color-fg-muted)
}

.oauth-permissions-details.default:not(.delete) .octicon,.oauth-permissions-details.none .octicon {
    color: var(--color-fg-muted)
}

.oauth-permissions-details.default .default-access {
    display: inline
}

.oauth-permissions-details.full .full-access {
    display: inline
}

.oauth-details-toggle {
    position: absolute;
    top: 0;
    right: 0;
    padding: 20px 15px
}

.oauth-details-toggle .octicon-chevron-up {
    display: none
}

.open .oauth-details-toggle .octicon-chevron-down {
    display: none
}

.open .oauth-details-toggle .octicon-chevron-up {
    display: block
}

.oauth-user-permissions .full-access,.oauth-user-permissions .limited-access,.oauth-user-permissions .limited-access-emails-followers,.oauth-user-permissions .limited-access-emails-profile,.oauth-user-permissions .limited-access-followers-profile,.oauth-user-permissions .limited-access-profile,.oauth-user-permissions .limited-access-followers,.oauth-user-permissions .limited-access-emails,.oauth-user-permissions .no-access {
    display: none
}

.oauth-user-permissions.limited.limited-email .limited-access-emails {
    display: inline
}

.oauth-user-permissions.limited.limited-email.limited-profile .limited-access-emails,.oauth-user-permissions.limited.limited-email.limited-profile .limited-access-profile {
    display: none
}

.oauth-user-permissions.limited.limited-email.limited-profile .limited-access-emails-profile {
    display: inline
}

.oauth-user-permissions.limited.limited-email.limited-profile.limited-follow .limited-access-emails,.oauth-user-permissions.limited.limited-email.limited-profile.limited-follow .limited-access-profile,.oauth-user-permissions.limited.limited-email.limited-profile.limited-follow .limited-access-followers,.oauth-user-permissions.limited.limited-email.limited-profile.limited-follow .limited-access-emails-profile,.oauth-user-permissions.limited.limited-email.limited-profile.limited-follow .limited-access-emails-followers,.oauth-user-permissions.limited.limited-email.limited-profile.limited-follow .limited-access-followers-profile {
    display: none
}

.oauth-user-permissions.limited.limited-email.limited-profile.limited-follow .limited-access {
    display: inline
}

.oauth-user-permissions.limited.limited-email.limited-follow .limited-access-emails,.oauth-user-permissions.limited.limited-email.limited-follow .limited-access-followers {
    display: none
}

.oauth-user-permissions.limited.limited-email.limited-follow .limited-access-emails-followers {
    display: inline
}

.oauth-user-permissions.limited.limited-follow .limited-access-followers {
    display: inline
}

.oauth-user-permissions.limited.limited-follow.limited-profile .limited-access-followers,.oauth-user-permissions.limited.limited-follow.limited-profile .limited-access-profile {
    display: none
}

.oauth-user-permissions.limited.limited-follow.limited-profile .limited-access-followers-profile {
    display: inline
}

.oauth-user-permissions.limited.limited-profile .limited-access-profile {
    display: inline
}

.oauth-repo-permissions .default-access,.oauth-repo-permissions .public-access,.oauth-repo-permissions .limited-repo-invite-access,.oauth-repo-permissions .full-access {
    display: none
}

.oauth-repo-permissions.full .full-access {
    display: inline
}

.oauth-repo-permissions.limited-repo-invite .limited-repo-invite-access {
    display: inline
}

.oauth-repo-permissions.public .public-access {
    display: inline
}

.oauth-repo-permissions.default .default-access {
    display: inline
}

.oauth-delete-repo-permissions .octicon-alert {
    color: var(--color-danger-fg)
}

.oauth-repo-status-permissions .no-access,.oauth-repo-status-permissions .full-access,.oauth-repo-deployment-permissions .no-access,.oauth-repo-deployment-permissions .full-access {
    display: none
}

.oauth-notifications-permissions .no-access,.oauth-notifications-permissions .read-access,.oauth-notifications-permissions .via-public-access,.oauth-notifications-permissions .via-full-access {
    display: none
}

.oauth-notifications-permissions.read .read-access {
    display: inline
}

.oauth-notifications-permissions.via-public .via-public-access {
    display: inline
}

.oauth-notifications-permissions.via-public .octicon {
    display: none
}

.oauth-notifications-permissions.via-full .via-full-access {
    display: inline
}

.oauth-gist-permissions .no-access,.oauth-gist-permissions .full-access {
    display: none
}

.oauth-granular-permissions .no-access,.oauth-granular-permissions .read-access,.oauth-granular-permissions .write-access,.oauth-granular-permissions .full-access {
    display: none
}

.oauth-granular-permissions.none .no-access {
    display: inline
}

.oauth-granular-permissions.read .read-access {
    display: inline
}

.oauth-granular-permissions.write .write-access {
    display: inline
}

.oauth-granular-permissions.full .full-access {
    display: inline
}

.oauth-no-description {
    color: var(--color-fg-muted)
}

.oauth-org-access-details {
    background: var(--color-canvas-default)
}

.oauth-org-access-details .oauth-org-item:hover {
    background: var(--color-canvas-subtle)
}

.oauth-org-access-details a:hover {
    text-decoration: none
}

.oauth-org-access-details .boxed-group-inner {
    border: 0;
    border-radius: 6px
}

.oauth-org-access-details .oauth-org-item {
    line-height: 24px
}

.oauth-org-access-details .oauth-org-item:first-child {
    border-radius: 6px 6px 0 0
}

.oauth-org-access-details .oauth-org-item .loading-indicator {
    display: none;
    margin: 4px
}

.oauth-org-access-details .oauth-org-item.on .authorized-tools {
    display: block
}

.oauth-org-access-details .oauth-org-item.on .unauthorized-tools {
    display: none
}

.oauth-org-access-details .oauth-org-item.on strong {
    color: var(--color-fg-default)
}

.oauth-org-access-details .oauth-org-item.on .octicon-check {
    display: inline
}

.oauth-org-access-details .oauth-org-item.on .octicon-x {
    display: none
}

.oauth-org-access-details .oauth-org-item.revoked {
    background: var(--color-canvas-default)
}

.oauth-org-access-details .oauth-org-item.revoked .unauthorized-tools,.oauth-org-access-details .oauth-org-item.revoked .authorized-tools {
    display: none
}

.oauth-org-access-details .oauth-org-item.revoked .octicon-x {
    color: var(--color-danger-fg)
}

.oauth-org-access-details .oauth-org-item.loading .unauthorized-tools,.oauth-org-access-details .oauth-org-item.loading .authorized-tools {
    display: none
}

.oauth-org-access-details .oauth-org-item.loading .loading-indicator {
    display: block
}

.oauth-org-access-details .oauth-org-item .authorized-tools {
    display: none
}

.oauth-org-access-details .oauth-org-item .unauthorized-tools {
    display: block
}

.oauth-org-access-details .btn {
    line-height: 1.5em
}

.oauth-org-access-details .octicon {
    color: var(--color-fg-muted)
}

.oauth-org-access-details .octicon-check {
    display: none;
    color: var(--color-success-fg)
}

.oauth-org-access-details .octicon-x {
    display: inline
}

.oauth-org-access-details .octicon-x.org-access-denied {
    color: var(--color-danger-fg)
}

.permission-title {
    margin-top: 0
}

.oauth-application-whitelist h2 {
    display: inline-block
}

.oauth-application-whitelist .request-info {
    display: block
}

.oauth-application-whitelist .request-info strong {
    display: inline-block;
    color: var(--color-fg-default)
}

.oauth-application-whitelist .request-info .application-description {
    display: none
}

.oauth-application-whitelist .request-info.open .application-description {
    display: block
}

.oauth-application-whitelist .avatar {
    margin-top: 0
}

.oauth-application-whitelist .requestor {
    font-weight: 600
}

.oauth-application-whitelist .octicon-alert {
    color: var(--color-severe-fg)
}

.oauth-application-whitelist .octicon-check,.oauth-application-whitelist .approved-request {
    color: var(--color-success-fg)
}

.oauth-application-whitelist .denied-request {
    color: var(--color-danger-fg)
}

.oauth-application-whitelist .request-indicator {
    margin-left: 10px
}

.oauth-application-whitelist .edit-link {
    color: var(--color-fg-muted)
}

.oauth-application-whitelist .edit-link:hover {
    color: var(--color-accent-fg)
}

.oauth-application-whitelist .boxed-group-list {
    margin-top: 1em
}

.oauth-application-whitelist .boxed-group-list li {
    padding: 10px
}

.boxed-group-inner .oauth-application-info {
    margin-bottom: 10px
}

.oauth-application-info .application-title {
    font-size: 30px;
    color: var(--color-fg-default)
}

.oauth-application-info .application-description {
    margin-top: 3px;
    margin-bottom: 0
}

.oauth-application-info .app-info {
    display: inline-block;
    margin-right: 10px;
    color: var(--color-fg-muted)
}

.oauth-application-info .app-info .octicon {
    margin-right: 5px
}

.oauth-application-info .listgroup-item {
    line-height: inherit
}

.oauth-application-info .app-denied,.oauth-application-info .app-approved {
    margin-left: 10px;
    font-size: 13px;
    font-weight: 400;
    white-space: nowrap
}

.oauth-application-info .app-approved,.oauth-application-info .octicon-check {
    color: var(--color-success-fg)
}

.oauth-application-info .app-denied,.oauth-application-info .octicon-x {
    color: var(--color-severe-fg)
}

.restrict-oauth-access-button {
    margin-right: 20px
}

.restrict-oauth-access-info {
    margin-bottom: 40px;
    font-size: 14px
}

.restrict-oauth-access-list {
    padding-left: 25px
}

.restrict-oauth-access-list li {
    margin-bottom: 10px
}

.restrict-oauth-access-list li:last-child {
    margin-bottom: 0
}

.app-transfer-actions form {
    display: inline
}

.oauth-border {
    border-top: 1px solid var(--color-border-muted)
}

.oauth-border:last-child {
    border-bottom: 1px solid var(--color-border-muted)
}

.developer-app-item .developer-app-avatar-cell {
    width: 60px
}

.developer-app-item .developer-app-name {
    font-size: 14px;
    font-weight: 600;
    line-height: 1.25;
    color: var(--color-fg-default)
}

.developer-app-item .developer-app-name:hover {
    color: var(--color-accent-fg);
    text-decoration: none
}

.developer-app-item .developer-app-info-cell {
    padding-left: 0
}

.developer-app-item .developer-app-list-meta {
    margin-top: 3px;
    margin-bottom: 2px;
    font-weight: 400;
    color: var(--color-fg-muted)
}

.org-transfer-requests {
    margin: 10px 0 20px
}

.toggle-secret-field .secret-standin {
    display: block
}

.toggle-secret-field .secret-field {
    display: none
}

.toggle-secret-field.open .secret-standin {
    display: none
}

.toggle-secret-field.open .secret-field {
    display: block
}

.org-insights-graph-canvas .activity {
    width: 400px;
    padding: 10px;
    margin: 100px auto 0;
    color: var(--color-fg-default);
    text-align: center;
    border-radius: 6px
}

.org-insights-graph-canvas .dots {
    margin: 0 auto
}

.org-insights-graph-canvas .totals circle {
    stroke-width: 4;
    opacity: 0
}

.org-insights-graph-canvas .totals circle:only-child {
    opacity: 1
}

.org-insights-graph-canvas>.activity {
    display: none
}

.org-insights-graph-canvas .axis {
    font-size: 10px
}

.org-insights-graph-canvas .axis line {
    stroke: rgba(27,31,35,.1);
    shape-rendering: crispedges
}

.org-insights-graph-canvas .axis text {
    font-size: 12px;
    font-weight: 300;
    fill: var(--color-fg-muted)
}

.org-insights-graph-canvas .axis path {
    display: none
}

.org-insights-graph-canvas .axis .zero line {
    stroke: var(--color-accent-emphasis);
    stroke-dasharray: 3 3;
    stroke-width: 1.5
}

.org-insights-graph-canvas path {
    fill: none;
    stroke-width: 2
}

.org-insights-graph-canvas .y line {
    display: none
}

.org-insights-graph-canvas .y.unique line {
    stroke: #1d7fb3
}

.org-insights-graph-canvas .overlay {
    fill-opacity: 0
}

.org-insights-graph-canvas .graph-loading {
    padding: 110px 0
}

.org-insights-graph-canvas .graph-loading,.org-insights-graph-canvas .graph-error,.org-insights-graph-canvas .graph-no-usable-data,.org-insights-graph-canvas .graph-empty {
    display: none
}

.org-insights-graph-canvas.is-graph-loading>.activity,.org-insights-graph-canvas.is-graph-without-usable-data>.activity,.org-insights-graph-canvas.is-graph-empty>.activity {
    display: block
}

.org-insights-graph-canvas.is-graph-loading .graph-loading,.org-insights-graph-canvas.is-graph-empty .graph-empty,.org-insights-graph-canvas.is-graph-without-usable-data .graph-no-usable-data,.org-insights-graph-canvas.is-graph-load-error .graph-error {
    display: block
}

.org-insights-svg-tip {
    position: absolute;
    z-index: 99999;
    padding: 10px;
    pointer-events: none
}

.org-insights-svg-tip.is-visible {
    display: block
}

.org-insights-svg-tip::after,.org-insights-svg-tip::before {
    position: absolute;
    top: 100%;
    left: 50%;
    width: 0;
    height: 0;
    pointer-events: none;
    content: " ";
    border: solid transparent
}

.org-insights-svg-tip::after {
    margin-left: -5px;
    border-color: rgba(255,255,255,0);
    border-width: 5px;
    border-top-color: var(--color-canvas-default)
}

.org-insights-svg-tip::before {
    margin-left: -6px;
    border-color: rgba(0,0,0,0);
    border-width: 6px;
    border-top-color: var(--color-border-default)
}

.org-insights-svg-tip.comparison {
    padding: 10px;
    text-align: left;
    pointer-events: none
}

.org-insights-svg-tip.comparison ul {
    margin: 0;
    white-space: nowrap;
    list-style: none
}

.org-insights-svg-tip.comparison li {
    position: relative
}

.org-insights-svg-tip.comparison li .legend {
    width: 7px;
    height: 7px;
    border-radius: 50%
}

.org-insights-card-legend .metric-0 {
    color: var(--color-accent-fg)
}

.org-insights-card-legend .metric-1 {
    color: var(--color-success-fg)
}

.org-insights-card-legend .metric-2 {
    color: var(--color-severe-fg)
}

.org-insights-card-legend .metric-3 {
    color: var(--color-done-fg)
}

.org-insights-svg-tip .metric-0 .legend,.org-insights-graph-canvas path.metric-0,.org-insights-graph-canvas .metric-0 circle {
    stroke: var(--color-accent-fg);
    background-color: var(--color-accent-fg)
}

.org-insights-svg-tip .metric-1 .legend,.org-insights-graph-canvas path.metric-1,.org-insights-graph-canvas .metric-1 circle {
    stroke: var(--color-success-fg);
    background-color: var(--color-success-fg)
}

.org-insights-svg-tip .metric-2 .legend,.org-insights-graph-canvas path.metric-2,.org-insights-graph-canvas .metric-2 circle {
    stroke: var(--color-severe-emphasis);
    background-color: var(--color-severe-emphasis)
}

.org-insights-svg-tip .metric-3 .legend,.org-insights-graph-canvas path.metric-3,.org-insights-graph-canvas .metric-3 circle {
    stroke: var(--color-done-emphasis);
    background-color: var(--color-done-emphasis)
}

.org-insights-cards .boxed-group {
    width: 100%;
    margin: 10px 0
}

.org-insights-cards .org-insights-card-legend {
    display: none;
    color: var(--color-fg-muted)
}

.org-insights-cards .repository-lang-stats-graph {
    overflow: visible;
    cursor: default;
    border: 0
}

.org-insights-cards .repository-lang-stats-graph .language-color {
    min-width: 24px;
    margin-right: -12px;
    border: 2px solid var(--color-canvas-default)
}

.org-insights-cards .is-rendered .org-insights-card-legend {
    display: block
}

@media(min-width: 544px) {
    .org-insights-cards .is-rendered .org-insights-card-legend {
        display:flex
    }
}

.org-insights-cards .octicon-arrow-down,.org-insights-cards .octicon-arrow-up {
    display: none
}

.org-insights-cards .is-increase .octicon-arrow-up {
    display: inline-block
}

.org-insights-cards .is-decrease .octicon-arrow-down {
    display: inline-block
}

.org-insights-cards .graph-canvas .dots {
    padding: 43px 0
}

.invitation-2fa-banner {
    margin-right: -24px;
    margin-left: -24px
}

.sign-up-via-invitation .bleed-flush {
    width: 100%;
    padding: 0 20px;
    margin-left: -20px;
    border-color: var(--color-border-default)
}

.sign-up-via-invitation label {
    font-size: 13px
}

.orghead {
    padding-top: 16px;
    padding-bottom: 0;
    margin-bottom: 16px;
    color: var(--color-fg-default);
    background-color: var(--color-page-header-bg);
    border-bottom: 1px solid var(--color-border-default)
}

.orghead .orgnav {
    position: relative;
    top: 1px;
    margin-top: 10px
}

.org-repos .TableObject-item--primary {
    white-space: normal
}

.org-name {
    font-weight: 400;
    color: var(--color-fg-default)
}

.audit-log-search .member-info {
    width: 300px
}

.audit-log-search .member-info .member-avatar {
    float: left;
    margin-right: 15px
}

.audit-log-search .member-info .member-link {
    display: block
}

.audit-log-search .member-info .member-list-avatar {
    margin-right: 0
}

.audit-log-search .member-info .ghost {
    display: inline-block;
    color: var(--color-fg-muted)
}

.audit-log-search .blankslate {
    border-top-left-radius: 0;
    border-top-right-radius: 0
}

.audit-log-search .export-phrase {
    margin: 5px 0
}

.audit-results-actions {
    overflow: auto
}

.audit-search-clear {
    float: left;
    margin-bottom: 20px;
    border: 0
}

.audit-search-clear .issues-reset-query {
    margin-bottom: 0
}

.audit-type {
    width: 200px;
    overflow: hidden;
    text-overflow: ellipsis;
    white-space: nowrap
}

.audit-type .octicon {
    margin-right: 3px;
    font-weight: 400;
    vertical-align: bottom
}

.audit-type .repo {
    color: var(--color-severe-fg)
}

.audit-type .team {
    color: var(--color-success-fg)
}

.audit-type .user {
    color: var(--color-done-fg)
}

.audit-type .oauth_access {
    color: var(--color-danger-fg)
}

.audit-type .hook {
    color: #e1bf4e
}

.export-phrase {
    margin-top: 5px
}

.export-phrase pre {
    padding-left: 10px;
    font-family: ui-monospace,SFMono-Regular,SF Mono,Menlo,Consolas,Liberation Mono,monospace;
    white-space: pre-wrap;
    border-left: 1px solid var(--color-border-muted)
}

.two-factor-enforcement-form .loading-spinner {
    float: left;
    margin: 0 0 0 -20px;
    vertical-align: middle
}

.saml-enabled-banner-container {
    background-color: var(--color-canvas-default)
}

.saml-settings-form .test-status-indicator,.oidc-settings-form .test-status-indicator {
    width: 30px;
    height: 30px;
    margin-top: -4px;
    border-radius: 50%
}

.saml-settings-form .test-status-indicator .octicon,.oidc-settings-form .test-status-indicator .octicon {
    display: block;
    margin-top: 7px;
    margin-right: auto;
    margin-left: auto
}

.saml-settings-form .form-group.errored,.oidc-settings-form .form-group.errored {
    margin-bottom: 40px
}

.saml-settings-form .test-status-indicator-error,.oidc-settings-form .test-status-indicator-error {
    color: var(--color-fg-on-emphasis);
    background-color: var(--color-danger-emphasis)
}

.saml-settings-form .test-status-indicator-success,.oidc-settings-form .test-status-indicator-success {
    color: var(--color-fg-on-emphasis);
    background-color: var(--color-success-emphasis)
}

.saml-settings-form .details-container .method-field,.oidc-settings-form .details-container .method-field {
    display: none
}

.saml-settings-form .details-container .method-label,.oidc-settings-form .details-container .method-label {
    font-weight: 400
}

.saml-settings-form .details-container .details-target,.oidc-settings-form .details-container .details-target {
    cursor: pointer
}

.saml-settings-form .details-container.open .method-value,.saml-settings-form .details-container.open .details-target,.oidc-settings-form .details-container.open .method-value,.oidc-settings-form .details-container.open .details-target {
    display: none
}

.saml-settings-form .details-container.open .method-field,.oidc-settings-form .details-container.open .method-field {
    display: inline-block
}

.saml-settings-form .saml-enforcement-disabled,.oidc-settings-form .saml-enforcement-disabled {
    opacity: .5
}

.form-group .form-control.saml-certificate-field {
    width: 440px;
    height: 150px;
    min-height: 0
}

.member-avatar {
    float: left;
    margin: 1px
}

.member-fullname {
    color: var(--color-fg-muted)
}

.org-toolbar.disabled {
    pointer-events: none
}

.org-toolbar .subnav-search {
    width: 320px;
    margin-right: 20px;
    margin-left: 0
}

.org-toolbar .subnav-search-context+.subnav-search {
    margin-left: -1px
}

.org-toolbar .subnav-search-input {
    width: 100%
}

.org-toolbar-next {
    margin-bottom: 24px
}

.org-toolbar-next .subnav-search {
    width: 240px
}

.auto-search-group {
    position: relative
}

.auto-search-group .auto-search-input {
    padding-left: 30px
}

.auto-search-group .spinner,.auto-search-group>.octicon {
    position: absolute;
    left: 10px;
    z-index: 5;
    width: 16px;
    height: 16px
}

.auto-search-group .spinner {
    top: 9px;
    background-color: var(--color-canvas-default)
}

.auto-search-group>.octicon {
    top: 10px;
    font-size: 14px;
    color: var(--color-fg-muted);
    text-align: center
}

.org-list .list-item {
    position: relative;
    padding-top: 15px;
    padding-bottom: 15px;
    border-bottom: 1px solid var(--color-border-muted)
}

.org-list .list-item::before {
    display: table;
    content: ""
}

.org-list .list-item::after {
    display: table;
    clear: both;
    content: ""
}

.org-repos-mini {
    padding: 0;
    margin: 0
}

.org-repos-mini .org-repo-mini-item:first-child .org-repo-mini-cell {
    border-top: 0
}

.org-repos-mini .org-repo-name {
    margin-top: 0;
    margin-bottom: 0;
    font-size: 14px;
    word-wrap: break-word
}

.org-repos-mini .org-repo-name .octicon-repo {
    color: var(--color-fg-muted)
}

.org-repos-mini .org-repo-name .octicon-lock {
    color: var(--color-attention-fg)
}

.org-repos-mini .org-repo-name .repo-prefix {
    font-weight: 400
}

.org-repos-mini .org-repo-name .repo-slash {
    display: inline-block;
    margin-right: -4px;
    margin-left: -4px
}

.org-repo-mini-cell {
    padding-top: 15px;
    padding-bottom: 15px;
    vertical-align: middle
}

.org-repo-meta {
    width: 165px
}

.org-repo-meta .access-level {
    cursor: default
}

.with-higher-access .table-list-cell-checkbox {
    vertical-align: top
}

.permission-level-cell .select-menu-button {
    width: 90px;
    text-align: left
}

.permission-level-cell .select-menu-button::after {
    position: absolute;
    top: 10px;
    right: 10px
}

.permission-level-cell .spinner {
    float: none;
    opacity: 0;
    transition: opacity .2s ease-in-out
}

.permission-level-cell .is-loading .spinner {
    opacity: 1
}

.select-menu-option-title {
    margin-top: 0;
    margin-bottom: 0
}

.reinstate-org-member {
    position: relative;
    width: 500px;
    margin: 40px auto
}

.reinstate-org-member .reinstate-lead {
    margin-bottom: 30px;
    font-size: 16px
}

.reinstate-org-member label {
    cursor: pointer
}

.reinstate-org-member .reinstate-detail-container {
    margin: 15px 0
}

.reinstate-org-member .reinstate-title {
    color: var(--color-fg-default)
}

.reinstate-org-member .reinstate-title .octicon {
    width: 16px;
    margin-right: 10px;
    color: var(--color-fg-muted)
}

.add-member-wrapper {
    position: relative;
    width: 500px;
    margin: 40px auto
}

.add-member-wrapper .available-seats {
    color: var(--color-fg-muted)
}

.team-stats {
    padding-right: 15px;
    padding-left: 15px;
    margin-right: -15px;
    margin-bottom: -15px;
    margin-left: -15px;
    border-top: 1px solid var(--color-border-muted)
}

.stats-group {
    display: table;
    width: 100%;
    table-layout: fixed
}

.stats-group-stat {
    display: table-cell;
    padding-top: 10px;
    padding-bottom: 10px;
    padding-left: 15px;
    font-size: 12px;
    color: var(--color-fg-muted);
    text-transform: uppercase
}

.stats-group-stat:first-child {
    padding-left: 0;
    border-right: 1px solid var(--color-border-muted)
}

.stats-group-stat:hover,.stats-group-stat:hover .stat-number {
    color: var(--color-accent-fg);
    text-decoration: none
}

.stats-group-stat.no-link:hover {
    color: var(--color-fg-muted);
    text-decoration: none
}

.stats-group-stat.no-link:hover .stat-number {
    color: var(--color-fg-default)
}

.stat-number {
    display: block;
    font-size: 16px;
    color: var(--color-fg-default)
}

.permission-title {
    margin-top: 0
}

.invite-member-results ul {
    margin: 0
}

.team-member-list {
    list-style: none
}

.team-member-list .table-list-cell {
    padding-top: 15px;
    padding-bottom: 15px
}

.team-member-list .team-member-content {
    margin-left: 50px
}

.team-member-list .team-member-username {
    margin: 0;
    font-size: 14px;
    font-weight: 600;
    line-height: 20px
}

.team-member-list .Label--secondary {
    cursor: default
}

.team-member-list .invite-icon {
    width: 28px;
    color: var(--color-fg-muted)
}

.menu-item-danger,.menu-item-danger.selected {
    color: var(--color-danger-fg)
}

.menu-item-danger:hover,.menu-item-danger[aria-selected=true],.menu-item-danger.navigation-focus,.menu-item-danger.selected:hover,.menu-item-danger.selected[aria-selected=true],.menu-item-danger.selected.navigation-focus {
    color: var(--color-fg-on-emphasis);
    background: var(--color-danger-emphasis)
}

.team-member-list-avatar {
    float: left;
    margin-right: 10px
}

.team-member-list-avatar .octicon {
    width: 40px;
    color: var(--color-fg-muted)
}

.org-team-form .disabled {
    opacity: .5
}

.org-team-form .css-truncate-target {
    max-width: 250px
}

.confirm-removal-container .private-fork-count {
    margin-top: 0;
    font-size: 12px;
    font-weight: 400;
    color: var(--color-fg-muted)
}

.confirm-removal-container .deleting-private-forks-warning {
    position: relative;
    padding-left: 26px
}

.confirm-removal-container .deleting-private-forks-warning .octicon {
    position: absolute;
    top: 2px;
    left: 0;
    color: var(--color-danger-fg)
}

.confirm-removal-list-container {
    margin-bottom: 15px;
    border: 1px solid var(--color-border-default);
    border-radius: 6px
}

.confirm-removal-list-item {
    padding: 10px;
    margin: 0;
    font-size: 14px;
    font-weight: 600;
    border-top: 1px solid var(--color-border-muted)
}

.confirm-removal-list-item:first-child {
    border-top: 0
}

.confirm-removal-team .octicon,.confirm-removal-repo .octicon {
    margin-right: 3px;
    color: var(--color-fg-muted)
}

.team-repo-access-list {
    max-height: 245px
}

.manage-member-meta {
    list-style: none
}

.manage-member-meta-item {
    margin-top: 12px;
    color: var(--color-fg-muted)
}

.manage-member-meta-item:first-child {
    margin-top: 0
}

.manage-member-meta-item .btn-link {
    color: var(--color-fg-muted)
}

.manage-member-meta-item>.octicon {
    width: 14px;
    margin-right: 5px;
    color: var(--color-fg-muted);
    text-align: center
}

.manage-member-meta-item>.octicon-alert {
    color: var(--color-severe-fg)
}

.manage-member-button {
    margin-bottom: 10px
}

.org-user-notice-title {
    margin-top: 0;
    margin-bottom: 0
}

.org-user-notice-content {
    margin-top: 10px;
    margin-bottom: 10px;
    font-size: 14px
}

.org-user-notice-content strong {
    color: var(--color-fg-default)
}

.org-user-notice-content:last-child {
    margin-bottom: 0
}

.org-user-notice-content .octicon {
    color: var(--color-fg-muted)
}

.org-user-notice-icon {
    float: right;
    margin: 10px 10px 20px;
    font-size: 45px;
    color: var(--color-fg-muted)
}

.manage-repo-access-header {
    margin-top: 30px;
    margin-bottom: 30px
}

.manage-repo-access-header::before {
    display: table;
    content: ""
}

.manage-repo-access-header::after {
    display: table;
    clear: both;
    content: ""
}

.manage-repo-access-header .btn {
    margin-top: 8px
}

.manage-repo-access-header .tooltipped::after {
    width: 250px;
    white-space: normal
}

.manage-repo-access-heading {
    margin-top: -2px;
    margin-bottom: 0;
    font-size: 24px;
    font-weight: 400
}

.manage-repo-access-lead {
    margin-top: 3px;
    margin-bottom: 0;
    font-size: 16px;
    color: var(--color-fg-muted)
}

.manage-repo-access-group {
    background-color: var(--color-canvas-default);
    border: 1px solid var(--color-border-default);
    border-radius: 6px
}

.manage-repo-access-title {
    padding: 12px 15px;
    margin-top: 0;
    margin-bottom: 0;
    font-size: 14px;
    background-color: var(--color-canvas-subtle);
    border-bottom: 1px solid var(--color-border-muted);
    border-radius: 6px 6px 0 0
}

.manage-repo-access-wrapper {
    position: relative;
    padding-left: 25px
}

.manage-repo-access-wrapper::before {
    position: absolute;
    top: 15px;
    bottom: 15px;
    left: 22px;
    z-index: 1;
    display: block;
    width: 2px;
    content: "";
    background-color: var(--color-canvas-default)
}

.manage-repo-access-icon {
    position: relative;
    z-index: 2;
    float: left;
    padding-top: 2px;
    padding-bottom: 2px;
    margin-top: -3px;
    margin-left: -25px;
    background: var(--color-canvas-default)
}

.manage-repo-access-icon .octicon {
    font-size: 14px;
    color: var(--color-fg-default)
}

.manage-repo-access-list {
    list-style: none
}

.manage-repo-access-list-item {
    padding: 16px
}

.manage-repo-access-list-item:last-child {
    border-bottom: 0;
    border-radius: 0 0 6px 6px
}

.manage-repo-access-teams-group {
    margin-top: -20px;
    list-style: none;
    border: 1px solid var(--color-border-default);
    border-radius: 6px
}

.manage-repo-access-team-item {
    border-top: 1px solid var(--color-border-muted)
}

.manage-repo-access-team-item:first-child {
    border-top: 0
}

.manage-repo-access-description {
    margin-top: 3px;
    margin-bottom: 0;
    overflow: hidden;
    text-overflow: ellipsis;
    word-wrap: break-word;
    white-space: nowrap
}

.manage-repo-access-not-active {
    color: var(--color-fg-default);
    background-color: var(--color-canvas-subtle)
}

.manage-repo-access-not-active .manage-repo-access-icon {
    background: var(--color-canvas-subtle)
}

.manage-access-remove-footer {
    padding: 16px;
    border-top: 1px solid var(--color-border-muted)
}

.manage-access-remove-footer .tooltipped::after {
    width: 250px;
    white-space: normal
}

.manage-access-none {
    margin: 20px 50px;
    text-align: center
}

.ldap-group-dn {
    display: block;
    font-weight: 400;
    color: var(--color-fg-muted)
}

.ldap-import-groups-container .blankslate {
    display: none
}

.ldap-import-groups-container.is-empty .blankslate {
    display: block
}

.ldap-import-groups-container.is-empty .ldap-memberships-list {
    display: none
}

.ldap-memberships-list {
    margin-bottom: 30px
}

.ldap-memberships-list .table-list-cell {
    padding-top: 10px;
    padding-bottom: 10px;
    font-size: 13px;
    vertical-align: middle
}

.ldap-memberships-list .table-list-cell:last-child {
    width: 92px
}

.ldap-memberships-list .ldap-list-team-name {
    width: 380px
}

.ldap-memberships-list .ldap-group-dn {
    font-size: 11px
}

.ldap-memberships-list .ldap-mention-as {
    width: 260px
}

.ldap-memberships-list .edit {
    position: absolute;
    padding: 10px;
    margin-left: -33px;
    color: var(--color-accent-fg);
    cursor: pointer
}

.ldap-memberships-list .edit-fields {
    display: none
}

.ldap-memberships-list .is-editing .edit-hide {
    display: none
}

.ldap-memberships-list .is-editing .edit-fields {
    display: block
}

.ldap-memberships-list .is-editing .spinner {
    margin-left: 15px;
    vertical-align: middle
}

.ldap-memberships-list .is-removing {
    opacity: .25
}

.ldap-memberships-list .is-removing .edit {
    opacity: .5
}

.team-name-field {
    height: 33px
}

.ldap-import-form-actions {
    margin-top: 30px
}

.invited .team-member-list {
    margin: -20px 0
}

.invited .team-member-list .list-item {
    padding: 10px 0;
    border-bottom: 1px solid var(--color-border-muted)
}

.invited .team-member-list .list-item::before {
    display: table;
    content: ""
}

.invited .team-member-list .list-item::after {
    display: table;
    clear: both;
    content: ""
}

.invited .team-member-list .list-item:last-of-type {
    border: 0
}

.invited .team-member-list .list-item .edit-invitation {
    float: right;
    margin-top: 6px
}

.invited-banner::before {
    display: table;
    content: ""
}

.invited-banner::after {
    display: table;
    clear: both;
    content: ""
}

.invited-banner .btn-sm {
    float: right;
    margin-left: 5px
}

.invited-banner p {
    font-size: 14px;
    line-height: 1.5
}

.invited-banner .inviter-link {
    font-weight: 600
}

.manage-member-sso-sessions.has-active-sessions .blankslate {
    display: none
}

.manage-memberships-nav {
    position: relative;
    top: 1px;
    margin-top: 10px
}

.manage-memberships-tabs-item {
    cursor: pointer;
    border: solid transparent;
    border-width: 3px 1px 1px;
    border-radius: 6px 6px 0 0
}

.manage-memberships-tabs-item:hover {
    color: var(--color-fg-default)
}

.manage-memberships-tabs-item.selected {
    font-weight: 600;
    color: var(--color-fg-default);
    background-color: var(--color-canvas-default);
    border-bottom: 2px solid #d26911
}

.org-menu-item:not([aria-current=page])+.org-sub-menu {
    display: none
}

.trial-banner-notice {
    background-image: linear-gradient(180deg, #0366d6 0%, #2188ff 100%)
}

@media(min-width: 768px) {
    .Popover-message--extra-large {
        min-width:544px !important
    }
}

.theme-picker {
    margin-bottom: -1px;
    background-color: var(--color-canvas-default);
    background-clip: padding-box;
    border-bottom: 1px solid var(--color-border-default);
    box-shadow: var(--color-shadow-medium)
}

.theme-picker>.container {
    position: relative;
    overflow: hidden;
    text-align: center
}

.theme-picker-thumbs {
    border-bottom: 1px solid var(--color-border-muted)
}

.theme-toggle {
    width: 32px;
    height: 32px;
    padding: 0;
    color: var(--color-fg-muted);
    background: none;
    border: 0
}

.theme-toggle:hover {
    color: var(--color-accent-fg);
    text-decoration: none
}

.theme-toggle.disabled,.theme-toggle.disabled:hover {
    color: var(--color-fg-muted);
    cursor: not-allowed
}

.theme-toggle-full-left,.theme-toggle-full-right {
    position: absolute;
    top: 50px;
    overflow: hidden
}

.theme-toggle-full-left {
    left: 4px
}

.theme-toggle-full-right {
    right: 4px
}

.theme-selector {
    height: 102px;
    margin: 15px 46px
}

.theme-selector-thumbnail {
    padding: 2px;
    border: 1px solid var(--color-border-muted)
}

.theme-selector-thumbnail:hover {
    text-decoration: none;
    background-color: var(--color-neutral-subtle)
}

.theme-selector-thumbnail.selected {
    padding: 3px;
    background-color: var(--color-accent-emphasis);
    border: 0
}

.theme-selector-thumbnail.selected .theme-selector-img {
    border: 1px solid var(--color-canvas-default)
}

.theme-selector-img {
    width: 126px;
    height: 96px;
    border-radius: 1px
}

.theme-picker-spinner {
    position: absolute;
    top: 16px;
    left: 50%;
    margin-left: -16px;
    background-color: var(--color-canvas-default);
    opacity: 1;
    transition: .2s,opacity ease-in-out
}

.theme-picker-spinner~.theme-picker-controls .theme-name {
    opacity: 0
}

.theme-picker-view-toggle {
    float: left
}

.theme-picker-view-toggle .for-hiding {
    display: none
}

.theme-picker-view-toggle.open .for-hiding {
    display: inline
}

.theme-picker-view-toggle.open .for-showing {
    display: none
}

.theme-picker-controls {
    position: absolute;
    top: 15px;
    left: 50%;
    width: 220px;
    margin-left: -110px;
    line-height: 34px;
    text-align: center
}

.theme-picker-controls .theme-toggle {
    vertical-align: middle
}

.theme-name {
    display: inline-block;
    margin-right: 10px;
    margin-left: 10px;
    font-size: 20px;
    line-height: 1;
    vertical-align: middle
}

.page-preview {
    z-index: -100;
    display: block;
    width: 100%;
    height: 6000px;
    padding: 0;
    background-color: var(--color-canvas-default);
    border: 0
}

.pinned-items-spinner {
    position: relative;
    top: 2px;
    left: 6px
}

.pinned-items-setting-link {
    font-size: 13px;
    font-weight: 400
}

.pinned-item-name {
    color: var(--color-fg-default)
}

.pinned-item-checkbox:checked+.pinned-item-name {
    color: var(--color-fg-default);
    background-color: var(--color-accent-subtle)
}

.pinned-gist-blob-num {
    min-width: 36px;
    cursor: default
}

.pinned-gist-blob-num:hover {
    color: var(--color-fg-muted);
    cursor: default
}

@media print {
    #serverstats,.Header-old,.Header,.header-search,.reponav,.comment::before,.comment::after,.footer,.pagehead-actions,.discussion-timeline-actions,.timeline-comment-actions,.timeline-new-comment,.thread-subscription-status,.lock-toggle-link,.header,.pr-review-tools,.file-actions,.js-expandable-line,.toolbar-shadow,.gh-header-sticky,.pr-toolbar.is-placeholder,.language-color {
        display: none !important
    }

    .repository-lang-stats-graph {
        height: 0
    }

    .btn:not(.btn-outline) {
        color: var(--color-fg-default) !important;
        background: none
    }

    p,.comment h2 {
        page-break-inside: avoid
    }

    .markdown-body h2 {
        page-break-after: avoid
    }

    .topic-tag {
        padding: 0
    }

    .topic-tag::before {
        margin-right: -2px;
        content: "#"
    }

    .blob-num {
        border-right: 2px solid var(--color-border-default)
    }

    .blob-num-deletion {
        border-right-color: var(--color-danger-emphasis)
    }

    .blob-num-addition {
        border-right-color: var(--color-success-emphasis)
    }

    .blob-code-addition .x {
        border-bottom: 2px solid var(--color-success-emphasis);
        border-radius: 0
    }

    .blob-code-deletion .x {
        border-bottom: 2px solid var(--color-danger-emphasis);
        border-radius: 0
    }

    .pr-toolbar.is-stuck {
        position: static !important;
        width: 100% !important
    }

    .diffstat-block-neutral {
        border: 4px solid var(--color-border-default)
    }

    .diffstat-block-deleted {
        border: 4px solid var(--color-danger-emphasis)
    }

    .diffstat-block-added {
        border: 4px solid var(--color-success-emphasis)
    }

    .State {
        color: var(--color-fg-default);
        background: none;
        border: 1px solid var(--color-border-default);
        border-color: none
    }

    .State--open {
        color: var(--color-success-fg);
        border: 1px solid #2cbe4e
    }

    .State--merged {
        color: var(--color-done-fg);
        border: 1px solid var(--color-done-emphasis)
    }

    .State--closed {
        color: var(--color-danger-fg);
        border: 1px solid var(--color-danger-emphasis)
    }

    .markdown-body pre>code {
        white-space: pre-wrap
    }
}

.projects-splash-dialog {
    position: fixed;
    top: 0;
    right: auto;
    left: 50%;
    z-index: 999;
    width: 90vw;
    max-width: 700px;
    max-height: 80vh;
    margin: 10vh auto;
    transform: translateX(-50%)
}

@media(min-width: 544px) {
    .projects-splash-dialog {
        margin:20vh auto
    }
}

.projects-splash-banner {
    background-image: url("/images/modules/memexes/projects-beta-banner-mobile.png");
    background-repeat: no-repeat;
    background-position: left;
    background-size: cover
}

@media(min-width: 768px) {
    .projects-splash-banner {
        background-image:url("/images/modules/memexes/projects-beta-banner.png")
    }
}

.projects-splash-banner p {
    max-width: 100%
}

@media(min-width: 768px) {
    .projects-splash-banner p {
        max-width:55%
    }
}

@media(min-width: 768px) {
    [data-color-mode=light][data-light-theme*=dark] .projects-splash-banner,[data-color-mode=dark][data-dark-theme*=dark] .projects-splash-banner {
        background-image:url("/images/modules/memexes/projects-beta-banner-dark.png")
    }
}

@media(prefers-color-scheme: light)and (min-width: 768px) {
    [data-color-mode=auto][data-light-theme*=dark] .projects-splash-banner {
        background-image:url("/images/modules/memexes/projects-beta-banner-dark.png")
    }
}

@media(prefers-color-scheme: dark)and (min-width: 768px) {
    [data-color-mode=auto][data-dark-theme*=dark] .projects-splash-banner {
        background-image:url("/images/modules/memexes/projects-beta-banner-dark.png")
    }
}

.project-description p:last-child {
    margin-bottom: 0 !important
}

.project-full-screen .pagehead,.project-full-screen .hide-full-screen,.project-full-screen .Header-old,.project-full-screen .Header {
    display: block
}

@media(min-width: 544px) {
    .project-full-screen .pagehead,.project-full-screen .hide-full-screen,.project-full-screen .Header-old,.project-full-screen .Header {
        display:none
    }
}

.project-full-screen .project-header {
    padding-top: 10px;
    padding-bottom: 10px;
    color: rgba(255,255,255,.75)
}

@media(min-width: 544px) {
    .project-full-screen .project-header {
        background-color:var(--color-project-header-bg)
    }
}

.project-full-screen .project-header:focus {
    outline: none
}

.project-full-screen .project-header .project-header-link {
    color: rgba(255,255,255,.75) !important
}

.project-full-screen .project-header .project-header-link:hover {
    color: #fff !important
}

.project-full-screen .project-header .pending-cards-status {
    border-color: var(--color-neutral-emphasis)
}

@media(min-width: 544px) {
    .project-full-screen .card-filter-input {
        color:#fff;
        background-color: rgba(255,255,255,.125);
        border: 0;
        outline: none;
        box-shadow: none
    }

    .project-full-screen .card-filter-input::placeholder {
        color: rgba(255,255,255,.7)
    }

    .project-full-screen .card-filter-input:focus {
        background-color: rgba(255,255,255,.175)
    }
}

.project-header {
    background-color: var(--color-canvas-inset);
    outline: none
}

@media(min-width: 544px) {
    .project-header {
        background-color:var(--color-canvas-default)
    }
}

.project-header .select-menu-modal-holder {
    z-index: 500
}

.project-updated-message {
    top: 6px;
    left: 50%;
    z-index: 50;
    transform: translate(-50%, 0)
}

.pending-cards-status {
    top: -2px;
    right: -9px;
    width: 14px;
    height: 14px;
    background-image: linear-gradient(#54a3ff, #006eed);
    background-clip: padding-box;
    border: 2px solid var(--color-canvas-default)
}

.project-columns {
    overflow-x: auto
}

@media(min-width: 544px) {
    .project-columns-container {
        height:0;
        overflow-x: visible !important
    }
}

.project-column {
    min-width: 100%;
    max-width: 100%;
    background-color: var(--color-canvas-inset);
    border-width: 0 !important;
    border-radius: 0 !important
}

.project-column:focus {
    outline: none
}

@media(min-width: 544px) {
    .project-column {
        min-width:355px;
        max-width: 355px;
        border-width: 1px !important;
        border-radius: 6px !important
    }

    .project-column:focus {
        border-color: var(--color-accent-emphasis) !important;
        box-shadow: var(--color-btn-shadow-input-focus)
    }
}

.project-column.moving {
    background-color: var(--color-accent-subtle) !important;
    box-shadow: var(--color-btn-shadow-input-focus);
    transform: translateX(4px) translateY(-4px)
}

.new-project-column {
    width: 315px;
    border-color: var(--color-border-default) !important
}

.project-search-form .loading-indicator {
    top: 21px;
    right: 21px;
    display: none
}

.project-search-form.loading .loading-indicator {
    display: inline-block
}

.sortable-ghost {
    background-color: var(--color-canvas-subtle);
    opacity: .5
}

.project-card {
    background-color: var(--color-canvas-overlay)
}

.project-card .project-reference-markdown>p,.project-card:last-child {
    margin-bottom: 0 !important
}

.project-card:first-child {
    margin-top: 8px !important
}

@media(min-width: 544px) {
    .project-card:first-child {
        margin-top:3px !important
    }
}

.project-card ul,.project-card ol {
    margin-bottom: 8px;
    margin-left: 16px
}

.project-card blockquote {
    padding: 0 .75em;
    color: var(--color-fg-muted);
    border-left: .25em solid var(--color-border-default)
}

.project-card .contains-task-list {
    margin-left: 24px
}

.project-card:hover {
    border-color: var(--color-border-default) !important;
    box-shadow: 0 1px 3px rgba(106,115,125,.3) !important
}

.project-card:focus {
    outline: none
}

@media(min-width: 544px) {
    .project-card:focus {
        border-color:var(--color-accent-emphasis) !important;
        box-shadow: var(--color-btn-shadow-input-focus) !important
    }
}

.project-card.moving {
    background-color: var(--color-accent-subtle) !important;
    box-shadow: var(--color-btn-shadow-input-focus) !important;
    transform: translateX(4px) translateY(0)
}

.archived-project-cards-pane .project-card .archived-header {
    display: flex !important;
    color: var(--color-fg-default)
}

.archived-project-cards-pane .project-card .archive-dropdown-item {
    display: none
}

.issue-card.draggable {
    cursor: move
}

.issue-card .AvatarStack:hover .from-avatar {
    margin-right: -4px
}

.issue-card pre {
    word-wrap: break-word;
    white-space: pre-wrap
}

@keyframes show-pane {
    0% {
        transform: translateX(390px)
    }

    100% {
        transform: translateX(0)
    }
}

.project-pane {
    z-index: 1;
    background-color: var(--color-project-sidebar-bg);
    background-clip: padding-box;
    box-shadow: -3px 0 5px rgba(36,41,46,.05)
}

@media(min-width: 544px) {
    .project-pane {
        position:absolute !important;
        width: 360px !important;
        height: auto !important;
        animation: show-pane .2s cubic-bezier(0, 0, 0, 1)
    }
}

.project-pane .redacted-activity {
    cursor: help;
    border-bottom: 1px dotted var(--color-border-default)
}

.project-pane .project-body-markdown p:last-child,.project-pane .project-body-markdown ul:last-child,.project-pane .project-body-markdown ol:last-child {
    margin-bottom: 0
}

@media(min-width: 544px) {
    .project-pane sidebar-memex-input details-menu {
        position:relative;
        right: auto !important
    }
}

.project-pane-close {
    color: var(--color-fg-muted)
}

.project-pane-close:hover {
    color: var(--color-fg-default)
}

.project-note-form textarea {
    resize: vertical
}

.card-menu-container .dropdown-menu,.column-menu-container .dropdown-menu {
    min-width: 180px
}

.card-octicon {
    top: 6px;
    left: 10px
}

.card-note-octicon {
    top: 8px
}

.is-sending .auto-search-group .chooser-spinner {
    top: 15px;
    right: 21px;
    left: auto
}

.card-filter-input {
    width: 0
}

@media(min-width: 544px) {
    .card-filter-input {
        width:300px
    }
}

.card-filter-autocomplete-dropdown {
    z-index: 500;
    float: none;
    min-width: 240px;
    max-height: 270px;
    cursor: pointer
}

.card-filter-autocomplete-dropdown [aria-selected=true],.card-filter-autocomplete-dropdown .navigation-focus {
    color: var(--color-fg-on-emphasis) !important;
    background-color: var(--color-accent-emphasis);
    border-radius: 6px
}

.card-filter-autocomplete-dropdown [aria-selected=true] .autocomplete-text-qualifier,.card-filter-autocomplete-dropdown .navigation-focus .autocomplete-text-qualifier {
    color: var(--color-fg-on-emphasis) !important
}

.projects-reset-query:hover .projects-reset-query-icon {
    color: var(--color-fg-on-emphasis) !important;
    background-color: var(--color-accent-emphasis)
}

.projects-reset-query-icon {
    width: 18px;
    height: 18px;
    padding: 1px;
    background-color: var(--color-fg-muted)
}

.project-small-menu-dropdown::before,.project-small-menu-dropdown::after {
    display: none
}

.project-header-controls,.project-header-search {
    flex-grow: 1
}

@media(min-width: 1012px) {
    .project-header-controls,.project-header-search {
        flex-grow:0
    }
}

.project-header-subnav-search {
    flex-grow: 1
}

@media(min-width: 544px) {
    .project-header-subnav-search {
        flex-grow:0
    }
}

.project-page .application-main {
    flex-shrink: 0 !important
}

@media(min-width: 544px) {
    .project-page .application-main {
        flex-shrink:1 !important
    }
}

.project-edit-mode .column-menu-container,.project-edit-mode .column-menu-item {
    display: none !important
}

.project-edit-mode .project-move-actions {
    display: flex !important
}

.push-board-over {
    padding-right: 0 !important;
    transition: all .2s ease
}

@media(min-width: 544px) {
    .push-board-over {
        padding-right:360px !important
    }
}

.project-touch-scrolling {
    -webkit-overflow-scrolling: touch
}

.projects-comment-form .comment-md-support-link {
    float: none;
    width: 100%;
    text-align: center
}

.projects-comment-form .comment-form-actions {
    width: 100%;
    padding: 8px 16px;
    margin: 4px 0 !important
}

.projects-comment-form .comment-form-actions button {
    width: 100%;
    margin: 4px 0 !important
}

.projects-comment-form .comment-form-head {
    padding: 0 !important;
    margin: 0 !important;
    border-bottom: 0
}

.projects-comment-form .comment-form-head .tabnav-tabs {
    padding: 8px 8px 0
}

.projects-comment-form .comment-form-head .toolbar-commenting {
    width: 100%;
    padding-top: 4px;
    text-align: center;
    background-color: var(--color-canvas-default);
    border-top: 1px solid var(--color-border-default)
}

.projects-comment-form .comment-form-head::after {
    display: block;
    clear: both;
    content: " "
}

.projects-comment-form .comment-form-textarea {
    height: 250px !important
}

.projects-comment-form .preview-content {
    margin: 0;
    border-top: 1px solid var(--color-border-default)
}

.projects-comment-form .preview-content .comment-body {
    padding: 16px
}

.project-issue-body-wrapper {
    max-height: 200px;
    overflow: hidden
}

.Details--on .project-issue-body-wrapper {
    max-height: none;
    overflow: visible
}

.project-issue-body-blur {
    height: 32px;
    background: linear-gradient(to top, var(--color-project-gradient-in), var(--color-project-gradient-out))
}

.Details--on .project-issue-body-blur {
    height: 0
}

.project-comment-title-hover .comment-action,.project-comment-body-hover .comment-action {
    opacity: 0
}

.project-comment-title-hover:hover .comment-action,.project-comment-body-hover:hover .comment-action {
    opacity: 1
}

.project-comment-body-reaction .timeline-comment-action {
    padding: 4px 8px
}

.project-comment-reactions .reaction-summary-item {
    padding: 8px
}

.project-comment-reactions .reaction-summary-item g-emoji {
    margin: 0 !important
}

.project-name-hover .project-name-edit-action {
    opacity: 0
}

.project-name-hover:hover .project-name-edit-action {
    opacity: 1
}

.vcard-names {
    line-height: 1
}

.vcard-fullname {
    font-size: 26px;
    line-height: 1.25
}

.vcard-username {
    font-size: 20px;
    font-style: normal;
    font-weight: 300;
    line-height: 24px;
    color: var(--color-fg-muted)
}

.vcard-details {
    list-style: none
}

.vcard-details .css-truncate.css-truncate-target {
    width: 100%;
    max-width: 100%
}

.vcard-details .css-truncate.css-truncate-target div {
    overflow: hidden;
    text-overflow: ellipsis
}

.vcard-detail {
    padding-left: 24px;
    font-size: 14px
}

.vcard-detail .octicon {
    float: left;
    width: 16px;
    margin-top: 3px;
    margin-left: -24px;
    color: var(--color-fg-muted);
    text-align: center
}

.user-profile-bio {
    overflow: hidden;
    font-size: 14px
}

.form-group .form-control.user-profile-bio-field {
    width: 440px;
    height: 5.35em;
    min-height: 0
}

.user-profile-bio-field-container,.user-profile-company-field-container {
    position: relative
}

.user-profile-bio-message {
    margin: 5px 0 0;
    font-size: 12px;
    color: var(--color-fg-default)
}

.vcard-detail {
    padding-left: 22px
}

.vcard-detail .octicon {
    margin-left: -22px
}

.user-profile-sticky-bar {
    position: fixed;
    top: 0;
    z-index: 90;
    width: 233px;
    word-break: break-all;
    pointer-events: none;
    opacity: 0;
    transition: .2s
}

.user-profile-sticky-bar.is-stuck {
    pointer-events: auto;
    opacity: 1
}

.user-profile-mini-vcard {
    position: relative;
    top: 1px;
    z-index: 110;
    height: 54px
}

.user-profile-mini-avatar {
    width: 32px
}

.mini-follow-button {
    padding: 0 8px;
    line-height: 1.5;
    opacity: 0;
    transition: opacity .2s
}

.is-follow-stuck .mini-follow-button {
    opacity: 1
}

.user-profile-following-container .user-following-container.on .follow,.user-profile-following-container .user-following-container .unfollow {
    display: none
}

.user-profile-following-container .user-following-container .follow,.user-profile-following-container .user-following-container.on .unfollow {
    display: block
}

.vcard-names-container {
    position: sticky;
    top: 0
}

.vcard-names-container.is-stuck {
    pointer-events: none
}

.vcard-names-container.is-stuck .vcard-names {
    opacity: 0
}

.vcard-names-container.is-stuck::after {
    opacity: 1
}

.user-profile-nav {
    background-color: var(--color-canvas-default);
    border-bottom: 1px solid var(--color-border-default);
    box-shadow: none
}

.user-profile-nav.is-stuck {
    z-index: 90
}

.user-profile-nav .UnderlineNav-item {
    line-height: 20px
}

.pinned-item-list-item .pinned-item-handle {
    color: var(--color-fg-muted)
}

.pinned-item-list-item .pinned-item-handle:hover {
    cursor: grab
}

.pinned-item-list-item.is-dragging,.pinned-item-list-item.is-dragging .pinned-item-handle {
    cursor: grabbing
}

.pinned-item-list-item.is-dragging {
    background-color: var(--color-accent-subtle)
}

.pinned-item-list-item.sortable-ghost {
    background-color: var(--color-accent-subtle);
    opacity: 0
}

.pinned-item-list-item.empty {
    border-style: dashed;
    border-width: 1px;
    align-items: center;
    justify-content: center
}

.pinned-item-list-item-content {
    display: flex;
    width: 100%;
    flex-direction: column
}

.pinned-item-desc {
    flex: 1 0 auto
}

.pinned-item-meta {
    display: inline-block
}

.pinned-item-meta+.pinned-item-meta {
    margin-left: 16px
}

.user-repo-search-results-summary {
    white-space: normal
}

.pull-request-tab-content {
    display: none
}

.pull-request-tab-content.is-visible {
    display: block
}

.discussion-timeline p.explain {
    margin: 0;
    font-size: 12px
}

.pull-request-ref-restore {
    display: none
}

.pull-request-ref-restore-text {
    display: block
}

.pull-discussion-timeline.is-pull-restorable .pull-request-ref-restore.last {
    display: block
}

.files-bucket {
    margin-bottom: 15px
}

.full-width .diffbar .container,.split-diff .diffbar .container {
    padding-right: 0;
    padding-left: 0
}

.stale-files-tab {
    float: left;
    padding: 5px 10px;
    margin-top: -5px;
    margin-bottom: -5px;
    color: var(--color-severe-fg);
    background-color: var(--color-severe-subtle);
    border-radius: 6px
}

.stale-files-tab-link {
    font-weight: 600;
    color: inherit
}

.pr-toolbar {
    position: sticky;
    top: 0;
    z-index: 29;
    height: 60px;
    padding: 0 16px;
    margin: -16px -16px 0
}

.pr-toolbar .subset-files-tab {
    float: left;
    padding: 0 8px;
    font-size: 13px;
    border-radius: 6px
}

.pr-toolbar .float-right .diffbar-item {
    margin-right: 0
}

.pr-toolbar .float-right .diffbar-item+.diffbar-item {
    margin-left: 20px
}

.pr-toolbar.is-stuck {
    height: 60px;
    background-color: var(--color-canvas-default)
}

.toolbar-shadow {
    position: fixed;
    top: 60px;
    right: 0;
    left: 0;
    z-index: 28;
    display: none;
    height: 5px;
    background: linear-gradient(rgba(0, 0, 0, 0.075), rgba(0, 0, 0, 0.001)) repeat-x 0 0;
    border-top: 1px solid rgba(0,0,0,.15)
}

.is-stuck+.toolbar-shadow {
    display: block
}

.files-next-bucket .file,.files-next-bucket .full-commit {
    margin-top: 0;
    margin-bottom: 20px
}

.diffbar {
    background-color: var(--color-canvas-default)
}

.diffbar .show-if-stuck {
    display: none
}

.diffbar .container {
    width: auto
}

.diffbar .table-of-contents {
    margin-bottom: 0
}

.diffbar .table-of-contents ol {
    margin-bottom: -15px
}

.diffbar .table-of-contents li {
    border-top: 1px solid var(--color-border-muted)
}

.diffbar .table-of-contents li:first-child {
    border-top: 0
}

.diffbar [role^=menuitem]:focus:not(.is-range-selected) .text-emphasized,.diffbar [role^=menuitem]:hover:not(.is-range-selected) .text-emphasized {
    color: var(--color-fg-on-emphasis)
}

.is-stuck .diffbar .show-if-stuck {
    display: block
}

.is-stuck .diffbar .diffstat {
    display: none
}

.is-stuck .diffbar .stale-files-tab {
    margin-top: -8px
}

.diffbar-range-menu .select-menu-modal {
    width: 380px
}

.diffbar-range-menu .css-truncate-target {
    max-width: 280px
}

.diffbar-range-menu .select-menu-item:not(.select-menu-action) {
    padding: 8px 10px
}

.diffbar-range-menu .emoji {
    vertical-align: bottom
}

.diffbar-range-menu .in-range:not(.is-range-selected) {
    background-color: var(--color-accent-subtle);
    border-bottom-color: var(--color-border-subtle)
}

.diffbar-range-menu .in-range:focus:not(.is-range-selected),.diffbar-range-menu .in-range:hover:not(.is-range-selected) {
    background-color: var(--color-accent-emphasis)
}

.diffbar-range-menu .is-range-selected {
    color: var(--color-fg-default);
    cursor: default;
    background-color: var(--color-attention-subtle);
    border-bottom-color: rgba(38,44,49,.15);
    outline: none
}

.diffbar-range-menu .is-range-selected .text-emphasized {
    color: var(--color-attention-fg)
}

.diffbar-range-menu .is-range-selected .description {
    color: inherit
}

.diffbar-range-menu .is-last-in-range {
    cursor: pointer;
    background-color: var(--color-attention-subtle)
}

.diffbar-item {
    float: left;
    margin-left: 16px;
    font-size: 13px;
    vertical-align: middle
}

.conflict-resolver .conflict-loader,.conflict-resolver.loading .resolve-file-form {
    display: none
}

.conflict-resolver .resolve-file-form,.conflict-resolver.loading .conflict-loader {
    display: block
}

.conflict-resolver.loading {
    position: relative;
    height: calc(100vh + 51px);
    padding-top: 50px;
    border: 1px solid var(--color-border-default)
}

.conflict-resolver .file-header {
    padding: 9px 10px
}

.conflicts-nav {
    height: 100vh;
    -ms-overflow-style: -ms-autohiding-scrollbar;
    border-width: 0 0 1px
}

.conflict-nav-item .discussion-item-icon {
    display: none
}

.conflict-nav-item.resolved .discussion-item-icon {
    display: block;
    margin-left: -5px
}

.conflict-nav-item.resolved .octicon-file-code {
    display: none
}

.conflict-nav-item.selected::before {
    border-radius: 0
}

.conflict-nav-item .octicon {
    width: 22px
}

.conflict-nav-item .css-truncate-target {
    max-width: 80%
}

.is-resolved .file-actions {
    display: none
}

.is-resolved .resolved-notice {
    display: block
}

.resolved-notice {
    display: none
}

.add-comment-label,.review-cancel-button,.is-review-pending .start-review-label {
    display: none
}

.start-review-label,.is-review-pending .add-comment-label {
    display: inline-block
}

.is-review-pending .review-simple-reply-button {
    display: none
}

.is-review-pending .review-cancel-button {
    display: block
}

.is-review-pending .review-title-with-count {
    display: block
}

.review-title-with-count {
    display: none
}

.pr-review-tools .Counter {
    display: none
}

.is-review-pending .pr-review-tools .Counter {
    display: inline-block
}

.pr-review-tools .previewable-comment-form .comment-form-head {
    border-top-left-radius: 0 !important;
    border-top-right-radius: 0 !important
}

.pull-request-suggested-changes-menu {
    top: 30px;
    left: initial;
    z-index: 99;
    width: 700px;
    padding: 8px;
    margin: 0;
    border: 1px solid var(--color-border-subtle);
    transform: initial
}

.pull-request-suggested-changes-menu::after,.pull-request-suggested-changes-menu::before {
    display: none
}

.pull-request-suggested-changes-menu .select-menu-header {
    border-radius: 6px 6px 0 0
}

.pull-request-suggested-changes-menu .form-actions {
    border-radius: 0 0 6px 6px
}

.pull-request-suggested-changes-menu .preview-content {
    max-height: 365px
}

.pull-request-suggested-changes-menu .comment-body {
    border-bottom: 0 !important
}

.review-comment-contents {
    margin-left: 44px
}

.review-comment::after,.review-comment-loader::after,.review-comment.is-comment-editing::after {
    position: absolute;
    top: 31px;
    left: 29px;
    z-index: -1;
    width: 3px;
    height: 100%;
    content: "";
    background-color: var(--color-canvas-subtle)
}

.review-comment {
    position: relative;
    padding: 8px 16px;
    color: var(--color-fg-default)
}

.review-comment:first-child {
    padding-top: 16px
}

.review-comment:last-child {
    padding-bottom: 16px
}

.review-comment .comment-body,.review-comment .comment-reactions {
    padding: 0
}

.review-comment .comment-body {
    padding-top: 4px
}

.review-comment .comment-body .suggested-change-form-container:nth-last-of-type(2) {
    margin-bottom: 0 !important
}

.review-comment .comment-reactions {
    margin-top: 5px;
    border-top: 0 !important
}

.review-comment .comment-reactions .add-reaction-btn {
    padding: 4px 10px
}

.review-comment .comment-reactions.has-reactions {
    margin-top: 12px
}

.review-comment .show-more-popover.dropdown-menu-sw {
    right: -5px;
    margin-top: 5px
}

.review-comment .reaction-summary-item:not(.add-reaction-btn) {
    padding: 0 8px;
    font-size: 12px;
    line-height: 26px;
    border: 1px solid var(--color-border-default, #d2dff0);
    border-radius: 6px
}

.review-comment .reaction-summary-item:not(.add-reaction-btn) .emoji {
    font-size: 16px;
    vertical-align: sub
}

.review-comment .reaction-summary-item:not(.add-reaction-btn)+.reaction-summary-item {
    margin-left: 8px
}

.review-comment:last-child::after,.review-comment:last-child .review-comment-contents::after {
    display: none
}

.review-comment .timeline-comment-action {
    padding: 0 5px
}

.review-comment .is-comment-editing {
    position: relative;
    background-color: var(--color-canvas-default);
    border: 1px solid var(--color-border-default);
    border-radius: 6px
}

.review-comment .is-comment-editing::after {
    top: 100%;
    bottom: 0;
    left: 19px;
    height: 20px
}

.review-comment .is-comment-editing .timeline-comment-actions,.review-comment .is-comment-editing .edit-comment-hide {
    display: none
}

.review-comment .is-comment-editing .previewable-comment-form {
    display: block
}

.review-comment.is-comment-loading .previewable-comment-form {
    opacity: .5
}

.timeline-comment.is-comment-editing .discussion-item-header {
    display: none
}

.review-thread-reply {
    padding: 8px 16px;
    background-color: var(--color-canvas-subtle);
    border-top: 1px solid var(--color-border-default);
    border-radius: 0 0 6px 6px
}

.review-thread-reply .inline-comment-form {
    margin: -8px -16px;
    background-color: var(--color-canvas-default);
    border: 0
}

.review-thread-reply-button {
    display: inline-block;
    min-height: 28px;
    padding: 3px 8px;
    margin-left: 8px;
    cursor: text
}

.review-summary-form-wrapper {
    position: relative;
    display: none;
    margin-bottom: 24px;
    margin-left: -19px;
    background-color: var(--color-canvas-default);
    border: 1px solid var(--color-border-default);
    border-radius: 6px
}

.is-pending .review-summary-form-wrapper,.is-comment-editing .review-summary-form-wrapper {
    display: block
}

.is-pending .review-summary-form-wrapper {
    border-color: var(--color-attention-emphasis)
}

.tooltipped-left::after {
    right: auto;
    left: 0
}

.tooltipped-left::before {
    right: auto;
    left: 0
}

.pulse-authors-graph {
    position: relative;
    height: 150px
}

.pulse-authors-graph>svg {
    width: 100%
}

.pulse-authors-graph .bar rect {
    fill: var(--color-severe-emphasis);
    fill-opacity: .7
}

.pulse-authors-graph .bar rect:hover {
    fill-opacity: 1
}

.readme.contributing>div {
    max-height: 250px;
    overflow: auto
}

.readme .markdown-body,.readme .plain {
    word-wrap: break-word
}

.readme .plain pre {
    font-size: 14px;
    white-space: pre-wrap
}

.file .readme table[data-table-type=yaml-metadata] {
    font-size: 12px;
    line-height: 1
}

.file .readme table[data-table-type=yaml-metadata] table {
    margin: 0
}

.Label--draft {
    color: var(--color-danger-fg);
    border-color: var(--color-danger-emphasis)
}

.Label--prerelease {
    color: var(--color-severe-fg);
    border-color: var(--color-severe-emphasis)
}

.uploaded-files {
    border-top-left-radius: 6px;
    border-top-right-radius: 6px
}

.uploaded-files.not-populated+.drop-target .drop-target-label {
    border-top: 1px var(--color-border-default);
    border-top-left-radius: 6px;
    border-top-right-radius: 6px
}

.uploaded-files.is-populated {
    border: 1px solid var(--color-border-default);
    border-bottom-color: var(--color-border-muted)
}

.uploaded-files.is-populated+.drop-target .drop-target-label {
    border-top: 0;
    border-top-left-radius: 0;
    border-top-right-radius: 0
}

.uploaded-files>li.delete {
    background: var(--color-canvas-default)
}

.uploaded-files>li.delete:nth-child(2) {
    border-top-left-radius: 6px;
    border-top-right-radius: 6px
}

.uploaded-files>li.delete .delete-pending {
    display: block !important
}

.uploaded-files>li.delete .live {
    display: none !important
}

.uploaded-files>li:nth-child(2) {
    border-top: 0 !important
}

.uploaded-files .remove:hover {
    color: var(--color-danger-fg) !important
}

.upload-progress {
    height: 3px;
    margin-top: 3px;
    border-radius: 30px
}

.upload-progress .upload-meter {
    background-image: linear-gradient(#8dd2f7, #58b8f4);
    border-radius: 30px
}

@media(min-width: 768px) {
    .release-main-section {
        border-left:2px solid var(--color-border-default)
    }
}

.release-feed-inline-last-p p:last-of-type {
    display: inline
}

.manifest-commit-form {
    margin-top: 20px
}

.repo-file-upload-outline {
    width: 100%;
    height: 100%
}

.repo-file-upload-target {
    position: relative
}

.repo-file-upload-target.is-uploading .repo-file-upload-text.initial-text,.repo-file-upload-target.is-failed .repo-file-upload-text.initial-text,.repo-file-upload-target.is-default .repo-file-upload-text.initial-text {
    display: none
}

.repo-file-upload-target.is-uploading .repo-file-upload-text.alternate-text,.repo-file-upload-target.is-failed .repo-file-upload-text.alternate-text,.repo-file-upload-target.is-default .repo-file-upload-text.alternate-text {
    display: block
}

.repo-file-upload-target.is-uploading.dragover .repo-file-upload-text,.repo-file-upload-target.is-failed.dragover .repo-file-upload-text,.repo-file-upload-target.is-default.dragover .repo-file-upload-text {
    display: none
}

.repo-file-upload-target .repo-file-upload-text.initial-text {
    display: block
}

.repo-file-upload-target .repo-file-upload-text.alternate-text {
    display: none
}

.repo-file-upload-target .repo-file-upload-text,.repo-file-upload-target .repo-file-upload-drop-text {
    margin-bottom: 5px
}

.repo-file-upload-target .repo-file-upload-choose {
    display: inline-block;
    margin-top: 0;
    font-size: 18px
}

.repo-file-upload-target .manual-file-chooser {
    margin-left: 0
}

.repo-file-upload-target .repo-file-upload-outline {
    position: absolute;
    top: 3%;
    left: 1%;
    width: 98%;
    height: 94%
}

.repo-file-upload-target.is-failed .repo-file-upload-outline,.repo-file-upload-target.is-bad-file .repo-file-upload-outline,.repo-file-upload-target.is-too-big .repo-file-upload-outline,.repo-file-upload-target.is-too-many .repo-file-upload-outline,.repo-file-upload-target.is-empty .repo-file-upload-outline {
    height: 85%
}

.repo-file-upload-target.dragover .repo-file-upload-text {
    display: none
}

.repo-file-upload-target.dragover .repo-file-upload-choose {
    visibility: hidden
}

.repo-file-upload-target.dragover .repo-file-upload-drop-text {
    display: block
}

.repo-file-upload-target.dragover .repo-file-upload-outline {
    border: 6px dashed var(--color-border-default);
    border-radius: 6px
}

.repo-file-upload-target .repo-file-upload-drop-text {
    display: none
}

.repo-file-upload-errors {
    display: none
}

.repo-file-upload-errors .error {
    display: none
}

.is-failed .repo-file-upload-errors,.is-bad-file .repo-file-upload-errors,.is-too-big .repo-file-upload-errors,.is-too-many .repo-file-upload-errors,.is-hidden-file .repo-file-upload-errors,.is-empty .repo-file-upload-errors {
    position: absolute;
    right: 0;
    bottom: 0;
    left: 0;
    display: block;
    padding: 5px 8px;
    line-height: 1.5;
    text-align: left;
    background-color: var(--color-canvas-default);
    border-top: 1px solid var(--color-border-default);
    border-bottom-right-radius: 6px;
    border-bottom-left-radius: 6px
}

.is-file-list .repo-file-upload-errors {
    border-bottom-right-radius: 0;
    border-bottom-left-radius: 0
}

.is-failed .repo-file-upload-errors .failed-request,.is-bad-file .repo-file-upload-errors .failed-request {
    display: inline-block
}

.is-too-big .repo-file-upload-errors .too-big {
    display: inline-block
}

.is-hidden-file .repo-file-upload-errors .hidden-file {
    display: inline-block
}

.is-too-many .repo-file-upload-errors .too-many {
    display: inline-block
}

.is-empty .repo-file-upload-errors .empty {
    display: inline-block
}

.repo-file-upload-tree-target {
    position: fixed;
    top: 0;
    left: 0;
    z-index: 1000;
    width: 100%;
    height: 100%;
    padding: 12px;
    color: var(--color-fg-default);
    visibility: hidden;
    background: var(--color-canvas-default);
    opacity: 0;
    transition: visibility .2s,opacity .2s
}

.repo-file-upload-tree-target .repo-file-upload-outline {
    border: 6px dashed var(--color-border-default);
    border-radius: 6px
}

.dragover .repo-file-upload-tree-target {
    visibility: visible;
    opacity: 1
}

.dragover .repo-file-upload-tree-target .repo-file-upload-slate {
    top: 50%;
    opacity: 1
}

.repo-file-upload-slate {
    position: absolute;
    top: 50%;
    width: 100%;
    text-align: center;
    transform: translateY(-50%)
}

.repo-file-upload-slate h2 {
    margin-top: 5px
}

.repo-upload-breadcrumb {
    margin-bottom: 18px
}

.labels-list .blankslate {
    display: none
}

.labels-list .table-list-header {
    display: block
}

.labels-list.is-empty .blankslate {
    display: block
}

.labels-list.is-empty .table-list-header {
    display: none
}

.label-select-menu-item .g-emoji {
    font-size: 12px;
    line-height: 1;
    vertical-align: baseline
}

.label-edit::before {
    display: table;
    content: ""
}

.label-edit::after {
    display: table;
    clear: both;
    content: ""
}

.label-edit label {
    display: block;
    margin-bottom: 8px
}

.label-edit .error {
    float: left;
    margin-top: 8px;
    margin-left: 10px;
    color: var(--color-danger-fg)
}

.label-edit.loading {
    display: block
}

.label-characters-remaining {
    color: var(--color-fg-muted)
}

.starred .starred-button-icon {
    color: var(--color-scale-yellow-2)
}

.user-lists-menu-action {
    color: var(--color-fg-default)
}

.user-lists-menu-action:hover:not(:disabled) {
    color: var(--color-fg-default);
    background-color: var(--color-canvas-subtle)
}

.user-lists-menu-action:focus:not(:disabled) {
    color: var(--color-fg-default);
    outline: 2px solid var(--color-accent-emphasis);
    outline-offset: 2px
}

.repo-list {
    position: relative
}

.repo-list-item {
    position: relative;
    padding-top: 30px;
    padding-bottom: 30px;
    list-style: none;
    border-bottom: 1px solid var(--color-border-muted)
}

.repo-list-item-with-avatar {
    padding-left: 42px
}

.repo-list-item-hanging-avatar {
    float: left;
    margin-left: -42px
}

.mini-repo-list-item {
    position: relative;
    display: block;
    padding: 6px 64px 6px 30px;
    font-size: 14px;
    border-top: 1px solid var(--color-border-default)
}

.mini-repo-list-item:hover {
    text-decoration: none
}

.mini-repo-list-item:hover .repo,.mini-repo-list-item:hover .owner {
    text-decoration: underline
}

.mini-repo-list-item .repo-icon {
    float: left;
    margin-top: 2px;
    margin-left: -20px;
    color: var(--color-fg-muted)
}

.mini-repo-list-item .repo-and-owner {
    max-width: 220px
}

.mini-repo-list-item .owner {
    max-width: 110px
}

.mini-repo-list-item .repo {
    font-weight: 600
}

.mini-repo-list-item .stars {
    position: absolute;
    top: 0;
    right: 10px;
    margin-top: 6px;
    font-size: 12px;
    color: var(--color-fg-muted)
}

.mini-repo-list-item .repo-description {
    display: block;
    max-width: 100%;
    font-size: 12px;
    line-height: 21px;
    color: var(--color-fg-muted)
}

.private .mini-repo-list-item {
    background-color: var(--color-attention-subtle)
}

.private .mini-repo-list-item .repo-icon {
    color: var(--color-attention-fg)
}

.filter-bar {
    padding: 10px;
    background-color: var(--color-canvas-subtle);
    border-bottom: 1px solid var(--color-border-muted)
}

.filter-bar::before {
    display: table;
    content: ""
}

.filter-bar::after {
    display: table;
    clear: both;
    content: ""
}

.user-repos .filter-bar {
    text-align: center
}

.form-group.errored label .commit-ref {
    background-color: var(--color-danger-subtle)
}

.repo-menu-item:not([aria-current=page])+.repo-sub-menu {
    display: none
}

.feature-callout .new-label-hidden {
    display: none
}

.feature-callout .new-feature-label.new-label-hidden {
    display: inline
}

.repository-og-image {
    width: 100%;
    max-width: 640px;
    height: 320px;
    object-fit: cover;
    object-position: center;
    background-repeat: no-repeat;
    background-position: center;
    background-size: cover
}

.timeout {
    width: auto;
    height: 300px;
    padding: 0;
    margin: 20px 0;
    background-color: transparent;
    border: 0
}

.timeout h3 {
    padding-top: 100px;
    color: var(--color-fg-muted)
}

.repo-language-color {
    position: relative;
    top: 1px;
    display: inline-block;
    width: 12px;
    height: 12px;
    border: 1px solid var(--color-primer-border-contrast);
    border-radius: 50%
}

.iconbutton .octicon {
    margin-right: 0
}

.file-navigation::before {
    display: table;
    content: ""
}

.file-navigation::after {
    display: table;
    clear: both;
    content: ""
}

.file-navigation .select-menu-button .css-truncate-target {
    max-width: 200px
}

.file-navigation .breadcrumb {
    float: left;
    margin-top: 0;
    margin-left: 5px;
    font-size: 16px;
    line-height: 26px
}

.file-navigation+.breadcrumb {
    margin-bottom: 10px
}

.include-fragment-error {
    display: none
}

.is-error .include-fragment-error {
    display: block
}

.prereceive-feedback {
    padding: 16px;
    margin-bottom: 16px;
    border: 1px solid #dfe2e5;
    border-left: 6px solid #caa21a;
    border-radius: 6px
}

.prereceive-feedback-heading {
    margin-top: 0;
    margin-bottom: 10px;
    color: var(--color-attention-fg)
}

.file-navigation-options {
    float: right;
    margin-left: 3px
}

.file-navigation-options .dropdown-menu {
    width: 360px;
    padding: 16px
}

.file-navigation-options .dropdown-divider {
    margin: 0px
}

.file-navigation-option {
    position: relative;
    display: inline-block;
    margin-left: 3px
}

.file-navigation-option .select-menu {
    display: inline-block;
    margin-right: 0;
    margin-bottom: 0;
    vertical-align: middle
}

.file-navigation-option .select-menu-button .octicon:only-child {
    margin-left: 2px
}

.file-navigation-option .zeroclipboard-button {
    padding-right: 8px
}

.file-navigation-option .input-group {
    width: 290px
}

.file-navigation-option .input-group .form-control {
    width: calc(100% + 2px);
    height: 28px;
    min-height: 0;
    margin-right: -1px;
    margin-left: -1px;
    border-radius: 0
}

.file-navigation-option .input-group .select-menu-button {
    position: relative;
    z-index: 2
}

.Loadmore-workflows[open] summary {
    display: none
}

.repository-item-checkbox:checked+.repository-item-name {
    background-color: var(--color-accent-subtle)
}

.custom-role-icon {
    background-color: var(--color-canvas-subtle)
}

.profile-picture {
    margin: 10px 0 0
}

.profile-picture>p {
    float: left;
    margin: 0;
    line-height: 30px
}

.profile-picture>img {
    float: left;
    margin: 0 10px 0 0;
    border-radius: 6px
}

.app-owner {
    margin: 15px 0 0
}

.edit-profile-avatar {
    width: 200px
}

.edit-profile-avatar .drag-and-drop {
    padding: 0;
    color: var(--color-fg-muted);
    border-width: 0
}

.edit-profile-avatar input {
    cursor: pointer
}

.edit-profile-avatar.is-bad-file {
    border: 0
}

.edit-profile-avatar .manual-file-chooser {
    position: absolute;
    top: 0;
    left: 0;
    height: 34px;
    padding: 0;
    cursor: pointer
}

.avatar-upload .flash {
    width: 100%;
    padding: 30px 15px;
    border: dashed 1px var(--color-danger-emphasis);
    box-shadow: none
}

.avatar-upload .upload-state {
    display: none;
    padding: 10px 0
}

.avatar-upload .upload-state p {
    margin: 0;
    font-size: 12px;
    color: var(--color-fg-muted)
}

.avatar-upload .avatar-upload .octicon {
    display: inline-block
}

.is-uploading .avatar-upload .loading {
    display: block;
    padding: 0
}

.is-uploading .avatar-upload .loading img {
    vertical-align: top
}

.is-uploading .avatar-upload .button-change-avatar {
    display: none
}

.is-bad-file .avatar-upload .bad-file {
    display: block;
    margin: 0
}

.is-too-big .avatar-upload .too-big {
    display: block;
    margin: 0
}

.is-bad-dimensions .avatar-upload .bad-dimensions {
    display: block;
    margin: 0
}

.is-bad-format .avatar-upload .bad-format {
    display: block;
    margin: 0
}

.is-failed .avatar-upload .failed-request {
    display: block;
    margin: 0
}

.is-empty .avatar-upload .file-empty {
    display: block;
    margin: 0
}

dl.new-email-form {
    padding: 10px 10px 0;
    margin: 0 -10px 10px;
    border-top: 1px solid var(--color-border-default)
}

.selected-user-key {
    background-color: var(--color-attention-subtle)
}

.user-key-type {
    padding-right: 20px;
    padding-left: 10px;
    text-align: center
}

.user-key-email-badge {
    display: inline-table;
    margin-right: 4px
}

.user-key-email {
    display: table-cell;
    padding: 1px 5px;
    font-size: 12px;
    line-height: 1.4;
    border: 1px solid var(--color-border-default);
    border-radius: 6px
}

.user-key-email.unverified {
    border-top-right-radius: 0;
    border-bottom-right-radius: 0
}

.user-key-email-unverified {
    display: table-cell;
    padding-right: 5px;
    padding-left: 5px;
    font-size: 11px;
    color: var(--color-fg-muted);
    background-color: #ecebec;
    border: 1px solid var(--color-border-default);
    border-left: 0;
    border-top-right-radius: 6px;
    border-bottom-right-radius: 6px
}

.user-key-details {
    width: 400px;
    line-height: 1.6;
    white-space: normal
}

.user-key-details code {
    font-size: 13px
}

.recent-user-key-access {
    color: #1e7e34
}

.oauth-app-info-container .float-left-container {
    float: left;
    text-align: left
}

.oauth-app-info-container .float-right-container {
    float: right;
    text-align: right
}

.oauth-app-info-container dl.keys {
    margin: 10px 0
}

.oauth-app-info-container dl.keys dt {
    margin-top: 10px;
    font-weight: 600;
    color: var(--color-fg-muted)
}

.oauth-app-info-container dl.keys dd {
    font-family: ui-monospace,SFMono-Regular,SF Mono,Menlo,Consolas,Liberation Mono,monospace;
    color: var(--color-fg-default)
}

.oauth-app-info-container .user-count {
    font-size: 30px;
    font-weight: 300;
    color: var(--color-fg-muted)
}

.logo-upload {
    position: relative;
    display: inline-block
}

.logo-upload a.delete,.logo-upload span.delete {
    position: absolute;
    left: 88px;
    display: none;
    padding: 8px 10px
}

.logo-upload a.delete:hover,.logo-upload span.delete:hover {
    color: var(--color-danger-fg)
}

.logo-upload-container {
    display: inline-block
}

.logo-upload-container .logo-upload-label .manual-file-chooser {
    top: 0;
    left: 0;
    width: 130px;
    height: 34px;
    padding: 0;
    margin-left: 0;
    cursor: pointer
}

.logo-upload-container .upload-state {
    padding: 10px 0
}

.logo-upload-container .upload-state p {
    margin: 0;
    font-size: 12px;
    color: var(--color-fg-muted)
}

.logo-box {
    width: 120px;
    height: 120px;
    background-color: var(--color-canvas-subtle);
    border: 1px solid var(--color-border-default);
    border-radius: 6px
}

.logo-box img {
    display: none;
    width: 118px;
    height: 118px;
    border-radius: 6px
}

.logo-placeholder {
    color: var(--color-fg-muted);
    text-align: center
}

.logo-placeholder p {
    margin: 0;
    font-size: 14px
}

.has-uploaded-logo .logo-placeholder,.has-uploaded-logo .or {
    display: none
}

.has-uploaded-logo:hover a.delete,.has-uploaded-logo:hover span.delete {
    display: block
}

.has-uploaded-logo .logo-box img {
    display: block
}

.access-token {
    border-bottom: 1px solid var(--color-border-muted)
}

.access-token:last-child {
    border: 0
}

.access-token .last-used {
    margin-right: 10px
}

.access-token.new-token {
    background-color: rgba(108,198,68,.1)
}

.access-token.new-token .octicon-check {
    color: var(--color-success-fg)
}

.access-token .token-description {
    max-width: 450px;
    color: var(--color-fg-default)
}

.access-token .token {
    font-size: 14px
}

.access-token .token-type {
    min-width: 76px
}

.regenerate-token-cta .btn-danger {
    margin-left: 30px
}

.personal-access-tokens label {
    display: inline
}

.personal-access-tokens label p {
    display: inline-block;
    margin: 0;
    font-size: 13px;
    font-weight: 400
}

.personal-access-tokens .child-scopes {
    margin-left: 20px;
    list-style: none
}

.personal-access-tokens .child-scopes .token-scope {
    width: 200px;
    font-weight: 400
}

.personal-access-tokens .child-scopes .child-scopes {
    margin-left: 0
}

.token-scope {
    display: inline-block;
    width: 220px;
    padding: 2px 0;
    margin: 0;
    font-size: 13px;
    color: var(--color-fg-default)
}

.token-scope input {
    margin-right: 5px
}

.callback-urls dl dd .form-control {
    width: 100%
}

.callback-urls.has-many .callback-url-action-cell {
    display: table-cell
}

.callback-description {
    margin-top: 20px
}

.callback-description .octicon {
    padding-left: 0
}

.callback-url .label {
    display: none;
    width: 64px;
    text-align: center
}

.callback-url.is-default-callback .label {
    display: inline-block
}

.callback-url.is-default-callback .btn {
    display: none
}

.callback-url-wrap {
    display: table;
    width: 100%
}

.callback-url-action-cell {
    display: none;
    width: 70px;
    text-align: right
}

.boxed-group.application-show-group dl.form-group>dd .form-control.wide {
    width: 460px
}

.boxed-group.application-show-group dl.form-group>dd .form-control.short {
    height: 50px;
    min-height: 50px
}

.application-show-group .errored .note {
    display: none
}

.application-show-group .drag-and-drop {
    padding: 0;
    text-align: left;
    background-color: transparent;
    border: 0
}

.application-show-group .drag-and-drop img {
    margin-bottom: 1px;
    vertical-align: bottom
}

.application-show-group .drag-and-drop span {
    padding: 0
}

.application-show-group .dragover .logo-box {
    box-shadow: #c9ff00 0 0 3px
}

.application-show-group .is-uploading .loading {
    display: inline-block
}

.application-show-group .is-uploading .default {
    display: none
}

.application-show-group .is-failed .failed-request {
    display: inline-block
}

.application-show-group .is-failed .default {
    display: none
}

.application-show-group .is-bad-file .bad-file {
    display: inline-block
}

.application-show-group .is-bad-file .default {
    display: none
}

.application-show-group .is-too-big .file-too-big {
    display: inline-block
}

.application-show-group .is-too-big .default {
    display: none
}

.application-show-group .is-bad-format .bad-format {
    display: inline-block
}

.application-show-group .is-bad-format .default {
    display: none
}

.application-show-group .is-default .default {
    display: block
}

.post-recovery-token .octospinner,.post-recovery-token .create-recovery-token-error {
    display: none
}

.post-recovery-token.loading .octospinner {
    display: block
}

.post-recovery-token.failed .create-recovery-token-error {
    display: block
}

table.security-history-detail {
    width: 100%;
    font-size: 12px
}

table.security-history-detail td {
    max-width: 200px;
    word-wrap: break-word
}

.email-preference-exceptions {
    font-size: 12px
}

.email-preference-exceptions h5 {
    margin: 15px 0 5px;
    color: var(--color-fg-muted)
}

.email-preference-exceptions .exception-list {
    list-style: none
}

.email-preference-exceptions .exception {
    max-width: 400px;
    padding: 5px;
    padding-left: 0;
    border-top: 1px solid var(--color-border-muted)
}

.email-preference-exceptions .exception:last-child {
    border-bottom: 1px solid var(--color-border-muted)
}

.email-preference-exceptions.opt-in-list {
    display: none
}

.transactional-only .email-preference-exceptions.opt-in-list {
    display: block
}

.transactional-only .email-preference-exceptions.opt-out-list {
    display: none
}

.u2f-registration {
    position: relative;
    padding-bottom: 8px;
    margin-bottom: 8px;
    border-bottom: 1px solid var(--color-border-muted)
}

.u2f-registration.is-sending .u2f-registration-delete {
    display: none
}

.u2f-registration.is-sending .spinner {
    position: relative;
    top: 3px
}

.u2f-registration-icon {
    position: absolute;
    left: -24px;
    color: var(--color-fg-muted)
}

.new-u2f-registration {
    position: relative
}

.new-u2f-registration .add-u2f-registration-form:not(.for-trusted-device) {
    display: none;
    margin-bottom: 10px
}

.new-u2f-registration.is-active .add-u2f-registration-link {
    display: none
}

.new-u2f-registration.is-active .add-u2f-registration-form {
    display: block
}

.new-u2f-registration .webauthn-request-interaction,.new-u2f-registration .webauthn-request-error {
    display: none
}

.new-u2f-registration.is-sending .webauthn-request-interaction {
    display: block
}

.new-u2f-registration.is-showing-error .webauthn-request-error {
    display: block
}

.webauthn-box .webauthn-sorry {
    display: block
}

.webauthn-box .new-u2f-registration {
    display: none
}

.webauthn-box.available .webauthn-sorry {
    display: none
}

.webauthn-box.available .new-u2f-registration {
    display: block
}

.spinner {
    display: none
}

.is-sending .spinner {
    display: inline-block
}

.confirmation-phrase {
    font-style: italic;
    font-weight: 400
}

.session-device .session-state-indicator.recent {
    background-color: var(--color-success-emphasis);
    box-shadow: 0 0 10px rgba(108,198,68,.5)
}

.session-device .session-state-indicator.revoked {
    background-color: var(--color-danger-emphasis);
    box-shadow: 0 0 10px rgba(198,108,68,.5)
}

.session-device .session-state-indicator.not-recent {
    background-image: linear-gradient(#aaa, #ccc);
    box-shadow: 0 1px 0 #fff
}

.collaborators .collab-list {
    border-bottom-width: 0
}

.collaborators .collab-list-item:first-child .collab-list-cell {
    border-top-width: 0
}

.collaborators .collab-list-cell {
    padding-top: 15px;
    padding-bottom: 15px;
    vertical-align: middle
}

.collaborators .collab-meta {
    width: 140px
}

.collaborators .collab-remove {
    padding-right: 20px;
    text-align: right
}

.collaborators .collab-remove .remove-link {
    color: var(--color-fg-muted)
}

.collaborators .collab-remove .remove-link:hover {
    color: var(--color-danger-fg)
}

.collaborators .collab-team-link {
    width: 300px
}

.collaborators .collab-team-link:hover {
    text-decoration: none
}

.collaborators .collab-team-link .avatar {
    float: left;
    margin-top: 1px;
    margin-right: 10px
}

.collaborators .collab-team-link.disabled {
    pointer-events: none
}

.collaborators .collab-info {
    height: 100%;
    color: var(--color-fg-default)
}

.collaborators .collab-info .description {
    padding-right: 50px;
    margin-top: 3px;
    margin-bottom: 3px;
    overflow: hidden;
    text-overflow: ellipsis;
    white-space: nowrap
}

.collaborators .collab-info .collab-name {
    display: block;
    font-size: 14px
}

.collaborators .collab-info .collab-message {
    position: relative;
    top: 25%;
    display: block
}

.collaborators .copy-invite-modal {
    left: 0;
    width: 300px
}

@media(min-width: 768px) {
    .collaborators .copy-invite-modal {
        right:0;
        left: unset;
        width: 352px
    }
}

.collaborators .copy-invite-modal::before,.collaborators .copy-invite-modal::after {
    display: none
}

.access-sub-heading {
    float: right;
    font-weight: 400;
    line-height: 1.4;
    color: var(--color-fg-muted)
}

.access-form-wrapper {
    padding: 10px;
    background-color: var(--color-canvas-subtle);
    border-top: 1px solid var(--color-border-default);
    border-radius: 0 0 6px 6px
}

.access-flash {
    padding: 8px;
    margin-right: 10px;
    margin-bottom: 10px;
    margin-left: 10px
}

.repo-access-group .blankslate {
    display: none
}

.repo-access-group.is-empty .blankslate {
    display: block
}

.repo-access-group.no-form .add-team-form {
    display: none
}

.oauth-pending-deletion-list-item {
    background-color: var(--color-canvas-subtle);
    box-shadow: inset 0 0 8px #eee
}

.oauth-pending-deletion-list-item:hover {
    background-color: var(--color-canvas-subtle)
}

.oauth-pending-deletion-list-item .oauth-pending-deletion {
    display: inline-block;
    width: 19%;
    line-height: 30px
}

.oauth-pending-deletion-list-item .active {
    display: none
}

.oauth-pending-deletion {
    display: none;
    width: 100%
}

.boxed-group-list .access-level {
    color: var(--color-fg-muted)
}

.boxed-group-list .access-level.css-truncate-target {
    max-width: 500px
}

.settings-next {
    font-size: 14px;
    line-height: 1.5
}

.settings-next label {
    font-size: 14px
}

.settings-next .note {
    font-size: 13px
}

.settings-next .form-checkbox input[type=radio],.settings-next .form-checkbox input[type=checkbox] {
    margin-top: 4px
}

dl.form-group>dd textarea.compact {
    height: 100px;
    min-height: 0
}

.form-hr {
    margin-top: 15px;
    margin-bottom: 15px;
    border-bottom-color: var(--color-border-default, #e5e5e5)
}

.listgroup {
    list-style: none;
    border: 1px solid var(--color-border-default, #e5e5e5);
    border-radius: 6px
}

.listgroup-item {
    min-height: inherit;
    padding: 10px;
    font-size: 13px;
    line-height: 26px;
    color: var(--color-fg-muted)
}

.listgroup-item::before {
    display: table;
    content: ""
}

.listgroup-item::after {
    display: table;
    clear: both;
    content: ""
}

.listgroup-item+.listgroup-item {
    border-top: 1px solid var(--color-border-default, #e5e5e5)
}

.listgroup-item.listgroup-item-preview {
    line-height: inherit
}

.listgroup-item.listgroup-item-preview .BtnGroup {
    margin-top: 5px
}

.listgroup-item .css-truncate-target {
    max-width: 200px
}

.listgroup-item-title {
    display: block;
    font-weight: 600
}

.listgroup-item-body {
    display: block
}

.listgroup-header {
    border-top: 0;
    border-bottom: 1px solid var(--color-border-default, #e5e5e5)
}

.listgroup-overflow {
    max-height: 240px;
    overflow-y: auto;
    background-color: var(--color-canvas-subtle, #f5f5f5)
}

.listgroup-sm .listgroup-item {
    padding-top: 5px;
    padding-bottom: 5px
}

.protected-branches {
    margin-top: 15px;
    margin-bottom: 15px
}

.protected-branch-options {
    margin-left: 20px;
    opacity: .5
}

.protected-branch-options.active {
    opacity: 1
}

.protected-branch-reviews.on .require-code-owner-review,.protected-branch-reviews.on .reviews-dismiss-on-push,.protected-branch-reviews.on .reviews-include-dismiss,.protected-branch-reviews.on .allow-force-pushes,.protected-branch-reviews.on .require-approving-reviews {
    display: block
}

.protected-branch-reviews .require-code-owner-review,.protected-branch-reviews .reviews-dismiss-on-push,.protected-branch-reviews .reviews-include-dismiss,.protected-branch-reviews .allow-force-pushes,.protected-branch-reviews .require-approving-reviews {
    display: none
}

.authorized-pushers {
    width: 440px
}

.authorized-pushers .add-protected-branch-user-or-team {
    display: block
}

.authorized-pushers .user-or-team-limit-reached {
    display: none;
    padding: 10px;
    font-size: 13px
}

.authorized-pushers.at-limit .add-protected-branch-user-or-team {
    display: none
}

.authorized-pushers.at-limit .user-or-team-limit-reached {
    display: block;
    width: 440px
}

.protected-branch-authorized-pushers-table,.protected-branch-pushers-table {
    margin-top: 10px
}

.protected-branch-authorized-pushers-table .boxed-group-inner,.protected-branch-pushers-table .boxed-group-inner {
    max-height: 350px;
    overflow-y: auto
}

.protected-branch-authorized-pushers-table .table-list,.protected-branch-pushers-table .table-list {
    border-bottom: 0
}

.protected-branch-authorized-pushers-table .table-list-cell,.protected-branch-pushers-table .table-list-cell {
    vertical-align: middle
}

.protected-branch-authorized-pushers-table .table-list-cell:first-child,.protected-branch-pushers-table .table-list-cell:first-child {
    width: 100%
}

.protected-branch-authorized-pushers-table .avatar,.protected-branch-authorized-pushers-table .octicon-jersey,.protected-branch-authorized-pushers-table .octicon-organization,.protected-branch-pushers-table .avatar,.protected-branch-pushers-table .octicon-jersey,.protected-branch-pushers-table .octicon-organization {
    width: 36px;
    margin-right: 10px;
    text-align: center
}

.user-already-added::after {
    display: inline-block;
    padding: 1px 5px;
    margin-left: 6px;
    font-size: 11px;
    line-height: 1.4;
    color: var(--color-fg-on-emphasis);
    content: "Already added";
    background: var(--color-severe-emphasis);
    border-radius: 6px
}

.protected-branch-admin-permission {
    float: left;
    padding: 3px;
    margin: -2px 0 -2px -4px;
    line-height: normal;
    border: 1px solid transparent;
    border-radius: 6px
}

.protected-branch-admin-permission.active {
    animation: toggle-color 1s ease-in-out 0s
}

@keyframes toggle-color {
    0% {
        background-color: transparent
    }

    50% {
        color: #4c4a42;
        background-color: #fff9ea;
        border-color: #dfd8c2
    }

    100% {
        background-color: transparent
    }
}

.automated-check-options {
    margin-top: 10px
}

.automated-check-options .listgroup-item label {
    font-size: inherit
}

.automated-check-options .listgroup-item input[type=checkbox] {
    float: none;
    margin-top: -2px;
    margin-right: 5px;
    margin-left: 0
}

.automated-check-options .label {
    margin-top: 4px
}

.repository-merge-features .form-group.errored label {
    color: inherit
}

.repository-merge-features .form-group.errored .error {
    position: inherit;
    padding: 0;
    margin-top: 0;
    margin-left: 6px;
    font-size: 11px;
    color: var(--color-danger-fg);
    background: transparent;
    border: 0
}

.repository-merge-features .form-group.errored .error::before,.repository-merge-features .form-group.errored .error::after {
    display: none
}

.repository-settings-actions [role=tab][aria-selected=true] {
    font-weight: 600;
    color: var(--color-fg-default);
    border-color: var(--color-severe-emphasis)
}

.repository-settings-actions [role=tab][aria-selected=true] .UnderlineNav-octicon {
    color: var(--color-fg-muted)
}

.radio-label-theme-discs {
    padding: 0;
    transition: padding .25s cubic-bezier(0.25, 0.46, 0.45, 0.94)
}

:focus+.radio-label-theme-discs {
    border-color: var(--color-accent-emphasis);
    outline: none;
    box-shadow: var(--color-primer-shadow-focus)
}

:checked+.radio-label-theme-discs {
    border-color: var(--color-accent-emphasis)
}

:checked+.radio-label-theme-discs,.radio-label-theme-discs:hover {
    padding: 8px
}

.settings-protected-domains .protected-domain-delete-dialog {
    color: var(--color-fg-default);
    white-space: normal
}

.settings-protected-domains .protected-domain-delete-dialog .repos-to-unpublish {
    max-height: 16rem;
    list-style: none
}

.qr-code-table {
    display: inline-block;
    padding: 20px;
    margin: 30px auto;
    border: 1px solid var(--color-border-muted);
    border-radius: 6px;
    box-shadow: 0 2px 2px 0 rgba(0,0,0,.04)
}

.qr-code-table tr {
    background: transparent;
    border: 0
}

.qr-code-table th,.qr-code-table td {
    padding: 0;
    border: 0
}

.qr-code-table td {
    width: 3px;
    height: 3px
}

.qr-code-table .black {
    background: #000
}

.qr-code-table .white {
    background: #fff
}

.two-factor-recovery-codes {
    margin: 30px 0;
    font-family: ui-monospace,SFMono-Regular,SF Mono,Menlo,Consolas,Liberation Mono,monospace;
    font-size: 21px
}

.two-factor-recovery-code-mark {
    width: 24px;
    height: 24px;
    font-size: 24px;
    line-height: 16px;
    color: var(--color-fg-muted)
}

.two-factor-recovery-code {
    display: inline-block;
    width: 48%;
    line-height: 1.6;
    text-align: center
}

.two-factor-recovery-code::before {
    position: relative;
    top: -3px;
    margin-right: 10px;
    font-size: 10px;
    color: var(--color-fg-muted);
    content: "●"
}

.recovery-codes-saving-options {
    margin-left: 35px
}

.recovery-codes-saving-options .recovery-code-save-button {
    width: 115px;
    margin-right: 15px;
    text-align: center
}

.recovery-codes-warning {
    margin: 0 -15px
}

.recovery-codes-warning .recovery-codes-warning-octicon {
    height: 40px;
    margin-right: 15px
}

.btn-two-factor-state {
    min-width: 70px
}

.two-factor-steps {
    padding: 16px 16px 0;
    margin: 32px 0;
    border: 1px solid var(--color-border-default);
    border-radius: 6px
}

.two-factor-toggle .two-factor-status {
    color: var(--color-fg-muted);
    border-bottom: 1px solid var(--color-border-muted)
}

.two-factor-settings-group {
    border-bottom: 1px solid var(--color-border-muted)
}

.two-factor-settings-group li {
    line-height: 1.5;
    list-style: none
}

.github-access-banner {
    position: relative;
    padding: 10px 20px 10px 70px;
    margin: 0 0 20px;
    font-size: 14px;
    border: 1px solid var(--color-border-default);
    border-radius: 6px
}

.github-access-banner .octicon {
    position: absolute;
    top: 20px;
    left: 20px;
    color: var(--color-danger-fg)
}

.setup-wrapper {
    width: 750px;
    padding-top: 30px;
    margin: 0 auto
}

.setup-wrapper::before {
    display: table;
    content: ""
}

.setup-wrapper::after {
    display: table;
    clear: both;
    content: ""
}

.setup-header {
    padding-bottom: 20px;
    margin: 0 auto 30px;
    overflow: hidden;
    text-align: left;
    border-bottom: 1px solid var(--color-border-default)
}

.setup-header h1 {
    margin-top: 0;
    margin-bottom: 0;
    font-size: 45px;
    font-weight: 400;
    line-height: 1.1;
    letter-spacing: -1px
}

.setup-header h1 .octicon {
    color: var(--color-fg-muted)
}

.setup-header .lead {
    margin-top: 2px;
    margin-bottom: 0;
    font-size: 21px
}

.setup-header .lead a {
    color: var(--color-fg-muted)
}

.setup-header .lead a:hover {
    color: var(--color-accent-fg);
    text-decoration: none
}

.setup-org {
    padding-bottom: 0;
    border-bottom: 0
}

.setup-main {
    float: left;
    width: 450px
}

.setup-secondary {
    float: right;
    width: 250px
}

.setup-secondary .info {
    padding-top: 0;
    padding-bottom: 0;
    margin-top: -10px;
    font-size: 12px;
    line-height: 18px;
    color: var(--color-fg-muted);
    text-align: center
}

.setup-info-module {
    margin-bottom: 30px;
    background-color: var(--color-canvas-default);
    border: 1px solid var(--color-border-default);
    border-radius: 6px;
    box-shadow: 0 1px 3px rgba(0,0,0,.075)
}

.setup-info-module h2 {
    padding: 16px;
    margin-bottom: 16px;
    overflow: hidden;
    font-size: 16px;
    border-bottom: 1px solid var(--color-border-default)
}

.setup-info-module h2 .price {
    float: right;
    font-weight: 600;
    color: var(--color-fg-muted)
}

.setup-info-module h3 {
    padding: 0 15px;
    margin: 0 0 -7px;
    font-size: 14px
}

.setup-info-module p {
    padding: 0 15px;
    margin: 15px 0
}

.features-list {
    padding: 0 15px 15px;
    margin: 0;
    font-size: 14px;
    list-style: none
}

.features-list li {
    margin-top: 10px
}

.features-list li:first-child {
    margin-top: 0
}

.features-list .list-divider {
    margin: 15px -15px;
    border-top: 1px solid var(--color-border-muted)
}

.features-list .octicon-check {
    margin-right: 5px;
    color: var(--color-success-fg)
}

.features-list .octicon-question {
    font-size: 12px;
    color: var(--color-fg-muted)
}

.features-list .tooltipped::after {
    width: 250px;
    white-space: normal
}

.setup-form-container .setup-form-title {
    font-size: 16px
}

.setup-form-container .secure {
    float: right;
    margin-top: 2px;
    font-size: 11px;
    color: var(--color-success-fg);
    text-transform: uppercase
}

.setup-form-container hr {
    margin-top: 25px;
    margin-bottom: 25px
}

.setup-form-container .form-actions {
    padding-top: 0;
    padding-bottom: 0;
    text-align: left
}

.team-member-container {
    margin-bottom: 20px
}

.team-member-container .team-member-username {
    line-height: 1.2
}

.setup-form {
    padding-bottom: 15px
}

.setup-form .form-group.successed .error {
    display: none
}

.setup-form .form-group dd .form-control {
    width: 100%
}

.setup-form .form-group dd .form-control.short {
    width: 250px
}

.setup-form dd {
    position: relative
}

.setup-form dd .octicon {
    position: absolute;
    top: 8px;
    right: 25px
}

.setup-form .octicon-alert {
    color: var(--color-danger-fg)
}

.setup-form .octicon-check {
    color: var(--color-success-fg)
}

.setup-form .tos-info,.setup-form .setup-organization-next {
    margin: 15px 0;
    border-top: 1px solid var(--color-border-muted);
    border-bottom: 1px solid var(--color-border-muted)
}

.setup-form .tos-info {
    padding: 15px 0
}

.setup-form .setup-organization-next {
    padding-top: 15px;
    padding-bottom: 15px
}

.setup-form .setup-plans {
    border-collapse: separate;
    border: 1px solid var(--color-border-default)
}

.setup-form .setup-plans tr.selected {
    background-color: var(--color-accent-subtle)
}

.setup-form .setup-plans .name {
    font-weight: 600
}

.setup-form .setup-plans .choose-plan input[type=radio] {
    display: none
}

.setup-creditcard-form .country-form,.setup-creditcard-form .state-form {
    float: left;
    margin: 0;
    word-wrap: normal
}

.setup-creditcard-form .country-form,.setup-creditcard-form .postal-code-form {
    margin-top: 0;
    margin-bottom: 15px
}

.setup-creditcard-form .form-group select.select-country {
    width: 182px;
    margin-right: 5px
}

.setup-creditcard-form .form-group select:invalid {
    color: var(--color-fg-muted)
}

.setup-creditcard-form .form-group select.select-state {
    width: 113px
}

.setup-creditcard-form .form-group .input-vat {
    width: 288px
}

.setup-creditcard-form .form-group input.input-postal-code {
    width: 180px
}

.setup-creditcard-form.is-vat-country .vat-field {
    display: block
}

.setup-creditcard-form.is-international .form-group select.select-country {
    width: 300px
}

.setup-creditcard-form.is-international .state-form {
    display: none
}

.setup-creditcard-form.no-postcodes .postal-code-form {
    display: none
}

.setup-creditcard-form dd .octicon-credit-card {
    position: inherit
}

.setup-creditcard-form .vat-field {
    display: none
}

.setup-creditcard-form .vat-field.prefilled {
    display: block
}

.setup-creditcard-form .help-text {
    font-size: 80%;
    font-weight: 400;
    color: var(--color-fg-muted)
}

.user-identification-questions {
    float: none;
    width: auto;
    margin-top: 40px
}

.user-identification-questions .question {
    margin-bottom: 30px
}

.user-identification-questions .response-group label {
    font-weight: 400
}

.user-identification-questions .form-checkbox {
    margin: 8px 0
}

.user-identification-questions .disclaimer {
    margin: 40px 0 0;
    text-align: center
}

.user-identification-questions.redesign .question {
    margin-bottom: 96px
}

.user-identification-questions.redesign .topic-input-container .tag-input {
    width: 100%;
    border: 0;
    border-bottom: 6px solid #000;
    box-shadow: 0 0 0
}

.signup-plan-summary-subhead {
    border-bottom: 6px solid
}

.signup-btn:disabled {
    opacity: .5 !important
}

.collection-search-results em {
    padding: .1em;
    background-color: #faffa6
}

.draft-tag {
    padding: 5px 10px;
    font-weight: 600;
    color: #eee;
    background-color: #404040
}

.showcase-page-pattern {
    position: relative;
    z-index: -1;
    height: 100px;
    margin-top: -21px;
    margin-bottom: -70px
}

.showcase-page-pattern::after {
    position: absolute;
    top: 0;
    right: 0;
    bottom: 0;
    left: 0;
    display: block;
    content: "";
    background-image: linear-gradient(180deg, rgba(255, 255, 255, 0.85), white)
}

.showcase-page-repo-list {
    border-top: 1px solid var(--color-border-muted)
}

.slash-command-menu-item .command-description {
    color: var(--color-fg-muted)
}

.slash-command-menu-item[aria-selected=true] {
    color: var(--color-fg-on-emphasis);
    background-color: var(--color-accent-emphasis)
}

.slash-command-menu-item[aria-selected=true] .command-description {
    color: var(--color-fg-on-emphasis)
}

.modal-anchor::before {
    position: fixed;
    top: 0;
    right: 0;
    bottom: 0;
    left: 0;
    z-index: 99;
    display: block;
    cursor: default;
    content: " ";
    background: var(--color-primer-canvas-backdrop)
}

.sortable-button-item:first-of-type .sortable-button[data-direction=up],.sortable-button-item:last-of-type .sortable-button[data-direction=down] {
    display: none
}

@keyframes sponsors-progress-animation {
    0% {
        background-position: 100%
    }

    100% {
        background-position: 0%
    }
}

.sponsors-goal-progress-bar {
    background: #ec6cb9;
    transition: width .5s ease-in
}

.sponsors-goal-progress-bar:hover {
    cursor: pointer;
    background: linear-gradient(90deg, #ffd33d 0%, #ea4aaa 17%, #b34bff 34%, #01feff 51%, #ffd33d 68%, #ea4aaa 85%, #b34bff 100%);
    background-size: 300% 100%;
    animation: sponsors-progress-animation 2s linear infinite
}

.sponsors-goal-completed-bar {
    background: linear-gradient(90deg, #ffd33d 0%, #ea4aaa 17%, #b34bff 34%, #01feff 51%, #ffd33d 68%, #ea4aaa 85%, #b34bff 100%);
    background-size: 300% 100%;
    transition: width .5s ease-in;
    animation: sponsors-progress-animation 2s linear infinite
}

.sponsors-goals-avatar-border {
    background-color: var(--color-canvas-default);
    border: 1px solid var(--color-fg-on-emphasis)
}

.sponsors-goals-heart-anim {
    width: 100px;
    height: 100px;
    cursor: pointer;
    background: url("/images/modules/site/sponsors/heart-explosion.png") no-repeat;
    background-position: 0 0;
    background-size: 600px 100px;
    transition: background-position .3s steps(5);
    transition-duration: 0s
}

.sponsors-goals-heart-anim.is-active {
    background-position: -500px 0;
    transition-duration: .3s
}

.open>.sponsors-foldable {
    max-height: 700px
}

.open .sponsors-foldable-opened {
    display: block
}

.open .sponsors-foldable-closed {
    display: none
}

.sponsors-foldable {
    max-height: 0;
    box-sizing: border-box;
    overflow-y: auto;
    transition: max-height .25s ease-in-out
}

.sponsors-foldable-opened {
    display: none
}

.sponsors-foldable-closed {
    display: block
}

.sponsor-card {
    width: 100%;
    height: 450px;
    border: 0
}

@media(min-width: 544px) {
    .sponsor-card {
        height:260px
    }
}

.sponsor-cell {
    padding: 8px;
    vertical-align: middle;
    border-right: 1px solid var(--color-neutral-muted);
    border-bottom: 1px solid var(--color-neutral-muted)
}

.sponsor-cell:first-child {
    width: 45px;
    padding-left: 32px;
    border-right-width: 0
}

.sponsor-cell:last-child {
    padding-left: 8px;
    border-right-width: 0
}

.sponsor-header-cell {
    padding-right: 16px;
    font-weight: 600;
    text-align: left;
    border-top: 1px solid var(--color-neutral-muted)
}

.sponsor-row-number {
    color: var(--color-fg-subtle)
}

@media(prefers-reduced-motion: no-preference) {
    .tier-category:hover .tier-emoji {
        animation: wiggle .1s alternate;
        animation-timing-function: ease;
        animation-delay: .1s;
        animation-iteration-count: 4
    }
}

@keyframes wiggle {
    0% {
        transform: rotate(-25deg)
    }

    100% {
        transform: rotate(15deg) scale(1.2)
    }
}

.tab-size[data-tab-size="1"] {
    -moz-tab-size: 1;
    tab-size: 1
}

.tab-size[data-tab-size="2"] {
    -moz-tab-size: 2;
    tab-size: 2
}

.tab-size[data-tab-size="3"] {
    -moz-tab-size: 3;
    tab-size: 3
}

.tab-size[data-tab-size="4"] {
    -moz-tab-size: 4;
    tab-size: 4
}

.tab-size[data-tab-size="5"] {
    -moz-tab-size: 5;
    tab-size: 5
}

.tab-size[data-tab-size="6"] {
    -moz-tab-size: 6;
    tab-size: 6
}

.tab-size[data-tab-size="7"] {
    -moz-tab-size: 7;
    tab-size: 7
}

.tab-size[data-tab-size="8"] {
    -moz-tab-size: 8;
    tab-size: 8
}

.tab-size[data-tab-size="9"] {
    -moz-tab-size: 9;
    tab-size: 9
}

.tab-size[data-tab-size="10"] {
    -moz-tab-size: 10;
    tab-size: 10
}

.tab-size[data-tab-size="11"] {
    -moz-tab-size: 11;
    tab-size: 11
}

.tab-size[data-tab-size="12"] {
    -moz-tab-size: 12;
    tab-size: 12
}

.team-label-ldap {
    display: inline-block;
    padding: 0 9px;
    line-height: 25px;
    color: var(--color-fg-muted);
    text-transform: uppercase;
    cursor: default;
    border: 1px solid var(--color-border-muted);
    border-radius: 6px;
    box-shadow: none
}

.team-label-ldap.header-label-ldap {
    padding: 3px 5px
}

.team-member-ellipsis {
    width: 25px;
    height: 25px;
    line-height: 24px
}

.team-member-ellipsis:hover {
    color: var(--color-accent-fg);
    background: var(--color-canvas-subtle)
}

.team-listing .nested-teams-checkbox {
    padding-left: 3px
}

.team-listing .nested-teams-checkbox.show {
    padding-right: 11px
}

.team-listing .nested-teams-checkbox.indent-1 {
    padding-left: 30px
}

.team-listing .nested-teams-checkbox.indent-2 {
    padding-left: 54px
}

.team-listing .nested-teams-checkbox.indent-3 {
    padding-left: 78px
}

.team-listing .nested-teams-checkbox.indent-4 {
    padding-left: 102px
}

.team-listing .nested-teams-checkbox.indent-5 {
    padding-left: 126px
}

.team-listing .nested-teams-checkbox.indent-6 {
    padding-left: 150px
}

.team-listing .nested-teams-checkbox.indent-7 {
    padding-left: 174px
}

.team-listing .nested-teams-checkbox.indent-8 {
    padding-left: 198px
}

.team-listing .nested-teams-checkbox.indent-9 {
    padding-left: 222px
}

.team-listing .nested-teams-checkbox.indent-10 {
    padding-left: 246px
}

.team-listing .nested-teams-checkbox.indent-11 {
    padding-left: 270px
}

.team-listing .nested-teams-checkbox.indent-12 {
    padding-left: 294px
}

.team-listing .nested-teams-checkbox.indent-13 {
    padding-left: 318px
}

.team-listing .nested-teams-checkbox.indent-14 {
    padding-left: 342px
}

.team-listing .nested-teams-checkbox.indent-15 {
    padding-left: 366px
}

.team-listing .team-info {
    width: 280px
}

.team-listing .team-short-info {
    width: 170px
}

.team-listing .nested-team-info {
    width: 650px
}

.team-listing .nested-team-name {
    max-width: 268px
}

.team-listing .shortened-teams-avatars {
    margin-left: auto
}

.team-listing .shortened-teams-avatars.width-0 {
    width: 300px
}

.team-listing .shortened-teams-avatars.width-1 {
    width: 233px
}

.team-listing .shortened-teams-avatars.width-2 {
    width: 167px
}

.team-listing .shortened-teams-avatars.width-3 {
    width: 99px
}

.team-listing .team-members-count {
    width: 124px
}

.team-listing .team-show-more-cell {
    width: 980px
}

.team-listing .team-buttons {
    width: 150px
}

.team-listing .octicon-wrapper {
    width: 16px
}

.team-listing .is-open.root-team {
    background-color: var(--color-canvas-subtle)
}

.team-listing .is-open .expand-nested-team {
    font-weight: 600
}

.team-listing .is-open .octicon-chevron-down {
    transform: rotate(180deg)
}

.traffic-graph {
    min-height: 150px
}

.traffic-graph .activity {
    margin-top: 0
}

.traffic-graph .activity .dots {
    margin-top: 40px
}

.traffic-graph .path {
    fill: none;
    stroke-width: 2
}

.traffic-graph path.total {
    stroke: var(--color-success-emphasis)
}

.traffic-graph path.unique {
    stroke: var(--color-accent-emphasis)
}

.traffic-graph .axis .tick:first-of-type line {
    stroke: var(--color-success-emphasis);
    stroke-width: 2px
}

.traffic-graph .y line {
    stroke: var(--color-success-emphasis)
}

.traffic-graph .y.unique line {
    stroke: var(--color-accent-emphasis)
}

.traffic-graph .overlay {
    fill-opacity: 0
}

.uniques-graph .axis .tick:last-child line {
    stroke: var(--color-accent-emphasis);
    stroke-width: 2px
}

.svg-tip .date {
    color: var(--color-fg-on-emphasis)
}

.top-domains .dots {
    display: block;
    margin: 167px auto 0
}

table.capped-list {
    width: 100%;
    line-height: 100%
}

table.capped-list th {
    padding: 8px;
    text-align: left;
    background: var(--color-canvas-subtle);
    border-bottom: 1px solid var(--color-border-default)
}

table.capped-list td {
    padding: 8px;
    font-size: 12px;
    vertical-align: middle;
    border-bottom: 1px solid var(--color-border-muted)
}

table.capped-list th.middle,table.capped-list td.middle {
    text-align: center
}

table.capped-list .favicon {
    width: 16px;
    height: 16px;
    margin: 0 5px;
    vertical-align: middle
}

table.capped-list .octicon {
    margin-right: 10px;
    color: var(--color-fg-muted);
    vertical-align: -3px
}

table.capped-list tr:nth-child(even) {
    background-color: var(--color-canvas-subtle)
}

.capped-list-label {
    max-width: 200px;
    overflow: hidden;
    text-overflow: ellipsis;
    white-space: nowrap
}

.traffic-graph-stats .summary-stats {
    width: 100%
}

.traffic-graph-stats .summary-stats::before {
    display: table;
    content: ""
}

.traffic-graph-stats .summary-stats::after {
    display: table;
    clear: both;
    content: ""
}

.traffic-graph-stats .summary-stats li {
    display: block;
    float: left;
    width: 50%
}

.totals circle {
    fill: var(--color-success-emphasis);
    stroke: var(--color-canvas-default);
    stroke-width: 2
}

.uniques circle {
    fill: var(--color-accent-emphasis);
    stroke: var(--color-canvas-default);
    stroke-width: 2
}

ul.web-views li {
    width: 140px
}

ul.clones li {
    width: 170px
}

.tree-finder-input,.tree-finder-input:focus {
    font-size: inherit;
    box-shadow: none;
    -webkit-appearance: none;
    -moz-appearance: none;
    appearance: none
}

.tree-browser .octicon-chevron-right {
    color: transparent
}

.tree-browser-result .octicon-file {
    color: var(--color-fg-muted)
}

.tree-browser-result:hover,.tree-browser-result[aria-selected=true] {
    color: var(--color-fg-on-emphasis);
    background-color: var(--color-accent-emphasis)
}

.tree-browser-result:hover .octicon-file,.tree-browser-result[aria-selected=true] .octicon-file {
    color: inherit
}

.tree-browser-result[aria-selected=true] .octicon-chevron-right {
    color: inherit
}

.tree-browser-result .css-truncate-target {
    max-width: 870px
}

.tree-browser-result mark {
    font-weight: 600;
    color: inherit;
    background: none
}

.typeahead-result {
    position: relative;
    display: block;
    min-width: 100%;
    padding: 10px;
    margin-top: 0;
    color: var(--color-fg-default);
    cursor: pointer
}

.typeahead-result::before {
    display: table;
    content: ""
}

.typeahead-result::after {
    display: table;
    clear: both;
    content: ""
}

.typeahead-result:first-child {
    border-top: 0
}

.typeahead-result:focus,.typeahead-result:hover,.typeahead-result[aria-selected=true],.typeahead-result.navigation-focus {
    text-decoration: none
}

.typeahead-result[aria-selected=true],.typeahead-result:hover,.typeahead-result.navigation-focus {
    color: var(--color-fg-on-emphasis);
    background-color: var(--color-accent-emphasis)
}

.typeahead-result[aria-selected=true] .octicon-plus,.typeahead-result:hover .octicon-plus,.typeahead-result.navigation-focus .octicon-plus {
    color: var(--color-fg-on-emphasis)
}

.typeahead-result.disabled {
    pointer-events: none;
    opacity: .5
}

.member-suggestion {
    padding-left: 44px
}

.member-suggestion .avatar {
    float: left;
    margin-right: 10px;
    margin-left: -34px
}

.member-suggestion .member-suggestion-info {
    width: 90%;
    margin-top: 2px;
    margin-bottom: 0;
    overflow: hidden;
    text-overflow: ellipsis;
    white-space: nowrap
}

.member-suggestion .member-name {
    font-size: 12px;
    color: var(--color-fg-muted)
}

.member-suggestion .member-email {
    margin-top: 0;
    margin-bottom: 0
}

.member-suggestion .octicon-plus,.member-suggestion .octicon-check {
    position: absolute;
    top: 50%;
    right: 15px;
    margin-top: -8px;
    color: var(--color-fg-muted)
}

.member-suggestion .already-member-note,.member-suggestion .non-member-note,.member-suggestion .non-member-action {
    margin-top: 0;
    margin-bottom: 0;
    color: var(--color-fg-muted)
}

.member-suggestion .non-member-action {
    display: none
}

.member-suggestion[aria-selected=true] .member-name,.member-suggestion[aria-selected=true] .non-member-note,.member-suggestion[aria-selected=true] .already-member-note,.member-suggestion[aria-selected=true] .non-member-action,.member-suggestion[aria-selected=true] .member-email,.member-suggestion:hover .member-name,.member-suggestion:hover .non-member-note,.member-suggestion:hover .already-member-note,.member-suggestion:hover .non-member-action,.member-suggestion:hover .member-email,.member-suggestion.navigation-focus .member-name,.member-suggestion.navigation-focus .non-member-note,.member-suggestion.navigation-focus .already-member-note,.member-suggestion.navigation-focus .non-member-action,.member-suggestion.navigation-focus .member-email {
    color: var(--color-fg-on-emphasis)
}

.member-suggestion[aria-selected=true] .non-member-note,.member-suggestion:hover .non-member-note,.member-suggestion.navigation-focus .non-member-note {
    display: none
}

.member-suggestion[aria-selected=true] .non-member-action,.member-suggestion:hover .non-member-action,.member-suggestion.navigation-focus .non-member-action {
    display: block
}

.member-suggestion[aria-selected=true] .octicon,.member-suggestion:hover .octicon,.member-suggestion.navigation-focus .octicon {
    color: var(--color-fg-on-emphasis)
}

.member-suggestion.not-a-member .member-info,.member-suggestion.disabled .member-info {
    margin-top: -2px
}

.non-member-result {
    padding-left: 31px
}

.team-suggestion {
    padding-left: 32px
}

.team-suggestion .octicon {
    float: left;
    margin-top: 2px;
    margin-left: -22px
}

.team-suggestion .team-suggestion-info {
    margin: 2px 0 0
}

.team-suggestion .team-suggestion-info .css-truncate-target {
    max-width: none
}

.team-suggestion .team-size,.team-suggestion .team-description {
    font-size: 12px;
    color: var(--color-fg-muted)
}

.team-suggestion[aria-selected=true] .team-size,.team-suggestion[aria-selected=true] .team-description,.team-suggestion.navigation-focus .team-size,.team-suggestion.navigation-focus .team-description {
    color: var(--color-fg-on-emphasis)
}

.email-suggestion {
    padding-left: 32px
}

.email-suggestion .octicon-mail {
    margin-left: -20px;
    color: var(--color-fg-muted)
}

.email-suggestion .member-suggestion-info {
    margin-top: 1px
}

.repo-access-add-team .team-name {
    font-size: 13px
}

.repo-access-add-team .team-description {
    display: block
}

.repo-access-add-team .team-size,.repo-access-add-team .team-description {
    font-size: 12px;
    color: var(--color-fg-muted)
}

.repo-access-add-team[aria-selected=true] .team-size,.repo-access-add-team[aria-selected=true] .team-description,.repo-access-add-team.navigation-focus .team-size,.repo-access-add-team.navigation-focus .team-description {
    color: var(--color-fg-on-emphasis)
}

#user-content-toc {
    overflow: visible
}

#user-content-toc tr {
    border-top: 0
}

#user-content-toc td {
    padding: 0 20px;
    background-color: var(--color-canvas-subtle);
    border: 0;
    border-radius: 6px
}

#user-content-toc ul {
    padding-left: 0;
    font-weight: 600;
    list-style: none
}

#user-content-toc ul li {
    padding-left: .2em
}

#user-content-toc ul ul {
    font-weight: 400
}

#user-content-toc ul ul li::before {
    float: left;
    margin-top: -0.2em;
    margin-right: .2em;
    font-size: 1.2em;
    line-height: 1;
    color: var(--color-fg-muted);
    content: "⌞"
}

#user-content-toc ul ul ul {
    padding-left: .9em
}

#user-content-toctitle h2 {
    margin-top: 1em;
    margin-bottom: .5em;
    font-size: 1.25em;
    border-bottom: 0
}

.user-list-info {
    min-height: 48px;
    padding: 0;
    font-size: 18px;
    font-weight: 400;
    line-height: 20px
}

.wiki-rightbar .markdown-body .anchor {
    display: none
}

.wiki-rightbar .markdown-body h1 {
    font-size: 1.6em
}

.wiki-rightbar .markdown-body h2 {
    font-size: 1.4em
}

.wiki-rightbar p:last-child,.wiki-rightbar ul:last-child,.wiki-rightbar ol:last-child {
    margin-bottom: 0
}

.wiki-footer .markdown-body,.wiki-rightbar .markdown-body {
    font-size: 13px
}

.wiki-footer .markdown-body.wiki-writable>:nth-child(2),.wiki-rightbar .markdown-body.wiki-writable>:nth-child(2) {
    margin-top: 0 !important
}

.wiki-footer .markdown-body img {
    background: none
}

.wiki-pages-box .wiki-more-pages {
    display: none
}

.wiki-pages-box.wiki-show-more .wiki-more-pages,.wiki-pages-box .filterable-active .wiki-more-pages {
    display: block
}

.wiki-pages-box.wiki-show-more .wiki-more-pages-link,.wiki-pages-box .filterable-active .wiki-more-pages-link {
    display: none
}

.js-wiki-sidebar-toc-toggle-chevron {
    transition: transform 250ms ease-in-out;
    transform: rotate(-90deg)
}

.js-wiki-sidebar-toc-toggle-chevron.js-wiki-sidebar-toc-toggle-chevron-open {
    transform: rotate(0deg)
}

.visual-graph {
    transition: opacity ease-out .1s
}

.WorkflowGraph {
    cursor: grab
}

.WorkflowGraph.dragging * {
    cursor: grabbing !important
}

.WorkflowGraph.dragging .WorkflowJob:hover {
    background: none !important
}

.WorkflowGraph.dragging a:hover,.WorkflowGraph.dragging .btn-link:hover {
    text-decoration: none !important
}

.WorkflowStage {
    margin-right: 56px !important
}

.WorkflowCard {
    z-index: 1;
    width: 260px;
    background-color: var(--color-workflow-card-bg);
    transition: background-color ease-out .12s,border-color ease-out .12s,box-shadow ease-out .12s
}

.WorkflowCard.active {
    z-index: 3;
    box-shadow: var(--color-shadow-medium) !important
}

.WorkflowCard.active--in .WorkflowCard-port--input::after {
    background-color: var(--color-workflow-card-connector-highlight-bg)
}

.WorkflowCard.active--out .WorkflowCard-port--output::after {
    background-color: var(--color-workflow-card-connector-highlight-bg)
}

.visual-graph.active .WorkflowCard:not(.active) {
    background-color: var(--color-workflow-card-inactive-bg);
    border-color: var(--color-border-muted) !important
}

.visual-graph.active .WorkflowCard:not(.active) .WorkflowJob,.visual-graph.active .WorkflowCard:not(.active) .MatrixComponent-pending,.visual-graph.active .WorkflowCard:not(.active) .WorkflowCard-heading--content {
    opacity: .5
}

.visual-graph.active .WorkflowCard:not(.active) .WorkflowCard-port::before {
    background-color: var(--color-workflow-card-inactive-bg)
}

.visual-graph.active .WorkflowCard:not(.active) .WorkflowCard-port::after {
    background-color: var(--color-workflow-card-connector-inactive-bg)
}

.visual-graph.active .WorkflowCard:not(.active) .WorkflowCard-port--input {
    background-image: linear-gradient(270deg, var(--color-workflow-card-inactive-bg) 0%, var(--color-workflow-card-inactive-bg) 50%, var(--color-border-default) 50%, var(--color-border-default) 100%)
}

.visual-graph.active .WorkflowCard:not(.active) .WorkflowCard-port--output {
    background-image: linear-gradient(90deg, var(--color-workflow-card-inactive-bg) 0%, var(--color-workflow-card-inactive-bg) 50%, var(--color-border-default) 50%, var(--color-border-default) 100%)
}

.visual-graph.active .WorkflowCard:not(.active) .WorkflowCard-heading {
    background-color: var(--color-workflow-card-inactive-bg);
    box-shadow: inset 0 1px 0 var(--color-border-muted),inset 1px 0 0 var(--color-border-muted),inset -1px 0 0 var(--color-border-muted),0 -1px 2px var(--color-workflow-card-header-shadow)
}

.visual-graph.active .WorkflowCard:not(.active) .WorkflowCard-heading::after {
    box-shadow: inset 1px 0 0 var(--color-border-muted),inset 0 -1px 0 var(--color-border-muted),-1px 3px var(--color-workflow-card-inactive-bg)
}

.visual-graph.active .WorkflowConnector:not(.active) {
    stroke: var(--color-workflow-card-connector-inactive)
}

.WorkflowCard.WorkflowCard-group {
    width: 292px
}

.WorkflowCard.has-title {
    border-top-left-radius: 0 !important
}

.WorkflowCard-heading {
    top: -21px;
    left: -1px;
    background-color: var(--color-workflow-card-bg);
    box-shadow: inset 0 1px 0 var(--color-border-default),inset 1px 0 0 var(--color-border-default),inset -1px 0 0 var(--color-border-default),0 -1px 2px var(--color-workflow-card-header-shadow);
    transition: background-color ease-out .12s,box-shadow ease-out .12s
}

.WorkflowCard-heading--content {
    transition: opacity ease-out .12s
}

.WorkflowCard-heading::after {
    position: absolute;
    top: 5px;
    width: 20px;
    height: 16px;
    margin-left: 15px;
    content: "";
    border-bottom-left-radius: 6px;
    box-shadow: inset 1px 0 0 var(--color-border-default),inset 0 -1px 0 var(--color-border-default),-1px 3px var(--color-workflow-card-bg);
    transition: box-shadow ease-out .12s
}

.WorkflowCard-group .WorkflowCard-port {
    top: 30px
}

.WorkflowCard-group .WorkflowJob:hover {
    background: var(--color-canvas-subtle)
}

.WorkflowCard-port {
    top: 14px;
    width: 16px;
    height: 16px
}

.WorkflowCard-port::before {
    position: absolute;
    top: 1px;
    left: 1px;
    width: 14px;
    height: 14px;
    content: "";
    background-color: var(--color-workflow-card-bg);
    border-radius: 50%;
    transition: background-color ease-out .12s
}

.WorkflowCard-port::after {
    position: absolute;
    top: 4px;
    left: 4px;
    width: 8px;
    height: 8px;
    content: "";
    background-color: var(--color-workflow-card-connector-bg);
    border-radius: 50%;
    transition: background-color ease-out .12s
}

.WorkflowCard-port--input {
    left: -8px;
    background-image: linear-gradient(270deg, var(--color-workflow-card-bg) 0%, var(--color-workflow-card-bg) 50%, var(--color-border-default) 50%, var(--color-border-default) 100%)
}

.WorkflowCard-port--output {
    right: -8px;
    background-image: linear-gradient(90deg, var(--color-workflow-card-bg) 0%, var(--color-workflow-card-bg) 50%, var(--color-border-default) 50%, var(--color-border-default) 100%)
}

.WorkflowJob-deployment-progress .Progress {
    background: none
}

.WorkflowJob-deployment-progress .WorkflowJob-deployment-progress-complete {
    background-color: var(--color-workflow-card-progress-complete-bg) !important
}

.WorkflowJob-deployment-progress .WorkflowJob-deployment-progress-incomplete {
    background-color: var(--color-workflow-card-progress-incomplete-bg) !important
}

.WorkflowJob {
    padding: 12px;
    transition: opacity ease-out .12s
}

.WorkflowJob-title {
    height: 20px;
    line-height: 20px
}

.WorkflowJob-title::after {
    position: absolute;
    top: 0;
    right: 0;
    bottom: 0;
    left: 0;
    content: ""
}

.MatrixComponent-pending {
    padding: 12px;
    transition: opacity ease-out .12s
}

.MatrixComponent-collapse--title {
    line-height: 20px
}

.WorkflowConnectors {
    z-index: 0;
    pointer-events: none;
    transform-origin: left top
}

.WorkflowConnectors.active {
    z-index: 2
}

.WorkflowConnector {
    stroke: var(--color-workflow-card-connector);
    stroke-width: 2px;
    transition: stroke ease-out .12s,stroke-width ease-out .12s,opacity ease-out .12s
}

.WorkflowConnector--hl {
    opacity: 0
}

.WorkflowConnector--hl.active {
    stroke: var(--color-workflow-card-connector-highlight);
    stroke-width: 3px;
    opacity: 1
}

.zoom-btn {
    padding: 5px;
    line-height: 16px
}

.zoom-btn .octicon {
    color: var(--color-fg-default)
}

.zoom-btn.disabled .octicon {
    color: var(--color-fg-muted)
}

@media(min-width: 1012px) {
    .actions-workflow-navigation {
        max-width:340px
    }
}

@media(min-width: 768px) {
    .actions-workflow-navigation {
        top:16px;
        max-height: calc(100vh - 16px)
    }
}

.actions-workflow-navigation .row {
    height: 40px;
    line-height: 20px;
    text-decoration: none;
    transition: background-color .15s ease
}

.actions-workflow-navigation .row:hover {
    background-color: var(--color-canvas-subtle)
}

.actions-workflow-navigation .row-selected {
    font-weight: 600;
    background-color: var(--color-canvas-subtle)
}

.actions-workflow-navigation .row-section {
    background: transparent !important
}

.actions-workflow-navigation .row-parent {
    background: transparent
}

.actions-workflow-navigation .row-parent:hover {
    background-color: transparent
}

.actions-workflow-navigation .row-child {
    height: 32px
}

.actions-workflow-navigation .row-child:hover {
    color: var(--color-fg-default) !important
}

.actions-workflow-table.sticky th {
    position: sticky;
    top: 0;
    z-index: 1;
    background-color: var(--color-primer-canvas-sticky)
}

.actions-workflow-table th {
    height: auto;
    line-height: 44px;
    text-align: left
}

.actions-workflow-table td {
    height: 64px;
    padding-top: 12px;
    padding-bottom: 12px;
    line-height: 20px
}

.actions-workflow-table td.compact {
    height: 48px
}

.actions-workflow-table th:first-child,.actions-workflow-table td:first-child {
    padding-left: 16px
}

@media(min-width: 768px) {
    .actions-workflow-table th:first-child,.actions-workflow-table td:first-child {
        padding-left:20px
    }
}

.actions-workflow-table th:last-child,.actions-workflow-table td:last-child {
    padding-right: 20px
}

.actions-workflow-stats .col {
    min-width: 72px
}

.actions-workflow-stats .col-triggered-content {
    min-width: 128px;
    min-height: 24px
}

@media(max-width: 768px) {
    .actions-fullwidth-module {
        position:relative;
        margin-right: -16px !important;
        margin-left: -16px !important;
        border-right: 0 !important;
        border-left: 0 !important
    }

    .actions-fullwidth-module.actions-fullwidth-module {
        border-radius: 0 !important
    }

    .actions-fullwidth-module::after {
        position: absolute;
        right: 0;
        bottom: -17px;
        left: 0;
        z-index: 0;
        height: 16px;
        content: "";
        background-color: var(--color-canvas-subtle)
    }
}

@keyframes expand {
    0% {
        opacity: .5;
        transform: translateY(-4px)
    }

    100% {
        opacity: 1;
        transform: translateY(0)
    }
}

.workflow-nav-mobile-details .octicon-chevron-right {
    transition: transform .09s ease-out
}

.workflow-nav-mobile-details[open] .octicon-chevron-right {
    transform: rotate(90deg)
}

.workflow-nav-mobile-details[open] .job-list {
    animation: expand .2s ease
}

.workflow-nav-mobile-details .job-list {
    position: relative
}

.workflow-nav-mobile-details .job-link {
    height: 40px
}

.workflow-nav-mobile-details .job-link:hover {
    background: var(--color-neutral-subtle)
}

.ActionsApprovalOverlay-environment {
    min-height: 64px;
    cursor: pointer
}

.ActionsApprovalOverlay-environment .AvatarStack-body {
    background: transparent !important
}

.ActionsApprovalOverlay-environment:hover,.ActionsApprovalOverlay-environment.selected-approval-environment {
    background: var(--color-neutral-subtle);
    border-color: var(--color-neutral-subtle) !important
}

.uxr_CheckRun-search {
    width: auto
}

.uxr_CheckRun-header {
    position: sticky;
    top: 0;
    z-index: 1
}

.uxr_CheckRun-header::after {
    position: absolute;
    right: 0;
    bottom: -9px;
    left: 0;
    height: 8px;
    content: "";
    background-color: inherit
}

.uxr_CheckStep-header {
    position: sticky;
    top: 88px;
    transition: background-color .15s ease
}

.annotation--contracted div:first-child {
    overflow: hidden;
    text-overflow: ellipsis;
    white-space: nowrap
}

.annotation--expanded div:first-child {
    word-break: break-word;
    white-space: pre-wrap
}

.enterprise-settings .field-with-errors {
    min-width: 0;
    padding: 0
}

/*# sourceMappingURL=github-2eaaf0179ba458fba81ad194113e1f7b.css.map */
