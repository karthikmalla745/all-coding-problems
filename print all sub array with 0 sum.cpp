<!DOCTYPE html>
<!-- saved from url=(0082)https://code.dcoder.tech/files/code/6086c17b37e017071743335f/frequency?section=all -->
<html lang=""><head><meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
          <meta http-equiv="X-UA-Compatible" content="IE=edge">
          
          <meta name="mobile-web-app-capable" content="yes">
          <meta name="apple-mobile-web-app-capable" content="yes">
          <meta name="theme-color" content="#536878">
          <title>frequency.cpp</title>
          <meta data-react-helmet="true" name="description" content="Dcoder is an online compiler, a cloud based IDE for mobile and desktops, where one can code and learn algorithms. Now code, compile, run anytime anywhere."><meta data-react-helmet="true" property="og:description" content="Dcoder is an online compiler, a cloud based IDE for mobile and desktops, where one can code and learn algorithms. Now code, compile, run anytime anywhere."><meta data-react-helmet="true" property="fb:app_id" content="1691462227779870">
          
          <meta name="viewport" content="width=device-width, initial-scale=1">
          <link rel="stylesheet" href="./print all sub array with 0 sum_files/icon">
          <link rel="stylesheet" href="./print all sub array with 0 sum_files/all.css" integrity="sha384-lKuwvrZot6UHsBSfcMvOkWwlCMgc0TaWr+30HWe3a4ltaBwTZhyTEggF5tJv8tbt" crossorigin="anonymous" async="">
          <link rel="manifest" href="https://code.dcoder.tech/manifest.json">
          <link rel="icon" href="https://code.dcoder.tech/images/logoIcon.png">
          <script async="" src="./print all sub array with 0 sum_files/analytics.js.download"></script><script async="" src="./print all sub array with 0 sum_files/analytics.js.download"></script><script async="" src="./print all sub array with 0 sum_files/analytics.js.download"></script><script async="" src="./print all sub array with 0 sum_files/analytics.js.download"></script><script async="" src="./print all sub array with 0 sum_files/analytics.js.download"></script><script async="" src="./print all sub array with 0 sum_files/analytics.js.download"></script><script async="" src="./print all sub array with 0 sum_files/analytics.js.download"></script><script src="./print all sub array with 0 sum_files/client" async="" defer=""></script>
          <link rel="preconnect" href="https://code.dcoder.tech/files/code/6086c17b37e017071743335f/%E2%80%9Dhttps://init.dcoder.tech%22">
          <link rel="preconnect" href="https://code.dcoder.tech/files/code/6086c17b37e017071743335f/%E2%80%9Dhttps://xcapi.dcoder.tech%22">
          <link rel="dns-prefetch" href="https://code.dcoder.tech/files/code/6086c17b37e017071743335f/%E2%80%9Dhttp://cdn.carbonads.com%22">
          <link rel="dns-prefetch" href="https://code.dcoder.tech/files/code/6086c17b37e017071743335f/%E2%80%9Dhttps://srv.carbonads.net">
          <link rel="dns-prefetch" href="https://code.dcoder.tech/files/code/6086c17b37e017071743335f/%E2%80%9Dhttps://www.google-analytics.com">
          <script src="./print all sub array with 0 sum_files/jwt-decode.cjs.min.js.download"></script>
          <link rel="stylesheet" href="./print all sub array with 0 sum_files/bundle.c70876fa.css">
          <style id="jss-ssr">.MuiSvgIcon-root {
  fill: currentColor;
  width: 1em;
  height: 1em;
  display: inline-block;
  font-size: 1.5rem;
  transition: fill 200ms cubic-bezier(0.4, 0, 0.2, 1) 0ms;
  flex-shrink: 0;
  user-select: none;
}
.MuiSvgIcon-colorPrimary {
  color: #3f51b5;
}
.MuiSvgIcon-colorSecondary {
  color: #00BFA5;
}
.MuiSvgIcon-colorAction {
  color: #fff;
}
.MuiSvgIcon-colorError {
  color: #f44336;
}
.MuiSvgIcon-colorDisabled {
  color: rgba(255, 255, 255, 0.3);
}
.MuiSvgIcon-fontSizeInherit {
  font-size: inherit;
}
.MuiSvgIcon-fontSizeSmall {
  font-size: 1.25rem;
}
.MuiSvgIcon-fontSizeLarge {
  font-size: 2.1875rem;
}
.MuiPaper-root {
  color: #fff;
  transition: box-shadow 300ms cubic-bezier(0.4, 0, 0.2, 1) 0ms;
  background-color: #424242;
}
.MuiPaper-rounded {
  border-radius: 4px;
}
.MuiPaper-outlined {
  border: 1px solid rgba(255, 255, 255, 0.12);
}
.MuiPaper-elevation0 {
  box-shadow: none;
}
.MuiPaper-elevation1 {
  box-shadow: 0px 2px 1px -1px rgba(0,0,0,0.2),0px 1px 1px 0px rgba(0,0,0,0.14),0px 1px 3px 0px rgba(0,0,0,0.12);
}
.MuiPaper-elevation2 {
  box-shadow: 0px 3px 1px -2px rgba(0,0,0,0.2),0px 2px 2px 0px rgba(0,0,0,0.14),0px 1px 5px 0px rgba(0,0,0,0.12);
}
.MuiPaper-elevation3 {
  box-shadow: 0px 3px 3px -2px rgba(0,0,0,0.2),0px 3px 4px 0px rgba(0,0,0,0.14),0px 1px 8px 0px rgba(0,0,0,0.12);
}
.MuiPaper-elevation4 {
  box-shadow: 0px 2px 4px -1px rgba(0,0,0,0.2),0px 4px 5px 0px rgba(0,0,0,0.14),0px 1px 10px 0px rgba(0,0,0,0.12);
}
.MuiPaper-elevation5 {
  box-shadow: 0px 3px 5px -1px rgba(0,0,0,0.2),0px 5px 8px 0px rgba(0,0,0,0.14),0px 1px 14px 0px rgba(0,0,0,0.12);
}
.MuiPaper-elevation6 {
  box-shadow: 0px 3px 5px -1px rgba(0,0,0,0.2),0px 6px 10px 0px rgba(0,0,0,0.14),0px 1px 18px 0px rgba(0,0,0,0.12);
}
.MuiPaper-elevation7 {
  box-shadow: 0px 4px 5px -2px rgba(0,0,0,0.2),0px 7px 10px 1px rgba(0,0,0,0.14),0px 2px 16px 1px rgba(0,0,0,0.12);
}
.MuiPaper-elevation8 {
  box-shadow: 0px 5px 5px -3px rgba(0,0,0,0.2),0px 8px 10px 1px rgba(0,0,0,0.14),0px 3px 14px 2px rgba(0,0,0,0.12);
}
.MuiPaper-elevation9 {
  box-shadow: 0px 5px 6px -3px rgba(0,0,0,0.2),0px 9px 12px 1px rgba(0,0,0,0.14),0px 3px 16px 2px rgba(0,0,0,0.12);
}
.MuiPaper-elevation10 {
  box-shadow: 0px 6px 6px -3px rgba(0,0,0,0.2),0px 10px 14px 1px rgba(0,0,0,0.14),0px 4px 18px 3px rgba(0,0,0,0.12);
}
.MuiPaper-elevation11 {
  box-shadow: 0px 6px 7px -4px rgba(0,0,0,0.2),0px 11px 15px 1px rgba(0,0,0,0.14),0px 4px 20px 3px rgba(0,0,0,0.12);
}
.MuiPaper-elevation12 {
  box-shadow: 0px 7px 8px -4px rgba(0,0,0,0.2),0px 12px 17px 2px rgba(0,0,0,0.14),0px 5px 22px 4px rgba(0,0,0,0.12);
}
.MuiPaper-elevation13 {
  box-shadow: 0px 7px 8px -4px rgba(0,0,0,0.2),0px 13px 19px 2px rgba(0,0,0,0.14),0px 5px 24px 4px rgba(0,0,0,0.12);
}
.MuiPaper-elevation14 {
  box-shadow: 0px 7px 9px -4px rgba(0,0,0,0.2),0px 14px 21px 2px rgba(0,0,0,0.14),0px 5px 26px 4px rgba(0,0,0,0.12);
}
.MuiPaper-elevation15 {
  box-shadow: 0px 8px 9px -5px rgba(0,0,0,0.2),0px 15px 22px 2px rgba(0,0,0,0.14),0px 6px 28px 5px rgba(0,0,0,0.12);
}
.MuiPaper-elevation16 {
  box-shadow: 0px 8px 10px -5px rgba(0,0,0,0.2),0px 16px 24px 2px rgba(0,0,0,0.14),0px 6px 30px 5px rgba(0,0,0,0.12);
}
.MuiPaper-elevation17 {
  box-shadow: 0px 8px 11px -5px rgba(0,0,0,0.2),0px 17px 26px 2px rgba(0,0,0,0.14),0px 6px 32px 5px rgba(0,0,0,0.12);
}
.MuiPaper-elevation18 {
  box-shadow: 0px 9px 11px -5px rgba(0,0,0,0.2),0px 18px 28px 2px rgba(0,0,0,0.14),0px 7px 34px 6px rgba(0,0,0,0.12);
}
.MuiPaper-elevation19 {
  box-shadow: 0px 9px 12px -6px rgba(0,0,0,0.2),0px 19px 29px 2px rgba(0,0,0,0.14),0px 7px 36px 6px rgba(0,0,0,0.12);
}
.MuiPaper-elevation20 {
  box-shadow: 0px 10px 13px -6px rgba(0,0,0,0.2),0px 20px 31px 3px rgba(0,0,0,0.14),0px 8px 38px 7px rgba(0,0,0,0.12);
}
.MuiPaper-elevation21 {
  box-shadow: 0px 10px 13px -6px rgba(0,0,0,0.2),0px 21px 33px 3px rgba(0,0,0,0.14),0px 8px 40px 7px rgba(0,0,0,0.12);
}
.MuiPaper-elevation22 {
  box-shadow: 0px 10px 14px -6px rgba(0,0,0,0.2),0px 22px 35px 3px rgba(0,0,0,0.14),0px 8px 42px 7px rgba(0,0,0,0.12);
}
.MuiPaper-elevation23 {
  box-shadow: 0px 11px 14px -7px rgba(0,0,0,0.2),0px 23px 36px 3px rgba(0,0,0,0.14),0px 9px 44px 8px rgba(0,0,0,0.12);
}
.MuiPaper-elevation24 {
  box-shadow: 0px 11px 15px -7px rgba(0,0,0,0.2),0px 24px 38px 3px rgba(0,0,0,0.14),0px 9px 46px 8px rgba(0,0,0,0.12);
}
.MuiButtonBase-root {
  color: inherit;
  border: 0;
  cursor: pointer;
  margin: 0;
  display: inline-flex;
  outline: 0;
  padding: 0;
  position: relative;
  align-items: center;
  user-select: none;
  border-radius: 0;
  vertical-align: middle;
  -moz-appearance: none;
  justify-content: center;
  text-decoration: none;
  background-color: transparent;
  -webkit-appearance: none;
  -webkit-tap-highlight-color: transparent;
}
.MuiButtonBase-root::-moz-focus-inner {
  border-style: none;
}
.MuiButtonBase-root.Mui-disabled {
  cursor: default;
  pointer-events: none;
}
.MuiButton-root {
  color: #fff;
  padding: 6px 16px;
  font-size: 0.875rem;
  min-width: 64px;
  box-sizing: border-box;
  transition: background-color 250ms cubic-bezier(0.4, 0, 0.2, 1) 0ms,box-shadow 250ms cubic-bezier(0.4, 0, 0.2, 1) 0ms,border 250ms cubic-bezier(0.4, 0, 0.2, 1) 0ms;
  font-family: "Roboto", "Helvetica", "Arial", sans-serif;
  font-weight: 500;
  line-height: 1.75;
  border-radius: 4px;
  letter-spacing: 0.02857em;
  text-transform: uppercase;
}
.MuiButton-root:hover {
  text-decoration: none;
  background-color: rgba(255, 255, 255, 0.08);
}
.MuiButton-root.Mui-disabled {
  color: rgba(255, 255, 255, 0.3);
}
@media (hover: none) {
  .MuiButton-root:hover {
    background-color: transparent;
  }
}
  .MuiButton-root:hover.Mui-disabled {
    background-color: transparent;
  }
  .MuiButton-label {
    width: 100%;
    display: inherit;
    align-items: inherit;
    justify-content: inherit;
  }
  .MuiButton-text {
    padding: 6px 8px;
  }
  .MuiButton-textPrimary {
    color: #3f51b5;
  }
  .MuiButton-textPrimary:hover {
    background-color: rgba(63, 81, 181, 0.08);
  }
@media (hover: none) {
  .MuiButton-textPrimary:hover {
    background-color: transparent;
  }
}
  .MuiButton-textSecondary {
    color: #00BFA5;
  }
  .MuiButton-textSecondary:hover {
    background-color: rgba(0, 191, 165, 0.08);
  }
@media (hover: none) {
  .MuiButton-textSecondary:hover {
    background-color: transparent;
  }
}
  .MuiButton-outlined {
    border: 1px solid rgba(255, 255, 255, 0.23);
    padding: 5px 15px;
  }
  .MuiButton-outlined.Mui-disabled {
    border: 1px solid rgba(255, 255, 255, 0.12);
  }
  .MuiButton-outlinedPrimary {
    color: #3f51b5;
    border: 1px solid rgba(63, 81, 181, 0.5);
  }
  .MuiButton-outlinedPrimary:hover {
    border: 1px solid #3f51b5;
    background-color: rgba(63, 81, 181, 0.08);
  }
@media (hover: none) {
  .MuiButton-outlinedPrimary:hover {
    background-color: transparent;
  }
}
  .MuiButton-outlinedSecondary {
    color: #00BFA5;
    border: 1px solid rgba(0, 191, 165, 0.5);
  }
  .MuiButton-outlinedSecondary:hover {
    border: 1px solid #00BFA5;
    background-color: rgba(0, 191, 165, 0.08);
  }
  .MuiButton-outlinedSecondary.Mui-disabled {
    border: 1px solid rgba(255, 255, 255, 0.3);
  }
@media (hover: none) {
  .MuiButton-outlinedSecondary:hover {
    background-color: transparent;
  }
}
  .MuiButton-contained {
    color: rgba(0, 0, 0, 0.87);
    box-shadow: 0px 3px 1px -2px rgba(0,0,0,0.2),0px 2px 2px 0px rgba(0,0,0,0.14),0px 1px 5px 0px rgba(0,0,0,0.12);
    background-color: #e0e0e0;
  }
  .MuiButton-contained:hover {
    box-shadow: 0px 2px 4px -1px rgba(0,0,0,0.2),0px 4px 5px 0px rgba(0,0,0,0.14),0px 1px 10px 0px rgba(0,0,0,0.12);
    background-color: #d5d5d5;
  }
  .MuiButton-contained.Mui-focusVisible {
    box-shadow: 0px 3px 5px -1px rgba(0,0,0,0.2),0px 6px 10px 0px rgba(0,0,0,0.14),0px 1px 18px 0px rgba(0,0,0,0.12);
  }
  .MuiButton-contained:active {
    box-shadow: 0px 5px 5px -3px rgba(0,0,0,0.2),0px 8px 10px 1px rgba(0,0,0,0.14),0px 3px 14px 2px rgba(0,0,0,0.12);
  }
  .MuiButton-contained.Mui-disabled {
    color: rgba(255, 255, 255, 0.3);
    box-shadow: none;
    background-color: rgba(255, 255, 255, 0.12);
  }
@media (hover: none) {
  .MuiButton-contained:hover {
    box-shadow: 0px 3px 1px -2px rgba(0,0,0,0.2),0px 2px 2px 0px rgba(0,0,0,0.14),0px 1px 5px 0px rgba(0,0,0,0.12);
    background-color: #e0e0e0;
  }
}
  .MuiButton-contained:hover.Mui-disabled {
    background-color: rgba(255, 255, 255, 0.12);
  }
  .MuiButton-containedPrimary {
    color: #fff;
    background-color: #3f51b5;
  }
  .MuiButton-containedPrimary:hover {
    background-color: #303f9f;
  }
@media (hover: none) {
  .MuiButton-containedPrimary:hover {
    background-color: #3f51b5;
  }
}
  .MuiButton-containedSecondary {
    color: #ffcc00;
    background-color: #00BFA5;
  }
  .MuiButton-containedSecondary:hover {
    background-color: rgb(0, 133, 115);
  }
@media (hover: none) {
  .MuiButton-containedSecondary:hover {
    background-color: #00BFA5;
  }
}
  .MuiButton-disableElevation {
    box-shadow: none;
  }
  .MuiButton-disableElevation:hover {
    box-shadow: none;
  }
  .MuiButton-disableElevation.Mui-focusVisible {
    box-shadow: none;
  }
  .MuiButton-disableElevation:active {
    box-shadow: none;
  }
  .MuiButton-disableElevation.Mui-disabled {
    box-shadow: none;
  }
  .MuiButton-colorInherit {
    color: inherit;
    border-color: currentColor;
  }
  .MuiButton-textSizeSmall {
    padding: 4px 5px;
    font-size: 0.8125rem;
  }
  .MuiButton-textSizeLarge {
    padding: 8px 11px;
    font-size: 0.9375rem;
  }
  .MuiButton-outlinedSizeSmall {
    padding: 3px 9px;
    font-size: 0.8125rem;
  }
  .MuiButton-outlinedSizeLarge {
    padding: 7px 21px;
    font-size: 0.9375rem;
  }
  .MuiButton-containedSizeSmall {
    padding: 4px 10px;
    font-size: 0.8125rem;
  }
  .MuiButton-containedSizeLarge {
    padding: 8px 22px;
    font-size: 0.9375rem;
  }
  .MuiButton-fullWidth {
    width: 100%;
  }
  .MuiButton-startIcon {
    display: inherit;
    margin-left: -4px;
    margin-right: 8px;
  }
  .MuiButton-startIcon.MuiButton-iconSizeSmall {
    margin-left: -2px;
  }
  .MuiButton-endIcon {
    display: inherit;
    margin-left: 8px;
    margin-right: -4px;
  }
  .MuiButton-endIcon.MuiButton-iconSizeSmall {
    margin-right: -2px;
  }
  .MuiButton-iconSizeSmall > *:first-child {
    font-size: 18px;
  }
  .MuiButton-iconSizeMedium > *:first-child {
    font-size: 20px;
  }
  .MuiButton-iconSizeLarge > *:first-child {
    font-size: 22px;
  }
  .MuiButtonGroup-root {
    display: inline-flex;
    border-radius: 4px;
  }
  .MuiButtonGroup-contained {
    box-shadow: 0px 3px 1px -2px rgba(0,0,0,0.2),0px 2px 2px 0px rgba(0,0,0,0.14),0px 1px 5px 0px rgba(0,0,0,0.12);
  }
  .MuiButtonGroup-fullWidth {
    width: 100%;
  }
  .MuiButtonGroup-vertical {
    flex-direction: column;
  }
  .MuiButtonGroup-grouped {
    min-width: 40px;
  }
  .MuiButtonGroup-groupedHorizontal:not(:first-child) {
    border-top-left-radius: 0;
    border-bottom-left-radius: 0;
  }
  .MuiButtonGroup-groupedHorizontal:not(:last-child) {
    border-top-right-radius: 0;
    border-bottom-right-radius: 0;
  }
  .MuiButtonGroup-groupedVertical:not(:first-child) {
    border-top-left-radius: 0;
    border-top-right-radius: 0;
  }
  .MuiButtonGroup-groupedVertical:not(:last-child) {
    border-bottom-left-radius: 0;
    border-bottom-right-radius: 0;
  }
  .MuiButtonGroup-groupedTextHorizontal:not(:last-child) {
    border-right: 1px solid rgba(255, 255, 255, 0.23);
  }
  .MuiButtonGroup-groupedTextVertical:not(:last-child) {
    border-bottom: 1px solid rgba(255, 255, 255, 0.23);
  }
  .MuiButtonGroup-groupedTextPrimary:not(:last-child) {
    border-color: rgba(63, 81, 181, 0.5);
  }
  .MuiButtonGroup-groupedTextSecondary:not(:last-child) {
    border-color: rgba(0, 191, 165, 0.5);
  }
  .MuiButtonGroup-groupedOutlinedHorizontal:not(:first-child) {
    margin-left: -1px;
  }
  .MuiButtonGroup-groupedOutlinedHorizontal:not(:last-child) {
    border-right-color: transparent;
  }
  .MuiButtonGroup-groupedOutlinedVertical:not(:first-child) {
    margin-top: -1px;
  }
  .MuiButtonGroup-groupedOutlinedVertical:not(:last-child) {
    border-bottom-color: transparent;
  }
  .MuiButtonGroup-groupedOutlinedPrimary:hover {
    border-color: #3f51b5;
  }
  .MuiButtonGroup-groupedOutlinedSecondary:hover {
    border-color: #00BFA5;
  }
  .MuiButtonGroup-groupedContained {
    box-shadow: none;
  }
  .MuiButtonGroup-groupedContainedHorizontal:not(:last-child) {
    border-right: 1px solid #bdbdbd;
  }
  .MuiButtonGroup-groupedContainedHorizontal:not(:last-child).Mui-disabled {
    border-right: 1px solid rgba(255, 255, 255, 0.3);
  }
  .MuiButtonGroup-groupedContainedVertical:not(:last-child) {
    border-bottom: 1px solid #bdbdbd;
  }
  .MuiButtonGroup-groupedContainedVertical:not(:last-child).Mui-disabled {
    border-bottom: 1px solid rgba(255, 255, 255, 0.3);
  }
  .MuiButtonGroup-groupedContainedPrimary:not(:last-child) {
    border-color: #303f9f;
  }
  .MuiButtonGroup-groupedContainedSecondary:not(:last-child) {
    border-color: rgb(0, 133, 115);
  }
  .MuiIconButton-root {
    flex: 0 0 auto;
    color: #fff;
    padding: 12px;
    overflow: visible;
    font-size: 1.5rem;
    text-align: center;
    transition: background-color 150ms cubic-bezier(0.4, 0, 0.2, 1) 0ms;
    border-radius: 50%;
  }
  .MuiIconButton-root:hover {
    background-color: rgba(255, 255, 255, 0.08);
  }
  .MuiIconButton-root.Mui-disabled {
    color: rgba(255, 255, 255, 0.3);
    background-color: transparent;
  }
@media (hover: none) {
  .MuiIconButton-root:hover {
    background-color: transparent;
  }
}
  .MuiIconButton-edgeStart {
    margin-left: -12px;
  }
  .MuiIconButton-sizeSmall.MuiIconButton-edgeStart {
    margin-left: -3px;
  }
  .MuiIconButton-edgeEnd {
    margin-right: -12px;
  }
  .MuiIconButton-sizeSmall.MuiIconButton-edgeEnd {
    margin-right: -3px;
  }
  .MuiIconButton-colorInherit {
    color: inherit;
  }
  .MuiIconButton-colorPrimary {
    color: #3f51b5;
  }
  .MuiIconButton-colorPrimary:hover {
    background-color: rgba(63, 81, 181, 0.08);
  }
@media (hover: none) {
  .MuiIconButton-colorPrimary:hover {
    background-color: transparent;
  }
}
  .MuiIconButton-colorSecondary {
    color: #00BFA5;
  }
  .MuiIconButton-colorSecondary:hover {
    background-color: rgba(0, 191, 165, 0.08);
  }
@media (hover: none) {
  .MuiIconButton-colorSecondary:hover {
    background-color: transparent;
  }
}
  .MuiIconButton-sizeSmall {
    padding: 3px;
    font-size: 1.125rem;
  }
  .MuiIconButton-label {
    width: 100%;
    display: flex;
    align-items: inherit;
    justify-content: inherit;
  }
html {
  box-sizing: border-box;
  -webkit-font-smoothing: antialiased;
  -moz-osx-font-smoothing: grayscale;
}
*, *::before, *::after {
  box-sizing: inherit;
}
strong, b {
  font-weight: 700;
}
body {
  color: #fff;
  margin: 0;
  font-size: 0.875rem;
  font-family: "Roboto", "Helvetica", "Arial", sans-serif;
  font-weight: 400;
  line-height: 1.43;
  letter-spacing: 0.01071em;
  background-color: rgb(17, 17, 17);
}
@media print {
  body {
    background-color: #fff;
  }
}
body::backdrop {
  background-color: rgb(17, 17, 17);
}
@media print {
  .MuiDialog-root {
    position: absolute !important;
  }
}
  .MuiDialog-scrollPaper {
    display: flex;
    align-items: center;
    justify-content: center;
  }
  .MuiDialog-scrollBody {
    overflow-x: hidden;
    overflow-y: auto;
    text-align: center;
  }
  .MuiDialog-scrollBody:after {
    width: 0;
    height: 100%;
    content: "";
    display: inline-block;
    vertical-align: middle;
  }
  .MuiDialog-container {
    height: 100%;
    outline: 0;
  }
@media print {
  .MuiDialog-container {
    height: auto;
  }
}
  .MuiDialog-paper {
    margin: 32px;
    position: relative;
    overflow-y: auto;
  }
@media print {
  .MuiDialog-paper {
    box-shadow: none;
    overflow-y: visible;
  }
}
  .MuiDialog-paperScrollPaper {
    display: flex;
    max-height: calc(100% - 64px);
    flex-direction: column;
  }
  .MuiDialog-paperScrollBody {
    display: inline-block;
    text-align: left;
    vertical-align: middle;
  }
  .MuiDialog-paperWidthFalse {
    max-width: calc(100% - 64px);
  }
  .MuiDialog-paperWidthXs {
    max-width: 444px;
  }
@media (max-width:507.95px) {
  .MuiDialog-paperWidthXs.MuiDialog-paperScrollBody {
    max-width: calc(100% - 64px);
  }
}
  .MuiDialog-paperWidthSm {
    max-width: 600px;
  }
@media (max-width:663.95px) {
  .MuiDialog-paperWidthSm.MuiDialog-paperScrollBody {
    max-width: calc(100% - 64px);
  }
}
  .MuiDialog-paperWidthMd {
    max-width: 960px;
  }
@media (max-width:1023.95px) {
  .MuiDialog-paperWidthMd.MuiDialog-paperScrollBody {
    max-width: calc(100% - 64px);
  }
}
  .MuiDialog-paperWidthLg {
    max-width: 1280px;
  }
@media (max-width:1343.95px) {
  .MuiDialog-paperWidthLg.MuiDialog-paperScrollBody {
    max-width: calc(100% - 64px);
  }
}
  .MuiDialog-paperWidthXl {
    max-width: 1920px;
  }
@media (max-width:1983.95px) {
  .MuiDialog-paperWidthXl.MuiDialog-paperScrollBody {
    max-width: calc(100% - 64px);
  }
}
  .MuiDialog-paperFullWidth {
    width: calc(100% - 64px);
  }
  .MuiDialog-paperFullScreen {
    width: 100%;
    height: 100%;
    margin: 0;
    max-width: 100%;
    max-height: none;
    border-radius: 0;
  }
  .MuiDialog-paperFullScreen.MuiDialog-paperScrollBody {
    margin: 0;
    max-width: 100%;
  }
  .MuiDrawer-docked {
    flex: 0 0 auto;
  }
  .MuiDrawer-paper {
    top: 0;
    flex: 1 0 auto;
    height: 100%;
    display: flex;
    outline: 0;
    z-index: 1200;
    position: fixed;
    overflow-y: auto;
    flex-direction: column;
    -webkit-overflow-scrolling: touch;
  }
  .MuiDrawer-paperAnchorLeft {
    left: 0;
    right: auto;
  }
  .MuiDrawer-paperAnchorRight {
    left: auto;
    right: 0;
  }
  .MuiDrawer-paperAnchorTop {
    top: 0;
    left: 0;
    right: 0;
    bottom: auto;
    height: auto;
    max-height: 100%;
  }
  .MuiDrawer-paperAnchorBottom {
    top: auto;
    left: 0;
    right: 0;
    bottom: 0;
    height: auto;
    max-height: 100%;
  }
  .MuiDrawer-paperAnchorDockedLeft {
    border-right: 1px solid rgba(255, 255, 255, 0.12);
  }
  .MuiDrawer-paperAnchorDockedTop {
    border-bottom: 1px solid rgba(255, 255, 255, 0.12);
  }
  .MuiDrawer-paperAnchorDockedRight {
    border-left: 1px solid rgba(255, 255, 255, 0.12);
  }
  .MuiDrawer-paperAnchorDockedBottom {
    border-top: 1px solid rgba(255, 255, 255, 0.12);
  }
  .MuiGrid-container {
    width: 100%;
    display: flex;
    flex-wrap: wrap;
    box-sizing: border-box;
  }
  .MuiGrid-item {
    margin: 0;
    box-sizing: border-box;
  }
  .MuiGrid-zeroMinWidth {
    min-width: 0;
  }
  .MuiGrid-direction-xs-column {
    flex-direction: column;
  }
  .MuiGrid-direction-xs-column-reverse {
    flex-direction: column-reverse;
  }
  .MuiGrid-direction-xs-row-reverse {
    flex-direction: row-reverse;
  }
  .MuiGrid-wrap-xs-nowrap {
    flex-wrap: nowrap;
  }
  .MuiGrid-wrap-xs-wrap-reverse {
    flex-wrap: wrap-reverse;
  }
  .MuiGrid-align-items-xs-center {
    align-items: center;
  }
  .MuiGrid-align-items-xs-flex-start {
    align-items: flex-start;
  }
  .MuiGrid-align-items-xs-flex-end {
    align-items: flex-end;
  }
  .MuiGrid-align-items-xs-baseline {
    align-items: baseline;
  }
  .MuiGrid-align-content-xs-center {
    align-content: center;
  }
  .MuiGrid-align-content-xs-flex-start {
    align-content: flex-start;
  }
  .MuiGrid-align-content-xs-flex-end {
    align-content: flex-end;
  }
  .MuiGrid-align-content-xs-space-between {
    align-content: space-between;
  }
  .MuiGrid-align-content-xs-space-around {
    align-content: space-around;
  }
  .MuiGrid-justify-xs-center {
    justify-content: center;
  }
  .MuiGrid-justify-xs-flex-end {
    justify-content: flex-end;
  }
  .MuiGrid-justify-xs-space-between {
    justify-content: space-between;
  }
  .MuiGrid-justify-xs-space-around {
    justify-content: space-around;
  }
  .MuiGrid-justify-xs-space-evenly {
    justify-content: space-evenly;
  }
  .MuiGrid-spacing-xs-1 {
    width: calc(100% + 8px);
    margin: -4px;
  }
  .MuiGrid-spacing-xs-1 > .MuiGrid-item {
    padding: 4px;
  }
  .MuiGrid-spacing-xs-2 {
    width: calc(100% + 16px);
    margin: -8px;
  }
  .MuiGrid-spacing-xs-2 > .MuiGrid-item {
    padding: 8px;
  }
  .MuiGrid-spacing-xs-3 {
    width: calc(100% + 24px);
    margin: -12px;
  }
  .MuiGrid-spacing-xs-3 > .MuiGrid-item {
    padding: 12px;
  }
  .MuiGrid-spacing-xs-4 {
    width: calc(100% + 32px);
    margin: -16px;
  }
  .MuiGrid-spacing-xs-4 > .MuiGrid-item {
    padding: 16px;
  }
  .MuiGrid-spacing-xs-5 {
    width: calc(100% + 40px);
    margin: -20px;
  }
  .MuiGrid-spacing-xs-5 > .MuiGrid-item {
    padding: 20px;
  }
  .MuiGrid-spacing-xs-6 {
    width: calc(100% + 48px);
    margin: -24px;
  }
  .MuiGrid-spacing-xs-6 > .MuiGrid-item {
    padding: 24px;
  }
  .MuiGrid-spacing-xs-7 {
    width: calc(100% + 56px);
    margin: -28px;
  }
  .MuiGrid-spacing-xs-7 > .MuiGrid-item {
    padding: 28px;
  }
  .MuiGrid-spacing-xs-8 {
    width: calc(100% + 64px);
    margin: -32px;
  }
  .MuiGrid-spacing-xs-8 > .MuiGrid-item {
    padding: 32px;
  }
  .MuiGrid-spacing-xs-9 {
    width: calc(100% + 72px);
    margin: -36px;
  }
  .MuiGrid-spacing-xs-9 > .MuiGrid-item {
    padding: 36px;
  }
  .MuiGrid-spacing-xs-10 {
    width: calc(100% + 80px);
    margin: -40px;
  }
  .MuiGrid-spacing-xs-10 > .MuiGrid-item {
    padding: 40px;
  }
  .MuiGrid-grid-xs-auto {
    flex-grow: 0;
    max-width: none;
    flex-basis: auto;
  }
  .MuiGrid-grid-xs-true {
    flex-grow: 1;
    max-width: 100%;
    flex-basis: 0;
  }
  .MuiGrid-grid-xs-1 {
    flex-grow: 0;
    max-width: 8.333333%;
    flex-basis: 8.333333%;
  }
  .MuiGrid-grid-xs-2 {
    flex-grow: 0;
    max-width: 16.666667%;
    flex-basis: 16.666667%;
  }
  .MuiGrid-grid-xs-3 {
    flex-grow: 0;
    max-width: 25%;
    flex-basis: 25%;
  }
  .MuiGrid-grid-xs-4 {
    flex-grow: 0;
    max-width: 33.333333%;
    flex-basis: 33.333333%;
  }
  .MuiGrid-grid-xs-5 {
    flex-grow: 0;
    max-width: 41.666667%;
    flex-basis: 41.666667%;
  }
  .MuiGrid-grid-xs-6 {
    flex-grow: 0;
    max-width: 50%;
    flex-basis: 50%;
  }
  .MuiGrid-grid-xs-7 {
    flex-grow: 0;
    max-width: 58.333333%;
    flex-basis: 58.333333%;
  }
  .MuiGrid-grid-xs-8 {
    flex-grow: 0;
    max-width: 66.666667%;
    flex-basis: 66.666667%;
  }
  .MuiGrid-grid-xs-9 {
    flex-grow: 0;
    max-width: 75%;
    flex-basis: 75%;
  }
  .MuiGrid-grid-xs-10 {
    flex-grow: 0;
    max-width: 83.333333%;
    flex-basis: 83.333333%;
  }
  .MuiGrid-grid-xs-11 {
    flex-grow: 0;
    max-width: 91.666667%;
    flex-basis: 91.666667%;
  }
  .MuiGrid-grid-xs-12 {
    flex-grow: 0;
    max-width: 100%;
    flex-basis: 100%;
  }
@media (min-width:600px) {
  .MuiGrid-grid-sm-auto {
    flex-grow: 0;
    max-width: none;
    flex-basis: auto;
  }
  .MuiGrid-grid-sm-true {
    flex-grow: 1;
    max-width: 100%;
    flex-basis: 0;
  }
  .MuiGrid-grid-sm-1 {
    flex-grow: 0;
    max-width: 8.333333%;
    flex-basis: 8.333333%;
  }
  .MuiGrid-grid-sm-2 {
    flex-grow: 0;
    max-width: 16.666667%;
    flex-basis: 16.666667%;
  }
  .MuiGrid-grid-sm-3 {
    flex-grow: 0;
    max-width: 25%;
    flex-basis: 25%;
  }
  .MuiGrid-grid-sm-4 {
    flex-grow: 0;
    max-width: 33.333333%;
    flex-basis: 33.333333%;
  }
  .MuiGrid-grid-sm-5 {
    flex-grow: 0;
    max-width: 41.666667%;
    flex-basis: 41.666667%;
  }
  .MuiGrid-grid-sm-6 {
    flex-grow: 0;
    max-width: 50%;
    flex-basis: 50%;
  }
  .MuiGrid-grid-sm-7 {
    flex-grow: 0;
    max-width: 58.333333%;
    flex-basis: 58.333333%;
  }
  .MuiGrid-grid-sm-8 {
    flex-grow: 0;
    max-width: 66.666667%;
    flex-basis: 66.666667%;
  }
  .MuiGrid-grid-sm-9 {
    flex-grow: 0;
    max-width: 75%;
    flex-basis: 75%;
  }
  .MuiGrid-grid-sm-10 {
    flex-grow: 0;
    max-width: 83.333333%;
    flex-basis: 83.333333%;
  }
  .MuiGrid-grid-sm-11 {
    flex-grow: 0;
    max-width: 91.666667%;
    flex-basis: 91.666667%;
  }
  .MuiGrid-grid-sm-12 {
    flex-grow: 0;
    max-width: 100%;
    flex-basis: 100%;
  }
}
@media (min-width:960px) {
  .MuiGrid-grid-md-auto {
    flex-grow: 0;
    max-width: none;
    flex-basis: auto;
  }
  .MuiGrid-grid-md-true {
    flex-grow: 1;
    max-width: 100%;
    flex-basis: 0;
  }
  .MuiGrid-grid-md-1 {
    flex-grow: 0;
    max-width: 8.333333%;
    flex-basis: 8.333333%;
  }
  .MuiGrid-grid-md-2 {
    flex-grow: 0;
    max-width: 16.666667%;
    flex-basis: 16.666667%;
  }
  .MuiGrid-grid-md-3 {
    flex-grow: 0;
    max-width: 25%;
    flex-basis: 25%;
  }
  .MuiGrid-grid-md-4 {
    flex-grow: 0;
    max-width: 33.333333%;
    flex-basis: 33.333333%;
  }
  .MuiGrid-grid-md-5 {
    flex-grow: 0;
    max-width: 41.666667%;
    flex-basis: 41.666667%;
  }
  .MuiGrid-grid-md-6 {
    flex-grow: 0;
    max-width: 50%;
    flex-basis: 50%;
  }
  .MuiGrid-grid-md-7 {
    flex-grow: 0;
    max-width: 58.333333%;
    flex-basis: 58.333333%;
  }
  .MuiGrid-grid-md-8 {
    flex-grow: 0;
    max-width: 66.666667%;
    flex-basis: 66.666667%;
  }
  .MuiGrid-grid-md-9 {
    flex-grow: 0;
    max-width: 75%;
    flex-basis: 75%;
  }
  .MuiGrid-grid-md-10 {
    flex-grow: 0;
    max-width: 83.333333%;
    flex-basis: 83.333333%;
  }
  .MuiGrid-grid-md-11 {
    flex-grow: 0;
    max-width: 91.666667%;
    flex-basis: 91.666667%;
  }
  .MuiGrid-grid-md-12 {
    flex-grow: 0;
    max-width: 100%;
    flex-basis: 100%;
  }
}
@media (min-width:1280px) {
  .MuiGrid-grid-lg-auto {
    flex-grow: 0;
    max-width: none;
    flex-basis: auto;
  }
  .MuiGrid-grid-lg-true {
    flex-grow: 1;
    max-width: 100%;
    flex-basis: 0;
  }
  .MuiGrid-grid-lg-1 {
    flex-grow: 0;
    max-width: 8.333333%;
    flex-basis: 8.333333%;
  }
  .MuiGrid-grid-lg-2 {
    flex-grow: 0;
    max-width: 16.666667%;
    flex-basis: 16.666667%;
  }
  .MuiGrid-grid-lg-3 {
    flex-grow: 0;
    max-width: 25%;
    flex-basis: 25%;
  }
  .MuiGrid-grid-lg-4 {
    flex-grow: 0;
    max-width: 33.333333%;
    flex-basis: 33.333333%;
  }
  .MuiGrid-grid-lg-5 {
    flex-grow: 0;
    max-width: 41.666667%;
    flex-basis: 41.666667%;
  }
  .MuiGrid-grid-lg-6 {
    flex-grow: 0;
    max-width: 50%;
    flex-basis: 50%;
  }
  .MuiGrid-grid-lg-7 {
    flex-grow: 0;
    max-width: 58.333333%;
    flex-basis: 58.333333%;
  }
  .MuiGrid-grid-lg-8 {
    flex-grow: 0;
    max-width: 66.666667%;
    flex-basis: 66.666667%;
  }
  .MuiGrid-grid-lg-9 {
    flex-grow: 0;
    max-width: 75%;
    flex-basis: 75%;
  }
  .MuiGrid-grid-lg-10 {
    flex-grow: 0;
    max-width: 83.333333%;
    flex-basis: 83.333333%;
  }
  .MuiGrid-grid-lg-11 {
    flex-grow: 0;
    max-width: 91.666667%;
    flex-basis: 91.666667%;
  }
  .MuiGrid-grid-lg-12 {
    flex-grow: 0;
    max-width: 100%;
    flex-basis: 100%;
  }
}
@media (min-width:1920px) {
  .MuiGrid-grid-xl-auto {
    flex-grow: 0;
    max-width: none;
    flex-basis: auto;
  }
  .MuiGrid-grid-xl-true {
    flex-grow: 1;
    max-width: 100%;
    flex-basis: 0;
  }
  .MuiGrid-grid-xl-1 {
    flex-grow: 0;
    max-width: 8.333333%;
    flex-basis: 8.333333%;
  }
  .MuiGrid-grid-xl-2 {
    flex-grow: 0;
    max-width: 16.666667%;
    flex-basis: 16.666667%;
  }
  .MuiGrid-grid-xl-3 {
    flex-grow: 0;
    max-width: 25%;
    flex-basis: 25%;
  }
  .MuiGrid-grid-xl-4 {
    flex-grow: 0;
    max-width: 33.333333%;
    flex-basis: 33.333333%;
  }
  .MuiGrid-grid-xl-5 {
    flex-grow: 0;
    max-width: 41.666667%;
    flex-basis: 41.666667%;
  }
  .MuiGrid-grid-xl-6 {
    flex-grow: 0;
    max-width: 50%;
    flex-basis: 50%;
  }
  .MuiGrid-grid-xl-7 {
    flex-grow: 0;
    max-width: 58.333333%;
    flex-basis: 58.333333%;
  }
  .MuiGrid-grid-xl-8 {
    flex-grow: 0;
    max-width: 66.666667%;
    flex-basis: 66.666667%;
  }
  .MuiGrid-grid-xl-9 {
    flex-grow: 0;
    max-width: 75%;
    flex-basis: 75%;
  }
  .MuiGrid-grid-xl-10 {
    flex-grow: 0;
    max-width: 83.333333%;
    flex-basis: 83.333333%;
  }
  .MuiGrid-grid-xl-11 {
    flex-grow: 0;
    max-width: 91.666667%;
    flex-basis: 91.666667%;
  }
  .MuiGrid-grid-xl-12 {
    flex-grow: 0;
    max-width: 100%;
    flex-basis: 100%;
  }
}
@media (min-width:0px) and (max-width:599.95px) {
  .PrivateHiddenCss-onlyXs-29 {
    display: none;
  }
}
@media (min-width:0px) {
  .PrivateHiddenCss-xsUp-30 {
    display: none;
  }
}
@media (max-width:599.95px) {
  .PrivateHiddenCss-xsDown-31 {
    display: none;
  }
}
@media (min-width:600px) and (max-width:959.95px) {
  .PrivateHiddenCss-onlySm-32 {
    display: none;
  }
}
@media (min-width:600px) {
  .PrivateHiddenCss-smUp-33 {
    display: none;
  }
}
@media (max-width:959.95px) {
  .PrivateHiddenCss-smDown-34 {
    display: none;
  }
}
@media (min-width:960px) and (max-width:1279.95px) {
  .PrivateHiddenCss-onlyMd-35 {
    display: none;
  }
}
@media (min-width:960px) {
  .PrivateHiddenCss-mdUp-36 {
    display: none;
  }
}
@media (max-width:1279.95px) {
  .PrivateHiddenCss-mdDown-37 {
    display: none;
  }
}
@media (min-width:1280px) and (max-width:1919.95px) {
  .PrivateHiddenCss-onlyLg-38 {
    display: none;
  }
}
@media (min-width:1280px) {
  .PrivateHiddenCss-lgUp-39 {
    display: none;
  }
}
@media (max-width:1919.95px) {
  .PrivateHiddenCss-lgDown-40 {
    display: none;
  }
}
@media (min-width:1920px) {
  .PrivateHiddenCss-onlyXl-41 {
    display: none;
  }
}
@media (min-width:1920px) {
  .PrivateHiddenCss-xlUp-42 {
    display: none;
  }
}
@media (min-width:0px) {
  .PrivateHiddenCss-xlDown-43 {
    display: none;
  }
}
  .MuiList-root {
    margin: 0;
    padding: 0;
    position: relative;
    list-style: none;
  }
  .MuiList-padding {
    padding-top: 8px;
    padding-bottom: 8px;
  }
  .MuiList-subheader {
    padding-top: 0;
  }
  .MuiListItem-root {
    width: 100%;
    display: flex;
    position: relative;
    box-sizing: border-box;
    text-align: left;
    align-items: center;
    padding-top: 8px;
    padding-bottom: 8px;
    justify-content: flex-start;
    text-decoration: none;
  }
  .MuiListItem-root.Mui-focusVisible {
    background-color: rgba(255, 255, 255, 0.16);
  }
  .MuiListItem-root.Mui-selected, .MuiListItem-root.Mui-selected:hover {
    background-color: rgba(255, 255, 255, 0.16);
  }
  .MuiListItem-root.Mui-disabled {
    opacity: 0.5;
  }
  .MuiListItem-container {
    position: relative;
  }
  .MuiListItem-dense {
    padding-top: 4px;
    padding-bottom: 4px;
  }
  .MuiListItem-alignItemsFlexStart {
    align-items: flex-start;
  }
  .MuiListItem-divider {
    border-bottom: 1px solid rgba(255, 255, 255, 0.12);
    background-clip: padding-box;
  }
  .MuiListItem-gutters {
    padding-left: 16px;
    padding-right: 16px;
  }
  .MuiListItem-button {
    transition: background-color 150ms cubic-bezier(0.4, 0, 0.2, 1) 0ms;
  }
  .MuiListItem-button:hover {
    text-decoration: none;
    background-color: rgba(255, 255, 255, 0.08);
  }
@media (hover: none) {
  .MuiListItem-button:hover {
    background-color: transparent;
  }
}
  .MuiListItem-secondaryAction {
    padding-right: 48px;
  }
  .MuiPopover-paper {
    outline: 0;
    position: absolute;
    max-width: calc(100% - 32px);
    min-width: 16px;
    max-height: calc(100% - 32px);
    min-height: 16px;
    overflow-x: hidden;
    overflow-y: auto;
  }
  .MuiSnackbar-root {
    left: 8px;
    right: 8px;
    display: flex;
    z-index: 1400;
    position: fixed;
    align-items: center;
    justify-content: center;
  }
  .MuiSnackbar-anchorOriginTopCenter {
    top: 8px;
  }
@media (min-width:600px) {
  .MuiSnackbar-anchorOriginTopCenter {
    top: 24px;
    left: 50%;
    right: auto;
    transform: translateX(-50%);
  }
}
  .MuiSnackbar-anchorOriginBottomCenter {
    bottom: 8px;
  }
@media (min-width:600px) {
  .MuiSnackbar-anchorOriginBottomCenter {
    left: 50%;
    right: auto;
    bottom: 24px;
    transform: translateX(-50%);
  }
}
  .MuiSnackbar-anchorOriginTopRight {
    top: 8px;
    justify-content: flex-end;
  }
@media (min-width:600px) {
  .MuiSnackbar-anchorOriginTopRight {
    top: 24px;
    left: auto;
    right: 24px;
  }
}
  .MuiSnackbar-anchorOriginBottomRight {
    bottom: 8px;
    justify-content: flex-end;
  }
@media (min-width:600px) {
  .MuiSnackbar-anchorOriginBottomRight {
    left: auto;
    right: 24px;
    bottom: 24px;
  }
}
  .MuiSnackbar-anchorOriginTopLeft {
    top: 8px;
    justify-content: flex-start;
  }
@media (min-width:600px) {
  .MuiSnackbar-anchorOriginTopLeft {
    top: 24px;
    left: 24px;
    right: auto;
  }
}
  .MuiSnackbar-anchorOriginBottomLeft {
    bottom: 8px;
    justify-content: flex-start;
  }
@media (min-width:600px) {
  .MuiSnackbar-anchorOriginBottomLeft {
    left: 24px;
    right: auto;
    bottom: 24px;
  }
}
  .makeStyles-root-1 {
    display: flex;
  }
@media (min-width:600px) {
  .makeStyles-drawer-2 {
    width: 70px;
    flex-shrink: 0;
  }
}
@media (min-width:600px) {
  .makeStyles-appBar-3 {
    width: calc(100% - 70px);
    margin-left: 70px;
  }
}
  .makeStyles-menuButton-4 {
    margin-left: 4px;
  }
@media (min-width:600px) {
  .makeStyles-menuButton-4 {
    display: none;
  }
}
  .makeStyles-toolbar-5 {
    min-height: 56px;
  }
@media (min-width:0px) and (orientation: landscape) {
  .makeStyles-toolbar-5 {
    min-height: 48px;
  }
}
@media (min-width:600px) {
  .makeStyles-toolbar-5 {
    min-height: 64px;
  }
}
  .makeStyles-drawerPaper-6 {
    width: 70px;
  }
  .makeStyles-content-7 {
    padding: 24px;
    flex-grow: 1;
  }
@media (min-width:600px) {
  .makeStyles-dialogStatBox-248 {
    border: 1.5px solid black;
    margin: 5px 5px;
    display: flex;
    padding: 10px 10px;
    min-width: 200px;
    min-height: 100px;
    align-items: center;
    border-radius: 7px;
    flex-direction: column;
    justify-content: center;
  }
}
@media (max-width:599.95px) {
  .makeStyles-dialogStatBox-248 {
    border: 1.5px solid black;
    margin: 5px 5px;
    display: flex;
    padding: 10px 10px;
    min-width: 100px;
    min-height: 100px;
    align-items: center;
    border-radius: 7px;
    flex-direction: column;
    justify-content: space-between;
  }
}
@media (min-width:600px) {
  .makeStyles-mainStat-249 {
    font-size: 1.3rem;
  }
}
@media (max-width:599.95px) {
  .makeStyles-mainStat-249 {
    font-size: 1.1rem;
  }
}
@media (max-width:1279.95px) {
  .makeStyles-hideBelowMd-250 {
    display: none;
  }
}
@media (min-width:960px) {
  .makeStyles-hideBelowMd-250 {
    display: flex;
    align-items: center;
    justify-content: center;
  }
}
@media (max-width:599.95px) {
  .makeStyles-hideBelowMd-250 {
    display: flex;
    align-items: center;
    justify-content: center;
  }
}</style>
          <script src="./print all sub array with 0 sum_files/bundle.721b613b.js.download" defer=""></script>
        <style>
        @font-face {
          font-family: 'Roboto';
          font-style: normal;
          font-weight: 300;
          font-display: swap;
          src: local('Roboto Light'), local('Roboto-Light'), url(https://fonts.gstatic.com/s/roboto/v20/KFOlCnqEu92Fr1MmSU5fCRc4EsA.woff2) format('woff2');
          unicode-range: U+0460-052F, U+1C80-1C88, U+20B4, U+2DE0-2DFF, U+A640-A69F, U+FE2E-FE2F;
        }
        @font-face {
          font-family: 'Roboto';
          font-style: normal;
          font-weight: 400;
          font-display: swap;
          src: local('Roboto'), local('Roboto-Regular'), url(https://fonts.gstatic.com/s/roboto/v20/KFOmCnqEu92Fr1Mu72xKOzY.woff2) format('woff2');
          unicode-range: U+0460-052F, U+1C80-1C88, U+20B4, U+2DE0-2DFF, U+A640-A69F, U+FE2E-FE2F;
        }
        @font-face {
          font-family: 'Roboto';
          font-style: normal;
          font-weight: 500;
          font-display: swap;
          src: local('Roboto Medium'), local('Roboto-Medium'), url(https://fonts.gstatic.com/s/roboto/v20/KFOlCnqEu92Fr1MmEU9fCRc4EsA.woff2) format('woff2');
          unicode-range: U+0460-052F, U+1C80-1C88, U+20B4, U+2DE0-2DFF, U+A640-A69F, U+FE2E-FE2F;
        }
        @font-face {
          font-family: 'Roboto';
          font-style: normal;
          font-weight: 700;
          font-display: swap;
          src: local('Roboto Bold'), local('Roboto-Bold'), url(https://fonts.gstatic.com/s/roboto/v20/KFOlCnqEu92Fr1MmWUlfCRc4EsA.woff2) format('woff2');
          unicode-range: U+0460-052F, U+1C80-1C88, U+20B4, U+2DE0-2DFF, U+A640-A69F, U+FE2E-FE2F;
        }
        @font-face {
          font-family: 'Roboto';
          font-style: normal;
          font-weight: 700;
          font-display: swap;
          src: local('Roboto Bold'), local('Roboto-Bold'), url(https://fonts.gstatic.com/s/roboto/v20/KFOlCnqEu92Fr1MmWUlfABc4EsA.woff2) format('woff2');
          unicode-range: U+0400-045F, U+0490-0491, U+04B0-04B1, U+2116;
        }
        </style>
        
<script>
var _rollbarConfig = {
  accessToken: "d8809ad630f64dbdbbfd3693de95edef",
  captureUncaught: true,
  captureUnhandledRejections: true,
  payload: {
      environment: "production"
  }
};
!function(r){function e(n){if(o[n])return o[n].exports;var t=o[n]={exports:{},id:n,loaded:!1};return r[n].call(t.exports,t,t.exports,e),t.loaded=!0,t.exports}var o={};return e.m=r,e.c=o,e.p="",e(0)}([function(r,e,o){"use strict";var n=o(1),t=o(4);_rollbarConfig=_rollbarConfig||{},_rollbarConfig.rollbarJsUrl=_rollbarConfig.rollbarJsUrl||"https://cdnjs.cloudflare.com/ajax/libs/rollbar.js/2.4.6/rollbar.min.js",_rollbarConfig.async=void 0===_rollbarConfig.async||_rollbarConfig.async;var a=n.setupShim(window,_rollbarConfig),l=t(_rollbarConfig);window.rollbar=n.Rollbar,a.loadFull(window,document,!_rollbarConfig.async,_rollbarConfig,l)},function(r,e,o){"use strict";function n(r){return function(){try{return r.apply(this,arguments)}catch(r){try{console.error("[Rollbar]: Internal error",r)}catch(r){}}}}function t(r,e){this.options=r,this._rollbarOldOnError=null;var o=s++;this.shimId=function(){return o},"undefined"!=typeof window&&window._rollbarShims&&(window._rollbarShims[o]={handler:e,messages:[]})}function a(r,e){if(r){var o=e.globalAlias||"Rollbar";if("object"==typeof r[o])return r[o];r._rollbarShims={},r._rollbarWrappedError=null;var t=new p(e);return n(function(){e.captureUncaught&&(t._rollbarOldOnError=r.onerror,i.captureUncaughtExceptions(r,t,!0),i.wrapGlobals(r,t,!0)),e.captureUnhandledRejections&&i.captureUnhandledRejections(r,t,!0);var n=e.autoInstrument;return e.enabled!==!1&&(void 0===n||n===!0||"object"==typeof n&&n.network)&&r.addEventListener&&(r.addEventListener("load",t.captureLoad.bind(t)),r.addEventListener("DOMContentLoaded",t.captureDomContentLoaded.bind(t))),r[o]=t,t})()}}function l(r){return n(function(){var e=this,o=Array.prototype.slice.call(arguments,0),n={shim:e,method:r,args:o,ts:new Date};window._rollbarShims[this.shimId()].messages.push(n)})}var i=o(2),s=0,d=o(3),c=function(r,e){return new t(r,e)},p=d.bind(null,c);t.prototype.loadFull=function(r,e,o,t,a){var l=function(){var e;if(void 0===r._rollbarDidLoad){e=new Error("rollbar.js did not load");for(var o,n,t,l,i=0;o=r._rollbarShims[i++];)for(o=o.messages||[];n=o.shift();)for(t=n.args||[],i=0;i<t.length;++i)if(l=t[i],"function"==typeof l){l(e);break}}"function"==typeof a&&a(e)},i=!1,s=e.createElement("script"),d=e.getElementsByTagName("script")[0],c=d.parentNode;s.crossOrigin="",s.src=t.rollbarJsUrl,o||(s.async=!0),s.onload=s.onreadystatechange=n(function(){if(!(i||this.readyState&&"loaded"!==this.readyState&&"complete"!==this.readyState)){s.onload=s.onreadystatechange=null;try{c.removeChild(s)}catch(r){}i=!0,l()}}),c.insertBefore(s,d)},t.prototype.wrap=function(r,e,o){try{var n;if(n="function"==typeof e?e:function(){return e||{}},"function"!=typeof r)return r;if(r._isWrap)return r;if(!r._rollbar_wrapped&&(r._rollbar_wrapped=function(){o&&"function"==typeof o&&o.apply(this,arguments);try{return r.apply(this,arguments)}catch(o){var e=o;throw e&&("string"==typeof e&&(e=new String(e)),e._rollbarContext=n()||{},e._rollbarContext._wrappedSource=r.toString(),window._rollbarWrappedError=e),e}},r._rollbar_wrapped._isWrap=!0,r.hasOwnProperty))for(var t in r)r.hasOwnProperty(t)&&(r._rollbar_wrapped[t]=r[t]);return r._rollbar_wrapped}catch(e){return r}};for(var u="log,debug,info,warn,warning,error,critical,global,configure,handleUncaughtException,handleUnhandledRejection,captureEvent,captureDomContentLoaded,captureLoad".split(","),f=0;f<u.length;++f)t.prototype[u[f]]=l(u[f]);r.exports={setupShim:a,Rollbar:p}},function(r,e){"use strict";function o(r,e,o){if(r){var t;"function"==typeof e._rollbarOldOnError?t=e._rollbarOldOnError:r.onerror&&!r.onerror.belongsToShim&&(t=r.onerror,e._rollbarOldOnError=t);var a=function(){var o=Array.prototype.slice.call(arguments,0);n(r,e,t,o)};a.belongsToShim=o,r.onerror=a}}function n(r,e,o,n){r._rollbarWrappedError&&(n[4]||(n[4]=r._rollbarWrappedError),n[5]||(n[5]=r._rollbarWrappedError._rollbarContext),r._rollbarWrappedError=null),e.handleUncaughtException.apply(e,n),o&&o.apply(r,n)}function t(r,e,o){if(r){"function"==typeof r._rollbarURH&&r._rollbarURH.belongsToShim&&r.removeEventListener("unhandledrejection",r._rollbarURH);var n=function(r){var o,n,t;try{o=r.reason}catch(r){o=void 0}try{n=r.promise}catch(r){n="[unhandledrejection] error getting " + promise + " from event"}try{t=r.detail,!o&&t&&(o=t.reason,n=t.promise)}catch(r){t="[unhandledrejection] error getting " + detail + " from event"}o||(o="[unhandledrejection] error getting " + reason + " from event"),e&&e.handleUnhandledRejection&&e.handleUnhandledRejection(o,n)};n.belongsToShim=o,r._rollbarURH=n,r.addEventListener("unhandledrejection",n)}}function a(r,e,o){if(r){var n,t,a="EventTarget,Window,Node,ApplicationCache,AudioTrackList,ChannelMergerNode,CryptoOperation,EventSource,FileReader,HTMLUnknownElement,IDBDatabase,IDBRequest,IDBTransaction,KeyOperation,MediaController,MessagePort,ModalWindow,Notification,SVGElementInstance,Screen,TextTrack,TextTrackCue,TextTrackList,WebSocket,WebSocketWorker,Worker,XMLHttpRequest,XMLHttpRequestEventTarget,XMLHttpRequestUpload".split(",");for(n=0;n<a.length;++n)t=a[n],r[t]&&r[t].prototype&&l(e,r[t].prototype,o)}}function l(r,e,o){if(e.hasOwnProperty&&e.hasOwnProperty("addEventListener")){for(var n=e.addEventListener;n._rollbarOldAdd&&n.belongsToShim;)n=n._rollbarOldAdd;var t=function(e,o,t){n.call(this,e,r.wrap(o),t)};t._rollbarOldAdd=n,t.belongsToShim=o,e.addEventListener=t;for(var a=e.removeEventListener;a._rollbarOldRemove&&a.belongsToShim;)a=a._rollbarOldRemove;var l=function(r,e,o){a.call(this,r,e&&e._rollbar_wrapped||e,o)};l._rollbarOldRemove=a,l.belongsToShim=o,e.removeEventListener=l}}r.exports={captureUncaughtExceptions:o,captureUnhandledRejections:t,wrapGlobals:a}},function(r,e){"use strict";function o(r,e){this.impl=r(e,this),this.options=e,n(o.prototype)}function n(r){for(var e=function(r){return function(){var e=Array.prototype.slice.call(arguments,0);if(this.impl[r])return this.impl[r].apply(this.impl,e)}},o="log,debug,info,warn,warning,error,critical,global,configure,handleUncaughtException,handleUnhandledRejection,_createItem,wrap,loadFull,shimId,captureEvent,captureDomContentLoaded,captureLoad".split(","),n=0;n<o.length;n++)r[o[n]]=e(o[n])}o.prototype._swapAndProcessMessages=function(r,e){this.impl=r(this.options);for(var o,n,t;o=e.shift();)n=o.method,t=o.args,this[n]&&"function"==typeof this[n]&&("captureDomContentLoaded"===n||"captureLoad"===n?this[n].apply(this,[t[0],o.ts]):this[n].apply(this,t));return this},r.exports=o},function(r,e){"use strict";r.exports=function(r){return function(e){if(!e&&!window._rollbarInitialized){r=r||{};for(var o,n,t=r.globalAlias||"Rollbar",a=window.rollbar,l=function(r){return new a(r)},i=0;o=window._rollbarShims[i++];)n||(n=o.handler),o.handler._swapAndProcessMessages(l,o.messages);window[t]=n,window._rollbarInitialized=!0}}}}]);
</script><style id="googleidentityservice_button_styles">.qJTHM{-webkit-user-select:none;color:#202124;direction:ltr;-webkit-touch-callout:none;font-family:'Roboto-Regular',arial,sans-serif;-webkit-font-smoothing:antialiased;font-weight:400;margin:0;overflow:hidden;-webkit-text-size-adjust:100%}.ynRLnc{left:-9999px;position:absolute;top:-9999px}.L6cTce{display:none}.bltWBb{word-break:break-all}.hSRGPd{color:#1a73e8;cursor:pointer;font-weight:500;text-decoration:none}.Bz112c-W3lGp{height:16px;width:16px}.Bz112c-E3DyYd{height:20px;width:20px}.Bz112c-r9oPif{height:24px;width:24px}.Bz112c-uaxL4e{-webkit-border-radius:10px;border-radius:10px}.LgbsSe-Bz112c{display:block}.S9gUrf-YoZ4jf,.S9gUrf-YoZ4jf *{border:none;margin:0;padding:0}.fFW7wc-ibnC6b>.aZ2wEe>div{border-color:#4285f4}.P1ekSe-ZMv3u>div:nth-child(1){background-color:#1a73e8!important}.P1ekSe-ZMv3u>div:nth-child(2),.P1ekSe-ZMv3u>div:nth-child(3){background-image:linear-gradient(to right,rgba(255,255,255,0.7),rgba(255,255,255,0.7)),linear-gradient(to right,#1a73e8,#1a73e8)!important}.haAclf{display:inline-block}.nsm7Bb-HzV7m-LgbsSe{-webkit-border-radius:4px;border-radius:4px;-webkit-box-sizing:border-box;box-sizing:border-box;-webkit-transition:background-color .218s,border-color .218s;transition:background-color .218s,border-color .218s;-webkit-user-select:none;-webkit-appearance:none;background-color:#fff;background-image:none;border:1px solid #dadce0;color:#3c4043;cursor:pointer;font-family:'Google Sans',arial,sans-serif;font-size:14px;height:40px;letter-spacing:.25px;outline:none;overflow:hidden;padding:0 12px;position:relative;text-align:center;vertical-align:middle;white-space:nowrap;width:auto}@media screen and (-ms-high-contrast:active){.nsm7Bb-HzV7m-LgbsSe{border:2px solid windowText;color:windowText}}.nsm7Bb-HzV7m-LgbsSe.pSzOP-SxQuSe{font-size:14px;height:32px;letter-spacing:.25px;padding:0 10px}.nsm7Bb-HzV7m-LgbsSe.purZT-SxQuSe{font-size:11px;height:20px;letter-spacing:.3px;padding:0 8px}.nsm7Bb-HzV7m-LgbsSe.Bz112c-LgbsSe{padding:0;width:40px}.nsm7Bb-HzV7m-LgbsSe.Bz112c-LgbsSe.pSzOP-SxQuSe{width:32px}.nsm7Bb-HzV7m-LgbsSe.Bz112c-LgbsSe.purZT-SxQuSe{width:20px}.nsm7Bb-HzV7m-LgbsSe.JGcpL-RbRzK{-webkit-border-radius:20px;border-radius:20px}.nsm7Bb-HzV7m-LgbsSe.JGcpL-RbRzK.pSzOP-SxQuSe{-webkit-border-radius:16px;border-radius:16px}.nsm7Bb-HzV7m-LgbsSe.JGcpL-RbRzK.purZT-SxQuSe{-webkit-border-radius:10px;border-radius:10px}.nsm7Bb-HzV7m-LgbsSe.MFS4be-Ia7Qfc{border:none;color:#fff}.nsm7Bb-HzV7m-LgbsSe.MFS4be-v3pZbf-Ia7Qfc{background-color:#1a73e8}.nsm7Bb-HzV7m-LgbsSe.MFS4be-JaPV2b-Ia7Qfc{background-color:#202124;color:#e8eaed}.nsm7Bb-HzV7m-LgbsSe .nsm7Bb-HzV7m-LgbsSe-Bz112c{height:18px;margin-right:8px;min-width:18px;width:18px}.nsm7Bb-HzV7m-LgbsSe.pSzOP-SxQuSe .nsm7Bb-HzV7m-LgbsSe-Bz112c{height:14px;min-width:14px;width:14px}.nsm7Bb-HzV7m-LgbsSe.purZT-SxQuSe .nsm7Bb-HzV7m-LgbsSe-Bz112c{height:10px;min-width:10px;width:10px}.nsm7Bb-HzV7m-LgbsSe.jVeSEe .nsm7Bb-HzV7m-LgbsSe-Bz112c{margin-left:8px;margin-right:-4px}.nsm7Bb-HzV7m-LgbsSe.Bz112c-LgbsSe .nsm7Bb-HzV7m-LgbsSe-Bz112c{margin:0;padding:10px}.nsm7Bb-HzV7m-LgbsSe.Bz112c-LgbsSe.pSzOP-SxQuSe .nsm7Bb-HzV7m-LgbsSe-Bz112c{padding:8px}.nsm7Bb-HzV7m-LgbsSe.Bz112c-LgbsSe.purZT-SxQuSe .nsm7Bb-HzV7m-LgbsSe-Bz112c{padding:4px}.nsm7Bb-HzV7m-LgbsSe .nsm7Bb-HzV7m-LgbsSe-Bz112c-haAclf{-webkit-border-top-left-radius:3px;border-top-left-radius:3px;-webkit-border-bottom-left-radius:3px;border-bottom-left-radius:3px;display:-webkit-box;display:-webkit-flex;display:flex;justify-content:center;-webkit-align-items:center;align-items:center;background-color:#fff;height:36px;margin-left:-10px;margin-right:12px;min-width:36px;width:36px}.nsm7Bb-HzV7m-LgbsSe .nsm7Bb-HzV7m-LgbsSe-Bz112c-haAclf .nsm7Bb-HzV7m-LgbsSe-Bz112c,.nsm7Bb-HzV7m-LgbsSe.Bz112c-LgbsSe .nsm7Bb-HzV7m-LgbsSe-Bz112c-haAclf .nsm7Bb-HzV7m-LgbsSe-Bz112c{margin:0;padding:0}.nsm7Bb-HzV7m-LgbsSe.pSzOP-SxQuSe .nsm7Bb-HzV7m-LgbsSe-Bz112c-haAclf{height:28px;margin-left:-8px;margin-right:10px;min-width:28px;width:28px}.nsm7Bb-HzV7m-LgbsSe.purZT-SxQuSe .nsm7Bb-HzV7m-LgbsSe-Bz112c-haAclf{height:16px;margin-left:-6px;margin-right:8px;min-width:16px;width:16px}.nsm7Bb-HzV7m-LgbsSe.Bz112c-LgbsSe .nsm7Bb-HzV7m-LgbsSe-Bz112c-haAclf{-webkit-border-radius:3px;border-radius:3px;margin-left:2px;margin-right:0;padding:0}.nsm7Bb-HzV7m-LgbsSe.JGcpL-RbRzK .nsm7Bb-HzV7m-LgbsSe-Bz112c-haAclf{-webkit-border-radius:18px;border-radius:18px}.nsm7Bb-HzV7m-LgbsSe.pSzOP-SxQuSe.JGcpL-RbRzK .nsm7Bb-HzV7m-LgbsSe-Bz112c-haAclf{-webkit-border-radius:14px;border-radius:14px}.nsm7Bb-HzV7m-LgbsSe.purZT-SxQuSe.JGcpL-RbRzK .nsm7Bb-HzV7m-LgbsSe-Bz112c-haAclf{-webkit-border-radius:8px;border-radius:8px}.nsm7Bb-HzV7m-LgbsSe .nsm7Bb-HzV7m-LgbsSe-bN97Pc-sM5MNb{display:-webkit-box;display:-webkit-flex;display:flex;-webkit-align-items:center;align-items:center;-webkit-flex-direction:row;flex-direction:row;justify-content:space-between;-webkit-flex-wrap:nowrap;flex-wrap:nowrap;height:100%;position:relative;width:100%}.nsm7Bb-HzV7m-LgbsSe .oXtfBe-l4eHX{justify-content:center}.nsm7Bb-HzV7m-LgbsSe .nsm7Bb-HzV7m-LgbsSe-BPrWId{-webkit-flex-grow:1;flex-grow:1;font-family:'Google Sans',arial,sans-serif;font-weight:500;overflow:hidden;text-overflow:ellipsis;vertical-align:top}.nsm7Bb-HzV7m-LgbsSe.purZT-SxQuSe .nsm7Bb-HzV7m-LgbsSe-BPrWId{font-weight:300}.nsm7Bb-HzV7m-LgbsSe .oXtfBe-l4eHX .nsm7Bb-HzV7m-LgbsSe-BPrWId{-webkit-flex-grow:0;flex-grow:0}.nsm7Bb-HzV7m-LgbsSe .nsm7Bb-HzV7m-LgbsSe-MJoBVe{-webkit-transition:background-color .218s;transition:background-color .218s;bottom:0;left:0;position:absolute;right:0;top:0}.nsm7Bb-HzV7m-LgbsSe:hover,.nsm7Bb-HzV7m-LgbsSe:focus{-webkit-box-shadow:none;box-shadow:none;border-color:#d2e3fc;outline:none}.nsm7Bb-HzV7m-LgbsSe:hover .nsm7Bb-HzV7m-LgbsSe-MJoBVe,.nsm7Bb-HzV7m-LgbsSe:focus .nsm7Bb-HzV7m-LgbsSe-MJoBVe{background:rgba(66,133,244,0.04)}.nsm7Bb-HzV7m-LgbsSe:active .nsm7Bb-HzV7m-LgbsSe-MJoBVe{background:rgba(66,133,244,0.1)}.nsm7Bb-HzV7m-LgbsSe.MFS4be-Ia7Qfc:hover .nsm7Bb-HzV7m-LgbsSe-MJoBVe,.nsm7Bb-HzV7m-LgbsSe.MFS4be-Ia7Qfc:focus .nsm7Bb-HzV7m-LgbsSe-MJoBVe{background:rgba(255,255,255,0.24)}.nsm7Bb-HzV7m-LgbsSe.MFS4be-Ia7Qfc:active .nsm7Bb-HzV7m-LgbsSe-MJoBVe{background:rgba(255,255,255,0.32)}.nsm7Bb-HzV7m-LgbsSe .n1UuX-DkfjY{-webkit-border-radius:50%;border-radius:50%;display:-webkit-box;display:-webkit-flex;display:flex;height:20px;margin-left:-4px;margin-right:8px;min-width:20px;width:20px}.nsm7Bb-HzV7m-LgbsSe.jVeSEe .nsm7Bb-HzV7m-LgbsSe-BPrWId{font-family:'Roboto';font-size:12px;text-align:left}.nsm7Bb-HzV7m-LgbsSe.jVeSEe .nsm7Bb-HzV7m-LgbsSe-BPrWId .ssJRIf,.nsm7Bb-HzV7m-LgbsSe.jVeSEe .nsm7Bb-HzV7m-LgbsSe-BPrWId .K4efff .fmcmS{overflow:hidden;text-overflow:ellipsis}.nsm7Bb-HzV7m-LgbsSe.jVeSEe .nsm7Bb-HzV7m-LgbsSe-BPrWId .K4efff{display:-webkit-box;display:-webkit-flex;display:flex;-webkit-align-items:center;align-items:center;color:#5f6368;fill:#5f6368;font-size:11px;font-weight:400}.nsm7Bb-HzV7m-LgbsSe.jVeSEe.MFS4be-Ia7Qfc .nsm7Bb-HzV7m-LgbsSe-BPrWId .K4efff{color:#e8eaed;fill:#e8eaed}.nsm7Bb-HzV7m-LgbsSe.jVeSEe .nsm7Bb-HzV7m-LgbsSe-BPrWId .K4efff .Bz112c{height:18px;margin:-3px -3px -3px 2px;min-width:18px;width:18px}.nsm7Bb-HzV7m-LgbsSe.jVeSEe .nsm7Bb-HzV7m-LgbsSe-Bz112c-haAclf{-webkit-border-top-left-radius:0;border-top-left-radius:0;-webkit-border-bottom-left-radius:0;border-bottom-left-radius:0;-webkit-border-top-right-radius:3px;border-top-right-radius:3px;-webkit-border-bottom-right-radius:3px;border-bottom-right-radius:3px;margin-left:12px;margin-right:-10px}.nsm7Bb-HzV7m-LgbsSe.jVeSEe.JGcpL-RbRzK .nsm7Bb-HzV7m-LgbsSe-Bz112c-haAclf{-webkit-border-radius:18px;border-radius:18px}.L5Fo6c-sM5MNb{border:0;display:block;left:0;position:relative;top:0}.L5Fo6c-bF1uUb{-webkit-border-radius:4px;border-radius:4px;bottom:0;cursor:pointer;left:0;position:absolute;right:0;top:0}.L5Fo6c-bF1uUb:focus{border:none;outline:none}sentinel{}
/*# sourceURL=/_/gsi/_/ss/k=gsi.gsi.pWkS2-m9kRQ.L.W.O/am=cg/d=1/rs=AF0KOtXrpFFUv-r6iMK1HX1aJl2SBuMmKw/m=gis_client_button_style */</style>
      <script charset="utf-8" src="./print all sub array with 0 sum_files/0.24074f92.chunk.js.download"></script><script charset="utf-8" src="./print all sub array with 0 sum_files/4.d3f00411.chunk.js.download"></script><style data-jss="" data-meta="MuiGrid">
.MuiGrid-container {
  width: 100%;
  display: flex;
  flex-wrap: wrap;
  box-sizing: border-box;
}
.MuiGrid-item {
  margin: 0;
  box-sizing: border-box;
}
.MuiGrid-zeroMinWidth {
  min-width: 0;
}
.MuiGrid-direction-xs-column {
  flex-direction: column;
}
.MuiGrid-direction-xs-column-reverse {
  flex-direction: column-reverse;
}
.MuiGrid-direction-xs-row-reverse {
  flex-direction: row-reverse;
}
.MuiGrid-wrap-xs-nowrap {
  flex-wrap: nowrap;
}
.MuiGrid-wrap-xs-wrap-reverse {
  flex-wrap: wrap-reverse;
}
.MuiGrid-align-items-xs-center {
  align-items: center;
}
.MuiGrid-align-items-xs-flex-start {
  align-items: flex-start;
}
.MuiGrid-align-items-xs-flex-end {
  align-items: flex-end;
}
.MuiGrid-align-items-xs-baseline {
  align-items: baseline;
}
.MuiGrid-align-content-xs-center {
  align-content: center;
}
.MuiGrid-align-content-xs-flex-start {
  align-content: flex-start;
}
.MuiGrid-align-content-xs-flex-end {
  align-content: flex-end;
}
.MuiGrid-align-content-xs-space-between {
  align-content: space-between;
}
.MuiGrid-align-content-xs-space-around {
  align-content: space-around;
}
.MuiGrid-justify-xs-center {
  justify-content: center;
}
.MuiGrid-justify-xs-flex-end {
  justify-content: flex-end;
}
.MuiGrid-justify-xs-space-between {
  justify-content: space-between;
}
.MuiGrid-justify-xs-space-around {
  justify-content: space-around;
}
.MuiGrid-justify-xs-space-evenly {
  justify-content: space-evenly;
}
.MuiGrid-spacing-xs-1 {
  width: calc(100% + 8px);
  margin: -4px;
}
.MuiGrid-spacing-xs-1 > .MuiGrid-item {
  padding: 4px;
}
.MuiGrid-spacing-xs-2 {
  width: calc(100% + 16px);
  margin: -8px;
}
.MuiGrid-spacing-xs-2 > .MuiGrid-item {
  padding: 8px;
}
.MuiGrid-spacing-xs-3 {
  width: calc(100% + 24px);
  margin: -12px;
}
.MuiGrid-spacing-xs-3 > .MuiGrid-item {
  padding: 12px;
}
.MuiGrid-spacing-xs-4 {
  width: calc(100% + 32px);
  margin: -16px;
}
.MuiGrid-spacing-xs-4 > .MuiGrid-item {
  padding: 16px;
}
.MuiGrid-spacing-xs-5 {
  width: calc(100% + 40px);
  margin: -20px;
}
.MuiGrid-spacing-xs-5 > .MuiGrid-item {
  padding: 20px;
}
.MuiGrid-spacing-xs-6 {
  width: calc(100% + 48px);
  margin: -24px;
}
.MuiGrid-spacing-xs-6 > .MuiGrid-item {
  padding: 24px;
}
.MuiGrid-spacing-xs-7 {
  width: calc(100% + 56px);
  margin: -28px;
}
.MuiGrid-spacing-xs-7 > .MuiGrid-item {
  padding: 28px;
}
.MuiGrid-spacing-xs-8 {
  width: calc(100% + 64px);
  margin: -32px;
}
.MuiGrid-spacing-xs-8 > .MuiGrid-item {
  padding: 32px;
}
.MuiGrid-spacing-xs-9 {
  width: calc(100% + 72px);
  margin: -36px;
}
.MuiGrid-spacing-xs-9 > .MuiGrid-item {
  padding: 36px;
}
.MuiGrid-spacing-xs-10 {
  width: calc(100% + 80px);
  margin: -40px;
}
.MuiGrid-spacing-xs-10 > .MuiGrid-item {
  padding: 40px;
}
.MuiGrid-grid-xs-auto {
  flex-grow: 0;
  max-width: none;
  flex-basis: auto;
}
.MuiGrid-grid-xs-true {
  flex-grow: 1;
  max-width: 100%;
  flex-basis: 0;
}
.MuiGrid-grid-xs-1 {
  flex-grow: 0;
  max-width: 8.333333%;
  flex-basis: 8.333333%;
}
.MuiGrid-grid-xs-2 {
  flex-grow: 0;
  max-width: 16.666667%;
  flex-basis: 16.666667%;
}
.MuiGrid-grid-xs-3 {
  flex-grow: 0;
  max-width: 25%;
  flex-basis: 25%;
}
.MuiGrid-grid-xs-4 {
  flex-grow: 0;
  max-width: 33.333333%;
  flex-basis: 33.333333%;
}
.MuiGrid-grid-xs-5 {
  flex-grow: 0;
  max-width: 41.666667%;
  flex-basis: 41.666667%;
}
.MuiGrid-grid-xs-6 {
  flex-grow: 0;
  max-width: 50%;
  flex-basis: 50%;
}
.MuiGrid-grid-xs-7 {
  flex-grow: 0;
  max-width: 58.333333%;
  flex-basis: 58.333333%;
}
.MuiGrid-grid-xs-8 {
  flex-grow: 0;
  max-width: 66.666667%;
  flex-basis: 66.666667%;
}
.MuiGrid-grid-xs-9 {
  flex-grow: 0;
  max-width: 75%;
  flex-basis: 75%;
}
.MuiGrid-grid-xs-10 {
  flex-grow: 0;
  max-width: 83.333333%;
  flex-basis: 83.333333%;
}
.MuiGrid-grid-xs-11 {
  flex-grow: 0;
  max-width: 91.666667%;
  flex-basis: 91.666667%;
}
.MuiGrid-grid-xs-12 {
  flex-grow: 0;
  max-width: 100%;
  flex-basis: 100%;
}
@media (min-width:600px) {
  .MuiGrid-grid-sm-auto {
    flex-grow: 0;
    max-width: none;
    flex-basis: auto;
  }
  .MuiGrid-grid-sm-true {
    flex-grow: 1;
    max-width: 100%;
    flex-basis: 0;
  }
  .MuiGrid-grid-sm-1 {
    flex-grow: 0;
    max-width: 8.333333%;
    flex-basis: 8.333333%;
  }
  .MuiGrid-grid-sm-2 {
    flex-grow: 0;
    max-width: 16.666667%;
    flex-basis: 16.666667%;
  }
  .MuiGrid-grid-sm-3 {
    flex-grow: 0;
    max-width: 25%;
    flex-basis: 25%;
  }
  .MuiGrid-grid-sm-4 {
    flex-grow: 0;
    max-width: 33.333333%;
    flex-basis: 33.333333%;
  }
  .MuiGrid-grid-sm-5 {
    flex-grow: 0;
    max-width: 41.666667%;
    flex-basis: 41.666667%;
  }
  .MuiGrid-grid-sm-6 {
    flex-grow: 0;
    max-width: 50%;
    flex-basis: 50%;
  }
  .MuiGrid-grid-sm-7 {
    flex-grow: 0;
    max-width: 58.333333%;
    flex-basis: 58.333333%;
  }
  .MuiGrid-grid-sm-8 {
    flex-grow: 0;
    max-width: 66.666667%;
    flex-basis: 66.666667%;
  }
  .MuiGrid-grid-sm-9 {
    flex-grow: 0;
    max-width: 75%;
    flex-basis: 75%;
  }
  .MuiGrid-grid-sm-10 {
    flex-grow: 0;
    max-width: 83.333333%;
    flex-basis: 83.333333%;
  }
  .MuiGrid-grid-sm-11 {
    flex-grow: 0;
    max-width: 91.666667%;
    flex-basis: 91.666667%;
  }
  .MuiGrid-grid-sm-12 {
    flex-grow: 0;
    max-width: 100%;
    flex-basis: 100%;
  }
}
@media (min-width:960px) {
  .MuiGrid-grid-md-auto {
    flex-grow: 0;
    max-width: none;
    flex-basis: auto;
  }
  .MuiGrid-grid-md-true {
    flex-grow: 1;
    max-width: 100%;
    flex-basis: 0;
  }
  .MuiGrid-grid-md-1 {
    flex-grow: 0;
    max-width: 8.333333%;
    flex-basis: 8.333333%;
  }
  .MuiGrid-grid-md-2 {
    flex-grow: 0;
    max-width: 16.666667%;
    flex-basis: 16.666667%;
  }
  .MuiGrid-grid-md-3 {
    flex-grow: 0;
    max-width: 25%;
    flex-basis: 25%;
  }
  .MuiGrid-grid-md-4 {
    flex-grow: 0;
    max-width: 33.333333%;
    flex-basis: 33.333333%;
  }
  .MuiGrid-grid-md-5 {
    flex-grow: 0;
    max-width: 41.666667%;
    flex-basis: 41.666667%;
  }
  .MuiGrid-grid-md-6 {
    flex-grow: 0;
    max-width: 50%;
    flex-basis: 50%;
  }
  .MuiGrid-grid-md-7 {
    flex-grow: 0;
    max-width: 58.333333%;
    flex-basis: 58.333333%;
  }
  .MuiGrid-grid-md-8 {
    flex-grow: 0;
    max-width: 66.666667%;
    flex-basis: 66.666667%;
  }
  .MuiGrid-grid-md-9 {
    flex-grow: 0;
    max-width: 75%;
    flex-basis: 75%;
  }
  .MuiGrid-grid-md-10 {
    flex-grow: 0;
    max-width: 83.333333%;
    flex-basis: 83.333333%;
  }
  .MuiGrid-grid-md-11 {
    flex-grow: 0;
    max-width: 91.666667%;
    flex-basis: 91.666667%;
  }
  .MuiGrid-grid-md-12 {
    flex-grow: 0;
    max-width: 100%;
    flex-basis: 100%;
  }
}
@media (min-width:1280px) {
  .MuiGrid-grid-lg-auto {
    flex-grow: 0;
    max-width: none;
    flex-basis: auto;
  }
  .MuiGrid-grid-lg-true {
    flex-grow: 1;
    max-width: 100%;
    flex-basis: 0;
  }
  .MuiGrid-grid-lg-1 {
    flex-grow: 0;
    max-width: 8.333333%;
    flex-basis: 8.333333%;
  }
  .MuiGrid-grid-lg-2 {
    flex-grow: 0;
    max-width: 16.666667%;
    flex-basis: 16.666667%;
  }
  .MuiGrid-grid-lg-3 {
    flex-grow: 0;
    max-width: 25%;
    flex-basis: 25%;
  }
  .MuiGrid-grid-lg-4 {
    flex-grow: 0;
    max-width: 33.333333%;
    flex-basis: 33.333333%;
  }
  .MuiGrid-grid-lg-5 {
    flex-grow: 0;
    max-width: 41.666667%;
    flex-basis: 41.666667%;
  }
  .MuiGrid-grid-lg-6 {
    flex-grow: 0;
    max-width: 50%;
    flex-basis: 50%;
  }
  .MuiGrid-grid-lg-7 {
    flex-grow: 0;
    max-width: 58.333333%;
    flex-basis: 58.333333%;
  }
  .MuiGrid-grid-lg-8 {
    flex-grow: 0;
    max-width: 66.666667%;
    flex-basis: 66.666667%;
  }
  .MuiGrid-grid-lg-9 {
    flex-grow: 0;
    max-width: 75%;
    flex-basis: 75%;
  }
  .MuiGrid-grid-lg-10 {
    flex-grow: 0;
    max-width: 83.333333%;
    flex-basis: 83.333333%;
  }
  .MuiGrid-grid-lg-11 {
    flex-grow: 0;
    max-width: 91.666667%;
    flex-basis: 91.666667%;
  }
  .MuiGrid-grid-lg-12 {
    flex-grow: 0;
    max-width: 100%;
    flex-basis: 100%;
  }
}
@media (min-width:1920px) {
  .MuiGrid-grid-xl-auto {
    flex-grow: 0;
    max-width: none;
    flex-basis: auto;
  }
  .MuiGrid-grid-xl-true {
    flex-grow: 1;
    max-width: 100%;
    flex-basis: 0;
  }
  .MuiGrid-grid-xl-1 {
    flex-grow: 0;
    max-width: 8.333333%;
    flex-basis: 8.333333%;
  }
  .MuiGrid-grid-xl-2 {
    flex-grow: 0;
    max-width: 16.666667%;
    flex-basis: 16.666667%;
  }
  .MuiGrid-grid-xl-3 {
    flex-grow: 0;
    max-width: 25%;
    flex-basis: 25%;
  }
  .MuiGrid-grid-xl-4 {
    flex-grow: 0;
    max-width: 33.333333%;
    flex-basis: 33.333333%;
  }
  .MuiGrid-grid-xl-5 {
    flex-grow: 0;
    max-width: 41.666667%;
    flex-basis: 41.666667%;
  }
  .MuiGrid-grid-xl-6 {
    flex-grow: 0;
    max-width: 50%;
    flex-basis: 50%;
  }
  .MuiGrid-grid-xl-7 {
    flex-grow: 0;
    max-width: 58.333333%;
    flex-basis: 58.333333%;
  }
  .MuiGrid-grid-xl-8 {
    flex-grow: 0;
    max-width: 66.666667%;
    flex-basis: 66.666667%;
  }
  .MuiGrid-grid-xl-9 {
    flex-grow: 0;
    max-width: 75%;
    flex-basis: 75%;
  }
  .MuiGrid-grid-xl-10 {
    flex-grow: 0;
    max-width: 83.333333%;
    flex-basis: 83.333333%;
  }
  .MuiGrid-grid-xl-11 {
    flex-grow: 0;
    max-width: 91.666667%;
    flex-basis: 91.666667%;
  }
  .MuiGrid-grid-xl-12 {
    flex-grow: 0;
    max-width: 100%;
    flex-basis: 100%;
  }
}
</style><style data-jss="" data-meta="MuiTouchRipple">
.MuiTouchRipple-root {
  top: 0;
  left: 0;
  right: 0;
  bottom: 0;
  z-index: 0;
  overflow: hidden;
  position: absolute;
  border-radius: inherit;
  pointer-events: none;
}
.MuiTouchRipple-ripple {
  opacity: 0;
  position: absolute;
}
.MuiTouchRipple-rippleVisible {
  opacity: 0.3;
  animation: MuiTouchRipple-keyframes-enter 550ms cubic-bezier(0.4, 0, 0.2, 1);
  transform: scale(1);
}
.MuiTouchRipple-ripplePulsate {
  animation-duration: 200ms;
}
.MuiTouchRipple-child {
  width: 100%;
  height: 100%;
  display: block;
  opacity: 1;
  border-radius: 50%;
  background-color: currentColor;
}
.MuiTouchRipple-childLeaving {
  opacity: 0;
  animation: MuiTouchRipple-keyframes-exit 550ms cubic-bezier(0.4, 0, 0.2, 1);
}
.MuiTouchRipple-childPulsate {
  top: 0;
  left: 0;
  position: absolute;
  animation: MuiTouchRipple-keyframes-pulsate 2500ms cubic-bezier(0.4, 0, 0.2, 1) 200ms infinite;
}
@-webkit-keyframes MuiTouchRipple-keyframes-enter {
  0% {
    opacity: 0.1;
    transform: scale(0);
  }
  100% {
    opacity: 0.3;
    transform: scale(1);
  }
}
@-webkit-keyframes MuiTouchRipple-keyframes-exit {
  0% {
    opacity: 1;
  }
  100% {
    opacity: 0;
  }
}
@-webkit-keyframes MuiTouchRipple-keyframes-pulsate {
  0% {
    transform: scale(1);
  }
  50% {
    transform: scale(0.92);
  }
  100% {
    transform: scale(1);
  }
}
</style><style data-jss="" data-meta="MuiButtonBase">
.MuiButtonBase-root {
  color: inherit;
  border: 0;
  cursor: pointer;
  margin: 0;
  display: inline-flex;
  outline: 0;
  padding: 0;
  position: relative;
  align-items: center;
  user-select: none;
  border-radius: 0;
  vertical-align: middle;
  -moz-appearance: none;
  justify-content: center;
  text-decoration: none;
  background-color: transparent;
  -webkit-appearance: none;
  -webkit-tap-highlight-color: transparent;
}
.MuiButtonBase-root::-moz-focus-inner {
  border-style: none;
}
.MuiButtonBase-root.Mui-disabled {
  cursor: default;
  pointer-events: none;
}
</style><style data-jss="" data-meta="MuiButton">
.MuiButton-root {
  color: #fff;
  padding: 6px 16px;
  font-size: 0.875rem;
  min-width: 64px;
  box-sizing: border-box;
  transition: background-color 250ms cubic-bezier(0.4, 0, 0.2, 1) 0ms,box-shadow 250ms cubic-bezier(0.4, 0, 0.2, 1) 0ms,border 250ms cubic-bezier(0.4, 0, 0.2, 1) 0ms;
  font-family: "Roboto", "Helvetica", "Arial", sans-serif;
  font-weight: 500;
  line-height: 1.75;
  border-radius: 4px;
  letter-spacing: 0.02857em;
  text-transform: uppercase;
}
.MuiButton-root:hover {
  text-decoration: none;
  background-color: rgba(255, 255, 255, 0.08);
}
.MuiButton-root.Mui-disabled {
  color: rgba(255, 255, 255, 0.3);
}
@media (hover: none) {
  .MuiButton-root:hover {
    background-color: transparent;
  }
}
.MuiButton-root:hover.Mui-disabled {
  background-color: transparent;
}
.MuiButton-label {
  width: 100%;
  display: inherit;
  align-items: inherit;
  justify-content: inherit;
}
.MuiButton-text {
  padding: 6px 8px;
}
.MuiButton-textPrimary {
  color: #3f51b5;
}
.MuiButton-textPrimary:hover {
  background-color: rgba(63, 81, 181, 0.08);
}
@media (hover: none) {
  .MuiButton-textPrimary:hover {
    background-color: transparent;
  }
}
.MuiButton-textSecondary {
  color: #00BFA5;
}
.MuiButton-textSecondary:hover {
  background-color: rgba(0, 191, 165, 0.08);
}
@media (hover: none) {
  .MuiButton-textSecondary:hover {
    background-color: transparent;
  }
}
.MuiButton-outlined {
  border: 1px solid rgba(255, 255, 255, 0.23);
  padding: 5px 15px;
}
.MuiButton-outlined.Mui-disabled {
  border: 1px solid rgba(255, 255, 255, 0.12);
}
.MuiButton-outlinedPrimary {
  color: #3f51b5;
  border: 1px solid rgba(63, 81, 181, 0.5);
}
.MuiButton-outlinedPrimary:hover {
  border: 1px solid #3f51b5;
  background-color: rgba(63, 81, 181, 0.08);
}
@media (hover: none) {
  .MuiButton-outlinedPrimary:hover {
    background-color: transparent;
  }
}
.MuiButton-outlinedSecondary {
  color: #00BFA5;
  border: 1px solid rgba(0, 191, 165, 0.5);
}
.MuiButton-outlinedSecondary:hover {
  border: 1px solid #00BFA5;
  background-color: rgba(0, 191, 165, 0.08);
}
.MuiButton-outlinedSecondary.Mui-disabled {
  border: 1px solid rgba(255, 255, 255, 0.3);
}
@media (hover: none) {
  .MuiButton-outlinedSecondary:hover {
    background-color: transparent;
  }
}
.MuiButton-contained {
  color: rgba(0, 0, 0, 0.87);
  box-shadow: 0px 3px 1px -2px rgba(0,0,0,0.2),0px 2px 2px 0px rgba(0,0,0,0.14),0px 1px 5px 0px rgba(0,0,0,0.12);
  background-color: #e0e0e0;
}
.MuiButton-contained:hover {
  box-shadow: 0px 2px 4px -1px rgba(0,0,0,0.2),0px 4px 5px 0px rgba(0,0,0,0.14),0px 1px 10px 0px rgba(0,0,0,0.12);
  background-color: #d5d5d5;
}
.MuiButton-contained.Mui-focusVisible {
  box-shadow: 0px 3px 5px -1px rgba(0,0,0,0.2),0px 6px 10px 0px rgba(0,0,0,0.14),0px 1px 18px 0px rgba(0,0,0,0.12);
}
.MuiButton-contained:active {
  box-shadow: 0px 5px 5px -3px rgba(0,0,0,0.2),0px 8px 10px 1px rgba(0,0,0,0.14),0px 3px 14px 2px rgba(0,0,0,0.12);
}
.MuiButton-contained.Mui-disabled {
  color: rgba(255, 255, 255, 0.3);
  box-shadow: none;
  background-color: rgba(255, 255, 255, 0.12);
}
@media (hover: none) {
  .MuiButton-contained:hover {
    box-shadow: 0px 3px 1px -2px rgba(0,0,0,0.2),0px 2px 2px 0px rgba(0,0,0,0.14),0px 1px 5px 0px rgba(0,0,0,0.12);
    background-color: #e0e0e0;
  }
}
.MuiButton-contained:hover.Mui-disabled {
  background-color: rgba(255, 255, 255, 0.12);
}
.MuiButton-containedPrimary {
  color: #fff;
  background-color: #3f51b5;
}
.MuiButton-containedPrimary:hover {
  background-color: #303f9f;
}
@media (hover: none) {
  .MuiButton-containedPrimary:hover {
    background-color: #3f51b5;
  }
}
.MuiButton-containedSecondary {
  color: #ffcc00;
  background-color: #00BFA5;
}
.MuiButton-containedSecondary:hover {
  background-color: rgb(0, 133, 115);
}
@media (hover: none) {
  .MuiButton-containedSecondary:hover {
    background-color: #00BFA5;
  }
}
.MuiButton-disableElevation {
  box-shadow: none;
}
.MuiButton-disableElevation:hover {
  box-shadow: none;
}
.MuiButton-disableElevation.Mui-focusVisible {
  box-shadow: none;
}
.MuiButton-disableElevation:active {
  box-shadow: none;
}
.MuiButton-disableElevation.Mui-disabled {
  box-shadow: none;
}
.MuiButton-colorInherit {
  color: inherit;
  border-color: currentColor;
}
.MuiButton-textSizeSmall {
  padding: 4px 5px;
  font-size: 0.8125rem;
}
.MuiButton-textSizeLarge {
  padding: 8px 11px;
  font-size: 0.9375rem;
}
.MuiButton-outlinedSizeSmall {
  padding: 3px 9px;
  font-size: 0.8125rem;
}
.MuiButton-outlinedSizeLarge {
  padding: 7px 21px;
  font-size: 0.9375rem;
}
.MuiButton-containedSizeSmall {
  padding: 4px 10px;
  font-size: 0.8125rem;
}
.MuiButton-containedSizeLarge {
  padding: 8px 22px;
  font-size: 0.9375rem;
}
.MuiButton-fullWidth {
  width: 100%;
}
.MuiButton-startIcon {
  display: inherit;
  margin-left: -4px;
  margin-right: 8px;
}
.MuiButton-startIcon.MuiButton-iconSizeSmall {
  margin-left: -2px;
}
.MuiButton-endIcon {
  display: inherit;
  margin-left: 8px;
  margin-right: -4px;
}
.MuiButton-endIcon.MuiButton-iconSizeSmall {
  margin-right: -2px;
}
.MuiButton-iconSizeSmall > *:first-child {
  font-size: 18px;
}
.MuiButton-iconSizeMedium > *:first-child {
  font-size: 20px;
}
.MuiButton-iconSizeLarge > *:first-child {
  font-size: 22px;
}
</style><style data-jss="" data-meta="MuiBackdrop">
.MuiBackdrop-root {
  top: 0;
  left: 0;
  right: 0;
  bottom: 0;
  display: flex;
  z-index: -1;
  position: fixed;
  align-items: center;
  justify-content: center;
  background-color: rgba(0, 0, 0, 0.5);
  -webkit-tap-highlight-color: transparent;
}
.MuiBackdrop-invisible {
  background-color: transparent;
}
</style><style data-jss="" data-meta="MuiPaper">
.MuiPaper-root {
  color: #fff;
  transition: box-shadow 300ms cubic-bezier(0.4, 0, 0.2, 1) 0ms;
  background-color: #424242;
}
.MuiPaper-rounded {
  border-radius: 4px;
}
.MuiPaper-outlined {
  border: 1px solid rgba(255, 255, 255, 0.12);
}
.MuiPaper-elevation0 {
  box-shadow: none;
}
.MuiPaper-elevation1 {
  box-shadow: 0px 2px 1px -1px rgba(0,0,0,0.2),0px 1px 1px 0px rgba(0,0,0,0.14),0px 1px 3px 0px rgba(0,0,0,0.12);
}
.MuiPaper-elevation2 {
  box-shadow: 0px 3px 1px -2px rgba(0,0,0,0.2),0px 2px 2px 0px rgba(0,0,0,0.14),0px 1px 5px 0px rgba(0,0,0,0.12);
}
.MuiPaper-elevation3 {
  box-shadow: 0px 3px 3px -2px rgba(0,0,0,0.2),0px 3px 4px 0px rgba(0,0,0,0.14),0px 1px 8px 0px rgba(0,0,0,0.12);
}
.MuiPaper-elevation4 {
  box-shadow: 0px 2px 4px -1px rgba(0,0,0,0.2),0px 4px 5px 0px rgba(0,0,0,0.14),0px 1px 10px 0px rgba(0,0,0,0.12);
}
.MuiPaper-elevation5 {
  box-shadow: 0px 3px 5px -1px rgba(0,0,0,0.2),0px 5px 8px 0px rgba(0,0,0,0.14),0px 1px 14px 0px rgba(0,0,0,0.12);
}
.MuiPaper-elevation6 {
  box-shadow: 0px 3px 5px -1px rgba(0,0,0,0.2),0px 6px 10px 0px rgba(0,0,0,0.14),0px 1px 18px 0px rgba(0,0,0,0.12);
}
.MuiPaper-elevation7 {
  box-shadow: 0px 4px 5px -2px rgba(0,0,0,0.2),0px 7px 10px 1px rgba(0,0,0,0.14),0px 2px 16px 1px rgba(0,0,0,0.12);
}
.MuiPaper-elevation8 {
  box-shadow: 0px 5px 5px -3px rgba(0,0,0,0.2),0px 8px 10px 1px rgba(0,0,0,0.14),0px 3px 14px 2px rgba(0,0,0,0.12);
}
.MuiPaper-elevation9 {
  box-shadow: 0px 5px 6px -3px rgba(0,0,0,0.2),0px 9px 12px 1px rgba(0,0,0,0.14),0px 3px 16px 2px rgba(0,0,0,0.12);
}
.MuiPaper-elevation10 {
  box-shadow: 0px 6px 6px -3px rgba(0,0,0,0.2),0px 10px 14px 1px rgba(0,0,0,0.14),0px 4px 18px 3px rgba(0,0,0,0.12);
}
.MuiPaper-elevation11 {
  box-shadow: 0px 6px 7px -4px rgba(0,0,0,0.2),0px 11px 15px 1px rgba(0,0,0,0.14),0px 4px 20px 3px rgba(0,0,0,0.12);
}
.MuiPaper-elevation12 {
  box-shadow: 0px 7px 8px -4px rgba(0,0,0,0.2),0px 12px 17px 2px rgba(0,0,0,0.14),0px 5px 22px 4px rgba(0,0,0,0.12);
}
.MuiPaper-elevation13 {
  box-shadow: 0px 7px 8px -4px rgba(0,0,0,0.2),0px 13px 19px 2px rgba(0,0,0,0.14),0px 5px 24px 4px rgba(0,0,0,0.12);
}
.MuiPaper-elevation14 {
  box-shadow: 0px 7px 9px -4px rgba(0,0,0,0.2),0px 14px 21px 2px rgba(0,0,0,0.14),0px 5px 26px 4px rgba(0,0,0,0.12);
}
.MuiPaper-elevation15 {
  box-shadow: 0px 8px 9px -5px rgba(0,0,0,0.2),0px 15px 22px 2px rgba(0,0,0,0.14),0px 6px 28px 5px rgba(0,0,0,0.12);
}
.MuiPaper-elevation16 {
  box-shadow: 0px 8px 10px -5px rgba(0,0,0,0.2),0px 16px 24px 2px rgba(0,0,0,0.14),0px 6px 30px 5px rgba(0,0,0,0.12);
}
.MuiPaper-elevation17 {
  box-shadow: 0px 8px 11px -5px rgba(0,0,0,0.2),0px 17px 26px 2px rgba(0,0,0,0.14),0px 6px 32px 5px rgba(0,0,0,0.12);
}
.MuiPaper-elevation18 {
  box-shadow: 0px 9px 11px -5px rgba(0,0,0,0.2),0px 18px 28px 2px rgba(0,0,0,0.14),0px 7px 34px 6px rgba(0,0,0,0.12);
}
.MuiPaper-elevation19 {
  box-shadow: 0px 9px 12px -6px rgba(0,0,0,0.2),0px 19px 29px 2px rgba(0,0,0,0.14),0px 7px 36px 6px rgba(0,0,0,0.12);
}
.MuiPaper-elevation20 {
  box-shadow: 0px 10px 13px -6px rgba(0,0,0,0.2),0px 20px 31px 3px rgba(0,0,0,0.14),0px 8px 38px 7px rgba(0,0,0,0.12);
}
.MuiPaper-elevation21 {
  box-shadow: 0px 10px 13px -6px rgba(0,0,0,0.2),0px 21px 33px 3px rgba(0,0,0,0.14),0px 8px 40px 7px rgba(0,0,0,0.12);
}
.MuiPaper-elevation22 {
  box-shadow: 0px 10px 14px -6px rgba(0,0,0,0.2),0px 22px 35px 3px rgba(0,0,0,0.14),0px 8px 42px 7px rgba(0,0,0,0.12);
}
.MuiPaper-elevation23 {
  box-shadow: 0px 11px 14px -7px rgba(0,0,0,0.2),0px 23px 36px 3px rgba(0,0,0,0.14),0px 9px 44px 8px rgba(0,0,0,0.12);
}
.MuiPaper-elevation24 {
  box-shadow: 0px 11px 15px -7px rgba(0,0,0,0.2),0px 24px 38px 3px rgba(0,0,0,0.14),0px 9px 46px 8px rgba(0,0,0,0.12);
}
</style><style data-jss="" data-meta="MuiDialog">
@media print {
  .MuiDialog-root {
    position: absolute !important;
  }
}
.MuiDialog-scrollPaper {
  display: flex;
  align-items: center;
  justify-content: center;
}
.MuiDialog-scrollBody {
  overflow-x: hidden;
  overflow-y: auto;
  text-align: center;
}
.MuiDialog-scrollBody:after {
  width: 0;
  height: 100%;
  content: "";
  display: inline-block;
  vertical-align: middle;
}
.MuiDialog-container {
  height: 100%;
  outline: 0;
}
@media print {
  .MuiDialog-container {
    height: auto;
  }
}
.MuiDialog-paper {
  margin: 32px;
  position: relative;
  overflow-y: auto;
}
@media print {
  .MuiDialog-paper {
    box-shadow: none;
    overflow-y: visible;
  }
}
.MuiDialog-paperScrollPaper {
  display: flex;
  max-height: calc(100% - 64px);
  flex-direction: column;
}
.MuiDialog-paperScrollBody {
  display: inline-block;
  text-align: left;
  vertical-align: middle;
}
.MuiDialog-paperWidthFalse {
  max-width: calc(100% - 64px);
}
.MuiDialog-paperWidthXs {
  max-width: 444px;
}
@media (max-width:507.95px) {
  .MuiDialog-paperWidthXs.MuiDialog-paperScrollBody {
    max-width: calc(100% - 64px);
  }
}
.MuiDialog-paperWidthSm {
  max-width: 600px;
}
@media (max-width:663.95px) {
  .MuiDialog-paperWidthSm.MuiDialog-paperScrollBody {
    max-width: calc(100% - 64px);
  }
}
.MuiDialog-paperWidthMd {
  max-width: 960px;
}
@media (max-width:1023.95px) {
  .MuiDialog-paperWidthMd.MuiDialog-paperScrollBody {
    max-width: calc(100% - 64px);
  }
}
.MuiDialog-paperWidthLg {
  max-width: 1280px;
}
@media (max-width:1343.95px) {
  .MuiDialog-paperWidthLg.MuiDialog-paperScrollBody {
    max-width: calc(100% - 64px);
  }
}
.MuiDialog-paperWidthXl {
  max-width: 1920px;
}
@media (max-width:1983.95px) {
  .MuiDialog-paperWidthXl.MuiDialog-paperScrollBody {
    max-width: calc(100% - 64px);
  }
}
.MuiDialog-paperFullWidth {
  width: calc(100% - 64px);
}
.MuiDialog-paperFullScreen {
  width: 100%;
  height: 100%;
  margin: 0;
  max-width: 100%;
  max-height: none;
  border-radius: 0;
}
.MuiDialog-paperFullScreen.MuiDialog-paperScrollBody {
  margin: 0;
  max-width: 100%;
}
</style><style data-jss="" data-meta="MuiPopover">
.MuiPopover-paper {
  outline: 0;
  position: absolute;
  max-width: calc(100% - 32px);
  min-width: 16px;
  max-height: calc(100% - 32px);
  min-height: 16px;
  overflow-x: hidden;
  overflow-y: auto;
}
</style><style data-jss="" data-meta="MuiList">
.MuiList-root {
  margin: 0;
  padding: 0;
  position: relative;
  list-style: none;
}
.MuiList-padding {
  padding-top: 8px;
  padding-bottom: 8px;
}
.MuiList-subheader {
  padding-top: 0;
}
</style><style data-jss="" data-meta="MuiMenu">
.MuiMenu-paper {
  max-height: calc(100% - 96px);
  -webkit-overflow-scrolling: touch;
}
.MuiMenu-list {
  outline: 0;
}
</style><style data-jss="" data-meta="MuiSvgIcon">
.MuiSvgIcon-root {
  fill: currentColor;
  width: 1em;
  height: 1em;
  display: inline-block;
  font-size: 1.5rem;
  transition: fill 200ms cubic-bezier(0.4, 0, 0.2, 1) 0ms;
  flex-shrink: 0;
  user-select: none;
}
.MuiSvgIcon-colorPrimary {
  color: #3f51b5;
}
.MuiSvgIcon-colorSecondary {
  color: #00BFA5;
}
.MuiSvgIcon-colorAction {
  color: #fff;
}
.MuiSvgIcon-colorError {
  color: #f44336;
}
.MuiSvgIcon-colorDisabled {
  color: rgba(255, 255, 255, 0.3);
}
.MuiSvgIcon-fontSizeInherit {
  font-size: inherit;
}
.MuiSvgIcon-fontSizeSmall {
  font-size: 1.25rem;
}
.MuiSvgIcon-fontSizeLarge {
  font-size: 2.1875rem;
}
</style><style data-jss="" data-meta="MuiListItem">
.MuiListItem-root {
  width: 100%;
  display: flex;
  position: relative;
  box-sizing: border-box;
  text-align: left;
  align-items: center;
  padding-top: 8px;
  padding-bottom: 8px;
  justify-content: flex-start;
  text-decoration: none;
}
.MuiListItem-root.Mui-focusVisible {
  background-color: rgba(255, 255, 255, 0.16);
}
.MuiListItem-root.Mui-selected, .MuiListItem-root.Mui-selected:hover {
  background-color: rgba(255, 255, 255, 0.16);
}
.MuiListItem-root.Mui-disabled {
  opacity: 0.5;
}
.MuiListItem-container {
  position: relative;
}
.MuiListItem-dense {
  padding-top: 4px;
  padding-bottom: 4px;
}
.MuiListItem-alignItemsFlexStart {
  align-items: flex-start;
}
.MuiListItem-divider {
  border-bottom: 1px solid rgba(255, 255, 255, 0.12);
  background-clip: padding-box;
}
.MuiListItem-gutters {
  padding-left: 16px;
  padding-right: 16px;
}
.MuiListItem-button {
  transition: background-color 150ms cubic-bezier(0.4, 0, 0.2, 1) 0ms;
}
.MuiListItem-button:hover {
  text-decoration: none;
  background-color: rgba(255, 255, 255, 0.08);
}
@media (hover: none) {
  .MuiListItem-button:hover {
    background-color: transparent;
  }
}
.MuiListItem-secondaryAction {
  padding-right: 48px;
}
</style><style data-jss="" data-meta="MuiIconButton">
.MuiIconButton-root {
  flex: 0 0 auto;
  color: #fff;
  padding: 12px;
  overflow: visible;
  font-size: 1.5rem;
  text-align: center;
  transition: background-color 150ms cubic-bezier(0.4, 0, 0.2, 1) 0ms;
  border-radius: 50%;
}
.MuiIconButton-root:hover {
  background-color: rgba(255, 255, 255, 0.08);
}
.MuiIconButton-root.Mui-disabled {
  color: rgba(255, 255, 255, 0.3);
  background-color: transparent;
}
@media (hover: none) {
  .MuiIconButton-root:hover {
    background-color: transparent;
  }
}
.MuiIconButton-edgeStart {
  margin-left: -12px;
}
.MuiIconButton-sizeSmall.MuiIconButton-edgeStart {
  margin-left: -3px;
}
.MuiIconButton-edgeEnd {
  margin-right: -12px;
}
.MuiIconButton-sizeSmall.MuiIconButton-edgeEnd {
  margin-right: -3px;
}
.MuiIconButton-colorInherit {
  color: inherit;
}
.MuiIconButton-colorPrimary {
  color: #3f51b5;
}
.MuiIconButton-colorPrimary:hover {
  background-color: rgba(63, 81, 181, 0.08);
}
@media (hover: none) {
  .MuiIconButton-colorPrimary:hover {
    background-color: transparent;
  }
}
.MuiIconButton-colorSecondary {
  color: #00BFA5;
}
.MuiIconButton-colorSecondary:hover {
  background-color: rgba(0, 191, 165, 0.08);
}
@media (hover: none) {
  .MuiIconButton-colorSecondary:hover {
    background-color: transparent;
  }
}
.MuiIconButton-sizeSmall {
  padding: 3px;
  font-size: 1.125rem;
}
.MuiIconButton-label {
  width: 100%;
  display: flex;
  align-items: inherit;
  justify-content: inherit;
}
</style><style data-jss="" data-meta="MuiCssBaseline">
html {
  box-sizing: border-box;
  -webkit-font-smoothing: antialiased;
  -moz-osx-font-smoothing: grayscale;
}
*, *::before, *::after {
  box-sizing: inherit;
}
strong, b {
  font-weight: 700;
}
body {
  color: #fff;
  margin: 0;
  font-size: 0.875rem;
  font-family: "Roboto", "Helvetica", "Arial", sans-serif;
  font-weight: 400;
  line-height: 1.43;
  letter-spacing: 0.01071em;
  background-color: rgb(17, 17, 17);
}
@media print {
  body {
    background-color: #fff;
  }
}
body::backdrop {
  background-color: rgb(17, 17, 17);
}
</style><style data-jss="" data-meta="MuiDrawer">
.MuiDrawer-docked {
  flex: 0 0 auto;
}
.MuiDrawer-paper {
  top: 0;
  flex: 1 0 auto;
  height: 100%;
  display: flex;
  outline: 0;
  z-index: 1200;
  position: fixed;
  overflow-y: auto;
  flex-direction: column;
  -webkit-overflow-scrolling: touch;
}
.MuiDrawer-paperAnchorLeft {
  left: 0;
  right: auto;
}
.MuiDrawer-paperAnchorRight {
  left: auto;
  right: 0;
}
.MuiDrawer-paperAnchorTop {
  top: 0;
  left: 0;
  right: 0;
  bottom: auto;
  height: auto;
  max-height: 100%;
}
.MuiDrawer-paperAnchorBottom {
  top: auto;
  left: 0;
  right: 0;
  bottom: 0;
  height: auto;
  max-height: 100%;
}
.MuiDrawer-paperAnchorDockedLeft {
  border-right: 1px solid rgba(255, 255, 255, 0.12);
}
.MuiDrawer-paperAnchorDockedTop {
  border-bottom: 1px solid rgba(255, 255, 255, 0.12);
}
.MuiDrawer-paperAnchorDockedRight {
  border-left: 1px solid rgba(255, 255, 255, 0.12);
}
.MuiDrawer-paperAnchorDockedBottom {
  border-top: 1px solid rgba(255, 255, 255, 0.12);
}
</style><style data-jss="" data-meta="PrivateHiddenCss">
@media (min-width:0px) and (max-width:599.95px) {
  .jss29 {
    display: none;
  }
}
@media (min-width:0px) {
  .jss30 {
    display: none;
  }
}
@media (max-width:599.95px) {
  .jss31 {
    display: none;
  }
}
@media (min-width:600px) and (max-width:959.95px) {
  .jss32 {
    display: none;
  }
}
@media (min-width:600px) {
  .jss33 {
    display: none;
  }
}
@media (max-width:959.95px) {
  .jss34 {
    display: none;
  }
}
@media (min-width:960px) and (max-width:1279.95px) {
  .jss35 {
    display: none;
  }
}
@media (min-width:960px) {
  .jss36 {
    display: none;
  }
}
@media (max-width:1279.95px) {
  .jss37 {
    display: none;
  }
}
@media (min-width:1280px) and (max-width:1919.95px) {
  .jss38 {
    display: none;
  }
}
@media (min-width:1280px) {
  .jss39 {
    display: none;
  }
}
@media (max-width:1919.95px) {
  .jss40 {
    display: none;
  }
}
@media (min-width:1920px) {
  .jss41 {
    display: none;
  }
}
@media (min-width:1920px) {
  .jss42 {
    display: none;
  }
}
@media (min-width:0px) {
  .jss43 {
    display: none;
  }
}
</style><style data-jss="" data-meta="makeStyles">
.jss1 {
  display: flex;
}
@media (min-width:600px) {
  .jss2 {
    width: 70px;
    flex-shrink: 0;
  }
}
@media (min-width:600px) {
  .jss3 {
    width: calc(100% - 70px);
    margin-left: 70px;
  }
}
.jss4 {
  margin-left: 4px;
}
@media (min-width:600px) {
  .jss4 {
    display: none;
  }
}
.jss5 {
  min-height: 56px;
}
@media (min-width:0px) and (orientation: landscape) {
  .jss5 {
    min-height: 48px;
  }
}
@media (min-width:600px) {
  .jss5 {
    min-height: 64px;
  }
}
.jss6 {
  width: 70px;
}
.jss7 {
  padding: 24px;
  flex-grow: 1;
}
</style><style data-jss="" data-meta="MuiCollapse">
.MuiCollapse-container {
  height: 0;
  overflow: hidden;
  transition: height 300ms cubic-bezier(0.4, 0, 0.2, 1) 0ms;
}
.MuiCollapse-entered {
  height: auto;
  overflow: visible;
}
.MuiCollapse-hidden {
  visibility: hidden;
}
.MuiCollapse-wrapper {
  display: flex;
}
.MuiCollapse-wrapperInner {
  width: 100%;
}
</style><style data-jss="" data-meta="MuiExpansionPanel">
.MuiExpansionPanel-root {
  position: relative;
  transition: margin 150ms cubic-bezier(0.4, 0, 0.2, 1) 0ms;
}
.MuiExpansionPanel-root:before {
  top: -1px;
  left: 0;
  right: 0;
  height: 1px;
  content: "";
  opacity: 1;
  position: absolute;
  transition: opacity 150ms cubic-bezier(0.4, 0, 0.2, 1) 0ms,background-color 150ms cubic-bezier(0.4, 0, 0.2, 1) 0ms;
  background-color: rgba(255, 255, 255, 0.12);
}
.MuiExpansionPanel-root.Mui-expanded {
  margin: 16px 0;
}
.MuiExpansionPanel-root.Mui-disabled {
  background-color: rgba(255, 255, 255, 0.12);
}
.MuiExpansionPanel-root.Mui-expanded + .MuiExpansionPanel-root:before {
  display: none;
}
.MuiExpansionPanel-root.Mui-expanded:first-child {
  margin-top: 0;
}
.MuiExpansionPanel-root.Mui-expanded:last-child {
  margin-bottom: 0;
}
.MuiExpansionPanel-root.Mui-expanded:before {
  opacity: 0;
}
.MuiExpansionPanel-root:first-child:before {
  display: none;
}
.MuiExpansionPanel-rounded {
  border-radius: 0;
}
.MuiExpansionPanel-rounded:first-child {
  border-top-left-radius: 4px;
  border-top-right-radius: 4px;
}
.MuiExpansionPanel-rounded:last-child {
  border-bottom-left-radius: 4px;
  border-bottom-right-radius: 4px;
}
@supports (-ms-ime-align: auto) {
  .MuiExpansionPanel-rounded:last-child {
    border-bottom-left-radius: 0;
    border-bottom-right-radius: 0;
  }
}
</style><style data-jss="" data-meta="MuiExpansionPanelSummary">
.MuiExpansionPanelSummary-root {
  display: flex;
  padding: 0px 24px;
  min-height: 48px;
  transition: min-height 150ms cubic-bezier(0.4, 0, 0.2, 1) 0ms,background-color 150ms cubic-bezier(0.4, 0, 0.2, 1) 0ms;
}
.MuiExpansionPanelSummary-root:hover:not(.Mui-disabled) {
  cursor: pointer;
}
.MuiExpansionPanelSummary-root.Mui-expanded {
  min-height: 64px;
}
.MuiExpansionPanelSummary-root.Mui-focused {
  background-color: #e0e0e0;
}
.MuiExpansionPanelSummary-root.Mui-disabled {
  opacity: 0.38;
}
.MuiExpansionPanelSummary-content {
  margin: 12px 0;
  display: flex;
  flex-grow: 1;
  transition: margin 150ms cubic-bezier(0.4, 0, 0.2, 1) 0ms;
}
.MuiExpansionPanelSummary-content.Mui-expanded {
  margin: 20px 0;
}
.MuiExpansionPanelSummary-expandIcon {
  transform: rotate(0deg);
  transition: transform 150ms cubic-bezier(0.4, 0, 0.2, 1) 0ms;
}
.MuiExpansionPanelSummary-expandIcon:hover {
  background-color: transparent;
}
.MuiExpansionPanelSummary-expandIcon.Mui-expanded {
  transform: rotate(180deg);
}
</style><style data-jss="" data-meta="MuiExpansionPanelDetails">
.MuiExpansionPanelDetails-root {
  display: flex;
  padding: 8px 24px 24px;
}
</style><style data-jss="" data-meta="MuiSnackbar">
.MuiSnackbar-root {
  left: 8px;
  right: 8px;
  display: flex;
  z-index: 1400;
  position: fixed;
  align-items: center;
  justify-content: center;
}
.MuiSnackbar-anchorOriginTopCenter {
  top: 8px;
}
@media (min-width:600px) {
  .MuiSnackbar-anchorOriginTopCenter {
    top: 24px;
    left: 50%;
    right: auto;
    transform: translateX(-50%);
  }
}
.MuiSnackbar-anchorOriginBottomCenter {
  bottom: 8px;
}
@media (min-width:600px) {
  .MuiSnackbar-anchorOriginBottomCenter {
    left: 50%;
    right: auto;
    bottom: 24px;
    transform: translateX(-50%);
  }
}
.MuiSnackbar-anchorOriginTopRight {
  top: 8px;
  justify-content: flex-end;
}
@media (min-width:600px) {
  .MuiSnackbar-anchorOriginTopRight {
    top: 24px;
    left: auto;
    right: 24px;
  }
}
.MuiSnackbar-anchorOriginBottomRight {
  bottom: 8px;
  justify-content: flex-end;
}
@media (min-width:600px) {
  .MuiSnackbar-anchorOriginBottomRight {
    left: auto;
    right: 24px;
    bottom: 24px;
  }
}
.MuiSnackbar-anchorOriginTopLeft {
  top: 8px;
  justify-content: flex-start;
}
@media (min-width:600px) {
  .MuiSnackbar-anchorOriginTopLeft {
    top: 24px;
    left: 24px;
    right: auto;
  }
}
.MuiSnackbar-anchorOriginBottomLeft {
  bottom: 8px;
  justify-content: flex-start;
}
@media (min-width:600px) {
  .MuiSnackbar-anchorOriginBottomLeft {
    left: 24px;
    right: auto;
    bottom: 24px;
  }
}
</style><script id="_carbonads_projs" type="text/javascript" src="./print all sub array with 0 sum_files/CK7D55QI.json"></script><link rel="stylesheet" type="text/css" href="./print all sub array with 0 sum_files/2.0ad0c0aa.chunk.css"><script charset="utf-8" src="./print all sub array with 0 sum_files/2.3b252200.chunk.js.download"></script><link rel="stylesheet" type="text/css" href="./print all sub array with 0 sum_files/3.d09d21a7.chunk.css"><script charset="utf-8" src="./print all sub array with 0 sum_files/3.a7f0cc35.chunk.js.download"></script><meta name="keywords" content="" data-react-helmet="true"><meta property="og:title" content="frequency.cpp" data-react-helmet="true"></head>
      <body style="">
          <div id="root"><div class="root" data-theme="light"><div class="makeStyles-root-1"><div style="position:fixed;z-index:10"> <button class="MuiButtonBase-root MuiIconButton-root makeStyles-menuButton-4 MuiIconButton-colorInherit MuiIconButton-edgeStart" tabindex="0" type="button" aria-label="open drawer"><span class="MuiIconButton-label"><svg class="MuiSvgIcon-root" focusable="false" viewBox="0 0 24 24" aria-hidden="true"><path d="M3 18h18v-2H3v2zm0-5h18v-2H3v2zm0-7v2h18V6H3z"></path></svg></span></button></div><nav class="makeStyles-drawer-2" aria-label="mailbox folders"><div class="PrivateHiddenCss-smUp-33"></div><div class="PrivateHiddenCss-xsDown-31"><div class="MuiDrawer-root MuiDrawer-docked"><div class="MuiPaper-root MuiDrawer-paper makeStyles-drawerPaper-6 MuiDrawer-paperAnchorLeft MuiDrawer-paperAnchorDockedLeft MuiPaper-elevation0"><div id="sideBar" class="sidebar"><div class="makeStyles-toolbar-5"><div style="height:45px;box-sizing:border-box;padding:10px;text-align:center"><a style="display:inline-block" href="https://code.dcoder.tech/"><div class="logoIcon"><img src="./print all sub array with 0 sum_files/logo_dcoder.93662c17.png" style="height:100%;width:100%;padding:4.5px;box-sizing:border-box"></div></a></div></div><ul class="MuiList-root MuiList-padding"><div class="MuiButtonBase-root MuiListItem-root MuiListItem-gutters MuiListItem-button" tabindex="0" role="button" aria-disabled="false" style="padding:0"><a style="color:lightgray;text-decoration:none;width:100%" title="Feed" href="https://code.dcoder.tech/feed"><div class="barIcon"><span class="icon icon-feed"></span><div style="text-align:center;font-size:10px">Feed</div></div></a><span class="MuiTouchRipple-root"></span></div><div class="MuiButtonBase-root MuiListItem-root MuiListItem-gutters MuiListItem-button" tabindex="0" role="button" aria-disabled="false" style="padding:0"><a style="color:lightgray;text-decoration:none;width:100%" title="My Files" href="https://code.dcoder.tech/files" aria-current="page" class="bg-3"><div class="barIcon"><span class="icon icon-file"></span><div style="text-align:center;font-size:10px">My Files</div></div></a><span class="MuiTouchRipple-root"></span></div><div class="MuiButtonBase-root MuiListItem-root MuiListItem-gutters MuiListItem-button" tabindex="0" role="button" aria-disabled="false" style="padding:0"><a style="color:lightgray;text-decoration:none;width:100%" title="Challenges" href="https://code.dcoder.tech/challenges"><div class="barIcon"><i class="icon icon-challenge"></i><div style="text-align:center;font-size:10px">Challenges</div></div></a><span class="MuiTouchRipple-root"></span></div><div class="MuiButtonBase-root MuiListItem-root MuiListItem-gutters MuiListItem-button" tabindex="0" role="button" aria-disabled="false" style="padding:0"><a style="color:lightgray;text-decoration:none;width:100%" title="Leaderboard" href="https://code.dcoder.tech/leaderboard"><div class="barIcon"><span class="icon icon-leaderboard"></span><div style="text-align:center;font-size:10px">Leaderboard</div></div></a><span class="MuiTouchRipple-root"></span></div><div class="MuiButtonBase-root MuiListItem-root MuiListItem-gutters MuiListItem-button" tabindex="0" role="button" aria-disabled="false" style="padding:0"><div class="barIcon"><span class="icon icon-notification"></span><div class="sidebarTitle" style="text-align:center;font-size:10px">Notifications</div></div><span class="MuiTouchRipple-root"></span></div><div class="MuiButtonBase-root MuiListItem-root MuiListItem-gutters MuiListItem-button" tabindex="0" role="button" aria-disabled="false" style="padding:0"><a style="color:lightgray;text-decoration:none;width:100%" title="Dev Chat" href="https://code.dcoder.tech/devchat"><div class="barIcon"><i class="icon icon-devchat"></i><div style="text-align:center;font-size:10px">Dev Chat</div></div></a><span class="MuiTouchRipple-root"></span></div><div class="MuiButtonBase-root MuiListItem-root MuiListItem-gutters MuiListItem-button" tabindex="0" role="button" aria-disabled="false" style="padding:0"><a style="color:lightgray;text-decoration:none;width:100%" title="Settings" href="https://code.dcoder.tech/settings/profile"><div class="barIcon"><i class="icon icon-setting"></i><div style="text-align:center;font-size:10px">Settings</div></div></a><span class="MuiTouchRipple-root"></span></div></ul><a style="color:lightgray;text-decoration:none;width:100%" href="https://code.dcoder.tech/profile/karthikmalla745"><div style="position:absolute;bottom:10px" class="barIcon last"><img src="./print all sub array with 0 sum_files/unnamed.png" alt="profile pic" style="height:30px;width:30px;border-radius:50%"><div style="text-align:center;font-size:10px;overflow:hidden;text-overflow:ellipsis;padding:0px 5px">@<!-- -->karthikmalla745</div></div></a></div></div></div></div></nav><div><div style="height:100%;overflow:hidden"></div></div></div><div class="main-container"><div style="height: 100%; overflow: hidden;"><div class="main-content-header" style="box-sizing: border-box; padding: 10px; height: 45px; font-weight: bold; border-bottom: 1px solid black;"><div style="display: flex; cursor: pointer; box-sizing: border-box; height: 100%; align-items: center;"><div style="font-weight: bold; margin-right: 30px;"><h1 class="nav-heading text-color" style="margin: 0px; font-size: 16px;">My Files</h1></div><button class="MuiButtonBase-root MuiButton-root MuiButton-contained button-color MuiButton-containedSizeSmall MuiButton-sizeSmall" tabindex="0" type="button" style="margin-right: 30px; margin-left: 0px;"><span class="MuiButton-label"><span class="MuiButton-startIcon MuiButton-iconSizeSmall"><i class="fas fa-plus-square">  </i></span>Create file </span><span class="MuiTouchRipple-root"></span></button><button class="MuiButtonBase-root MuiButton-root MuiButton-contained button-color MuiButton-containedSizeSmall MuiButton-sizeSmall" tabindex="0" type="button" style="margin-right: 30px;"><span class="MuiButton-label"><span class="MuiButton-startIcon MuiButton-iconSizeSmall"><i class="fas fa-plus-square">  </i></span>Create project </span><span class="MuiTouchRipple-root"></span></button><input id="contained-button-file" directory="" webkitdirectory="" type="file" style="display: none;"><button class="MuiButtonBase-root MuiButton-root MuiButton-contained run-button MuiButton-containedSizeSmall MuiButton-sizeSmall" tabindex="0" type="button"><span class="MuiButton-label"><span class="MuiButton-startIcon MuiButton-iconSizeSmall"><i class="icon icon-run_button">  </i></span>Run code </span><span class="MuiTouchRipple-root"></span></button><div class="text-color" style="position: relative;"><button class="button-color" id="saveBtn">Save</button></div><div style="margin-left: auto;"><button class="MuiButtonBase-root MuiButton-root MuiButton-contained button-color MuiButton-containedSizeSmall MuiButton-sizeSmall" tabindex="0" type="button"><span class="MuiButton-label"><span class="MuiButton-startIcon MuiButton-iconSizeSmall"><i class="far fa-dot-circle" style="display: inline-block; vertical-align: middle;">  </i></span>Input<span class="MuiButton-endIcon MuiButton-iconSizeSmall"><i class="fa fa-upload" style="display: inline-block; vertical-align: middle;">  </i></span></span><span class="MuiTouchRipple-root"></span></button></div></div></div><div class="MuiGrid-root MuiGrid-container" style="height: calc(100vh - 45px);"><div class="MuiGrid-root MuiGrid-item MuiGrid-grid-xs-12 MuiGrid-grid-sm-4 MuiGrid-grid-md-3" style="height: 100%; display: block;"><div class="side-subnav" style="position: relative; height: 100%; max-height: 100%;"><div><div class="bg-2" style="display: flex; height: 50px; margin-bottom: 3px;"><button class="MuiButtonBase-root MuiIconButton-root" tabindex="0" type="button" aria-label="delete"><span class="MuiIconButton-label"><svg class="MuiSvgIcon-root" focusable="false" viewBox="0 0 24 24" aria-hidden="true"><path d="M21 11H6.83l3.58-3.59L9 6l-6 6 6 6 1.41-1.41L6.83 13H21z"></path></svg></span></button><div style="padding: 10px; align-self: center; font-size: 16px; text-overflow: ellipsis; white-space: nowrap; overflow: hidden;">frequency.cpp</div><button class="MuiButtonBase-root MuiIconButton-root" tabindex="0" type="button" aria-label="More" aria-haspopup="true" style="margin-left: auto;"><span class="MuiIconButton-label"><svg class="MuiSvgIcon-root" focusable="false" viewBox="0 0 24 24" aria-hidden="true"><path d="M12 8c1.1 0 2-.9 2-2s-.9-2-2-2-2 .9-2 2 .9 2 2 2zm0 2c-1.1 0-2 .9-2 2s.9 2 2 2 2-.9 2-2-.9-2-2-2zm0 6c-1.1 0-2 .9-2 2s.9 2 2 2 2-.9 2-2-.9-2-2-2z"></path></svg></span></button></div><div style="width: 100%; box-sizing: content-box;"><div class="MuiPaper-root MuiExpansionPanel-root background-color-3 border-top-2 Mui-expanded MuiExpansionPanel-rounded MuiPaper-elevation1 MuiPaper-rounded" style="margin: 0px;"><div class="MuiButtonBase-root MuiExpansionPanelSummary-root Mui-expanded" tabindex="0" role="button" aria-disabled="false" aria-expanded="true"><div class="MuiExpansionPanelSummary-content Mui-expanded"><div>Info</div></div><div class="MuiButtonBase-root MuiIconButton-root MuiExpansionPanelSummary-expandIcon Mui-expanded MuiIconButton-edgeEnd" aria-disabled="false" aria-hidden="true"><span class="MuiIconButton-label"><svg class="MuiSvgIcon-root" focusable="false" viewBox="0 0 24 24" aria-hidden="true"><path d="M16.59 8.59L12 13.17 7.41 8.59 6 10l6 6 6-6z"></path></svg></span><span class="MuiTouchRipple-root"></span></div></div><div class="MuiCollapse-container MuiCollapse-entered" style="min-height: 0px; height: auto; transition-duration: 278ms;"><div class="MuiCollapse-wrapper"><div class="MuiCollapse-wrapperInner"><div role="region"><div class="MuiExpansionPanelDetails-root description-text-color background-color-1 " style="flex-direction: column; padding: 8px 15px 15px;"><div class=" info-panel "><div style="display: flex; margin-top: 10px;"><span style="flex-basis: 30%;">Title: </span><span style="flex-basis: 70%;"></span></div><div style="display: flex; margin-top: 10px;"><span style="flex-basis: 30%;">Description: </span><span style="flex-basis: 70%;"></span></div><div style="display: flex; margin-top: 10px;"><span style="flex-basis: 30%;">Tags: </span><span style="flex-basis: 70%;"> </span></div><div style="display: flex; margin-top: 10px;"><span style="flex-basis: 30%;">Username: </span><span style="flex-basis: 70%;"><a class="text-color" href="https://code.dcoder.tech/profile/karthikmalla745">@karthikmalla745</a></span></div><div class="info-button-container" style="display: flex;"><button class="MuiButtonBase-root MuiButton-root MuiButton-contained button-color" tabindex="0" type="button"><span class="MuiButton-label"><i class="fas fa-external-link-alt"></i>&nbsp;Share</span><span class="MuiTouchRipple-root"></span></button></div></div></div></div></div></div></div></div></div></div></div></div><div class="MuiGrid-root MuiGrid-item MuiGrid-grid-xs-12 MuiGrid-grid-sm-4 MuiGrid-grid-md-3" style="height: 100%; display: none;"><div class="side-subnav" style="position: relative; height: 100%; max-height: 100%; text-align: center; padding-top: 30px;"><div style="font-weight: bold; font-size: 22px; text-align: center; width: 100%; top: 40%; position: absolute;">Looks like you don’t have an account &nbsp;<span style="cursor: pointer; text-decoration: underline; font-weight: bold;">Sign Up</span> for free<div class="description-text-color" style="margin: 5px 0px;">or</div><span style="cursor: pointer; text-decoration: underline; font-weight: bold;">login</span></div></div></div><div class="MuiGrid-root MuiGrid-item MuiGrid-grid-xs-12 MuiGrid-grid-sm-8 MuiGrid-grid-md-9" style="display: block; height: 100%;"><div style="position: relative; height: 100%;"><div style="position: relative; height: calc(100vh - 45px); width: 100%;"><div class="main-content-body" style="display: none; position: absolute; width: 100%; height: 100%; z-index: 100;"><div style="font-weight: bold; font-size: 22px; text-align: center; width: 100%; top: 40%; position: absolute;"><span>Please select a file</span><br><br><span>or</span><br><br><span class="button-color" style="cursor: pointer; font-size: 14px; border-radius: 5px; padding: 7px 60px;">Start Coding <i class="fas fa-arrow-right" style="font-size: 12px;"></i></span></div></div><div class="main-content-body" style="display: none; position: absolute; width: 100%; height: 100vh; z-index: 100;"><div style="top: 49%; position: absolute;"><img src="data:image/gif;base64,R0lGODlhOAQIAIABAP///wAAACH/C05FVFNDQVBFMi4wAwEAAAAh/wtYTVAgRGF0YVhNUDw/eHBhY2tldCBiZWdpbj0i77u/IiBpZD0iVzVNME1wQ2VoaUh6cmVTek5UY3prYzlkIj8+IDx4OnhtcG1ldGEgeG1sbnM6eD0iYWRvYmU6bnM6bWV0YS8iIHg6eG1wdGs9IkFkb2JlIFhNUCBDb3JlIDUuNi1jMTQ1IDc5LjE2MzQ5OSwgMjAxOC8wOC8xMy0xNjo0MDoyMiAgICAgICAgIj4gPHJkZjpSREYgeG1sbnM6cmRmPSJodHRwOi8vd3d3LnczLm9yZy8xOTk5LzAyLzIyLXJkZi1zeW50YXgtbnMjIj4gPHJkZjpEZXNjcmlwdGlvbiByZGY6YWJvdXQ9IiIgeG1sbnM6eG1wPSJodHRwOi8vbnMuYWRvYmUuY29tL3hhcC8xLjAvIiB4bWxuczp4bXBNTT0iaHR0cDovL25zLmFkb2JlLmNvbS94YXAvMS4wL21tLyIgeG1sbnM6c3RSZWY9Imh0dHA6Ly9ucy5hZG9iZS5jb20veGFwLzEuMC9zVHlwZS9SZXNvdXJjZVJlZiMiIHhtcDpDcmVhdG9yVG9vbD0iQWRvYmUgUGhvdG9zaG9wIENDIDIwMTkgKFdpbmRvd3MpIiB4bXBNTTpJbnN0YW5jZUlEPSJ4bXAuaWlkOjUyNjIwQzExQkRCRTExRTk5OTQ5OUQxRTVEMDA3OUQxIiB4bXBNTTpEb2N1bWVudElEPSJ4bXAuZGlkOjUyNjIwQzEyQkRCRTExRTk5OTQ5OUQxRTVEMDA3OUQxIj4gPHhtcE1NOkRlcml2ZWRGcm9tIHN0UmVmOmluc3RhbmNlSUQ9InhtcC5paWQ6NTI2MjBDMEZCREJFMTFFOTk5NDk5RDFFNUQwMDc5RDEiIHN0UmVmOmRvY3VtZW50SUQ9InhtcC5kaWQ6NTI2MjBDMTBCREJFMTFFOTk5NDk5RDFFNUQwMDc5RDEiLz4gPC9yZGY6RGVzY3JpcHRpb24+IDwvcmRmOlJERj4gPC94OnhtcG1ldGE+IDw/eHBhY2tldCBlbmQ9InIiPz4B//79/Pv6+fj39vX08/Lx8O/u7ezr6uno5+bl5OPi4eDf3t3c29rZ2NfW1dTT0tHQz87NzMvKycjHxsXEw8LBwL++vby7urm4t7a1tLOysbCvrq2sq6qpqKempaSjoqGgn56dnJuamZiXlpWUk5KRkI+OjYyLiomIh4aFhIOCgYB/fn18e3p5eHd2dXRzcnFwb25tbGtqaWhnZmVkY2JhYF9eXVxbWllYV1ZVVFNSUVBPTk1MS0pJSEdGRURDQkFAPz49PDs6OTg3NjU0MzIxMC8uLSwrKikoJyYlJCMiISAfHh0cGxoZGBcWFRQTEhEQDw4NDAsKCQgHBgUEAwIBAAAh+QQFBAABACwAAAAAOAQIAAACe4yPqcvtD6OctNqLs968+w+G4sgB5mmS6sq27gvH8kzX9o3n+s73/g8EoVDBovGITCqXzKbzCY1Kp8HhiYrNarfcrvcLDovHRmuKjE6r1+y2+w2Pg80Auf2Oz+v3/L7/SfcnOEhYaHiImBgWqNjo+AgZKTlJWWl5iWlUAAAh+QQFBAABACwQAgAAAQAHAAACA4QPBQAh+QQFBAABACwRAgAAAwAHAAACBISPqQUAIfkECQQAAQAsEAIAAAgABwAAAgeEj6nL7VAAACH5BAkEAAEALAAAAAA4BAgAAAJ8jI+py+0Po5y02ouz3rz7D4biSCLAiZ7lyrbuC8fyTNf2jef6zvf+DwyaUiih8YhMKpfMpvMJjUqn1BixWM1qt9yu9wsOi8fk2lVVTqvX7Lb7DY/LpWfA/I7P6/f8vv8vVAc4SFhoeIiYqFgluOj4CBkpOUlZaXmJmVlSAAAh+QQJBAABACwAAAAAOAQIAAACiYyPqcvtD6OctNqLs968+w+G4sgB5mkuKEq27gvH8kzX9o3n+s73/g8MCoeR1UllBBCXzKbzCY1Kp9Sq9YrN1pJKBVcLDovH5LL5jE6r17evN8mOy+f0uv2Oz+ur7kR/DxgoOEhYaHiI2PN3sJjo+AgZKTlJWQnVGIBpucnZ6fkJGio6SlpqGlMAACH5BAUEAAEALAAAAAA4BAgAAAKJjI+py+0Po5y02ouz3rz7D4biyAHmaTIoSrbuC8fyTNf2jef6zvf+DwwKh5DVSWUEEJfMpvMJjUqn1Kr1is3SksoFVwsOi8fksvmMTqvXtq83yY7L5/S6/Y7P66luRX8PGCg4SFhoeIjI84ewmOj4CBkpOUlZ+dRogGm5ydnp+QkaKjpKWmoKUwAAIfkEBQQAAQAsAAAAAAEAAQAAAgJMAQAh+QQJBAABACwQAgAACAAHAAACB4SPqcvtUAAAIfkEBQQAAQAsAAAAADgECAAAAnSMj6nL7Q+jnLTai7PevPsPhuJIUkCJpurKtu4Lx/JM1/aN5/rO9/5z+gmHxKLxiEwql8ym8wmlBaPUqvWKzWq33K73i5uCx+Sy+YxOq9fsqrgNj8vn9Lr9jie+8/y+/w8YKDjoRmh4iJiouMjY6PgIGRlSAAAh+QQJBAABACwgAgAACAAHAAACB4SPqcvtUAAAIfkECQQAAQAsAAAAADgECAAAAn2Mj6nL7Q+jnLTai7PevPsPhuJIZsCJouXKtu4Lx/JM1/aN5/rO9/4PDB5SRKHxiEwql8ym8wmNSqdUGDFVzWq33K73Cw6Lx+TaVVVOq9fstvsNj8uj59P8js/r9/y+/x9UBwBIWGh4iJiouEglyPgIGSk5SVlpeYmZqUlRAAAh+QQFBAABACwAAAAAOAQIAAACloyPqcvtD6OctNqLs968+w+G4sgB5mkyKKquKQnH8kzX9o3n+s73/g8MCofEYtD1UiABLZfxCY1Kp9Sq9YrNarfc7m3ZXIVZ3rL5jE6r1+y2+w2vgRdzJTKOz+v3/L7/DxhIVZdAiGAomKi4yNjo+AgZ+XVHR2nnJJmpucnZ6fkJGoVoMBpQGoqaqrrK2ur6ChsrO0tSAAAh+QQFBAABACyxAQAAygAHAAACM4SPqcvtDyMKtFKJs968+w82lhWW5ommajJW6wvHctpe843n+lEH+w8MhnrCovHIICKRBQAh+QQFBAABACxPAQAAjwEHAAACSISPqcvtD6OctNp7gt4a+w+G4kg2QYmm6so6HNfG8kzX9o3nyrvp/g8MCofEB69TTCqXzKYzcTw9p9Sq9eqJYrfcrpep/YqZBQAh+QQFBAABACztAAAAUwIHAAACVYSPqcvtD6OctNqLs94z+O9x4kiW5omm6sq27gvHsgGC843n+s73/g8MVmofofGITCqXzKaTRgw8p9Sq9YrN7qJSrfcLDovHTC75jE6r1+yIuQ2PrwoAIfkEBQQAAQAsiwAAABgDBwAAAmKEj6nL7Q+jnLTai7PevPv/BOIoguaJpurKtu4Lx/JM1/aNrySZ9/4PDAqHxKLxiExmdiOl8wmNSqfUqvWKY5aw3K73Cw6Lx2SGNlBOq9fstvsNB5zj9Lr9js/rMfO9/w9XAAAh+QQJBAABACwoAAAA3QMHAAACb4SPqcvtD6OctNqLs968+w+G4haUZjmm6sq27gvH8kzX9o3n+s73/nQ6/YbEovGITCqXzKbzCXUGTdGq9YrNarfcrvcLVkxR4bL5jE6r1+y2mzR+y+f0uv2Oz+vF8b3/DxgoOEhYWDEWYKi4yAhTAAAh+QQJBAABACwAAAAAOAQIAAACt4SPqcvtD6OctNqLs968+w+GohaU5ommaqqs7gvHsjnW9o3n+s73/g9ElILEovGITCqXTMPsiWpBp9RZ84rNarfcbmfoDYvH5LJ5VH1K0+x24AyPy+d0LLiOz+v3fIwbtvYnaNVXaHiIeHaXyNjo+Bg0uBIoWakCiZmpuen3xvkJGsppGZVAeloqqrrKmrfYChsr24X6ClBbO6u7y2uE+wscLDxMXGx8jJysvMzc7PwMHS09Tb1cAAAh+QQJBAABACwAAAAAOAQIAAACsoSPqcvtD6OctNqLs968+/8E4kiW5omm6sq27gvH8kzX9o2P4M73/g8MCofEjaiITCqXzKbzachJp9Sq9YrNalHQrvcLDot3x7H5jE6rl9u2+w2Py93ruv2OzyfK+r7/D6g0N0hYaHjYFqi4yNhIwecYKTkZiGh5iZmpScnZ6WkG+Sk6SlqkeYqaqkpV2ur6yhEKO0tbq7CKm6u7q2Pr++vKKzxMXGx8jJysvMzc7PyMVQAAIfkECQQAAQAsAAAAADgECAAAArOEj6nL7Q+jnLTai7PeMvgPhuJIluaJpurKtu4Lx/JM1/aN5/oecv4PDAqHxKLR4Dkql8ym80nkSafUqvWKzWq33O4ICg6Lx+RfsoxOq9dir/sNj8vn9LpdxM7r9/zKuQ8YKKh3V2h4iJiouCg16PgIyfQXSVlpmcGYqbnJ2emJdRkqOpowSXqKCvm5ytrq+rqZKjvLZ0p7izsGu8vb6/urkys83ARsfIycrLzM3Oz8DM1TAAAh+QQJBAABACwAAAAAOAQIAAACr4SPqcvtD6OctNprgt68+w+G4kiW5omm6sq27gvH8kzX9o3n+s7f2A8MCofEIkBjTCqXzGajB41Kp9Sq9YrNarfcbs8JDovHzwD5jE4rvey2+w2Py+f0uv2jzuv3DyT/D8h3N0hYaHiImKi4SBLo+BjmBzlJacR4iZmpucnZmVkJGmohKVpqWuaZqrrK2ur6OnIqO0s6aysKm6u7y9vri3UbXPlLXGx8jJysvMxcWAAAIfkECQQAAQAsAAAAADgECAAAAqWEj6nL7Q/jCbTai7PevPsPhuJIluaJpurKtu4Lx/JM1/aN5/o+S/4PDDoowqLxCOEpl8ym8wmNSqfUqvWKzS6R3G6Q6A2Lk9qy+YxOq9fstvsNf47ndDD9Po7r9/y+/w8YKDjohGeIZHeoWETY6PgIGSk5SVlZsojpk5jJ+WD5CRoqOkpaanrSmbqwqdpqcAobKztLW2sb5ep6u8vb6/sLHCx8VQAAIfkEBQQAAQAsAAAAADgECAAAAmmMj6nL7Q+jnLTai7PevPsPhuJIluaJpurKtu4Lx/JM1/aN5/rO9/4PDAqHxKLxiEwql8ym8wmNSqfUqvWKzWq33K73Cw6Lx+Sy+YxOq9fstvsNj8vn9Lr9js/r9/y+/w8YKDhIWGgYWAAAOw==" style="height: 5px; width: 100%; display: block;"></div></div><div class="terminalTop-border"><div class="MuiGrid-root MuiGrid-container" style="height: 100%;"><div class="MuiGrid-root MuiGrid-item MuiGrid-grid-xs-12 MuiGrid-grid-sm-12 MuiGrid-grid-md-12"><div><div class="background-color-1 description-text-color"><div style="margin-left: 1px; display: flex;"><div class="fileNameWrapper background-color-2"><span>frequency.cpp</span></div></div></div></div><div style="position: relative;"><div style="margin: 0px; padding: 0px;"><div class="react-codemirror2"><div class="CodeMirror cm-s-monokai CodeMirror-focused" style="width: 100%; height: 570px; font-size: 14px;"><div style="overflow: hidden; position: relative; width: 3px; height: 0px; top: 264.8px; left: 145.025px;"><textarea autocorrect="off" autocapitalize="off" spellcheck="false" style="position: absolute; bottom: -1em; padding: 0px; width: 1000px; height: 1em; outline: none;" tabindex="0"></textarea></div><div class="CodeMirror-vscrollbar" tabindex="-1" cm-not-content="true" style="bottom: 0px; display: block;"><div style="min-width: 1px; height: 645px;"></div></div><div class="CodeMirror-hscrollbar" tabindex="-1" cm-not-content="true"><div style="height: 100%; min-height: 1px; width: 0px;"></div></div><div class="CodeMirror-scrollbar-filler" cm-not-content="true"></div><div class="CodeMirror-gutter-filler" cm-not-content="true"></div><div class="CodeMirror-scroll" tabindex="-1" draggable="false"><div class="CodeMirror-sizer" style="margin-left: 39px; margin-bottom: -5px; border-right-width: 25px; min-height: 648px; min-width: 258.163px; padding-right: 5px; padding-bottom: 0px;"><div style="position: relative; top: 0px;"><div class="CodeMirror-lines" role="presentation"><div role="presentation" style="position: relative; outline: none;"><div class="CodeMirror-measure"><div class="CodeMirror-linenumber CodeMirror-gutter-elt"><div>32</div></div></div><div class="CodeMirror-measure"></div><div style="position: relative; z-index: 1;"></div><div class="CodeMirror-cursors" style=""><div class="CodeMirror-cursor" style="left: 106.025px; top: 280px; height: 20px;">&nbsp;</div></div><div class="CodeMirror-code" role="presentation" style=""><div style="position: relative;"><div class="CodeMirror-gutter-wrapper" style="left: -39px;"><div class="CodeMirror-linenumber CodeMirror-gutter-elt" style="left: 0px; width: 21px;">1</div><div class="CodeMirror-gutter-elt" style="left: 29px; width: 10px;"><div class="CodeMirror-foldgutter-open CodeMirror-guttermarker-subtle"></div></div></div><pre class=" CodeMirror-line " role="presentation"><span role="presentation" style="padding-right: 0.1px;"><span class="cm-meta">#include&lt;bits/stdc++.h&gt;</span></span></pre></div><div style="position: relative;"><div class="CodeMirror-gutter-wrapper" style="left: -39px;"><div class="CodeMirror-linenumber CodeMirror-gutter-elt" style="left: 0px; width: 21px;">2</div></div><pre class=" CodeMirror-line " role="presentation"><span role="presentation" style="padding-right: 0.1px;"><span class="cm-keyword">using</span> <span class="cm-keyword">namespace</span> <span class="cm-def">std</span>;</span></pre></div><div style="position: relative;"><div class="CodeMirror-gutter-wrapper" style="left: -39px;"><div class="CodeMirror-linenumber CodeMirror-gutter-elt" style="left: 0px; width: 21px;">3</div></div><pre class=" CodeMirror-line " role="presentation"><span role="presentation" style="padding-right: 0.1px;"><span cm-text="">​</span></span></pre></div><div style="position: relative;"><div class="CodeMirror-gutter-wrapper" style="left: -39px;"><div class="CodeMirror-linenumber CodeMirror-gutter-elt" style="left: 0px; width: 21px;">4</div></div><pre class=" CodeMirror-line " role="presentation"><span role="presentation" style="padding-right: 0.1px;"><span class="cm-type">int</span> <span class="cm-def">main</span>()</span></pre></div><div style="position: relative;"><div class="CodeMirror-gutter-wrapper" style="left: -39px;"><div class="CodeMirror-linenumber CodeMirror-gutter-elt" style="left: 0px; width: 21px;">5</div><div class="CodeMirror-gutter-elt" style="left: 29px; width: 10px;"><div class="CodeMirror-foldgutter-open CodeMirror-guttermarker-subtle"></div></div></div><pre class=" CodeMirror-line " role="presentation"><span role="presentation" style="padding-right: 0.1px;">{</span></pre></div><div style="position: relative;"><div class="CodeMirror-gutter-wrapper" style="left: -39px;"><div class="CodeMirror-linenumber CodeMirror-gutter-elt" style="left: 0px; width: 21px;">6</div></div><pre class=" CodeMirror-line " role="presentation"><span role="presentation" style="padding-right: 0.1px;">    <span class="cm-type">int</span> <span class="cm-variable">n</span>;</span></pre></div><div style="position: relative;"><div class="CodeMirror-gutter-wrapper" style="left: -39px;"><div class="CodeMirror-linenumber CodeMirror-gutter-elt" style="left: 0px; width: 21px;">7</div></div><pre class=" CodeMirror-line " role="presentation"><span role="presentation" style="padding-right: 0.1px;">    <span class="cm-variable">cin</span><span class="cm-operator">&gt;&gt;</span><span class="cm-variable">n</span>;</span></pre></div><div style="position: relative;"><div class="CodeMirror-gutter-wrapper" style="left: -39px;"><div class="CodeMirror-linenumber CodeMirror-gutter-elt" style="left: 0px; width: 21px;">8</div></div><pre class=" CodeMirror-line " role="presentation"><span role="presentation" style="padding-right: 0.1px;">    </span></pre></div><div style="position: relative;"><div class="CodeMirror-gutter-wrapper" style="left: -39px;"><div class="CodeMirror-linenumber CodeMirror-gutter-elt" style="left: 0px; width: 21px;">9</div><div class="CodeMirror-gutter-elt" style="left: 29px; width: 10px;"><div class="CodeMirror-foldgutter-open CodeMirror-guttermarker-subtle"></div></div></div><pre class=" CodeMirror-line " role="presentation"><span role="presentation" style="padding-right: 0.1px;">    <span class="cm-type">int</span> <span class="cm-variable">a</span>[<span class="cm-variable">n</span>],<span class="cm-variable">i</span>,<span class="cm-variable">j</span>;</span></pre></div><div style="position: relative;"><div class="CodeMirror-gutter-wrapper" style="left: -39px;"><div class="CodeMirror-linenumber CodeMirror-gutter-elt" style="left: 0px; width: 21px;">10</div></div><pre class=" CodeMirror-line " role="presentation"><span role="presentation" style="padding-right: 0.1px;">    <span class="cm-keyword">for</span>(<span class="cm-variable">i</span><span class="cm-operator">=</span><span class="cm-number">0</span>;<span class="cm-variable">i</span><span class="cm-operator">&lt;</span><span class="cm-variable">n</span>;<span class="cm-variable">i</span><span class="cm-operator">++</span>)</span></pre></div><div style="position: relative;"><div class="CodeMirror-gutter-wrapper" style="left: -39px;"><div class="CodeMirror-linenumber CodeMirror-gutter-elt" style="left: 0px; width: 21px;">11</div><div class="CodeMirror-gutter-elt" style="left: 29px; width: 10px;"><div class="CodeMirror-foldgutter-open CodeMirror-guttermarker-subtle"></div></div></div><pre class=" CodeMirror-line " role="presentation"><span role="presentation" style="padding-right: 0.1px;">        <span class="cm-variable">cin</span><span class="cm-operator">&gt;&gt;</span><span class="cm-variable">a</span>[<span class="cm-variable">i</span>];</span></pre></div><div style="position: relative;"><div class="CodeMirror-gutter-wrapper" style="left: -39px;"><div class="CodeMirror-linenumber CodeMirror-gutter-elt" style="left: 0px; width: 21px;">12</div></div><pre class=" CodeMirror-line " role="presentation"><span role="presentation" style="padding-right: 0.1px;">    </span></pre></div><div style="position: relative;"><div class="CodeMirror-gutter-wrapper" style="left: -39px;"><div class="CodeMirror-linenumber CodeMirror-gutter-elt" style="left: 0px; width: 21px;">13</div></div><pre class=" CodeMirror-line " role="presentation"><span role="presentation" style="padding-right: 0.1px;">    <span class="cm-keyword">for</span>(<span class="cm-variable">i</span><span class="cm-operator">=</span><span class="cm-number">0</span>;<span class="cm-variable">i</span><span class="cm-operator">&lt;</span><span class="cm-variable">n</span>;<span class="cm-variable">i</span><span class="cm-operator">++</span>)</span></pre></div><div style="position: relative;"><div class="CodeMirror-gutter-wrapper" style="left: -39px;"><div class="CodeMirror-linenumber CodeMirror-gutter-elt" style="left: 0px; width: 21px;">14</div><div class="CodeMirror-gutter-elt" style="left: 29px; width: 10px;"><div class="CodeMirror-foldgutter-open CodeMirror-guttermarker-subtle"></div></div></div><pre class=" CodeMirror-line " role="presentation"><span role="presentation" style="padding-right: 0.1px;">    {</span></pre></div><div class="CodeMirror-activeline" style="position: relative;"><div class="CodeMirror-activeline-background CodeMirror-linebackground"></div><div class="CodeMirror-gutter-background CodeMirror-activeline-gutter" style="left: -39px; width: 39px;"></div><div class="CodeMirror-gutter-wrapper CodeMirror-activeline-gutter" style="left: -39px;"><div class="CodeMirror-linenumber CodeMirror-gutter-elt" style="left: 0px; width: 21px;">15</div></div><pre class=" CodeMirror-line " role="presentation"><span role="presentation" style="padding-right: 0.1px;">        <span class="cm-type">int</span> <span class="cm-variable">sum</span><span class="cm-operator">=</span><span class="cm-number">0</span>;</span></pre></div><div style="position: relative;"><div class="CodeMirror-gutter-wrapper" style="left: -39px;"><div class="CodeMirror-linenumber CodeMirror-gutter-elt" style="left: 0px; width: 21px;">16</div></div><pre class=" CodeMirror-line " role="presentation"><span role="presentation" style="padding-right: 0.1px;">        <span class="cm-keyword">for</span>(<span class="cm-variable">j</span><span class="cm-operator">=</span><span class="cm-variable">i</span>;<span class="cm-variable">j</span><span class="cm-operator">&lt;</span><span class="cm-variable">n</span>;<span class="cm-variable">j</span><span class="cm-operator">++</span>)</span></pre></div><div style="position: relative;"><div class="CodeMirror-gutter-wrapper" style="left: -39px;"><div class="CodeMirror-linenumber CodeMirror-gutter-elt" style="left: 0px; width: 21px;">17</div><div class="CodeMirror-gutter-elt" style="left: 29px; width: 10px;"><div class="CodeMirror-foldgutter-open CodeMirror-guttermarker-subtle"></div></div></div><pre class=" CodeMirror-line " role="presentation"><span role="presentation" style="padding-right: 0.1px;">        {</span></pre></div><div style="position: relative;"><div class="CodeMirror-gutter-wrapper" style="left: -39px;"><div class="CodeMirror-linenumber CodeMirror-gutter-elt" style="left: 0px; width: 21px;">18</div><div class="CodeMirror-gutter-elt" style="left: 29px; width: 10px;"><div class="CodeMirror-foldgutter-open CodeMirror-guttermarker-subtle"></div></div></div><pre class=" CodeMirror-line " role="presentation"><span role="presentation" style="padding-right: 0.1px;">            <span class="cm-variable">sum</span><span class="cm-operator">=</span><span class="cm-variable">sum</span><span class="cm-operator">+</span><span class="cm-variable">a</span>[<span class="cm-variable">j</span>];</span></pre></div><div style="position: relative;"><div class="CodeMirror-gutter-wrapper" style="left: -39px;"><div class="CodeMirror-linenumber CodeMirror-gutter-elt" style="left: 0px; width: 21px;">19</div></div><pre class=" CodeMirror-line " role="presentation"><span role="presentation" style="padding-right: 0.1px;">            </span></pre></div><div style="position: relative;"><div class="CodeMirror-gutter-wrapper" style="left: -39px;"><div class="CodeMirror-linenumber CodeMirror-gutter-elt" style="left: 0px; width: 21px;">20</div></div><pre class=" CodeMirror-line " role="presentation"><span role="presentation" style="padding-right: 0.1px;">            <span class="cm-keyword">if</span>(<span class="cm-variable">sum</span><span class="cm-operator">==</span><span class="cm-number">0</span>)</span></pre></div><div style="position: relative;"><div class="CodeMirror-gutter-wrapper" style="left: -39px;"><div class="CodeMirror-linenumber CodeMirror-gutter-elt" style="left: 0px; width: 21px;">21</div><div class="CodeMirror-gutter-elt" style="left: 29px; width: 10px;"><div class="CodeMirror-foldgutter-open CodeMirror-guttermarker-subtle"></div></div></div><pre class=" CodeMirror-line " role="presentation"><span role="presentation" style="padding-right: 0.1px;">            {</span></pre></div><div style="position: relative;"><div class="CodeMirror-gutter-wrapper" style="left: -39px;"><div class="CodeMirror-linenumber CodeMirror-gutter-elt" style="left: 0px; width: 21px;">22</div></div><pre class=" CodeMirror-line " role="presentation"><span role="presentation" style="padding-right: 0.1px;">                <span class="cm-variable">cout</span><span class="cm-operator">&lt;&lt;</span><span class="cm-variable">i</span><span class="cm-operator">&lt;&lt;</span><span class="cm-string">" "</span><span class="cm-operator">&lt;&lt;</span><span class="cm-variable">j</span>;</span></pre></div><div style="position: relative;"><div class="CodeMirror-gutter-wrapper" style="left: -39px;"><div class="CodeMirror-linenumber CodeMirror-gutter-elt" style="left: 0px; width: 21px;">23</div></div><pre class=" CodeMirror-line " role="presentation"><span role="presentation" style="padding-right: 0.1px;">                <span class="cm-variable">cout</span><span class="cm-operator">&lt;&lt;</span><span class="cm-variable">endl</span>;</span></pre></div><div style="position: relative;"><div class="CodeMirror-gutter-wrapper" style="left: -39px;"><div class="CodeMirror-linenumber CodeMirror-gutter-elt" style="left: 0px; width: 21px;">24</div></div><pre class=" CodeMirror-line " role="presentation"><span role="presentation" style="padding-right: 0.1px;">            }</span></pre></div><div style="position: relative;"><div class="CodeMirror-gutter-wrapper" style="left: -39px;"><div class="CodeMirror-linenumber CodeMirror-gutter-elt" style="left: 0px; width: 21px;">25</div></div><pre class=" CodeMirror-line " role="presentation"><span role="presentation" style="padding-right: 0.1px;">        }</span></pre></div><div style="position: relative;"><div class="CodeMirror-gutter-wrapper" style="left: -39px;"><div class="CodeMirror-linenumber CodeMirror-gutter-elt" style="left: 0px; width: 21px;">26</div></div><pre class=" CodeMirror-line " role="presentation"><span role="presentation" style="padding-right: 0.1px;">        </span></pre></div><div style="position: relative;"><div class="CodeMirror-gutter-wrapper" style="left: -39px;"><div class="CodeMirror-linenumber CodeMirror-gutter-elt" style="left: 0px; width: 21px;">27</div></div><pre class=" CodeMirror-line " role="presentation"><span role="presentation" style="padding-right: 0.1px;">    }</span></pre></div><div style="position: relative;"><div class="CodeMirror-gutter-wrapper" style="left: -39px;"><div class="CodeMirror-linenumber CodeMirror-gutter-elt" style="left: 0px; width: 21px;">28</div></div><pre class=" CodeMirror-line " role="presentation"><span role="presentation" style="padding-right: 0.1px;">    </span></pre></div><div style="position: relative;"><div class="CodeMirror-gutter-wrapper" style="left: -39px;"><div class="CodeMirror-linenumber CodeMirror-gutter-elt" style="left: 0px; width: 21px;">29</div></div><pre class=" CodeMirror-line " role="presentation"><span role="presentation" style="padding-right: 0.1px;">    </span></pre></div><div style="position: relative;"><div class="CodeMirror-gutter-wrapper" style="left: -39px;"><div class="CodeMirror-linenumber CodeMirror-gutter-elt" style="left: 0px; width: 21px;">30</div></div><pre class=" CodeMirror-line " role="presentation"><span role="presentation" style="padding-right: 0.1px;">    <span class="cm-keyword">return</span> <span class="cm-number">0</span>;</span></pre></div><div style="position: relative;"><div class="CodeMirror-gutter-wrapper" style="left: -39px;"><div class="CodeMirror-linenumber CodeMirror-gutter-elt" style="left: 0px; width: 21px;">31</div></div><pre class=" CodeMirror-line " role="presentation"><span role="presentation" style="padding-right: 0.1px;">    </span></pre></div><div style="position: relative;"><div class="CodeMirror-gutter-wrapper" style="left: -39px;"><div class="CodeMirror-linenumber CodeMirror-gutter-elt" style="left: 0px; width: 21px;">32</div></div><pre class=" CodeMirror-line " role="presentation"><span role="presentation" style="padding-right: 0.1px;">}</span></pre></div></div></div></div></div></div><div style="position: absolute; height: 25px; width: 1px; border-bottom: 0px solid transparent; top: 648px;"></div><div class="CodeMirror-gutters" style="height: 673px; left: 0px;"><div class="CodeMirror-gutter CodeMirror-linenumbers" style="width: 29px;"></div><div class="CodeMirror-gutter CodeMirror-foldgutter"></div></div></div></div></div><div style="height: 26px; color: rgb(189, 189, 189); text-align: right; font-family: Quicksand, sans-serif; font-size: 13px; background-color: rgb(39, 40, 34); padding: 5px 10px;"><span style="display: none; float: left;"></span>Line: 15 Col: 13</div></div></div></div></div></div></div></div></div></div><div><div></div><div></div><div></div><div></div><div></div><div></div><div></div><div></div><div></div><div></div><div></div><div></div><div></div><div></div><div></div><div></div><div></div></div></div></div></div></div>
          <script>
          window.__PRELOADED_STATE__ ={"questionList":{"easy":{"message":"question List Page Number 1","page_no":1,"data":[{"_id":"5e1086efa1312802b296d39f","problem_setter":{"id":"5de25e832fcfb665c5f6593e","name":"Saurav Chandra"},"level":"easy","title":"Floating Number","question":"Bob has a floating point number N. He wants to set the precision for 2 digits after the decimal point for the number.\nHe is not good at coding, hence looking for your help.","input":"The first line contains T, the number of test cases.\nNext T line contains floating point number N.","output":"Print N in a separate line after setting precision for 2 digits after the decimal point:\n","constraints":"1 <= T <= 1000\n1 <= N <= 10000","sample_input":"1\n713.166\n","sample_output":"713.17\n","max_marks":4,"approved_at":"2020-06-15T14:13:32.171Z","solved_by":3552},{"_id":"5b757d9d791e284892a42b4a","problem_setter":{"id":"5b18fb71be95b1e1644787bc","name":"Mrudul Sankhere"},"level":"easy","title":"SwapMaster solves Symmetric Swap","question":"The SwapMaster is known to be the greatest and fastest swapper of all time. You intend to bring him down and become the new SwapMaster of the city. Through some secret sources, you found out that The SwapMaster undertook yet another task from Dr. Symmetry. The task he undertook is to perform a Symmetric Swap on an array A of numbers. Perform this task before SwapMaster to become the new SwapMaster.\nA Symmetric Swap involves swapping a number in an array with its symmetric position in the array.\nFor example, if you want to swap element at position 2, you will swap it with the 2nd element from the back of the array.","input":"First line contains N, denoting the number of elements in the array A.\nNext line contains N space-separated positive numbers.","output":"Print the array after performing the Symmetric Swap on it.","constraints":"2 ≤ N ≤ 100\n1 ≤ A[i] ≤ 1000","sample_input":"6\n1 2 3 4 5 6","sample_output":"6 5 4 3 2 1","max_marks":4,"approved_at":"2019-12-28T17:27:05.653Z","solved_by":3472},{"_id":"5b211869ac71d7305eae7965","problem_setter":{"id":"5b18fcf7be95b1e1644787c0","name":"Bhanu Nadar"},"level":"easy","title":"String Matching","question":"Cody has a sequence of characters N. He likes a sequence if it contains his favourite sequence as a substring.\nGiven the sequence and his favourite sequence F, check whether the favourite sequence is present in the sequence.","input":"The first line of input contains a single line T, which represents the number of test cases. \nEach test case consists of 2 strings separated by space N and F respectively.","output":"Print \"Yes\" if the sequence contains the favorite sequence in it, otherwise print \"No\".","constraints":"1<=T<=10.\n1<=|N|,|F|<=100.\nAll the characters are lowercase alphabets.","sample_input":"2\nabcde abc\npqrst pr","sample_output":"Yes\nNo","max_marks":3,"approved_at":"2019-12-16T05:53:27.828Z","solved_by":1773},{"_id":"5b28ea8562db8b46ab2ac711","problem_setter":{"id":"5b18fcf7be95b1e1644787c0","name":"Bhanu Nadar"},"level":"easy","title":"Leap Year","question":"Steve is playing a quiz game with his brother John. As Steve just learned the concept of leap year, John wanted to test his knowledge. For that, John started to ask Steve whether a year is a leap year or not by giving him a random year. Steve is little confused and he asks your help to the quiz.\n","input":"The first line of input contains one integer T.\n Next T lines will have years given by John.","output":"For each test case print \"Yes\" if it is a leap year else \"No\".","constraints":"1<=T<=100.\n10^3<=Year<=10^5.","sample_input":"2\n2000\n2017","sample_output":"Yes\nNo","max_marks":6,"approved_at":"2019-11-29T12:29:32.302Z","solved_by":2800},{"_id":"5cf3f4881681076686eade89","problem_setter":{"id":"5cd66e431681076686ea28c6","name":"Rajat Gupta"},"level":"easy","title":"Project Teams","question":"There are N students in a class and Teacher want to divide these students into some groups . Teacher told  that groups consisting of two or less students not allowed , so Teacher want to have as many groups consisting of three or more students as possible.\n\nDivide the students so that the number of groups consisting of three or more students is maximized.","input":"Single integer N\n","output":"Maximum number of groups can be formed","constraints":"1<=N<100000","sample_input":"6","sample_output":"2","max_marks":5,"approved_at":"2019-10-12T09:19:44.526Z","solved_by":3681},{"_id":"5b85bc2bb6415039901fa9d4","problem_setter":{"id":"5b18fb71be95b1e1644787bc","name":"Mrudul Sankhere"},"level":"easy","title":"Circle of Numbers","question":"All numbers in NumberLand are standing in a circle for a dancing ceremony. Every number needs a dancing partner. Dancing partner of any number is the number which is standing radially opposite to it in the circle. The numbers are from 0 to N-1. A certain number X wants to know who will be its dancing partner. Please help X.","input":"Two positive integers denoting the value of N and X.","output":"Print the number radially opposite to X in a circle of N numbers.","constraints":"4 ≤ N ≤ 20\n0 ≤ X < N","sample_input":"8 2","sample_output":"6","max_marks":6,"approved_at":"2019-09-14T08:33:39.093Z","solved_by":2547},{"_id":"5b5ee71361601549b1d0b92b","problem_setter":{"id":"5b18fb71be95b1e1644787bc","name":"Mrudul Sankhere"},"level":"easy","title":"Happy String","question":"A happy string is a string in which each character is lexicographically greater than its next character. You are given a positive integer N as an input. You need to print the smallest lexicographical string possible of length N.\nNOTE: All characters in a happy string are in lowercase.","input":"A single integer N.","output":"Print the lexicographically smallest string of length N.","constraints":"1 ≤ N ≤ 26 ","sample_input":"2","sample_output":"ba","max_marks":4,"approved_at":"2019-09-09T06:22:37.368Z","solved_by":1863},{"_id":"5b2ecdfea5c3787cda197fde","problem_setter":{"id":"5b18fcf7be95b1e1644787c0","name":"Bhanu Nadar"},"level":"easy","title":"Degree Celsius","question":"Tom is a scientist. He uses huge machines for complex calculations. There is a problem, the machines takes input as Fahrenheit and Tom has the temperatures in Degree Celsius. As he is busy with his work, he asks your help to convert Degree Celsius to Fahrenheit.","input":"The first and only line of the input consists of a single integer T denoting temperature in Degree Celsius.","output":"Print an integer denoting temperature in Fahrenheit.","constraints":"0<=T<=1000","sample_input":"100","sample_output":"212","max_marks":4,"approved_at":"2019-08-07T07:39:14.168Z","solved_by":4283},{"_id":"5b6e530365139d414b2a683e","problem_setter":{"id":"5b18fb71be95b1e1644787bc","name":"Mrudul Sankhere"},"level":"easy","title":"Three's Company","question":"This problem requires you to create a output string from input string such that for every character in input string, there are three same characters in output string.","input":"First line contains N, the number of letters in the string.\nThe next line contains the string.","output":"Print the output_string.","constraints":"1 ≤ N ≤ 20","sample_input":"5\nHello","sample_output":"HHHeeellllllooo","max_marks":4,"approved_at":"2019-07-13T14:08:37.510Z","solved_by":2860},{"_id":"5b61e933527d3b5ac5cecda3","problem_setter":{"id":"5b18fb71be95b1e1644787bc","name":"Mrudul Sankhere"},"level":"easy","title":"Array Sum","question":"You are given an integer array and you have to find the sum of the elements of the array and find the remainder when the sum is divided by the largest number of the array.","input":"First line contains N, the number of elements. Next line contains N space separated integers (elements of the array).","output":"Print the remainder when sum is divided by the maximum element.","constraints":"1 ≤ n ≤ 100\n0 ≤ A[i] ≤ 1000","sample_input":"5\n1 2 3 4 5","sample_output":"0","max_marks":4,"approved_at":"2019-07-06T13:16:30.092Z","solved_by":2947}],"count":84,"pages":9,"success":true,"list":[{"_id":"5e1086efa1312802b296d39f","problem_setter":{"id":"5de25e832fcfb665c5f6593e","name":"Saurav Chandra"},"level":"easy","title":"Floating Number","question":"Bob has a floating point number N. He wants to set the precision for 2 digits after the decimal point for the number.\nHe is not good at coding, hence looking for your help.","input":"The first line contains T, the number of test cases.\nNext T line contains floating point number N.","output":"Print N in a separate line after setting precision for 2 digits after the decimal point:\n","constraints":"1 <= T <= 1000\n1 <= N <= 10000","sample_input":"1\n713.166\n","sample_output":"713.17\n","max_marks":4,"approved_at":"2020-06-15T14:13:32.171Z","solved_by":3552},{"_id":"5b757d9d791e284892a42b4a","problem_setter":{"id":"5b18fb71be95b1e1644787bc","name":"Mrudul Sankhere"},"level":"easy","title":"SwapMaster solves Symmetric Swap","question":"The SwapMaster is known to be the greatest and fastest swapper of all time. You intend to bring him down and become the new SwapMaster of the city. Through some secret sources, you found out that The SwapMaster undertook yet another task from Dr. Symmetry. The task he undertook is to perform a Symmetric Swap on an array A of numbers. Perform this task before SwapMaster to become the new SwapMaster.\nA Symmetric Swap involves swapping a number in an array with its symmetric position in the array.\nFor example, if you want to swap element at position 2, you will swap it with the 2nd element from the back of the array.","input":"First line contains N, denoting the number of elements in the array A.\nNext line contains N space-separated positive numbers.","output":"Print the array after performing the Symmetric Swap on it.","constraints":"2 ≤ N ≤ 100\n1 ≤ A[i] ≤ 1000","sample_input":"6\n1 2 3 4 5 6","sample_output":"6 5 4 3 2 1","max_marks":4,"approved_at":"2019-12-28T17:27:05.653Z","solved_by":3472},{"_id":"5b211869ac71d7305eae7965","problem_setter":{"id":"5b18fcf7be95b1e1644787c0","name":"Bhanu Nadar"},"level":"easy","title":"String Matching","question":"Cody has a sequence of characters N. He likes a sequence if it contains his favourite sequence as a substring.\nGiven the sequence and his favourite sequence F, check whether the favourite sequence is present in the sequence.","input":"The first line of input contains a single line T, which represents the number of test cases. \nEach test case consists of 2 strings separated by space N and F respectively.","output":"Print \"Yes\" if the sequence contains the favorite sequence in it, otherwise print \"No\".","constraints":"1<=T<=10.\n1<=|N|,|F|<=100.\nAll the characters are lowercase alphabets.","sample_input":"2\nabcde abc\npqrst pr","sample_output":"Yes\nNo","max_marks":3,"approved_at":"2019-12-16T05:53:27.828Z","solved_by":1773},{"_id":"5b28ea8562db8b46ab2ac711","problem_setter":{"id":"5b18fcf7be95b1e1644787c0","name":"Bhanu Nadar"},"level":"easy","title":"Leap Year","question":"Steve is playing a quiz game with his brother John. As Steve just learned the concept of leap year, John wanted to test his knowledge. For that, John started to ask Steve whether a year is a leap year or not by giving him a random year. Steve is little confused and he asks your help to the quiz.\n","input":"The first line of input contains one integer T.\n Next T lines will have years given by John.","output":"For each test case print \"Yes\" if it is a leap year else \"No\".","constraints":"1<=T<=100.\n10^3<=Year<=10^5.","sample_input":"2\n2000\n2017","sample_output":"Yes\nNo","max_marks":6,"approved_at":"2019-11-29T12:29:32.302Z","solved_by":2800},{"_id":"5cf3f4881681076686eade89","problem_setter":{"id":"5cd66e431681076686ea28c6","name":"Rajat Gupta"},"level":"easy","title":"Project Teams","question":"There are N students in a class and Teacher want to divide these students into some groups . Teacher told  that groups consisting of two or less students not allowed , so Teacher want to have as many groups consisting of three or more students as possible.\n\nDivide the students so that the number of groups consisting of three or more students is maximized.","input":"Single integer N\n","output":"Maximum number of groups can be formed","constraints":"1<=N<100000","sample_input":"6","sample_output":"2","max_marks":5,"approved_at":"2019-10-12T09:19:44.526Z","solved_by":3681},{"_id":"5b85bc2bb6415039901fa9d4","problem_setter":{"id":"5b18fb71be95b1e1644787bc","name":"Mrudul Sankhere"},"level":"easy","title":"Circle of Numbers","question":"All numbers in NumberLand are standing in a circle for a dancing ceremony. Every number needs a dancing partner. Dancing partner of any number is the number which is standing radially opposite to it in the circle. The numbers are from 0 to N-1. A certain number X wants to know who will be its dancing partner. Please help X.","input":"Two positive integers denoting the value of N and X.","output":"Print the number radially opposite to X in a circle of N numbers.","constraints":"4 ≤ N ≤ 20\n0 ≤ X < N","sample_input":"8 2","sample_output":"6","max_marks":6,"approved_at":"2019-09-14T08:33:39.093Z","solved_by":2547},{"_id":"5b5ee71361601549b1d0b92b","problem_setter":{"id":"5b18fb71be95b1e1644787bc","name":"Mrudul Sankhere"},"level":"easy","title":"Happy String","question":"A happy string is a string in which each character is lexicographically greater than its next character. You are given a positive integer N as an input. You need to print the smallest lexicographical string possible of length N.\nNOTE: All characters in a happy string are in lowercase.","input":"A single integer N.","output":"Print the lexicographically smallest string of length N.","constraints":"1 ≤ N ≤ 26 ","sample_input":"2","sample_output":"ba","max_marks":4,"approved_at":"2019-09-09T06:22:37.368Z","solved_by":1863},{"_id":"5b2ecdfea5c3787cda197fde","problem_setter":{"id":"5b18fcf7be95b1e1644787c0","name":"Bhanu Nadar"},"level":"easy","title":"Degree Celsius","question":"Tom is a scientist. He uses huge machines for complex calculations. There is a problem, the machines takes input as Fahrenheit and Tom has the temperatures in Degree Celsius. As he is busy with his work, he asks your help to convert Degree Celsius to Fahrenheit.","input":"The first and only line of the input consists of a single integer T denoting temperature in Degree Celsius.","output":"Print an integer denoting temperature in Fahrenheit.","constraints":"0<=T<=1000","sample_input":"100","sample_output":"212","max_marks":4,"approved_at":"2019-08-07T07:39:14.168Z","solved_by":4283},{"_id":"5b6e530365139d414b2a683e","problem_setter":{"id":"5b18fb71be95b1e1644787bc","name":"Mrudul Sankhere"},"level":"easy","title":"Three's Company","question":"This problem requires you to create a output string from input string such that for every character in input string, there are three same characters in output string.","input":"First line contains N, the number of letters in the string.\nThe next line contains the string.","output":"Print the output_string.","constraints":"1 ≤ N ≤ 20","sample_input":"5\nHello","sample_output":"HHHeeellllllooo","max_marks":4,"approved_at":"2019-07-13T14:08:37.510Z","solved_by":2860},{"_id":"5b61e933527d3b5ac5cecda3","problem_setter":{"id":"5b18fb71be95b1e1644787bc","name":"Mrudul Sankhere"},"level":"easy","title":"Array Sum","question":"You are given an integer array and you have to find the sum of the elements of the array and find the remainder when the sum is divided by the largest number of the array.","input":"First line contains N, the number of elements. Next line contains N space separated integers (elements of the array).","output":"Print the remainder when sum is divided by the maximum element.","constraints":"1 ≤ n ≤ 100\n0 ≤ A[i] ≤ 1000","sample_input":"5\n1 2 3 4 5","sample_output":"0","max_marks":4,"approved_at":"2019-07-06T13:16:30.092Z","solved_by":2947}]},"medium":null,"hard":null},"activeQuestion":{"_id":"5b61e78f527d3b5ac5cecd92","problem_setter":{"id":"5b18fb71be95b1e1644787bc","name":"Mrudul Sankhere"},"level":"medium","title":"Cody's Team","question":"Cody is preparing for a programming competition. He needs k more members for his team to be eligible for the competition. So he organizes a coding test for all his juniors to select the best group. His teacher has instructed him to only select students with consecutive roll numbers. Cody wants to know the total score of the k members selected. Cody is in a hurry and needs your help. You are given the list of marks of N juniors in ascending order of their roll numbers,i.e., the ith number represents the marks of the student with roll no. 'i'. Find k consecutive students with highest total of marks and output the sum of marks of those k students.","input":"The first line contains N, the number of juniors, and k, the number of students needed. \nThe second line contains N integers separated by space.","output":"Print the highest total among any k consecutive students.","constraints":"1 ≤ k ≤ n ≤ 10000\n-1000 ≤ marks ≤ 1000","sample_input":"4 3\n2 1 3 4","sample_output":"8","max_marks":8,"approved_at":"2019-10-12T09:21:07.940Z","solved_by":468},"activeFile":"","editor":{"editorInstance":null,"editorConfig":{"theme":"dark","fontSize":14,"keymap":"sublime"},"outputStatus":false,"editorSetting":false},"leaderBoard":{"list":[{"user_name":"hoge","is_following":false,"is_pending":false,"user_username":"hoge","user_score":1662,"rank":1},{"user_name":"Ankan Mahapatra","is_following":false,"is_pending":false,"user_username":"ankan2526","user_image_url":"https://lh5.googleusercontent.com/-reBqy032CL0/AAAAAAAAAAI/AAAAAAAAAAA/AMZuucl_A0rfeOQ9QTWi428u9EZ3aZ91ew/s96-c/photo.jpg","user_score":1662,"rank":1},{"user_name":"Rodrigo Ikegami","is_following":false,"is_pending":false,"user_username":"roike","user_image_url":"https://lh3.googleusercontent.com/a-/AOh14Ghc8CCU8nB5_vUNmN7djVOEgAS-8vCArUv-ET5x_o8=s96-c","user_score":1662,"rank":1},{"user_name":"Brice Hirst","is_following":false,"is_pending":false,"user_username":"bricehirst","user_image_url":"https://lh3.googleusercontent.com/a-/AOh14Gj4XxicUiNhqcKS4VIVRwbMUiSdaZdN4gnY1PPu=s96-c","user_score":1662,"rank":1},{"user_name":"Arnav Meena","is_following":false,"is_pending":false,"user_username":"arnav900","user_image_url":"https://lh3.googleusercontent.com/a-/AOh14Gi41dLnjjsBtih00mGzrKYYrt-KCLShrlFI7vJ2=s300-c","user_score":1662,"rank":1},{"user_name":"Yash Mistry","is_following":false,"is_pending":false,"user_username":"yashmistry","user_image_url":"https://assets.dcoder.tech/5f0937a7ca775d3f5468fd55/profile/storageemulated0downloadimg_1818.jpg","user_score":1662,"rank":1},{"user_name":"03 ABHINANDAN SHAJU","is_following":false,"is_pending":false,"user_username":"abhinandanshaju","user_image_url":"https://dcoder.tech/avatar/dev2.png","user_score":1662,"rank":1},{"user_name":"Marek K","is_following":false,"is_pending":false,"user_username":"mkulfi2","user_image_url":"https://dcoder.tech/avatar/dev2.png","user_score":1662,"rank":1},{"user_name":"Kamaleshwaran P","is_following":false,"is_pending":false,"user_username":"kamaleshwaran","user_image_url":"https://lh3.googleusercontent.com/a-/AOh14Gi2EE3I4BS6Mqg-c3DsfZP3ozvvwCyHtT7YGCZ7mA=s96-c","user_score":1662,"rank":1},{"user_name":"Петар Поповић","is_following":false,"is_pending":false,"user_username":"streberko","user_image_url":"https://lh3.googleusercontent.com/a-/AOh14GjiIE6Tis1gNgvfR-DkIbrZlgQCMS0H-AqQJkKMkw=s96-c","user_score":1662,"rank":1},{"user_name":"Sergey","is_following":false,"is_pending":false,"user_username":"sergey1369","user_image_url":"https://lh5.googleusercontent.com/-ADYuTuMKiEA/AAAAAAAAAAI/AAAAAAAAAAA/AMZuuck78FvxzQoXIJs30200csywgEyrRA/s96-c/photo.jpg","user_score":1662,"rank":1},{"user_name":"Jerry Y","is_following":false,"is_pending":false,"user_username":"jerry","user_image_url":"https://lh3.googleusercontent.com/a-/AOh14GibN66V0WWPPCpq8TJXuFRNAuXJyeU3sdI5qwvFnA=s96-c","user_score":1662,"rank":1},{"user_name":"Omkar Patil","is_following":false,"is_pending":false,"user_username":"beastop","user_image_url":"https://lh3.googleusercontent.com/a-/AOh14GgTzpqgAqxfHpO8KYfnVPNbnzCYmXYIk_nioHuihA=s96-c","user_score":1662,"rank":1},{"user_name":"Luis Pulido","is_following":false,"is_pending":false,"user_username":"nosmirck","user_image_url":"https://lh3.googleusercontent.com/a-/AOh14GgUIj74lp7gOGs9rjLy7gD7rwsrS7sppQyyQe-2Lg=s96-c","user_score":1644,"rank":14},{"user_name":"Landa Mohan","is_following":false,"is_pending":false,"user_username":"landamohan","user_image_url":"https://assets.dcoder.tech/5e807b4cfb969e77a658d52a/profile/47093.jpg","user_score":1641,"rank":15},{"user_name":"SaiKrishna","is_following":false,"is_pending":false,"user_username":"krnmsaikrishna","user_image_url":"https://assets.dcoder.tech/5fe9ed0dfbf07e288f7c4557/profile/image789297.jpg","user_score":1640,"rank":16},{"user_name":"Shubhendra Kushwaha","is_following":false,"is_pending":false,"user_username":"theshubhendra","user_image_url":"https://lh3.googleusercontent.com/a-/AOh14GjF1-Uxv6Li32_UfFmrEPB7Sx_RmUVCJglF9pnPSyc=s96-c","user_score":1634,"rank":17},{"user_name":"Florent","is_following":false,"is_pending":false,"user_username":"labou77","user_image_url":"http://dcoder.tech/avatar/dev2.png","user_score":1622,"rank":18},{"user_name":"rdots","is_following":false,"is_pending":false,"user_username":"bhaddaka","user_image_url":"https://dcoder.tech/avatar/dev7.png","user_score":1613,"rank":19},{"user_name":"ryan gosling","is_following":false,"is_pending":false,"user_username":"boolgater","user_score":1606,"rank":20},{"user_name":"Vaibhav","is_following":false,"is_pending":false,"user_username":"vksinha","user_image_url":"https://dcoder.tech/avatar/dev7.png","user_score":1602,"rank":21},{"user_name":"Adam Walker","is_following":false,"is_pending":false,"user_username":"incursion75","user_image_url":"https://lh3.googleusercontent.com/a-/AOh14GgyYGAS_7-Xks5-83Ccp03QO7U0GDcPQ3Q2SM_CLQ=s96-c","user_score":1601,"rank":22},{"user_name":"Marek Vrana","is_following":false,"is_pending":false,"user_username":"marek.vrana1","user_image_url":"https://lh4.googleusercontent.com/-Y7MBqQmhPa0/AAAAAAAAAAI/AAAAAAAAAAA/AMZuucm5xdlxCGRwAH6V_f8tpXqUye8RFQ/s96-c/photo.jpg","user_score":1601,"rank":22},{"user_name":"Ihor Drahushchak","is_following":false,"is_pending":false,"user_username":"dragushhakigor","user_image_url":"https://lh3.googleusercontent.com/a-/AOh14Giy9DjUnP7fxDpN-VsGI7D4w7DTZM3d-rn6PWjx=s96-c","user_score":1593,"rank":24},{"user_name":"Владимир Кривенков","is_following":false,"is_pending":false,"user_username":"krovyaka","user_image_url":"https://lh3.googleusercontent.com/a-/AOh14GgvzCaPrmJvTdzny9O-nuwDnHKjPL8kwheibQ9Jxw=s96-c","user_score":1583,"rank":25},{"user_name":"Vibhay Singh","is_following":false,"is_pending":false,"user_username":"vibhay_4","user_image_url":"https://dcoder.tech/avatar/dev2.png","user_score":1570,"rank":26},{"user_name":"Tanish Jain","is_following":false,"is_pending":false,"user_username":"tanishjain10","user_image_url":"https://lh3.googleusercontent.com/a-/AOh14GjyE1fRVo0JgCFB08ANcQAdCahoxaNzKIF70GYP7A=s96-c","user_score":1563,"rank":27},{"user_name":"angel","is_following":false,"is_pending":false,"user_username":"angel115","user_image_url":"https://dcoder.tech/avatar/dev3.png","user_score":1560,"rank":28},{"user_name":"Vivek Raj","is_following":false,"is_pending":false,"user_username":"vivekrajsundar","user_image_url":"https://lh3.googleusercontent.com/a-/AOh14Gi8OYq737MGE7enlLcxLjPuD7EFswSazprhKlGLUA=s96-c","user_score":1550,"rank":29},{"user_name":"Jonas Alves","is_following":false,"is_pending":false,"user_username":"gauss","user_image_url":"https://lh3.googleusercontent.com/a-/AOh14GhHzutQUfT-SlsIIfJRTLIS2A-huy-FWRKUFnUl=s96-c","user_score":1549,"rank":30},{"user_name":"Mónika Pitz","is_following":false,"is_pending":false,"user_username":"pitzmoni","user_image_url":"https://lh3.googleusercontent.com/a-/AOh14Gg13UAiX5vYs1R2LmWRrlZpF-mIMmV81tavlDmH_1M=s96-c","user_score":1536,"rank":31},{"user_name":"Peter Marsh","is_following":false,"is_pending":false,"user_username":"belfast","user_image_url":"https://lh3.googleusercontent.com/a-/AOh14Gg1eLzvw-FJl9VuMoYIVm6JOxhUcM0opdKVH17EIQ=s96-c","user_score":1532,"rank":32},{"user_name":"Wout Werkman","is_following":false,"is_pending":false,"user_username":"brokenhappy","user_image_url":"https://lh3.googleusercontent.com/a-/AOh14GgdGla9LgH8hfmX9cK7ScQihVlzM8lJoHmA4hOWWmQ=s96-c","user_score":1525,"rank":33},{"user_name":"Kawari","is_following":false,"is_pending":false,"user_username":"curtil.guillaume","user_score":1516,"rank":34},{"user_name":"abolfazl keshavarz","is_following":false,"is_pending":false,"user_username":"abolfazl.keshavarz","user_image_url":"https://lh3.googleusercontent.com/a-/AOh14GjUIg3j6VT-FYczmqvfNfPtMaJmb5zzfVOgYalJVw=s96-c","user_score":1511,"rank":35},{"user_name":"raj kumar lath","is_following":false,"is_pending":false,"user_username":"raj.lath","user_image_url":"https://lh3.googleusercontent.com/a-/AOh14GhhEDyQHJpjyY4nqCW_z-_7MjmIgebhaI-LFmJ1Tg=s96-c","user_score":1510,"rank":36},{"user_name":"JaredCastro","is_following":false,"is_pending":false,"user_username":"frigolombardi","user_image_url":"https://lh3.googleusercontent.com/a-/AOh14GiuNyAOHVNZuWzXvAnrgjT5C4mSS6_rRpZKV3y0gA=s96-c","user_score":1510,"rank":36},{"user_name":"Alvin Sartor Go","is_following":false,"is_pending":false,"user_username":"osweg0","user_image_url":"https://dcoder.tech/avatar/dev3.png","user_score":1487,"rank":38},{"user_name":"William Gray","is_following":false,"is_pending":false,"user_username":"wagyourtail","user_image_url":"https://lh3.googleusercontent.com/a-/AOh14Gil4g-jvhQi2V-YkpSjRV59w7ibJ8AWp3ntTs04cg=s96-c","user_score":1479,"rank":39},{"user_name":"Noverdi A. Ramadhan","is_following":false,"is_pending":false,"user_username":"noverdy","user_image_url":"https://lh3.googleusercontent.com/a-/AOh14GjQOdeHXD7mQtKqMKl_t8su7cTCMimE3ThXyVOaiA=s96-c","user_score":1476,"rank":40},{"user_name":"Alvin Sartor","is_following":false,"is_pending":false,"user_username":"oswego","user_image_url":"https://lh3.googleusercontent.com/a-/AOh14GhoK0HZoCxQreoEa4cnAjXsts7yL38M214pBMu_fOs=s96-c","user_score":1476,"rank":40},{"user_name":"KUMAR","is_following":false,"is_pending":false,"user_username":"harikumar","user_image_url":"https://lh3.googleusercontent.com/a-/AOh14GiA69SYifC0P_JXTnU5Jd4VYP_ZM_eUelldxLUaNg=s96-c","user_score":1471,"rank":42},{"user_name":"Anurag Negi","is_following":false,"is_pending":false,"user_username":"anuragnegi","user_image_url":"https://lh3.googleusercontent.com/-1n9EhPSQe4g/AAAAAAAAAAI/AAAAAAAAAAA/AMZuuclbnHXJM0X5pAWRX2roRDnrjAImuA/s96-c/photo.jpg","user_score":1460,"rank":43},{"user_name":"Vera Silvestri","is_following":false,"is_pending":false,"user_username":"verasilves","user_image_url":"https://lh3.googleusercontent.com/a-/AOh14GgapWt7ZxKP0kLHSXYGY1I3415o-XHeXEYhq_Vfhw=s96-c","user_score":1458,"rank":44},{"user_name":"Stanley Ibe","is_following":false,"is_pending":false,"user_username":"ugoostanleyibe","user_image_url":"https://lh3.googleusercontent.com/a-/AOh14GiI_qWyTY7giDVmBuI1SF_SCc8_Lk4ioZmh8LzavA=s96-c","user_score":1457,"rank":45},{"user_name":"hamed zougouri","is_following":false,"is_pending":false,"user_username":"demahrix","user_image_url":"https://lh3.googleusercontent.com/a-/AOh14GiZzWhbQf8eA34MMss3mgi9hKqYf5ifuiqR1Rg1TA=s96-c","user_score":1447,"rank":46},{"user_name":"Asad Boghdadi","is_following":false,"is_pending":false,"user_username":"asadboghdadi","user_image_url":"https://lh5.googleusercontent.com/-U_8LQRxk8-E/AAAAAAAAAAI/AAAAAAAAAAA/AMZuucmK2bs9tzRUL3elIZHwDdiCANV4JQ/s96-c/photo.jpg","user_score":1439,"rank":47},{"user_name":"Srisaivamshi Akam","is_following":false,"is_pending":false,"user_username":"srisaivamshi.aakam","user_image_url":"https://lh3.googleusercontent.com/a-/AOh14GhZQjAj5R_scGtHZKxBA7eKfQP_45zcXcf4T3nLFQ=s96-c","user_score":1422,"rank":48},{"user_name":"Sivakumar R","is_following":false,"is_pending":false,"user_username":"zen_of_python","user_image_url":"https://lh3.googleusercontent.com/a-/AOh14GiYIaH6c10qNqeDVyLHeblb1rzfBgxQ2yDNa6BDjA=s96-c","user_score":1414,"rank":49},{"user_name":"Milos Zivic","is_following":false,"is_pending":false,"user_username":"miloszivic99","user_image_url":"https://lh6.googleusercontent.com/-UFYNDEdUWGM/AAAAAAAAAAI/AAAAAAAACpo/AMZuucna0MbmJ9cnLEArpkElDbbIAOZokw/s96-c/photo.jpg","user_score":1412,"rank":50}],"profile":{"data":{"user_languages":["Python3"],"user_score":1321,"user_name":"orenjiman","user_username":"orenjiman","isAdvanced":true,"stars":105,"forks":93,"codesin":[{"language_id":24,"percent":"82.61"},{"language_id":46,"percent":"8.70"},{"language_id":4,"percent":"4.35"},{"language_id":400,"percent":"4.35"}],"public_files":[{"_id":"5f48d61e4b9cef269513dd22","file":"SeriesFinder.py","language_id":24,"publicAt":"2020-08-28T11:38:03.958Z","title":"Series Finder","description":"I can create a series, like the fibonacci-series from only a number and it's position"},{"_id":"5f46c12b4b9cef2695126111","file":"Python3Coder.py","language_id":24,"publicAt":"2020-08-27T19:51:03.982Z","title":"Python3 Coding","description":"Code in Python3 using only the console"},{"_id":"5da07006be3f692b53770d0c","file":"This is Brainfuck.bf","language_id":46,"publicAt":"2019-10-11T14:07:25.327Z","title":"This is brainfuck","description":"bf"}],"submissions":[{"_id":"5f42661bc8bbe708ebf3823f","score":2,"max_marks":6,"question_id":{"title":"Leap Year","level":"easy","_id":"5b28ea8562db8b46ab2ac711"}},{"_id":"5da1d61d1415267f4cb5235d","score":5,"max_marks":5,"question_id":{"title":"Project Teams","level":"easy","_id":"5cf3f4881681076686eade89"}},{"_id":"5d8a1621fd626f23bf7f13b8","score":5,"max_marks":20,"question_id":{"title":"Word Numbers Ultimate!","level":"hard","_id":"5b7da72c676c3e5fef0f67fa"}}],"algo_progress":{"easySolved":81,"mediumSolved":67,"hardSolved":30,"easyTotal":84,"mediumTotal":72,"hardTotal":41}},"publicFiles":"","submissions":""},"isLoading":false},"notifications":{"allNotifs":{"todayActivity":[],"thisWeekActivity":[],"thisMonthActivity":[],"earlierActivity":[]},"shareReqs":null},"common":{"isLogin":true,"dialogState":null,"theme":{"name":"dark","data":{"navbarBackground":"#050505","editorBackground":"#111111","outputBackgroundColor":"#282923","editorNavbar":"#454642","tabBackground":"#303030","textColor":"#bdbdbd","secondaryTextColor":"#424242","navbarIconColor":"#ffffff","adBackgroundColor":"#303030","editorBottomLineColor":"#272822"}},"publicProfile":{"data":{"followers":{"number":0,"followdata":[]},"user_app_role":[1],"user_languages":[],"user_score":0,"unsubmail":false,"user_name":"Karthik Malla","user_email":"karthikmalla745@gmail.com","user_username":"karthikmalla745","user_image_url":"https://lh3.googleusercontent.com/a/AATXAJwYX-2HcuSPEMKIXdE1HEn6zBCrhA_j7Z3BiZM_=s96-c","user_country":"in","user_profession":"student","profile_progress":"75%","stars":0,"forks":0,"codesin":[{"language_id":6,"percent":"38.46"},{"language_id":7,"percent":"38.46"},{"language_id":4,"percent":"11.54"},{"language_id":51,"percent":"3.85"},{"language_id":1007,"percent":"3.85"},{"language_id":1035,"percent":"3.85"}],"public_files":[],"submissions":null,"algo_progress":{"easySolved":0,"mediumSolved":0,"hardSolved":0,"easyTotal":84,"mediumTotal":72,"hardTotal":41}},"rank":"","countryRank":"","isPremium":false,"isLogin":true}},"feed":{"activeFile":{"_id":"60a38158003120502bdc4e77","user_id":{"_id":"5e86066826b8ba20c8d9d253","user_name":"nirmala","user_image_url":"https://lh6.googleusercontent.com/-6bM2Aw-j74A/AAAAAAAAAAI/AAAAAAAAAAA/AAKWJJPwBubPZnYbZlO-EQnrt7v5iJ-www/s96-c/photo.jpg","user_username":"nirmalashankar","id":"5e86066826b8ba20c8d9d253"},"trigger":{},"linked_file":{},"generated_from":{"template_doc":{"_id":"5f643e5414555f17eb73fb2c","user_id":{"_id":"583f5fcf31b845750364b37d","user_name":"Dcoder Support","user_image_url":"https://lh4.googleusercontent.com/-ko6pSFZXH4Y/AAAAAAAAAAI/AAAAAAAAAAA/AMZuuckD2U_kiDxK1Y7u6bIPFfkJ7GBfzA/s300-c/photo.jpg","user_username":"teamdcoder","id":"583f5fcf31b845750364b37d"},"language_id":400,"file":"Html.html","public_file":"Html.html","is_public":true},"is_from_filesystem":false},"is_template":false,"size":1526,"stars":{"number":4},"forks":{"number":4},"title":"3d mother animation ","description":"please give me a star if u like it 💙","tags":["html"],"file":"3d.html","language_id":400,"updatedAt":"2021-05-18T09:09:39.903Z","createdAt":"2021-05-18T08:56:56.760Z","data":"","is_public":true,"is_readmode_default":false,"can_comment":true,"comments":{"number":0}},"feed":{"data":[{"type":1,"codes":[{"_id":"609e9ab63aa0d106411a2676","is_project":false,"is_template":false,"size":2435,"user_id":{"user_name":"Vikas","user_image_url":"https://dcoder.tech/avatar/dev2.png","user_username":"ruthvikas2431","followers":{"number":12},"_id":"6079429c210db6070848f86b"},"language_id":400,"file":"shooter game.html","public_file":"shooter game.html","title":"Shooter Game","description":"I made a we game and uploaded. Run this code to go to that game.","tags":["vikas"],"createdAt":"2021-05-14T15:43:50.431Z","updatedAt":"2021-05-14T17:25:02.389Z","stars":{"number":101},"forks":{"number":39},"commentCount":9,"is_public":true,"has_errors":false,"fs_resource_type":1},{"_id":"60a16a84003120502bdad1a5","is_project":false,"is_template":false,"size":44280,"user_id":{"user_name":"göndərən ","user_username":"salamdiyirem","followers":{"number":0},"_id":"60831083a4ef8c0707720c6b"},"language_id":400,"file":"Calculator.html","public_file":"Calculator.html","title":"CSS calculator 😎😎","description":"Hello guys it's my first program. please give me a star and support me if you like it 🙏🙏⭐⭐⭐","tags":["html","css","calculator","javascript"],"createdAt":"2021-05-16T18:55:00.113Z","updatedAt":"2021-05-16T19:05:17.157Z","stars":{"number":36},"forks":{"number":7},"commentCount":1,"is_public":true,"has_errors":false,"fs_resource_type":1},{"_id":"60a3ad58b156135027a621cc","is_project":false,"is_template":false,"size":1317,"user_id":{"user_name":"VEDANT BHAMARE","user_image_url":"https://assets.dcoder.tech/60718053cee80b06dbc39cd2/profile/primarypictureswallpapers0bfb7a0186b1e2c89dd7bbd4d016a9ce2.jpg","user_username":"vedant_bhamare_007","followers":{"number":14},"_id":"60718053cee80b06dbc39cd2"},"language_id":6,"file":"map.c","public_file":"map.c","title":"India 🇮🇳🇮🇳🇮🇳","description":"If you like this then give me a star...","tags":["Jay","Hind"],"createdAt":"2021-05-18T12:04:40.266Z","updatedAt":"2021-05-19T07:35:05.945Z","stars":{"number":9},"forks":{"number":2},"commentCount":4,"is_public":true,"has_errors":true,"output":{"data_type":1,"data":"                    !!!!!!                                                     \n                    !!!!!!!!!!                                                 \n                     !!!!!!!!!!!!!!!   "},"fs_resource_type":1}],"challenges":null},{"type":2,"codes":[{"_id":"60a33f8f003120502bdc1577","is_project":false,"is_template":false,"size":13324,"user_id":{"user_name":"RAJNISH##","user_image_url":"https://lh3.googleusercontent.com/a-/AOh14Ghne5SRS8481xwqdc7HhTccRQS_3RDeC5u-w19G=s96-c","user_username":"rajnish_rj","followers":{"number":42},"_id":"602a05c3619b310769503a87"},"language_id":400,"file":"car game.html","public_file":"car game.html","title":"car game","description":"car game","tags":["car","game","game","2d","3d","graphic"],"createdAt":"2021-05-18T04:16:15.560Z","updatedAt":"2021-05-18T04:20:18.190Z","stars":{"number":8},"forks":{"number":5},"commentCount":0,"is_public":true,"has_errors":false,"fs_resource_type":1},{"_id":"60a27802e13ab663694e3f3b","is_project":true,"is_template":false,"size":495616,"user_id":{"user_name":"02_Harshit Hayaran","user_image_url":"https://lh3.googleusercontent.com/a-/AOh14GhxHTDFBYoGORyPZs8V-gWhpw-hbOwbFJI1N2_cdFg=s96-c","user_username":"harshithayaran","followers":{"number":0},"_id":"5eaaff6a6eebb911e4c0a4e6"},"language_id":1035,"file":"dice game","public_file":"dice game","title":"Dice Game","description":"This is a games based on dicees. \n       If you like it, then praise me with a star 🌟🌟🌟🌟","tags":["#ludo","#ludogame","#dice","#dicege","#html","#css","#javascript","#game","#decoder"],"createdAt":"2021-05-17T14:04:50.770Z","updatedAt":"2021-05-19T10:40:47.844Z","stars":{"number":1},"forks":{"number":1},"commentCount":1,"is_public":true,"has_errors":false},{"_id":"60a10b0e7a23099313aed0ce","is_project":true,"is_template":false,"size":28672,"user_id":{"user_name":"Rizwan Ali","user_image_url":"https://assets.dcoder.tech/606e796b2a389206d58c048a/profile/image12329.jpg","user_username":"rizwan_ali","followers":{"number":23},"_id":"606e796b2a389206d58c048a"},"language_id":1022,"file":"GOLD GAME","public_file":"GOLD GAME","title":"✨ GOLD GAME ✨ [BASED ON A TV SHOW] 📺","description":"Made by @rizwan_ali\n\nBased upon TV show \"Jeeto Pakistan\"\n\nplease give it a 🌟 if you liked it!","tags":["game","tv","jeeto_pakistan","python"],"createdAt":"2021-05-16T12:07:42.802Z","updatedAt":"2021-05-16T18:13:44.487Z","stars":{"number":7},"forks":{"number":5},"commentCount":1,"is_public":true,"has_errors":false}],"challenges":null},{"type":4,"codes":null,"challenges":[{"_id":"5de294592fcfb665c5f6596d","problem_setter":{"id":"5de25e832fcfb665c5f6593e","name":"Saurav Chandra"},"level":"hard","title":"Magic ChessBoard","question":"John has a magical chessboard. It looks like a normal chessboard except its size is N. Therefore the number of cells in the chessboard is N * N. He is interested in counting the number of squares in the chessboard. It is a very tough task for him, so he is looking for your help.","input":"First Line of the input contains an integer T denoting the number of test cases. The next T lines contain N, the size of the magic chessboard for each case.","output":"Print the number of squares in the chessboard.\n","constraints":"1 <= T <= 100\n1 <= N <= 100","sample_input":"3\n1\n2\n3","sample_output":"1\n5\n14","max_marks":16,"approved_at":"2020-06-15T14:49:42.286Z","solved_by":778},{"_id":"5e08a9dda1312802b296d21a","problem_setter":{"id":"5de25e832fcfb665c5f6593e","name":"Saurav Chandra"},"level":"medium","title":"Simple multiple problem","question":"You are given 2 numbers N and M. You have to find the smallest number which when multiplied to N makes it a multiple of M.\n","input":"First line contains T, number of test cases.\nEach of the next T lines contains two numbers, N and M.","output":"For each test case, print the required answer.","constraints":"1 <= T <= 100\n1 <= N, M <= 10^6","sample_input":"2\n4 7\n18 6\n","sample_output":"7\n1\n","max_marks":12,"approved_at":"2020-06-15T14:16:39.983Z","solved_by":939},{"_id":"5e1086efa1312802b296d39f","problem_setter":{"id":"5de25e832fcfb665c5f6593e","name":"Saurav Chandra"},"level":"easy","title":"Floating Number","question":"Bob has a floating point number N. He wants to set the precision for 2 digits after the decimal point for the number.\nHe is not good at coding, hence looking for your help.","input":"The first line contains T, the number of test cases.\nNext T line contains floating point number N.","output":"Print N in a separate line after setting precision for 2 digits after the decimal point:\n","constraints":"1 <= T <= 1000\n1 <= N <= 10000","sample_input":"1\n713.166\n","sample_output":"713.17\n","max_marks":4,"approved_at":"2020-06-15T14:13:32.171Z","solved_by":3553},{"_id":"5b28c8b162db8b46ab2ac69c","problem_setter":{"id":"5b18fcf7be95b1e1644787c0","name":"Bhanu Nadar"},"level":"hard","title":"Love For Mathematics","question":"Students of Dcoder school love Mathematics. They love to read a variety of Mathematics books. To make sure they remain happy,their Mathematics teacher decided to get more books for them.\nA student would become happy if there are at least X Mathematics books in the class and not more than Y books because they know \"All work and no play makes Jack a dull boy\".The teacher wants to buy a minimum number of books to make the maximum number of students happy.","input":"The first line of input contains an integer N indicating the number of students in the class. This is followed up by N lines where every line contains two integers X and Y respectively.","output":"Output two space-separated integers that denote the minimum number of mathematics books required and the maximum number of happy students.\nExplanation: \nThe teacher could buy 5 books and keep student 1, 2, 4 and 5 happy.","constraints":"1<=N<=10000\n1<=X,Y<=10^9","sample_input":"5\n3 6\n1 6\n7 11\n2 15\n5 8","sample_output":"5 4","max_marks":15,"approved_at":"2019-12-28T17:44:44.356Z","solved_by":496}]},{"type":3,"codes":[{"_id":"60a054ccb9b4c9c0c8126b39","is_project":true,"is_template":false,"size":757760,"user_id":{"user_name":"Thokozani Kubheka","user_image_url":"https://lh3.googleusercontent.com/a-/AOh14GgQ4rEhzK2_ExLP3aPExS7r5oydJv9m0GGGStYY=s96-c","user_username":"teekey","followers":{"number":304},"_id":"5da204fcc20d0471592378f5"},"language_id":1035,"file":"google clone","public_file":"google clone","title":"Google clone","description":"I cloned mobile version google home page. with legit google search.","tags":["google clone","clone","teekey"],"createdAt":"2021-05-15T23:10:04.139Z","updatedAt":"2021-05-17T06:26:42.540Z","stars":{"number":13},"forks":{"number":6},"commentCount":5,"is_public":true,"has_errors":false}],"challenges":null},{"type":3,"codes":[{"_id":"60a2f0bc7a23096a2daf4995","is_project":true,"is_template":false,"size":430080,"user_id":{"user_name":"Stephen Aniefiok","user_image_url":"https://graph.facebook.com/698442091091168/picture?type=square&height=300&width=300","user_username":"stephengodwin895","followers":{"number":0},"_id":"5fc430af44501e1adf0e6413"},"language_id":1035,"file":"Canvas","public_file":"Canvas","title":"First canvas Project","description":"Javascript canvas for beginners special thanks to you all","tags":["Html","css","javascript"],"createdAt":"2021-05-17T22:39:56.918Z","updatedAt":"2021-05-17T22:48:22.943Z","stars":{"number":1},"forks":{"number":1},"commentCount":0,"is_public":true,"has_errors":false}],"challenges":null}],"pages":3,"isLoading":false,"searchData":"","searchPages":""},"mode":4},"myProject":{"projects":{}},"sharedFiles":{"files":{"list":null,"count":null,"isLoading":false,"searchData":null,"searchPages":null}},"myFiles":{"files":{"list":null,"count":null,"isLoading":false,"searchData":null,"searchPages":null},"mode":"","activeFile":""},"notification":{"isOpen":false,"message":""},"usageStats":{"creditsAndStorageUsage":{},"creditsHistory":{}},"currentProject":{"isConfig":true,"langConfig":null,"boostConfig":null,"projectMode":null,"creditUsage":null,"projectId":null,"isEditorDisabled":false,"isPanelExpanded":false},"terminalLayout":1,"showTerminal":false,"deviceId":null,"reqURL":"http://code.dcoder.tech /"}
          </script>
          <script>
            if ('serviceWorker' in navigator) {
              window.addEventListener('load', function() {
                navigator.serviceWorker.register('/service-worker.js').then(function(registration) {
                  // Registration was successful
                  console.log('ServiceWorker registration successful with scope: ', registration.scope);
                }, function(err) {
                  // registration failed :(
                  console.log('ServiceWorker registration failed: ', err);
                }).catch(function(err) {
                  console.log(err)
                });
              });
            } else {
              console.log('service worker is not supported');
            }
          </script>
          <script src="./print all sub array with 0 sum_files/jquery-3.3.1.min.js.download"></script>
      
  <div role="presentation" class="MuiDrawer-root MuiDrawer-modal" aria-hidden="true" style="position: fixed; z-index: 1300; inset: 0px; visibility: hidden;"><div class="MuiBackdrop-root" aria-hidden="true" style="opacity: 0; visibility: hidden;"></div><div tabindex="0" data-test="sentinelStart"></div><div class="MuiPaper-root MuiDrawer-paper jss6 MuiDrawer-paperAnchorLeft MuiPaper-elevation16" tabindex="-1" style="visibility: hidden; transform: translateX(-70px);"><div id="sideBar" class="sidebar"><div class="jss5"><div style="height: 45px; box-sizing: border-box; padding: 10px; text-align: center;"><a href="https://code.dcoder.tech/" style="display: inline-block;"><div class="logoIcon"><img src="./print all sub array with 0 sum_files/logo_dcoder.93662c17.png" style="height: 100%; width: 100%; padding: 4.5px; box-sizing: border-box;"></div></a></div></div><ul class="MuiList-root MuiList-padding"><div class="MuiButtonBase-root MuiListItem-root MuiListItem-gutters MuiListItem-button" tabindex="0" role="button" aria-disabled="false" style="padding: 0px;"><a title="Feed" href="https://code.dcoder.tech/feed" style="color: lightgray; text-decoration: none; width: 100%;"><div class="barIcon"><span class="icon icon-feed"></span><div style="text-align: center; font-size: 10px;">Feed</div></div></a><span class="MuiTouchRipple-root"></span></div><div class="MuiButtonBase-root MuiListItem-root MuiListItem-gutters MuiListItem-button" tabindex="0" role="button" aria-disabled="false" style="padding: 0px;"><a title="My Files" href="https://code.dcoder.tech/files" aria-current="page" class="bg-3" style="color: lightgray; text-decoration: none; width: 100%;"><div class="barIcon"><span class="icon icon-file"></span><div style="text-align: center; font-size: 10px;">My Files</div></div></a><span class="MuiTouchRipple-root"></span></div><div class="MuiButtonBase-root MuiListItem-root MuiListItem-gutters MuiListItem-button" tabindex="0" role="button" aria-disabled="false" style="padding: 0px;"><a title="Challenges" href="https://code.dcoder.tech/challenges" style="color: lightgray; text-decoration: none; width: 100%;"><div class="barIcon"><i class="icon icon-challenge"></i><div style="text-align: center; font-size: 10px;">Challenges</div></div></a><span class="MuiTouchRipple-root"></span></div><div class="MuiButtonBase-root MuiListItem-root MuiListItem-gutters MuiListItem-button" tabindex="0" role="button" aria-disabled="false" style="padding: 0px;"><a title="Leaderboard" href="https://code.dcoder.tech/leaderboard" style="color: lightgray; text-decoration: none; width: 100%;"><div class="barIcon"><span class="icon icon-leaderboard"></span><div style="text-align: center; font-size: 10px;">Leaderboard</div></div></a><span class="MuiTouchRipple-root"></span></div><div class="MuiButtonBase-root MuiListItem-root MuiListItem-gutters MuiListItem-button" tabindex="0" role="button" aria-disabled="false" style="padding: 0px;"><div class="barIcon"><span class="icon icon-notification"></span><div class="sidebarTitle" style="text-align: center; font-size: 10px;">Notifications</div></div><span class="MuiTouchRipple-root"></span></div><div class="MuiButtonBase-root MuiListItem-root MuiListItem-gutters MuiListItem-button" tabindex="0" role="button" aria-disabled="false" style="padding: 0px;"><a title="Dev Chat" href="https://code.dcoder.tech/devchat" style="color: lightgray; text-decoration: none; width: 100%;"><div class="barIcon"><i class="icon icon-devchat"></i><div style="text-align: center; font-size: 10px;">Dev Chat</div></div></a><span class="MuiTouchRipple-root"></span></div><div class="MuiButtonBase-root MuiListItem-root MuiListItem-gutters MuiListItem-button" tabindex="0" role="button" aria-disabled="false" style="padding: 0px;"><a title="Settings" href="https://code.dcoder.tech/settings/profile" style="color: lightgray; text-decoration: none; width: 100%;"><div class="barIcon"><i class="icon icon-setting"></i><div style="text-align: center; font-size: 10px;">Settings</div></div></a><span class="MuiTouchRipple-root"></span></div></ul><a href="https://code.dcoder.tech/profile/karthikmalla745" style="color: lightgray; text-decoration: none; width: 100%;"><div class="barIcon last" style="position: absolute; bottom: 10px;"><img src="./print all sub array with 0 sum_files/unnamed.png" alt="profile pic" style="height: 30px; width: 30px; border-radius: 50%;"><div style="text-align: center; font-size: 10px; overflow: hidden; text-overflow: ellipsis; padding: 0px 5px;">@karthikmalla745</div></div></a></div></div><div tabindex="0" data-test="sentinelEnd"></div></div></body></html>