<!DOCTYPE html>
<!-- First they ignore you, then they laugh at you, then they fight you, then you win. - Mohandas Karamchand Gandhi -->
<html lang="en">
  <head>
    <script type="text/javascript">
        function set_manifest(manifest) {
            HR.MANIFEST = manifest;
        }
    </script>
    <script type="text/javascript">
  window.PRODUCT_NAMESPACE = 'hackerrank'
  window.APP_METRIC_TRACKING_ENABLED = false
  window.PERF_METRICS = {
    tracked_initial_view_load_tti: {},
    tracked_view_load_tti: {}
  }
    if ((window.PRODUCT_NAMESPACE == 'hackerrank' || window.PRODUCT_NAMESPACE == 'hackerrankx') && (Math.floor(Math.random() * 2) + 1) == 1) {
      window.APP_METRIC_TRACKING_ENABLED = true
    }
</script>

<script type="text/javascript">
  window.HR = window.HR || {}
  HR.development = false
  HR.production = true
  HR.DESIGN_SUBDOMAIN_PREFIX = 'design'
  HR.DESIGN_DOMAIN = 'hrcdn.net'
  HR.USE_CURRENT_HOST_AS_DESIGN_DOMAIN = ''
  HR.RECAPTCHA_V3_KEY = '6LfTjdkUAAAAAOhQL2_kkpxaLt2mwILWGO9V1_vm'
</script>

<!-- jsCookies -->
  <script type="text/javascript">
    /*!
 * JavaScript Cookie v2.1.2
 * https://github.com/js-cookie/js-cookie
 *
 * Copyright 2006, 2015 Klaus Hartl & Fagner Brack
 * Released under the MIT license
 */
if(function(factory){if("function"==typeof define&&define.amd)define(factory);else if("object"==typeof exports)module.exports=factory();else{var OldCookies=window.Cookies,api=window.Cookies=factory();api.noConflict=function(){return window.Cookies=OldCookies,api}}}(function(){function extend(){for(var i=0,result={};i<arguments.length;i++){var attributes=arguments[i];for(var key in attributes)result[key]=attributes[key]}return result}function init(converter){function api(key,value,attributes){var result;if("undefined"!=typeof document){if(arguments.length>1){if("number"==typeof(attributes=extend({path:"/"},api.defaults,attributes)).expires){var expires=new Date;expires.setMilliseconds(expires.getMilliseconds()+864e5*attributes.expires),attributes.expires=expires}try{result=JSON.stringify(value),/^[\{\[]/.test(result)&&(value=result)}catch(e){}return value=converter.write?converter.write(value,key):encodeURIComponent(String(value)).replace(/%(23|24|26|2B|3A|3C|3E|3D|2F|3F|40|5B|5D|5E|60|7B|7D|7C)/g,decodeURIComponent),key=(key=(key=encodeURIComponent(String(key))).replace(/%(23|24|26|2B|5E|60|7C)/g,decodeURIComponent)).replace(/[\(\)]/g,escape),document.cookie=[key,"=",value,attributes.expires&&"; expires="+attributes.expires.toUTCString(),attributes.path&&"; path="+attributes.path,attributes.domain&&"; domain="+attributes.domain,attributes.secure?"; secure":""].join("")}key||(result={});for(var cookies=document.cookie?document.cookie.split("; "):[],rdecode=/(%[0-9A-Z]{2})+/g,i=0;i<cookies.length;i++){var parts=cookies[i].split("="),cookie=parts.slice(1).join("=");'"'===cookie.charAt(0)&&(cookie=cookie.slice(1,-1));try{var name=parts[0].replace(rdecode,decodeURIComponent);if(cookie=converter.read?converter.read(cookie,name):converter(cookie,name)||cookie.replace(rdecode,decodeURIComponent),this.json)try{cookie=JSON.parse(cookie)}catch(e){}if(key===name){result=cookie;break}key||(result[name]=cookie)}catch(e){}}return result}}return api.set=api,api.get=function(key){return api(key)},api.getJSON=function(){return api.apply({json:!0},[].slice.call(arguments))},api.defaults={},api.remove=function(key,attributes){api(key,"",extend(attributes,{expires:-1}))},api.withConverter=init,api}return init(function(){})}),void 0===jsCookies&&"undefined"!=typeof Cookies)var jsCookies={get:function(c_name){return Cookies.get(c_name)},set:function(c_name,value,expiredays,expirehours,expiremins,expiresecs,options){var exdate=new Date;exdate.setDate(exdate.getDate()+(expiredays||0)),exdate.setHours(exdate.getHours()+(expirehours||0)),exdate.setMinutes(exdate.getMinutes()+(expiremins||0)),exdate.setSeconds(exdate.getSeconds()+(expiresecs||0));var config=options||{};!(null==expiredays&&null==expiresecs&&null==expiremins&&null==expirehours)&&(config.expires=exdate),Cookies.set(c_name,value,config)},check:function(c_name){return!!Cookies.get(c_name)},destroy:function(c_name){Cookies.remove(c_name)}};
  </script>

<script type="text/javascript">
  !function(){function getRandRange(min,max){return parseInt(Math.random()*(max-min))+min}function getRandChar(){var offset=getRandRange(0,35);return offset>25?(offset-26).toString():String.fromCharCode(97+offset)}function makeId(length){for(var text="",i=0;i<length;i++)text+=getRandChar();return text}function setSessionId(){key="session_id";var session_key=jsCookies.get(key);session_key?jsCookies.set(key,session_key,null,2,null,null,{secure:!0}):(epoch=(new Date).getTime(),rand_id=makeId(8),jsCookies.set(key,rand_id+"-"+epoch.toString(),null,2,null,null,{secure:!0})),setTimeout(setSessionId,6e4)}setSessionId()}();
</script>

<!-- DNS Prefetch -->
<link rel="dns-prefetch" href="//hrcdn.net">
<link rel="dns-prefetch" href="//d1ka33fs6lvw5x.cloudfront.net">
<link rel="dns-prefetch" href="//notifications.hackerrank.com">
<link rel="dns-prefetch" href="//metrics.hackerrank.com">
<link rel="preconnect" href="https://sentry.io">
<link rel="dns-prefetch" href="//sentry.io">

<!-- use the latest IE browser -->
<meta http-equiv="X-UA-Compatible" content="IE=Edge">

<!-- App Icon for iOS Devices -->
<link rel="apple-touch-icon-precomposed" href="https://hrcdn.net/hackerrank/assets/apple-touch-icon-precomposed-c99b684c98b4befc43c47592bc900ebd95a0b1e9b9e5103b252c8b320432646d.png" />

<!-- favicon -->
<link rel="shortcut icon" type="image/png" href="https://hrcdn.net/hackerrank/assets/favicon-69d2a5f80ad413089c703bf9947bfa75582c3f13fdb0a1db26fe5b59d8bfd4ce.png" />

<!-- generating meta tags -->
<meta http-equiv="Content-type" content="text/html;charset=UTF-8">
<meta charset='utf-8' />
<meta name='description' content='Join over 11 million developers in solving code challenges on HackerRank, one of the best ways to prepare for programming interviews.' />
<meta property='og:title' content='HackerRank' />
<meta property='og:image' content='https://hrcdn.net/og/default.jpg' />
<meta property='og:description' content='Join over 11 million developers in solving code challenges on HackerRank, one of the best ways to prepare for programming interviews.' />
<meta property='og:url' content='https://www.hackerrank.com/submissions/code/283410168' />
<meta property='og:site_name' content='HackerRank' />
<meta property='og:type' content='website' />
<meta name='twitter:card' content='summary' />
<meta name='twitter:site' content='@hackerrank' />
<meta name='twitter:url' content='https://www.hackerrank.com' />
<meta name='twitter:title' content='HackerRank' />
<meta property='fb:app_id' content='347499128655783' />

<link href="https://www.hackerrank.com/submissions/code/283410168/" rel="canonical" /><!-- ends meta tags generation -->

<!-- CSRF Token -->
<meta name="csrf-param" content="authenticity_token" />
<meta name="csrf-token" content="e7MxhZuywcaj+5SQoR4pm+E/Q2prIL4l/M7P67UQCNtr+xFSx2WXWAKahjU+BP1hdryS3O06TcNiogxR4aKyEw==" />

  <link rel="stylesheet" media="all" href="https://hrcdn.net/hackerrank/assets/hackerrank_libraries-aa78a6dc82fad129b5b2c9a5ef5112f854d395f7b3262066ed64d56ed9c4becb.css" />
  <link rel="stylesheet" media="all" href="https://hrcdn.net/hackerrank/assets/hackerrank-core2-3ebb487e9942c5ce4412d25a84e9d46eb085aae02e4abed861aa7dce93e15fb0.css" />
  <link rel="stylesheet" media="all" href="https://hrcdn.net/hackerrank/assets/dashboard-bffe94fa76da102eca7fe83d8ef4060c2901bb713f873d3cd7c8777fd87e4b41.css" />
  <link rel="stylesheet" media="all" href="https://hrcdn.net/hackerrank/assets/theme_m_patch-e8ec223f441200bef3933b0bc08cf5af14f2dd51c173ce984129030357e966c9.css" />


<!-- Sentry -->
<!--
CDN distribution of raven.js looks for requirejs, but the module is anonymous.
If we are using require.js and loading an anonymous module without require.js, it raises an error.
https://github.com/getsentry/raven-js/issues/635
https://github.com/getsentry/raven-js/issues/97
-->
  <script src="https://hrcdn.net/hackerrank/assets/raven-js-patched/dist/raven-c1b7ecba30517427348abac4ee49e9d81fd04de2247bc9687f530d2c0a719743.js" id="raven" crossorigin="anonymous" async="async"></script>
  <script type="text/javascript">
    (function(window, queue, loaded, script) {

      var raven_user_context = {
          handle: '18258352',
      }
      var raven_extra_context = {
        loadTimestamp: 1659853928,
        assetUrl: 'https://hrcdn.net',
        cdnUrl: ''
      }

        raven_extra_context.mixpanel_token = 'd415a252-2796-46b4-a191-a6cc3dead86d'

      window.onerror = function e(message, file, lineNo, columnNo, error) {
          if (loaded) return;
          queue.push([message, file, lineNo, columnNo, error]);
      };

      window.onunhandledrejection = function e(error) {
          if (loaded) return;
          queue.push([
              error.reason,
          ]);
      };

      script.onreadystatechange = script.onload = function() {
          if (loaded) return;
          loaded = true;

          Raven.config("https://6b2d52b23d5a4dd4bc44330335327c04@sentry.io/234162", {
              release: '-',
              ignoreUrls: [/cdn\.userty\.com/],
              ignoreErrors: [
                '$ is not defined',
                'Error: Connection is disposed',
                'Connection got disposed',
                'A network error occurred',
                'Model is disposed!',
                'Invalid start index',
              ],
          }).install();
          Raven.setUserContext(raven_user_context)
          Raven.setExtraContext(raven_extra_context)
          window.onunhandledrejection = function e(error) {
              Raven.captureException(error.reason, {
                  extra: {
                      type: error.type,
                  },
              });
          };

          queue.forEach(function(error) {
              Raven.captureException(error[4] || error[0], {
                  extra: {
                      file: error[1],
                      line: error[2],
                      col: error[3],
                  },
              });
          });
      };
    }(window, [], false, document.getElementById('raven')));
  </script>

<!-- Google Analyitics Init -->
<script type="text/javascript">
    var _gaq = _gaq || [];
    _gaq.push(['_setAccount', "UA-45092266-1"]);
    _gaq.push(['_trackPageview']);
    _gaq.push(['_gat._anonymizeIp']);
    _gaq.push(['_setCampSourceKey', 'utm_source']);
    _gaq.push(['_setCampMediumKey', 'utm_medium']);
    _gaq.push(['_setCampContentKey', 'utm_keyword']);
    _gaq.push(['_setCampTermKey', 'utm_keyword']);
    _gaq.push(['_setCampNameKey', 'utm_campaign']);
</script>

<!-- Mixpanel Stub -->
<script type="text/javascript">
  window.mixpanel = window.mixpanel || [];
  var attrs = "disable track track_pageview track_links track_forms register register_once alias unregister identify name_tag set_config people.set people.set_once people.increment people.append people.track_charge people.clear_charges people.delete_user".split(" ");
  for (var attribute in attrs) {
    mixpanel[attrs[attribute]] = function () {};
  }
</script>

<!-- Heap Analytics Init -->
<script type="text/javascript">
    var heap = heap || [];
</script>

<script type="text/javascript">
  (function(h) {
    window.hr_metrics = h;
    if (!h.loaded) {
      var a = ['track', 'batch_track', 'app_track', 'externalService', 'init', 'batch_track_record', 'track_dwell_time', 'set_navigation_data'];
      for (var i = 0; i < a.length; i++) {
        if (!h[a[i]]) {h[a[i]] = function() {};}
      }
    }
  })(window.hr_metrics || {});
</script>

<script type="text/javascript">
    /**
     * Protect window.console method calls, e.g. console is not defined on IE
     * unless dev tools are open, and IE doesn't define console.debug
     */
(function() {
    if (!window.console) {
      window.console = {};
    }
    var m = ["log", "info", "warn", "error", "debug", "trace", "dir", "group", "groupCollapsed", "groupEnd", "time", "timeEnd", "profile", "profileEnd", "dirxml", "assert", "count", "markTimeline", "timeStamp", "clear"];
    // define undefined methods as noops to prevent errors
    for (var i = 0; i < m.length; i++) {
        if (!window.console[m[i]]) {
            window.console[m[i]] = function() {};
        }
    }
})();
</script>


  <script type="text/javascript">
    var pusher_app_key = 'a280047e3b323ccb1b65';
  </script>

<!-- Linkedin Insights -->


<script>
  dataLayer = [];
</script>

<!-- Google Tag Manager #1 -->
<script>(function(w,d,s,l,i){w[l]=w[l]||[];w[l].push({'gtm.start':
new Date().getTime(),event:'gtm.js'});var f=d.getElementsByTagName(s)[0],
j=d.createElement(s),dl=l!='dataLayer'?'&l='+l:'';j.async=true;j.src=
'https://www.googletagmanager.com/gtm.js?id='+i+dl;f.parentNode.insertBefore(j,f);
})(window,document,'script','dataLayer', 'GTM-5FXW96J');</script>
<!-- End Google Tag Manager #1 -->


    <!-- General Information -->
    <title>Programming Problems and Competitions :: HackerRank</title>

    <!--  TODO : This need to be configured from configuration file -->
      <base href='/'>

    <script type="text/javascript">
      var HR;
      HR = window.HR || {};
      HR.PREFETCH_DATA = {"metadata":{"asset_path":"https://hrcdn.net/hackerrank/assets","asset_host":"https://hrcdn.net","asset_host_path":"https://hrcdn.net/hackerrank","filepicker_key":"ApehXMbvXTWqWab7OmMr9z","pubsub_host":"https://pubsub.hackerrank.com","pubsubv2_host":"https://pubsubv2.hackerrank.com","release_version":"0","country_from_ip":null,"landing_contest_slug":"master","current_contest_namespace":"","using_contest_namespace":false},"slugs":{"master":{"type":"contest"},"KIETIANS_007":{"type":"hacker"}},"contest":{"id":1,"name":"Master","slug":"master","created_at":"2012-07-19T17:13:20.000Z","updated_at":"2018-05-29T01:20:32.000Z","starttime":null,"endtime":null,"timezone":"America/Los_Angeles","homepage":"","tagline":"","description":"","homepage_background_color":"","notification":null,"template_id":454,"expose_stats":null,"public":false,"team_event":false,"rating_category":null,"is_rating_updated":false,"leaderboard_backend":null,"leaderboard_format":"","primary_track_id":null,"college_public":false,"rated":false,"is_multi_round":false,"parent_contest_id":null,"primary_tag_id":null,"started":true,"ended":false,"epoch_endtime":0,"epoch_starttime":0,"time_left":null,"hide_difficulty":null,"has_tracks":true,"archived":false,"leaderboard_type":"country","kind":"","leaderboard_freeze_time":null,"show_penalty":false,"track":null,"hide_navigation":null,"contest_broadcast":null,"hide_leaderboard":null,"hide_submissions":null,"leaderboard_out_of_sync":null,"leaderboard_out_of_sync_message":null,"challenges_count":null,"show_participants_info":null,"custom_leaderboard_column_name":null,"disable_forum":false,"disable_fsi":null,"has_codesprint_reg_page":null,"hidden":null,"comment_live_sync":null,"company_associated_contest":null,"limited_participants":null,"leaderboard_broadcast_message":null,"qualification_rule_type":null,"qualification_rule_value":0,"qualification_rule_msg":null,"migration_status":null,"migration_disabled":null,"testers_contest":null,"time_limited_contest":false,"hacker_timelimit":null,"school_leaderboard_enabled":false,"organization_type":null,"organization_name":null,"sponsor_logos":null,"sponsor_logos_name":null,"require_linkedin_or_resume":null,"categories":[{"id":24,"name":"Tutorials","slug":"tutorials","children":[{"id":"24-146","name":"30 Days of Code","slug":"30-days-of-code","priority":10000,"order_challenge_by":1,"challenges_per_page":null},{"id":"24-147","name":"10 Days of Statistics","slug":"10-days-of-statistics","priority":1,"order_challenge_by":1,"challenges_per_page":null},{"id":"24-148","name":"10 Days of Javascript","slug":"10-days-of-javascript","priority":1,"order_challenge_by":1,"challenges_per_page":null},{"id":"24-150","name":"LinkedIn Placements","slug":"linkedin-placements","priority":1,"order_challenge_by":1,"challenges_per_page":null}]},{"id":3,"name":"Algorithms","slug":"algorithms","children":[{"id":"3-43","name":"Warmup","slug":"warmup","priority":22,"order_challenge_by":1,"challenges_per_page":null},{"id":"3-108","name":"Implementation","slug":"implementation","priority":21,"order_challenge_by":1,"challenges_per_page":null},{"id":"3-34","name":"Strings","slug":"strings","priority":20,"order_challenge_by":1,"challenges_per_page":null},{"id":"3-38","name":"Sorting","slug":"arrays-and-sorting","priority":20,"order_challenge_by":1,"challenges_per_page":null},{"id":"3-36","name":"Search","slug":"search","priority":19,"order_challenge_by":1,"challenges_per_page":null},{"id":"3-33","name":"Graph Theory","slug":"graph-theory","priority":17,"order_challenge_by":1,"challenges_per_page":null},{"id":"3-59","name":"Greedy","slug":"greedy","priority":16,"order_challenge_by":1,"challenges_per_page":null},{"id":"3-35","name":"Dynamic Programming","slug":"dynamic-programming","priority":15,"order_challenge_by":1,"challenges_per_page":null},{"id":"3-151","name":"Constructive Algorithms","slug":"constructive-algorithms","priority":15,"order_challenge_by":1,"challenges_per_page":null},{"id":"3-30","name":"Bit Manipulation","slug":"bit-manipulation","priority":14,"order_challenge_by":1,"challenges_per_page":null},{"id":"3-153","name":"Recursion","slug":"recursion","priority":12,"order_challenge_by":1,"challenges_per_page":null},{"id":"3-47","name":"Game Theory","slug":"game-theory","priority":7,"order_challenge_by":1,"challenges_per_page":null},{"id":"3-29","name":"NP Complete","slug":"np-complete-problems","priority":6,"order_challenge_by":1,"challenges_per_page":null},{"id":"3-161","name":"Debugging","slug":"algo-debugging","priority":5,"order_challenge_by":1,"challenges_per_page":null}]},{"id":17,"name":"Data Structures","slug":"data-structures","children":[{"id":"17-134","name":"Arrays","slug":"arrays","priority":11,"order_challenge_by":1,"challenges_per_page":null},{"id":"17-39","name":"Linked Lists","slug":"linked-lists","priority":10,"order_challenge_by":1,"challenges_per_page":null},{"id":"17-96","name":"Trees","slug":"trees","priority":9,"order_challenge_by":1,"challenges_per_page":null},{"id":"17-119","name":"Balanced Trees","slug":"balanced-trees","priority":7,"order_challenge_by":1,"challenges_per_page":null},{"id":"17-97","name":"Stacks","slug":"stacks","priority":2,"order_challenge_by":1,"challenges_per_page":null},{"id":"17-98","name":"Queues","slug":"queues","priority":2,"order_challenge_by":1,"challenges_per_page":null},{"id":"17-99","name":"Heap","slug":"heap","priority":2,"order_challenge_by":1,"challenges_per_page":null},{"id":"17-100","name":"Disjoint Set","slug":"disjoint-set","priority":2,"order_challenge_by":1,"challenges_per_page":null},{"id":"17-113","name":"Multiple Choice","slug":"multiple-choice","priority":1,"order_challenge_by":1,"challenges_per_page":null},{"id":"17-118","name":"Trie","slug":"trie","priority":1,"order_challenge_by":1,"challenges_per_page":null},{"id":"17-32","name":"Advanced","slug":"data-structures","priority":0,"order_challenge_by":1,"challenges_per_page":null}]},{"id":22,"name":"Mathematics","slug":"mathematics","children":[{"id":"22-109","name":"Fundamentals","slug":"fundamentals","priority":21,"order_challenge_by":1,"challenges_per_page":null},{"id":"22-52","name":"Number Theory","slug":"number-theory","priority":12,"order_challenge_by":1,"challenges_per_page":null},{"id":"22-51","name":"Combinatorics","slug":"combinatorics","priority":11,"order_challenge_by":1,"challenges_per_page":null},{"id":"22-55","name":"Algebra","slug":"algebra","priority":10,"order_challenge_by":1,"challenges_per_page":null},{"id":"22-54","name":"Geometry","slug":"geometry","priority":9,"order_challenge_by":1,"challenges_per_page":null},{"id":"22-53","name":"Probability","slug":"probability","priority":8,"order_challenge_by":1,"challenges_per_page":null},{"id":"22-128","name":"Linear Algebra Foundations","slug":"linear-algebra-foundations","priority":0,"order_challenge_by":1,"challenges_per_page":null}]},{"id":2,"name":"Artificial Intelligence","slug":"ai","children":[{"id":"2-8","name":"Bot Building","slug":"ai-introduction","priority":7,"order_challenge_by":1,"challenges_per_page":null},{"id":"2-9","name":"A* Search","slug":"astar-search","priority":6,"order_challenge_by":1,"challenges_per_page":null},{"id":"2-10","name":"Alpha Beta Pruning","slug":"alpha-beta-pruning","priority":5,"order_challenge_by":1,"challenges_per_page":null},{"id":"2-14","name":"Combinatorial Search","slug":"combinatorial-search-theory","priority":4,"order_challenge_by":1,"challenges_per_page":null},{"id":"2-13","name":"Games","slug":"richman-games","priority":3,"order_challenge_by":1,"challenges_per_page":null},{"id":"2-11","name":"Statistics and Machine Learning","slug":"machine-learning","priority":1,"order_challenge_by":1,"challenges_per_page":null},{"id":"2-44","name":"Digital Image Analysis","slug":"image-analysis","priority":0,"order_challenge_by":1,"challenges_per_page":null},{"id":"2-49","name":"Natural Language Processing","slug":"nlp","priority":0,"order_challenge_by":1,"challenges_per_page":null},{"id":"2-129","name":"Probability \u0026 Statistics - Foundations","slug":"statistics-foundations","priority":0,"order_challenge_by":1,"challenges_per_page":null}]},{"id":27,"name":"C","slug":"c","children":[{"id":"27-154","name":"Introduction","slug":"c-introduction","priority":100,"order_challenge_by":1,"challenges_per_page":null},{"id":"27-155","name":"Conditionals and Loops","slug":"c-conditionals-and-loops","priority":99,"order_challenge_by":1,"challenges_per_page":null},{"id":"27-156","name":"Arrays and Strings","slug":"c-arrays-and-strings","priority":98,"order_challenge_by":1,"challenges_per_page":null},{"id":"27-157","name":"Functions","slug":"c-functions","priority":97,"order_challenge_by":1,"challenges_per_page":null},{"id":"27-158","name":"Structs and Enums","slug":"c-structs-and-enums","priority":96,"order_challenge_by":1,"challenges_per_page":null}]},{"id":13,"name":"C++","slug":"cpp","children":[{"id":"13-77","name":"Introduction","slug":"cpp-introduction","priority":100,"order_challenge_by":1,"challenges_per_page":null},{"id":"13-76","name":"Strings","slug":"cpp-strings","priority":99,"order_challenge_by":1,"challenges_per_page":null},{"id":"13-78","name":"Classes","slug":"classes","priority":98,"order_challenge_by":1,"challenges_per_page":null},{"id":"13-116","name":"STL","slug":"stl","priority":97,"order_challenge_by":1,"challenges_per_page":null},{"id":"13-127","name":"Inheritance","slug":"inheritance","priority":96,"order_challenge_by":1,"challenges_per_page":null},{"id":"13-159","name":"Debugging","slug":"cpp-debugging","priority":96,"order_challenge_by":1,"challenges_per_page":null},{"id":"13-152","name":"Other Concepts","slug":"other-concepts","priority":95,"order_challenge_by":1,"challenges_per_page":null}]},{"id":15,"name":"Java","slug":"java","children":[{"id":"15-80","name":"Introduction","slug":"java-introduction","priority":6,"order_challenge_by":1,"challenges_per_page":null},{"id":"15-82","name":"Strings","slug":"java-strings","priority":5,"order_challenge_by":1,"challenges_per_page":null},{"id":"15-83","name":"BigNumber","slug":"bignumber","priority":4,"order_challenge_by":1,"challenges_per_page":null},{"id":"15-84","name":"Data Structures","slug":"java-data-structure","priority":3,"order_challenge_by":1,"challenges_per_page":null},{"id":"15-85","name":"Object Oriented Programming","slug":"oop","priority":2,"order_challenge_by":1,"challenges_per_page":null},{"id":"15-106","name":"Exception Handling","slug":"handling-exceptions","priority":1,"order_challenge_by":1,"challenges_per_page":null},{"id":"15-136","name":"Advanced","slug":"java-advanced","priority":0,"order_challenge_by":1,"challenges_per_page":null}]},{"id":12,"name":"Python","slug":"python","children":[{"id":"12-73","name":"Introduction","slug":"py-introduction","priority":10,"order_challenge_by":1,"challenges_per_page":null},{"id":"12-74","name":"Basic Data Types","slug":"py-basic-data-types","priority":9,"order_challenge_by":1,"challenges_per_page":null},{"id":"12-75","name":"Strings","slug":"py-strings","priority":8,"order_challenge_by":1,"challenges_per_page":null},{"id":"12-120","name":"Sets","slug":"py-sets","priority":7,"order_challenge_by":1,"challenges_per_page":null},{"id":"12-121","name":"Math","slug":"py-math","priority":7,"order_challenge_by":1,"challenges_per_page":null},{"id":"12-122","name":"Itertools","slug":"py-itertools","priority":7,"order_challenge_by":1,"challenges_per_page":null},{"id":"12-123","name":"Collections","slug":"py-collections","priority":7,"order_challenge_by":1,"challenges_per_page":null},{"id":"12-124","name":"Date and Time","slug":"py-date-time","priority":7,"order_challenge_by":1,"challenges_per_page":null},{"id":"12-126","name":"Errors and Exceptions","slug":"errors-exceptions","priority":7,"order_challenge_by":1,"challenges_per_page":null},{"id":"12-42","name":"Classes","slug":"py-classes","priority":6,"order_challenge_by":1,"challenges_per_page":null},{"id":"12-125","name":"Built-Ins","slug":"py-built-ins","priority":2,"order_challenge_by":1,"challenges_per_page":null},{"id":"12-87","name":"Python Functionals","slug":"py-functionals","priority":1,"order_challenge_by":1,"challenges_per_page":null},{"id":"12-88","name":"Regex and Parsing","slug":"py-regex","priority":1,"order_challenge_by":1,"challenges_per_page":null},{"id":"12-89","name":"XML","slug":"xml","priority":1,"order_challenge_by":1,"challenges_per_page":null},{"id":"12-90","name":"Closures and Decorators","slug":"closures-and-decorators","priority":1,"order_challenge_by":1,"challenges_per_page":null},{"id":"12-139","name":"Numpy","slug":"numpy","priority":0,"order_challenge_by":1,"challenges_per_page":null},{"id":"12-160","name":"Debugging","slug":"py-debugging","priority":0,"order_challenge_by":1,"challenges_per_page":null}]},{"id":14,"name":"Ruby","slug":"ruby","children":[{"id":"14-72","name":"Introduction","slug":"ruby-tutorials","priority":10,"order_challenge_by":1,"challenges_per_page":null},{"id":"14-86","name":"Control Structures","slug":"control-structures","priority":9,"order_challenge_by":1,"challenges_per_page":null},{"id":"14-79","name":"Arrays \u0026 Hashes","slug":"ruby-arrays","priority":8,"order_challenge_by":1,"challenges_per_page":null},{"id":"14-107","name":"Enumerables","slug":"ruby-enumerables","priority":7,"order_challenge_by":1,"challenges_per_page":null},{"id":"14-112","name":"Methods","slug":"ruby-methods","priority":6,"order_challenge_by":1,"challenges_per_page":null},{"id":"14-135","name":"Strings","slug":"ruby-strings","priority":5,"order_challenge_by":1,"challenges_per_page":null}]},{"id":18,"name":"SQL","slug":"sql","children":[{"id":"18-92","name":"Basic Select","slug":"select","priority":10,"order_challenge_by":1,"challenges_per_page":null},{"id":"18-132","name":"Advanced Select","slug":"advanced-select","priority":9,"order_challenge_by":1,"challenges_per_page":null},{"id":"18-95","name":"Aggregation","slug":"aggregation","priority":8,"order_challenge_by":1,"challenges_per_page":null},{"id":"18-94","name":"Basic Join","slug":"join","priority":6,"order_challenge_by":1,"challenges_per_page":null},{"id":"18-133","name":"Advanced Join","slug":"advanced-join","priority":4,"order_challenge_by":1,"challenges_per_page":null},{"id":"18-143","name":"Alternative Queries","slug":"alternative-queries","priority":2,"order_challenge_by":1,"challenges_per_page":null}]},{"id":16,"name":"Databases","slug":"databases","children":[{"id":"16-91","name":"Relational Algebra","slug":"relational-algebra","priority":2,"order_challenge_by":1,"challenges_per_page":null},{"id":"16-93","name":"Indexes","slug":"indexes","priority":1,"order_challenge_by":1,"challenges_per_page":null},{"id":"16-117","name":"OLAP","slug":"olap","priority":1,"order_challenge_by":1,"challenges_per_page":null},{"id":"16-101","name":"Set and Algebra","slug":"set-and-algebra","priority":0,"order_challenge_by":1,"challenges_per_page":null},{"id":"16-130","name":"NoSQL - XML, MapReduce","slug":"xpath-queries","priority":0,"order_challenge_by":1,"challenges_per_page":null},{"id":"16-131","name":"Database Normalization","slug":"database-normalization","priority":0,"order_challenge_by":1,"challenges_per_page":null}]},{"id":21,"name":"Distributed Systems","slug":"distributed-systems","children":[{"id":"21-103","name":"Multiple Choice","slug":"distributed-mcq","priority":2,"order_challenge_by":1,"challenges_per_page":null},{"id":"21-104","name":"Client Server","slug":"client-server","priority":1,"order_challenge_by":1,"challenges_per_page":null},{"id":"21-111","name":"MapReduce Basics","slug":"mapreduce-basics","priority":1,"order_challenge_by":1,"challenges_per_page":null}]},{"id":6,"name":"Linux Shell","slug":"shell","children":[{"id":"6-56","name":"Bash","slug":"bash","priority":3,"order_challenge_by":1,"challenges_per_page":null},{"id":"6-57","name":"Text Processing","slug":"textpro","priority":2,"order_challenge_by":1,"challenges_per_page":null},{"id":"6-114","name":"Arrays in Bash","slug":"arrays-in-bash","priority":1,"order_challenge_by":1,"challenges_per_page":null},{"id":"6-115","name":"Grep Sed Awk","slug":"grep-sed-awk","priority":0,"order_challenge_by":1,"challenges_per_page":null}]},{"id":5,"name":"Functional Programming","slug":"fp","children":[{"id":"5-27","name":"Introduction","slug":"intro","priority":80,"order_challenge_by":1,"challenges_per_page":null},{"id":"5-26","name":"Recursion","slug":"fp-recursion","priority":70,"order_challenge_by":1,"challenges_per_page":null},{"id":"5-45","name":"Functional Structures","slug":"ds","priority":60,"order_challenge_by":1,"challenges_per_page":null},{"id":"5-40","name":"Memoization and DP","slug":"dp","priority":50,"order_challenge_by":1,"challenges_per_page":null},{"id":"5-50","name":"Persistent Structures","slug":"persistent-ds","priority":40,"order_challenge_by":1,"challenges_per_page":null},{"id":"5-41","name":"Ad Hoc","slug":"misc","priority":30,"order_challenge_by":1,"challenges_per_page":null},{"id":"5-46","name":"Parsers","slug":"parsers","priority":20,"order_challenge_by":1,"challenges_per_page":null},{"id":"5-48","name":"Interpreter and Compilers","slug":"compilers","priority":10,"order_challenge_by":1,"challenges_per_page":null}]},{"id":19,"name":"Regex","slug":"regex","children":[{"id":"19-137","name":"Introduction","slug":"re-introduction","priority":6,"order_challenge_by":1,"challenges_per_page":null},{"id":"19-141","name":"Character Class","slug":"re-character-class","priority":5,"order_challenge_by":1,"challenges_per_page":null},{"id":"19-142","name":"Repetitions","slug":"re-repetitions","priority":4,"order_challenge_by":1,"challenges_per_page":null},{"id":"19-140","name":"Grouping and Capturing","slug":"grouping-and-capturing","priority":3,"order_challenge_by":1,"challenges_per_page":null},{"id":"19-144","name":"Backreferences","slug":"backreferences","priority":2,"order_challenge_by":1,"challenges_per_page":null},{"id":"19-145","name":"Assertions","slug":"assertions","priority":1,"order_challenge_by":1,"challenges_per_page":null},{"id":"19-138","name":"Applications","slug":"re-applications","priority":0,"order_challenge_by":1,"challenges_per_page":null}]},{"id":20,"name":"Security","slug":"security","children":[{"id":"20-102","name":"Functions","slug":"functions","priority":100,"order_challenge_by":1,"challenges_per_page":null},{"id":"20-105","name":"Terminology and Concepts","slug":"concepts","priority":99,"order_challenge_by":1,"challenges_per_page":null},{"id":"20-31","name":"Cryptography","slug":"cryptography","priority":5,"order_challenge_by":1,"challenges_per_page":null}]},{"id":26,"name":"General Programming","slug":"general-programming","children":[]}],"primary_tags":[{"id":13,"slug":"math","name":"Math","is_track":true,"weightage":9.0,"ancestry":"4376/3081","priority":0},{"id":10,"slug":"dynamic-programming","name":"Dynamic Programming","is_track":true,"weightage":6.0,"ancestry":"4376/3081/55","priority":90},{"id":7,"slug":"search","name":"Search","is_track":true,"weightage":2.0,"ancestry":"4376/3081/55","priority":98},{"id":8,"slug":"combinatorial-search-theory","name":"Combinatorial Search Theory","is_track":true,"weightage":3.0,"ancestry":null,"priority":0},{"id":11,"slug":"graph-theory","name":"Graph Theory","is_track":true,"weightage":7.0,"ancestry":"4376/3081/55","priority":96},{"id":14,"slug":"bit-manipulation","name":"Bit Manipulation","is_track":true,"weightage":10.0,"ancestry":"4376/3081/55","priority":88},{"id":6,"slug":"sorting","name":"Sorting","is_track":true,"weightage":1.0,"ancestry":"4376/3081/55","priority":100},{"id":49,"slug":"np-complete-problems","name":"NP Complete problems","is_track":true,"weightage":12.0,"ancestry":null,"priority":0},{"id":57,"slug":"normal-languages","name":"Normal Languages","is_track":false,"weightage":0.0,"ancestry":null,"priority":0},{"id":9,"slug":"richman-games","name":"Richman Games","is_track":true,"weightage":4.0,"ancestry":null,"priority":0},{"id":12,"slug":"strings","name":"Strings","is_track":true,"weightage":8.0,"ancestry":"4376/3081/55","priority":94},{"id":58,"slug":"esoteric-languages","name":"Esoteric Languages","is_track":true,"weightage":0.0,"ancestry":null,"priority":0}],"effective_time_left":null,"effective_epoch_endtime":null},"messages":[],"profile":{"id":18258352,"username":"KIETIANS_007","country":"India","school":null,"languages":[["c","24"],["cpp","10"]],"created_at":"2022-06-23T12:36:45.000Z","level":1,"email":"vaibhavprajapati788@gmail.com","fb_uid":null,"gh_uid":null,"li_uid":null,"is_admin":false,"support_admin":false,"avatar":"https://d1ce3iv5vajdy.cloudfront.net/hackerrank/assets/gravatar.jpg","website":"","short_bio":null,"username_change_count":1,"name":"VAIBHAV KUMAR","personal_first_name":"VAIBHAV","personal_last_name":"KUMAR","company":"","local_language":null,"has_avatar_url":false,"hide_account_checklist":null,"spam_user":null,"job_title":"","jobs_headline":null,"linkedin_url":null,"github_url":null,"errors":{},"confirmed":true,"facebook_allow_opengraph":null,"tsize":null,"is_migrated":false,"facebook_opengraph_access_available":null,"promised_login_time":null,"last_logout_feedback":null,"chat_enabled":true,"tour_done":null,"username_autoset":false,"key_prefix":"18258352-ae0105e52cf5d0fca31d3c46c838e1842bcca738","notifications_url":"https://notify.hackerrank.com/subscribe/18258352-0c04b49e35b8f9194abd4086911688dee42c00b0","resume_url":null,"relocate":null,"phone":{"hacker_id":18258352,"country_code":null,"number":null,"verified":false,"unverified_country_code":"+91","unverified_number":"6398054256"},"phone_number":null,"blog_url":null,"college_major":null,"college_major_id":null,"jobs_consent":null,"graduation_year":null,"graduation_month":null,"college_year":null,"college_majors":null,"intro_screen_onboarding_done":null,"related_topics_tour_done":null,"company_challenge_breadcrumb_tour_done":null,"contest_reminders_banner_selected":null,"hometown":null,"employment_title":null,"employment_years":null,"college_roll_no":null,"college_semester":null,"college_course":null,"college_cgpa":null,"city":"Mumbai","state":null,"username_change_max":2,"has_viewed_feed_page":null,"address":null,"has_verified_phone_number":false,"country_of_residence":null,"has_seen_ch_full_screen_intro":null,"experience_status":null,"address_line2":null,"address_city":null,"address_state":null,"address_zip":null,"us_work_eligibility":null,"us_work_eligibility_2":null,"is_professional":false,"years_of_experience":null,"us_citizenship":null,"us_citizenship_2":null,"gender":null,"is_campus_rep":false,"hacko_amount":228,"timezone":"Asia/Calcutta","us_work_prefs":null,"ethnicity":null,"jobs_joining_date":null,"jobs_prefered_roles":null,"jobs_top_skills":null,"state_id":null,"jobs_complete_us_visa":null,"jobs_us_visa_other":null,"uk_work_eligibility":null,"stryker_consent":null,"work_ex_reset_flag":null,"job_board_consent":null,"is_organizer":null,"bookmarks_count":0,"role_number":null,"dashboard_survey_preference":null,"has_solved_a_challenge":true,"status_solve_me_first":null,"source":null,"track_nux_mixpanel":null,"registration_custom_data":null,"preferred_lang":null,"badges_onboarding_status":null,"updated_modal_profiled_data":null,"badges_opt_in_status":null,"tos_accepted_on":1655987805,"tried_interview_prep":null,"hacker_pubsub_channel":"18258352-0c04b49e35b8f9194abd4086911688dee42c00b0","tried_monaco_editor":null,"ga_user_id":"cd5f67365d46a4a86988348a021dfc032bdf19fb","ga_client_id":"95277301.1659615352","ga_user_ip":"2401:4900:1f35:f8ba:35a3:8904:7992:c6df","job_seeking_intent_survey":null,"job_survey_professional_data_required":2,"sourcing_jobs_consent":false,"work_start_year":null,"is_high_school_student":false,"dark_mode_banner_seen":true,"dark_mode_seen":null,"is_linkedin_connected":false,"job_availability_type":null,"job_availability_year":null,"vcf_profile_visibility":null,"signup_intent":"compete","onboarding_status":"done","work_authorization_countries":null,"user_prefers_theme":"light","show_dashboard_v2":true,"show_mock_tests":false,"show_certificates":true,"show_recommended_prep_kit":false,"show_prep_kits":true,"show_dashboard_banner":true,"show_codecademy_integration":false,"show_dark_theme":true,"show_challenge_v2":false,"show_pubsub_socketio":false,"secondary_emails":[]},"timestamp":1659853928,"tracks":[{"id":24,"slug":"tutorials","name":"Tutorials","chapters":[{"id":146,"name":"30 Days of Code","slug":"30-days-of-code","hidden":false},{"id":147,"name":"10 Days of Statistics","slug":"10-days-of-statistics","hidden":false},{"id":148,"name":"10 Days of Javascript","slug":"10-days-of-javascript","hidden":false}],"selected":2},{"id":3,"slug":"algorithms","name":"Algorithms","chapters":[{"id":43,"name":"Warmup","slug":"warmup","hidden":false},{"id":108,"name":"Implementation","slug":"implementation","hidden":false},{"id":34,"name":"Strings","slug":"strings","hidden":false},{"id":38,"name":"Sorting","slug":"arrays-and-sorting","hidden":false},{"id":36,"name":"Search","slug":"search","hidden":false},{"id":33,"name":"Graph Theory","slug":"graph-theory","hidden":false},{"id":59,"name":"Greedy","slug":"greedy","hidden":false},{"id":35,"name":"Dynamic Programming","slug":"dynamic-programming","hidden":false},{"id":151,"name":"Constructive Algorithms","slug":"constructive-algorithms","hidden":false},{"id":30,"name":"Bit Manipulation","slug":"bit-manipulation","hidden":false},{"id":153,"name":"Recursion","slug":"recursion","hidden":false},{"id":47,"name":"Game Theory","slug":"game-theory","hidden":false},{"id":29,"name":"NP Complete","slug":"np-complete-problems","hidden":false},{"id":161,"name":"Debugging","slug":"algo-debugging","hidden":false}],"selected":2},{"id":17,"slug":"data-structures","name":"Data Structures","chapters":[{"id":134,"name":"Arrays","slug":"arrays","hidden":false},{"id":39,"name":"Linked Lists","slug":"linked-lists","hidden":false},{"id":96,"name":"Trees","slug":"trees","hidden":false},{"id":119,"name":"Balanced Trees","slug":"balanced-trees","hidden":false},{"id":97,"name":"Stacks","slug":"stacks","hidden":false},{"id":98,"name":"Queues","slug":"queues","hidden":false},{"id":99,"name":"Heap","slug":"heap","hidden":false},{"id":100,"name":"Disjoint Set","slug":"disjoint-set","hidden":false},{"id":113,"name":"Multiple Choice","slug":"multiple-choice","hidden":false},{"id":118,"name":"Trie","slug":"trie","hidden":false},{"id":32,"name":"Advanced","slug":"data-structures","hidden":false}],"selected":2},{"id":22,"slug":"mathematics","name":"Mathematics","chapters":[{"id":109,"name":"Fundamentals","slug":"fundamentals","hidden":false},{"id":52,"name":"Number Theory","slug":"number-theory","hidden":false},{"id":51,"name":"Combinatorics","slug":"combinatorics","hidden":false},{"id":55,"name":"Algebra","slug":"algebra","hidden":false},{"id":54,"name":"Geometry","slug":"geometry","hidden":false},{"id":53,"name":"Probability","slug":"probability","hidden":false},{"id":128,"name":"Linear Algebra Foundations","slug":"linear-algebra-foundations","hidden":false}],"selected":2},{"id":27,"slug":"c","name":"C","chapters":[{"id":154,"name":"Introduction","slug":"c-introduction","hidden":false},{"id":155,"name":"Conditionals and Loops","slug":"c-conditionals-and-loops","hidden":false},{"id":156,"name":"Arrays and Strings","slug":"c-arrays-and-strings","hidden":false},{"id":157,"name":"Functions","slug":"c-functions","hidden":false},{"id":158,"name":"Structs and Enums","slug":"c-structs-and-enums","hidden":false}],"selected":2},{"id":2,"slug":"ai","name":"Artificial Intelligence","chapters":[{"id":8,"name":"Bot Building","slug":"ai-introduction","hidden":false},{"id":9,"name":"A* Search","slug":"astar-search","hidden":false},{"id":10,"name":"Alpha Beta Pruning","slug":"alpha-beta-pruning","hidden":false},{"id":14,"name":"Combinatorial Search","slug":"combinatorial-search-theory","hidden":false},{"id":13,"name":"Games","slug":"richman-games","hidden":false},{"id":11,"name":"Statistics and Machine Learning","slug":"machine-learning","hidden":false},{"id":44,"name":"Digital Image Analysis","slug":"image-analysis","hidden":false},{"id":49,"name":"Natural Language Processing","slug":"nlp","hidden":false},{"id":129,"name":"Probability \u0026 Statistics - Foundations","slug":"statistics-foundations","hidden":false}],"selected":2},{"id":13,"slug":"cpp","name":"C++","chapters":[{"id":77,"name":"Introduction","slug":"cpp-introduction","hidden":false},{"id":76,"name":"Strings","slug":"cpp-strings","hidden":false},{"id":78,"name":"Classes","slug":"classes","hidden":false},{"id":116,"name":"STL","slug":"stl","hidden":false},{"id":127,"name":"Inheritance","slug":"inheritance","hidden":false},{"id":159,"name":"Debugging","slug":"cpp-debugging","hidden":false},{"id":152,"name":"Other Concepts","slug":"other-concepts","hidden":false}],"selected":2},{"id":15,"slug":"java","name":"Java","chapters":[{"id":80,"name":"Introduction","slug":"java-introduction","hidden":false},{"id":82,"name":"Strings","slug":"java-strings","hidden":false},{"id":83,"name":"BigNumber","slug":"bignumber","hidden":false},{"id":84,"name":"Data Structures","slug":"java-data-structure","hidden":false},{"id":85,"name":"Object Oriented Programming","slug":"oop","hidden":false},{"id":106,"name":"Exception Handling","slug":"handling-exceptions","hidden":false},{"id":136,"name":"Advanced","slug":"java-advanced","hidden":false}],"selected":2},{"id":12,"slug":"python","name":"Python","chapters":[{"id":73,"name":"Introduction","slug":"py-introduction","hidden":false},{"id":74,"name":"Basic Data Types","slug":"py-basic-data-types","hidden":false},{"id":75,"name":"Strings","slug":"py-strings","hidden":false},{"id":120,"name":"Sets","slug":"py-sets","hidden":false},{"id":121,"name":"Math","slug":"py-math","hidden":false},{"id":122,"name":"Itertools","slug":"py-itertools","hidden":false},{"id":123,"name":"Collections","slug":"py-collections","hidden":false},{"id":124,"name":"Date and Time","slug":"py-date-time","hidden":false},{"id":126,"name":"Errors and Exceptions","slug":"errors-exceptions","hidden":false},{"id":42,"name":"Classes","slug":"py-classes","hidden":false},{"id":125,"name":"Built-Ins","slug":"py-built-ins","hidden":false},{"id":87,"name":"Python Functionals","slug":"py-functionals","hidden":false},{"id":88,"name":"Regex and Parsing","slug":"py-regex","hidden":false},{"id":89,"name":"XML","slug":"xml","hidden":false},{"id":90,"name":"Closures and Decorators","slug":"closures-and-decorators","hidden":false},{"id":139,"name":"Numpy","slug":"numpy","hidden":false},{"id":160,"name":"Debugging","slug":"py-debugging","hidden":false}],"selected":2},{"id":14,"slug":"ruby","name":"Ruby","chapters":[{"id":72,"name":"Introduction","slug":"ruby-tutorials","hidden":false},{"id":86,"name":"Control Structures","slug":"control-structures","hidden":false},{"id":79,"name":"Arrays \u0026 Hashes","slug":"ruby-arrays","hidden":false},{"id":107,"name":"Enumerables","slug":"ruby-enumerables","hidden":false},{"id":112,"name":"Methods","slug":"ruby-methods","hidden":false},{"id":135,"name":"Strings","slug":"ruby-strings","hidden":false}],"selected":2},{"id":18,"slug":"sql","name":"SQL","chapters":[{"id":92,"name":"Basic Select","slug":"select","hidden":false},{"id":132,"name":"Advanced Select","slug":"advanced-select","hidden":false},{"id":95,"name":"Aggregation","slug":"aggregation","hidden":false},{"id":94,"name":"Basic Join","slug":"join","hidden":false},{"id":133,"name":"Advanced Join","slug":"advanced-join","hidden":false},{"id":143,"name":"Alternative Queries","slug":"alternative-queries","hidden":false}],"selected":2},{"id":16,"slug":"databases","name":"Databases","chapters":[{"id":91,"name":"Relational Algebra","slug":"relational-algebra","hidden":false},{"id":93,"name":"Indexes","slug":"indexes","hidden":false},{"id":117,"name":"OLAP","slug":"olap","hidden":false},{"id":101,"name":"Set and Algebra","slug":"set-and-algebra","hidden":false},{"id":130,"name":"NoSQL - XML, MapReduce","slug":"xpath-queries","hidden":false},{"id":131,"name":"Database Normalization","slug":"database-normalization","hidden":false}],"selected":2},{"id":21,"slug":"distributed-systems","name":"Distributed Systems","chapters":[{"id":103,"name":"Multiple Choice","slug":"distributed-mcq","hidden":false},{"id":104,"name":"Client Server","slug":"client-server","hidden":false},{"id":111,"name":"MapReduce Basics","slug":"mapreduce-basics","hidden":false}],"selected":2},{"id":6,"slug":"shell","name":"Linux Shell","chapters":[{"id":56,"name":"Bash","slug":"bash","hidden":false},{"id":57,"name":"Text Processing","slug":"textpro","hidden":false},{"id":114,"name":"Arrays in Bash","slug":"arrays-in-bash","hidden":false},{"id":115,"name":"Grep Sed Awk","slug":"grep-sed-awk","hidden":false}],"selected":2},{"id":5,"slug":"fp","name":"Functional Programming","chapters":[{"id":27,"name":"Introduction","slug":"intro","hidden":false},{"id":26,"name":"Recursion","slug":"fp-recursion","hidden":false},{"id":45,"name":"Functional Structures","slug":"ds","hidden":false},{"id":40,"name":"Memoization and DP","slug":"dp","hidden":false},{"id":50,"name":"Persistent Structures","slug":"persistent-ds","hidden":false},{"id":41,"name":"Ad Hoc","slug":"misc","hidden":false},{"id":46,"name":"Parsers","slug":"parsers","hidden":false},{"id":48,"name":"Interpreter and Compilers","slug":"compilers","hidden":false}],"selected":2},{"id":19,"slug":"regex","name":"Regex","chapters":[{"id":137,"name":"Introduction","slug":"re-introduction","hidden":false},{"id":141,"name":"Character Class","slug":"re-character-class","hidden":false},{"id":142,"name":"Repetitions","slug":"re-repetitions","hidden":false},{"id":140,"name":"Grouping and Capturing","slug":"grouping-and-capturing","hidden":false},{"id":144,"name":"Backreferences","slug":"backreferences","hidden":false},{"id":145,"name":"Assertions","slug":"assertions","hidden":false},{"id":138,"name":"Applications","slug":"re-applications","hidden":false}],"selected":2},{"id":26,"slug":"general-programming","name":"General Programming","chapters":[],"selected":2},{"id":20,"slug":"security","name":"Security","chapters":[{"id":102,"name":"Functions","slug":"functions","hidden":false},{"id":105,"name":"Terminology and Concepts","slug":"concepts","hidden":false},{"id":31,"name":"Cryptography","slug":"cryptography","hidden":false}],"selected":2}],"ab_tests":{"models":[{"id":122,"name":"react_migration","product":1,"variants":[{"id":372,"weight":0,"variant":"trm0","active":false},{"id":373,"weight":1,"variant":"trm1","active":false},{"id":374,"weight":1,"variant":"cnt1","active":false},{"id":375,"weight":4,"variant":"trm2","active":false},{"id":376,"weight":4,"variant":"cnt2","active":false},{"id":377,"weight":5,"variant":"trm3","active":false},{"id":378,"weight":5,"variant":"cnt3","active":false},{"id":379,"weight":10,"variant":"trm4","active":false},{"id":380,"weight":10,"variant":"cnt4","active":false},{"id":381,"weight":10,"variant":"trm5","active":false},{"id":382,"weight":10,"variant":"cnt5","active":false},{"id":383,"weight":20,"variant":"trm6","active":false},{"id":384,"weight":20,"variant":"cnt6","active":false}],"hacker_variant":{"variant":"cnt6","forced":false}},{"id":240,"name":"skills-verification-card-text","product":1,"variants":[{"id":997,"weight":20,"variant":"text_1"},{"id":998,"weight":20,"variant":"text_2"},{"id":999,"weight":20,"variant":"text_3"},{"id":1000,"weight":20,"variant":"text_4"},{"id":1001,"weight":20,"variant":"text_5"}],"hacker_variant":{"variant":"text_5","forced":false}},{"id":246,"name":"mock-tests","product":1,"variants":[{"id":1055,"weight":0,"variant":"show0","active":true},{"id":1056,"weight":2,"variant":"show1","active":true},{"id":1057,"weight":2,"variant":"dont_show1","active":false},{"id":1058,"weight":3,"variant":"show2","active":false},{"id":1059,"weight":3,"variant":"dont_show2","active":false},{"id":1060,"weight":5,"variant":"show3","active":false},{"id":1061,"weight":5,"variant":"dont_show3","active":false},{"id":1062,"weight":40,"variant":"show4","active":false},{"id":1063,"weight":40,"variant":"dont_show4","active":false}],"hacker_variant":{"variant":"dont_show4","forced":false}},{"id":247,"name":"onboarding-survey","product":1,"variants":[{"id":1064,"weight":0,"variant":"control0"},{"id":1065,"weight":0,"variant":"treatment0"},{"id":1066,"weight":1,"variant":"treatment1"},{"id":1067,"weight":1,"variant":"control1"},{"id":1068,"weight":4,"variant":"treatment2"},{"id":1069,"weight":4,"variant":"control2"},{"id":1070,"weight":5,"variant":"treatment3"},{"id":1071,"weight":5,"variant":"control3"},{"id":1072,"weight":10,"variant":"treatment4"},{"id":1073,"weight":10,"variant":"control4"},{"id":1074,"weight":10,"variant":"treatment5"},{"id":1075,"weight":10,"variant":"control5"},{"id":1076,"weight":20,"variant":"treatment6"},{"id":1077,"weight":20,"variant":"control6"}],"hacker_variant":{"variant":"treatment4","forced":false}},{"id":248,"name":"dashboard-v2","product":1,"variants":[{"id":1078,"weight":0,"variant":"treatment0"},{"id":1079,"weight":0,"variant":"control0"},{"id":1080,"weight":1,"variant":"treatment1"},{"id":1081,"weight":1,"variant":"control1"},{"id":1082,"weight":4,"variant":"treatment2"},{"id":1083,"weight":4,"variant":"control2"},{"id":1084,"weight":5,"variant":"treatment3"},{"id":1085,"weight":5,"variant":"control3"},{"id":1086,"weight":20,"variant":"treatment4"},{"id":1087,"weight":20,"variant":"control4"},{"id":1088,"weight":20,"variant":"treatment5"},{"id":1089,"weight":20,"variant":"control5"}],"hacker_variant":{"variant":"control5","forced":false}},{"id":249,"name":"codecademy-integration","product":1,"variants":[{"id":1090,"weight":0,"variant":"treatment0","active":true},{"id":1091,"weight":0,"variant":"control0","active":false},{"id":1092,"weight":1,"variant":"treatment1","active":true},{"id":1093,"weight":1,"variant":"control1","active":false},{"id":1094,"weight":4,"variant":"treatment2","active":true},{"id":1095,"weight":4,"variant":"control2","active":false},{"id":1096,"weight":5,"variant":"treatment3","active":true},{"id":1097,"weight":5,"variant":"control3","active":false},{"id":1098,"weight":20,"variant":"treatment4","active":true},{"id":1099,"weight":20,"variant":"control4","active":false},{"id":1100,"weight":20,"variant":"treatment5","active":false},{"id":1101,"weight":20,"variant":"control5","active":false}],"hacker_variant":{"variant":"treatment5","forced":false}},{"id":250,"name":"show_full_screen_editor","product":1,"variants":[{"id":1102,"weight":0,"variant":"treatment0"},{"id":1103,"weight":0,"variant":"control0"},{"id":1104,"weight":1,"variant":"treatment1"},{"id":1105,"weight":1,"variant":"control1"},{"id":1106,"weight":4,"variant":"treatment2"},{"id":1107,"weight":4,"variant":"control2"},{"id":1108,"weight":5,"variant":"treatment3"},{"id":1109,"weight":5,"variant":"control3"},{"id":1110,"weight":20,"variant":"treatment4"},{"id":1111,"weight":20,"variant":"control4"},{"id":1112,"weight":20,"variant":"treatment5"},{"id":1113,"weight":20,"variant":"control5"}],"hacker_variant":{"variant":"control5","forced":false}},{"id":251,"name":"show_dark_theme","product":1,"variants":[{"id":1114,"weight":0,"variant":"treatment0","active":true},{"id":1115,"weight":0,"variant":"control0","active":false},{"id":1116,"weight":1,"variant":"treatment1","active":true},{"id":1117,"weight":1,"variant":"control1","active":false},{"id":1118,"weight":4,"variant":"treatment2","active":true},{"id":1119,"weight":4,"variant":"control2","active":false},{"id":1120,"weight":5,"variant":"treatment3","active":true},{"id":1121,"weight":5,"variant":"control3","active":false},{"id":1122,"weight":20,"variant":"treatment4","active":true},{"id":1123,"weight":20,"variant":"control4","active":false},{"id":1124,"weight":20,"variant":"treatment5","active":true},{"id":1125,"weight":20,"variant":"control5","active":false}],"hacker_variant":{"variant":"treatment4","forced":false}},{"id":252,"name":"pubsub-socketio","product":1,"variants":[{"id":1126,"weight":0,"variant":"treatment0","active":true},{"id":1127,"weight":0,"variant":"control0","active":false},{"id":1128,"weight":1,"variant":"treatment1","active":true},{"id":1129,"weight":1,"variant":"control1","active":false},{"id":1130,"weight":4,"variant":"treatment2","active":true},{"id":1131,"weight":4,"variant":"control2","active":false},{"id":1132,"weight":5,"variant":"treatment3","active":true},{"id":1133,"weight":5,"variant":"control3","active":false},{"id":1134,"weight":20,"variant":"treatment4","active":false},{"id":1135,"weight":20,"variant":"control4","active":false},{"id":1136,"weight":20,"variant":"treatment5","active":false},{"id":1137,"weight":20,"variant":"control5","active":false}],"hacker_variant":{"variant":"treatment4","forced":false}}]},"in_maintenance_mode":false,"maintenance_details":{"notification_start":1495931400,"maintenance_start":1496017800,"maintenance_end":1496021400,"api_message":"We are performing scheduled maintenance on our servers. Please refer to https://updates.hackerrank.com/scheduled-maintenance-on-may-28th-2018-at-530pm-pt/ for more details."},"feature_feedback_list":[],"admin_su":null,"badge_map":{"algorithms":["problem-solving"],"data-structures":["problem-solving"],"cpp":["cpp"],"java":["java"],"python":["python"],"sql":["sql"],"c":["c"],"ruby":["ruby"],"30-days-of-code":["30-days-of-code"],"10-days-of-javascript":["10-days-of-javascript"],"10-days-of-statistics":["10-days-of-statistics"]},"feature_flags":{}};
      HR.MANIFEST_HASH = "1345ca8a782f40701b985302dbba2c3bae5d07cd";
    </script>

    <link rel="alternate" type="application/rss+xml" title="RSS" href="https://www.hackerrank.com/rest/blogs.rss" />
</head>

<body id="hr_v2" class="show-cookie-banner">
      <div class="cdn-error-view" style="display:none;">
  <div class="error-box-wrap">
    <div class="error-icon">
      <svg x="0px" y="0px" width="80px" height="80px" viewBox="0 0 367.011 367.01" style="enable-background:new 0 0 367.011 367.01;" xml:space="preserve">
        <g>
         <g>
          <path d="M365.221,329.641L190.943,27.788c-1.542-2.674-4.395-4.318-7.479-4.318c-3.084,0-5.938,1.645-7.48,4.318L1.157,330.584    c-1.543,2.674-1.543,5.965,0,8.639c1.542,2.674,4.395,4.318,7.48,4.318h349.65c0.028,0,0.057,0,0.086,0    c4.77,0,8.638-3.863,8.638-8.639C367.011,332.92,366.342,331.1,365.221,329.641z M23.599,326.266L183.464,49.381l159.864,276.885    H23.599z"/>
          <path d="M174.826,136.801v123.893c0,4.773,3.867,8.638,8.638,8.638c4.77,0,8.637-3.863,8.637-8.638V136.801    c0-4.766-3.867-8.637-8.637-8.637C178.693,128.165,174.826,132.036,174.826,136.801z"/>
          <path d="M183.464,279.393c-5.922,0-10.725,4.8-10.725,10.722s4.803,10.729,10.725,10.729c5.921,0,10.725-4.809,10.725-10.729    C194.189,284.193,189.386,279.393,183.464,279.393z"/>
         </g>
        </g>
      </svg>
    </div>
    <h2 class="error-title">Something went wrong!</h2>
    <p class="error-message">Some error occured while loading page for you. Please try again.</p>
    <div class="btn-wrap">
      <a href="#"  onclick="window.location.reload(true);"><button class="btn-reload">Reload</button></a>
    </div>
  </div>
</div>
<script>
  if(typeof cdnLoaded !== 'undefined' && cdnLoaded === false){
    document.querySelector('.cdn-error-view').style.display = 'block';
  }
</script>

    <script type="text/template" id="navigation">
  <% if(HR.util.showCookieBanner()) { %>
      <div class="cookie-banner-wrapper navigation-banner">
          <div class="cookie-d-flex container">
              <div class="cookie-message msL">We use cookies to ensure you have the best browsing experience on our website.
                  Please read our <a href="/privacy#cookies" target="_blank" class="cookie-link">cookie policy</a> for more information about how we use cookies.
              </div>
              <button class="ui-btn-secondary cookie-accept-btn"><span class="ui-text">Ok</span></button>
          </div>
      </div>
  <% } %>
  <div class="page-header-wrapper theme-m-section">
      <nav class="community-header">
          <div class="container">
              <span class="nav-links theme-m-section"></span>
              <span class="nav-buttons theme-m-section"></span>
          </div>
      </nav>
  </div>
</script>

<script type="text/template" id="nav-links">
  <ul class="nav-links">
      <li class="nav-link-item logo-wrap">
          <a href="/dashboard" class="nav_link backbone logo_mark js_logo_mark logo-link" data-analytics="NavBarLogo"><img id="feed-intro" class="logo-img-small" src="<%- asset_path('brand/logo-new-white-green.svg') %>" alt=""/></a>
      </li>
      <% if (isDashboardV2) { %>
       <li class="nav-link-item">
          <a href="/dashboard" class="nav-link domains" data-analytics="NavBarDomains">
            <span>PREPARE</span>
                  <div class="new-feature-badge">NEW</div>

          </a>
      </li>
      <li class="nav-link-item">
          <a href="/skills-verification" class="nav-link" data-analytics="NavBarCertification">
            <span>CERTIFY</span>
          </a>
      </li>
      <li class="nav-link-item">
          <a href="/contests" class="nav-link contests" data-analytics="NavBarContests">
            <span>COMPETE</span>
          </a>
      </li>
      <% if (isCareerFair) { %>
      <li class="nav-link-item">
              <a href="/career-fair" class="nav-link" data-analytics="NavBarCareerFair" id='vcf-nav-link'>
                  <span>Career Fair</span>
              </a>
          </li>
      <% } %>
      <!-- Disabling Apply/Jobs link on navbar HRC:3967(https://hackerrank.atlassian.net/browse/HRC-3967) -->
      <!-- <li class="nav-link-item">
            <a href="/jobs/search" class="nav-link" data-analytics="NavBarJobs">
                <span>APPLY</span>
                <i class="icon-circle js-jobs-notification navigation-highlight-icon hidden"></i>
            </a>
        </li> -->
       <% } else  { %>
       <li class="nav-link-item">
          <a href="/dashboard" class="nav-link domains" data-analytics="NavBarDomains">
            <span>PRACTICE</span>
          </a>
      </li>
      <li class="nav-link-item">
          <a href="/skills-verification" class="nav-link" data-analytics="NavBarCertification">
            <span>Certification</span>
              <% if (!isCareerFair) { %>
                  <div class="new-feature-badge">NEW</div>
              <% } %>
          </a>
      </li>
      <li class="nav-link-item">
          <a href="/contests" class="nav-link contests" data-analytics="NavBarContests">
            <span>COMPETE</span>
          </a>
      </li>
      <% if (!isCareerFair) { %>
          <!-- <li class="nav-link-item">
              <a href="/jobs/search" class="nav-link" data-analytics="NavBarJobs">
                  <span>JOBS</span>
                  <i class="icon-circle js-jobs-notification navigation-highlight-icon hidden"></i>
              </a>
          </li> -->
          <li class="nav-link-item">
              <a href="/leaderboard" class="nav-link" data-analytics="NavBarLeaderboard" id='leaderboard-nav-link'>
                  <span>LEADERBOARD</span>
              </a>
          </li>
      <% } else { %>
          <li class="nav-link-item">
              <a href="/career-fair" class="nav-link" data-analytics="NavBarCareerFair" id='vcf-nav-link'>
                  <span>Career Fair</span>
                  <div class="new-feature-badge">NEW</div>
              </a>
          </li>
          <li class="dropdown-extra-links">
              <div class="dropdown theme-m-content profile-menu-item extra-menu-item" id="extra-menu">
                  <a class="backbone nav_link dropdown-toggle" href="" data-toggle="dropdown" data-analytics="NavBarFeatureDropDown" title="Expand" aria-label="Expand">
                      <i class="icon-ellipsis"></i>
                  </a>
                  <div class="dropdown-menu drop-list">
                      <ul>
                          <!-- <li class="profile-nav-item"><a class="backbone" href="/jobs/search" data-analytics="NavBarJobs">JOBS</a></li> -->
                          <li class="profile-nav-item"><a class="backbone" href="/leaderboard" data-analytics="NavBarLeaderboard">LEADERBOARD</a></li>
                      </ul>
                  </div>
              </div>
          </li>
      <% } %>
       <% } %>
  </ul>
</script>

<script type="text/template" id="nav-search">
  <div class="hide-in-private-contest search-input input-icon">
      <input type="text" id="search-text" class="new-search-query" autocomplete="off" data-analytics="NavBarSearchBox" placeholder="Search">
      <i class="icon-search"></i>
  </div>
  <div class="hide-in-private-contest search-result hide">
      <ul class="unstyled"></ul>
  </div>
</script>

<script type="text/template" id="nav-buttons">
  <ul class="pull-left psR">
      <li class="hide-in-private-contest search-input-container input-icon main-hr-search" id="search-span">
          <div class="search_form new-search theme-m-content"></div>
      </li>
  </ul>
  <% if (profile && profile.isLoggedIn()) { %>
      <ul class="pull-left nav-wrap mmL">

          <li class="hide-in-private-contest notify_dropdown notify-dropdown dropdown message-dropdown theme-m-content" id="tab-profile-messages">
              <a class="cursor backbone nav_link hr_nav_messages_link" data-toggle="dropdown" data-analytics="NavBarMessageIcon">
                  <i class="icon-theme-m-message icon--single"></i>
                  <span class="indicator number-indicator hr_messages_count hidden"></span>
              </a>
              <div class="dropdown-menu large theme-m-dropdown">
                  <header class="psT psB text-center menu-header">
                      <strong className="header-title">Messages</strong>
                  </header>
                      <div id="notify_messages" class="dropdown-body">
                          <ul></ul>
                      </div>
                  <footer class="final text-center show-all">
                      <a class="btn backbone show-all-link" href="/inbox" data-analytics="NavBarMessageShowAll">Show All</a>
                  </footer>
              </div>
          </li>
          <li class="dropdown notify_dropdown theme-m-content" id="tab-profile-notifs">
              <a class="cursor backbone nav_link hr_nav_notifications_link" data-toggle="dropdown" data-analytics="NavBarNotificationsIcon">
                  <i class="icon-theme-m-notification icon--single"></i>
                  <span class="indicator number-indicator hr_notifications_count hidden"></span>
              </a>
              <div class="dropdown-menu large theme-m-dropdown" id="notify_broadcasts">
                  <header class="psA">
                      <strong>Notifications</strong>
                      <a class="hr_archive_all archive pull-right" data-analytics="NavBarNotificationsArchiveAll"><i class="icon-folder-open"></i>Archive All</a>
                  </header>
                  <div class="clearfix dropdown-body">
                      <ul class="hr_nav_notifications_list">
                      </ul>
                  </div>
                  <footer class="final text-center show-all">
                      <a class="btn backbone show-all-link" href="/notifications" data-analytics="NavBarNotificationsShowAll">Show All</a>
                  </footer>
              </div>
          </li>
          <li class="dropdown-auth">
              <div class="dropdown theme-m-content profile-menu-item" id="profile-menu">
                  <a class="backbone nav_link dropdown-toggle" href="" data-toggle="dropdown" data-analytics="NavBarProfileDropDown">
                      <img src="<%= _profile.avatar %>" alt="" class="avatar" onerror="this.onerror=null; this.src='https://d1ce3iv5vajdy.cloudfront.net/hackerrank/assets/gravatar.jpg';">
                      <span class="mmR profile-username"><%- _profile.username %></span>
                      <i class="icon-down-open"></i>
                  </a>
                  <div class="dropdown-menu drop-list pull-right">
                      <ul>
                          <li class="hide-in-private-contest profile-nav-item"><a class="navigation_hackos hackos-count backbone" href="/<%- _profile.username %>/hackos" data-analytics="NavBarProfileDropDownHackos">Hackos: <span class="navigation_hackos-count"><%= _profile.hacko_amount %></span></a></li>
                          <li class="hide-in-private-contest profile-nav-item">
                              <a class="backbone" rel="tooltip" data-placement="left" href="/<%- _profile.username %>" data-analytics="NavBarProfileDropDownProfile">
                                  Profile
                                  <!-- NOTE also add title="x% complete" to profile link-->
                                  <div class="ui-progress-bar theme-progress-bar">
                                      <div class="progress-filler" style="width: <%= _profileProgress %>%;"></div>
                                  </div>
                              </a>
                          </li>
                          <% if (_profile.show_dashboard_v2) { %>
                          <li class="hide-in-private-contest profile-nav-item"><a class="backbone" href="/leaderboard" data-analytics="NavBarProfileDropDownALeaderboard">Leaderboard</a></li>
                           <% } %>
                          <li class="hide-in-private-contest profile-nav-item"><a class="backbone" href="/settings" data-analytics="NavBarProfileDropDownSettings">Settings</a></li>
                          <li class="hide-in-private-contest profile-nav-item"><a class="backbone" href="/challenges/bookmarks" data-analytics="NavBarDropDownBookmarks">Bookmarks</a></li>
                          <% if (HR.ABTest && HR.ABTest.is_variant("hrc-code-snippets", "trm1")){ %>
                              <li class="hide-in-private-contest profile-nav-item"><a href="/snippets" data-analytics="NavBarProfileDropDownCodeSnippets">Code Snippets</a></li>
                          <% } %>
                          <li class="hide-in-private-contest profile-nav-item"><a class="backbone" href="/network" data-analytics="NavBarProfileDropDownNetwork">Network</a></li>
                          <li class="hide-in-private-contest profile-nav-item"><a class="backbone" href="/submissions" data-analytics="NavBarProfileDropDownSubmissions">Submissions</a></li>
                          <li class="hide-in-private-contest profile-nav-item"><a class="backbone" href="/administration" data-analytics="NavBarProfileDropDownAdministration">Administration</a></li>
                          <li class="profile-nav-item"><a class="logout-button" data-analytics="NavBarProfileDropDownLogout">Logout</a></li>
                      </ul>
                  </div>
              </div>
          </li>
      </ul>
  <% } %>
</script>

    <script type="text/template" id="breadcrumb">
    <% var counter = 0; %>
    <div class="content-header">
        <div class="container">
            <div class="clearfix">
                <ol itemscope itemtype="http://schema.org/BreadcrumbList" class="pull-left mdT msB pjT bcrumb">
                    <% var breadcrumb_level = 0; var levelValKeys = _.keys(level_values);%>
                    <% for (var index in level_values) { %>
                      <li itemprop="itemListElement" itemscope itemtype="http://schema.org/ListItem">
                        <% if (counter==0) {
                             counter = counter + 1;
                           } else { %>
                             <i class="icon-right-open mmL"></i>
                        <% } %>
                        <a itemprop="item" href="<%= level_values[index].url %>" class="backbone"
                           data-analytics="Breadcrumb" data-attr1="<%- level_values[index].text %>"
                           data-attr2="<%= index %>" data-attr7="<%= breadcrumb_level += 1 %>"><span itemprop="name"><%- level_values[index].text %></span></a>
                        <meta itemprop="position" content="<%- breadcrumb_level %>" />
                      </li>
                    <% } %>
                </ol>
                 <div class="pull-right hide domain-scores">
                    <div class="pull-left badge-progress">
                    </div>
                    <div class="pull-right pdT brcumb-points">
                        <span class="zeta bold">Points: </span><span class="bold domain-score"></span>
                        <span class="domain-rank-span">
                            <span class="zeta bold">Rank: </span><span class="bold msR domain-rank "></span>
                        </span>
                    </div>
                 </div>
                <div class="social-share-wrap-2 hide"></div>
            </div>
        </div>
    </div>
</script>


    <div id="wrapper" class="theme-m-content" >
        <div id="navigation"></div>
        <div id="side-navigation"></div>
        <div id="verifyaccount"></div>
        <div id="ajax-msg-wrap"></div>
        <!--<div id="countdowntimer" style="display: none;"></div>-->
        <div id="breadcrumb"></div>
        <div id="flash"></div>
        <div id="followbanner"></div>
        <div id="submission-success-messages"></div>
        <div id="contestwide-broadcast"></div>
        <div id="content" class="main_content"></div>
        <div id="hacker"></div>
    </div>
    <div id="autocomplete-container" style="position:absolute; width: 330px; z-index: 2000; padding-top: 1px;"></div>
    <footer class="page_footer">
    <div>
        <div class="text-center">
            <p style="font-size: 14px; margin-top: 5px; margin-bottom: 0px;">
              <span class="internal-links">
                <a target="_blank" href="/interview/interview-preparation-kit?utm_source=website&utm_medium=footer&utm_campaign=website" class="interview-prep" data-analytics="FooterLinkCalendar">Interview Prep</a>
                |
                <a target="_blank" href="//blog.hackerrank.com" class="blog" data-analytics="FooterLinkBlog">Blog</a>
                |
                <a target="_blank" href="/scoring" class="scoring" data-analytics="FooterLinkScoring">Scoring</a>
                |
                <a target="_blank" href="/environment" class="environment" data-analytics="FooterLinkEnvironment">Environment</a>
                |
                <a target="_blank" href="/faq" class="faq" data-analytics="FooterLinkFAQ">FAQ</a>
                |
              </span>
              <a target="_blank" href="//www.hackerrank.com/aboutus" data-analytics="FooterLinkAboutUs">About Us</a>
              |
              <a target="_blank" href="https://help.hackerrank.com/hc/en-us" data-analytics="FooterLinkSupport">Support</a>
              |
              <a target="_blank" href="//www.hackerrank.com/careers" data-analytics="FooterLinkCareers">Careers</a>
              |
              <a target="_blank" href="/terms-of-service" data-analytics="FooterLinkTermsOfService">Terms Of Service</a>
              |
              <a target="_blank" href="/privacy" data-analytics="FooterLinkPrivacyPolicy">Privacy Policy</a>
              |
              <a href="/support/feature" target="_blank" class="featureRequestButton" data-analytics="FooterLinkFeatureRequest">Request a Feature</a>
            </p>
        </div>
    </div>
</footer>

    <ol id="hr_tour-intro-tour" class="hide">
        <li data-class="hr_tour-challenge-name"  data-options="tipLocation:bottom"><h5 class="walkthrough-header">Challenge Walkthrough</h5><span class="walkthrough-text">Let's walk through this sample challenge and explore the features of the code editor.</span><span class="walkthrough-progress">1 of 6</span></li>
        <li data-class="hr_tour-problem-statement" data-options="tipLocation:top"><h5 class="walkthrough-header">Review the problem statement</h5><span class="walkthrough-text">Each challenge has a problem statement that includes sample inputs and outputs. Some challenges include additional information to help you out.</span><span class="walkthrough-progress">2 of 6</span></li>
        <li data-class="hr_tour-select-language" data-options="tipLocation:left"><h5 class="walkthrough-header">Choose a language</h5><span class="walkthrough-text">Select the language you wish to use to solve this challenge.</span><span class="walkthrough-progress">3 of 6</span></li>
        <li data-class="hr_tour-code-solution" data-options="tipLocation:top"><h5 class="walkthrough-header">Enter your code</h5><span class="walkthrough-text">Code your solution in our custom editor or code in your own environment and upload your solution as a file.</span><span class="walkthrough-progress">4 of 6</span></li>
        <li data-class="hr_tour-compile-test" data-options="tipLocation:left"><h5 class="walkthrough-header">Test your code</h5><span class="walkthrough-text">You can compile your code and test it for errors and accuracy before submitting.</span><span class="walkthrough-progress">5 of 6</span></li>
        <li data-class="hr_tour-submit-code" data-button="Done" data-options="tipLocation:left"><h5 class="walkthrough-header">Submit to see results</h5><span class="walkthrough-text">When you're ready, submit your solution! Remember, you can go back and refine your code anytime.</span><span class="walkthrough-progress">6 of 6</span></li>
    </ol>
    <ol id="hr_tour-intro-part-2-tour" class="hide">
        <li data-class="hr_tour-leaderboard">Check your score</li>
    </ol>
    <script type="text/javascript">
     // disable forum social interaction
     HR.disable_fsi = false;
    </script>

    <script type='text/javascript'>
      // Setting up jobs constants for use in frontend
      // Jobs visa constants - visa's accepted by company
      HR.VISA_TYPE_NONE = 0
      HR.VISA_TYPE_ALL = 1
      HR.VISA_TYPE_US_RESIDENT = 2
    </script>

    <script type="text/javascript">
      HR.REACT_ROUTE_CONFIG = {
  "var1": [],
  "var2": [],
  "complete": [
    "^/domains/?.*$",
    "^/dashboard/?(\\?.*|$)",
    "^/interview((/|\\?).*|$)",
    "^/contests/((projecteuler)|(hourrank-[0-9]+))(/(?!(judge/)?submissions).*)?$",
    "^/contests/?((archived|college)(/\\d*)?)?/?(\\?.*|$)",
    "^/terms-of-service/?(\\?.*|$)",
    "^/faq-hacker-level/?(\\?.*|$)",
    "^/privacy/?(\\?.*|$)",
    "^/leaderboard((/|\\?).*|$)",
    "^/skills-verification((/|\\?).*|$)",
    "^/settings/phone((/|\\?).*|$)",
    "^/settings/email-preferences((/|\\?).*|$)",
    "^/settings/language((/|\\?).*|$)",
    "^/settings/change-password((/|\\?).*|$)",
    "^/settings/shipping-details((/|\\?).*|$)",
    "^/settings/personalization((/|\\?).*|$)",
    "^/work/login($|\\?|/).*",
    "^/work/tests((/|\\?).*|$)",
    "^/work/settings((/|\\?).*|$)",
    "^/work/settings/data-manager((/|\\?).*|$)",
    "^/jobs/search/?(\\?.*|$)",
    "^/jobs/dashboard/.+$",
    "^/environment(/?.*|$)",
    "^/work/library((/|\\?).*|$)",
    "^/work/projects((/|\\?).*|$)",
    "^/work/teams((/|\\?).*|$)",
    "^/calendar/?(\\?.*|$)",
    "^/snippets((/.*)|(\\?.*)|$)",
    "^/feed/?(\\?.*|$)",
    "^/challenges/([^/]+?)(?!/(topics))((/?\\?.*|$)|/.*)",
    "^/404$",
    "^/onboarding/?.*$",
    "^/profile/.*$",
    "^/scoring($|\\?|/).*",
    "^/companies/.+$",
    "^(/auth)?/(login|signup)((/.*)*|\\?.*)$",
    "^/auth/(forgot_password|reset_password)/?(\\?.*|$)",
    "^/work/reset_password/(.*|$)",
    "^/x/reset_password/(.*|$)",
    "^/[^/]*/activity/?(\\?.*|$)",
    "^/work/sourcing($|\\?|/).*",
    "^/work/404($|\\?|/).*",
    "^/work/pricing-plans($|\\?|/).*",
    "^/work/iframe($|\\?|/).*",
    "^/work/subscribe-now($|\\?|/).*"
  ]
}
;
      HR.CKEDITOR_URL = "https://hrcdn.net/ckeditor/v4.11.4.2/ckeditor.js"
    </script>
</body>

    <!-- Load Jquery -->
  <script src="https://hrcdn.net/hackerrank/assets/base-153aa897c88730d6cee3642e04e184fceac798cf87b7ab79552102930ff30e59.js"></script>



    <script src="https://hrcdn.net/hackerrank/assets/hackerrank_libraries-1287800a7b053b1a92190bfa002e103edd55b7b39c6762b726a5751c1994f580.js" crossorigin="anonymous"></script>
    <script src="https://hrcdn.net/hackerrank/assets/codeshell/dist/codeshell-c2a21e50c1d9bcbc3177f15b19f1b5237be3f4cc4833dc610d04f23180f98c5b.js" crossorigin="anonymous"></script>
    <script src="https://hrcdn.net/hackerrank/assets/hackerrank-fe6753d5c30ffd230850479450e61164e35b2ba83691d0a5bffc3b7c1d4db55e.js" crossorigin="anonymous"></script>
    <script src="https://hrcdn.net/hackerrank/assets/set-manifest-1345ca8a782f40701b985302dbba2c3bae5d07cd.js" crossorigin="anonymous"></script>
    <script src="https://hrcdn.net/hackerrank/assets/requirejs/require-347a93ee81566ec218dbb0c715ef65c45b1bc692fa0dfdf7189dce06cbf085b3.js" crossorigin="anonymous"></script>
    <script src="https://hrcdn.net/hackerrank/assets/dashboard-04cb90bc8664936819d2d335dc43aa525e7f428907b018d24e9f3f4e535ccda0.js" crossorigin="anonymous"></script>




<!-- jsCookies -->


<script type="text/javascript">
  window.extern_script_delay = 0;
  if (window.PRODUCT_NAMESPACE === 'hackerrank' && typeof($) === "function") {
    $(window).on("load", function(){
      if (('performance' in window) && ('timing' in window.performance)) {
        dom_time = window.performance.timing.domInteractive - window.performance.timing.navigationStart;
        if (dom_time > 12000) {
          window.extern_script_delay = 3000;
        } else if (dom_time > 7000) {
          window.extern_script_delay = 2000;
        } else if (dom_time > 6000) {
          window.extern_script_delay = 1000;
        }
      }
    });
  }
</script>

<script>
</script>

<script>
</script>

<!-- Google Analytics -->
<script type="text/javascript">
  $(window).on("load", function() {
    setTimeout(function() {
    (function() { var ga = document.createElement('script'); ga.type = 'text/javascript'; ga.async = true; ga.src = ('https:' == document.location.protocol ? 'https://ssl' : 'http://www') + '.google-analytics.com/ga.js'; var s = document.getElementsByTagName('script')[0]; s.parentNode.insertBefore(ga, s); })();
    }, window.extern_script_delay);
  });
</script>

<!-- Mixpanel Stub -->
<script type="text/javascript">
  window.mixpanel = window.mixpanel || [];
  var attrs = "disable track track_pageview track_links track_forms register register_once alias unregister identify name_tag set_config people.set people.set_once people.increment people.append people.track_charge people.clear_charges people.delete_user".split(" ");
  for (var attribute in attrs) {
      mixpanel[attrs[attribute]] = function () {};
  }
</script>

<script type="text/javascript">
  if (window.dataLayer) {
      const gaUserId = 'cd5f67365d46a4a86988348a021dfc032bdf19fb';
      dataLayer.push({'event': 'identify', 'gaUserId': gaUserId});

      dataLayer.push({'event': 'setUserProps', 'userProps': {
        level: '1',
        badges_onboarding_status: '',
        jobs_consent: ''
      }});
  }
</script>

    <!-- End of hackerrank Zendesk Widget script -->

<!-- Filepicker -->
<script type="text/javascript">
  $(window).on("load", function() {
    setTimeout(function() {
    (function(a){if(window.filepicker){return}var b=a.createElement("script");b.type="text/javascript";b.async=!0;b.src=("https:"===a.location.protocol?"https:":"http:")+"//api.filepicker.io/v2/filepicker.js";var c=a.getElementsByTagName("script")[0];c.parentNode.insertBefore(b,c);var d={};d._queue=[];var e="pick,pickMultiple,pickAndStore,read,write,writeUrl,export,convert,store,storeUrl,remove,stat,setKey,constructWidget,makeDropPane".split(",");var f=function(a,b){return function(){b.push([a,arguments])}};for(var g=0;g<e.length;g++){d[e[g]]=f(e[g],d._queue)}window.filepicker=d})(document);
    filepicker.setKey("ApehXMbvXTWqWab7OmMr9z");
    }, window.extern_script_delay);
  });
</script>

<script type="text/javascript">
  window._fbq = window._fbq || [];
</script>

<!-- bizible -->
<script>
  $(window).on("load", function() {
    setTimeout(function() {
    (function(d, t) {
      var g = d.createElement(t),
          s = d.getElementsByTagName(t)[0];
      g.src = '//cdn.bizible.com/scripts/bizible.js';
      s.parentNode.insertBefore(g, s);
    }(document, 'script'));
    }, window.extern_script_delay);
  });
</script>


<script type="text/javascript">

    !function(obj){window.hr_metrics=obj,obj.loaded=!0,obj.config=obj.config||{},obj._b=obj._b||[],obj.init=function(options){this.config=$.extend({product:null,use_cookie:!1,uid_cookie_key:null,session_cookie_key:null,session_id:null,uid_token:null,uid_token_cookie_key:null,uid:Math.floor(1e12*(1+Math.random())).toString(16),metrics_endpoint:null,batch_track_interval:2e3,enable_gtm:!1},this.config||{},options||{})},obj.get_session_id=function(){return this.config.session_id?this.config.session_id:this.config.session_cookie_key?$.cookie(this.config.session_cookie_key):null},obj.get_uid_data=function(){return this.config.use_cookie?{uid:$.cookie(this.config.uid_cookie_key),uid_token:$.cookie(this.config.uid_token_cookie_key)}:{uid:this.config.uid,uid_token:this.config.uid_token}},obj.get_session_params=function(){var session_params={session_landing_url:$.cookie("session_landing_url"),session_referrer:$.cookie("session_referrer"),session_referring_domain:$.cookie("session_referring_domain")};try{var utm_params=$.cookie("session_utm_params");utm_params&&(utm_params=JSON.parse(utm_params),session_params.session_utm_source=utm_params.s,session_params.session_utm_medium=utm_params.m,session_params.session_utm_campaign=utm_params.c)}catch(e){}return session_params},obj.track=function(event_name,event_value,attrs,use_beacon){var common_attrs={session_id:this.get_session_id()},_tracking_data=(attrs=$.extend({},attrs,common_attrs,this.get_session_params()),$.extend({product:this.config.product,event_name:event_name,event_value:event_value,params:attrs},this.get_uid_data()));this._post_tracking_data(_tracking_data,use_beacon),this._push_to_gtm(event_name,event_value,attrs)},obj.batch_track=function(event_name,event_value,attrs){this._EVENT_ARRAY=this._EVENT_ARRAY||[];var that,common_attrs={session_id:this.get_session_id()},_tracking_data={event_name:event_name,event_value:event_value,params:attrs=$.extend({},attrs,common_attrs)};this._EVENT_ARRAY.push({time:(new Date).getTime(),url:document.location.href,track_data:_tracking_data}),this._event_batch_track_id||(this._event_batch_track_id=window.setInterval((that=this,function(){that.batch_track_record()}),this.config.batch_track_interval)),this._push_to_gtm(event_name,event_value,attrs)},obj.batch_track_record=function(use_beacon){if("object"==typeof this._EVENT_ARRAY&&this._EVENT_ARRAY.length>0){var _tracking_data_array=this._EVENT_ARRAY;this._EVENT_ARRAY=[];var _tracking_data=$.extend({product:this.config.product,batch_request:"true",current_time:(new Date).getTime(),data_array:JSON.stringify(_tracking_data_array),session_params:JSON.stringify(this.get_session_params())},this.get_uid_data());this._post_tracking_data(_tracking_data,use_beacon)}},obj._post_tracking_data=function(data,use_beacon){var metrics_endpoint=this.config.metrics_endpoint;if(!0===use_beacon&&"object"==typeof window.navigator&&"function"==typeof window.navigator.sendBeacon){var jsonContent="params_stream="+encodeURIComponent(JSON.stringify(data)),_json_blob=new Blob([jsonContent],{type:"application/x-www-form-urlencoded; charset=UTF-8"});window.navigator.sendBeacon(metrics_endpoint,_json_blob)}else $.ajax({type:"POST",url:metrics_endpoint,crossDomain:!0,xhrFields:{withCredentials:!0},beforeSend:function(){return!0},data:data})},obj._push_to_gtm=function(event_name,event_value,attrs){this.config.enable_gtm&&window.dataLayer&&window.dataLayer.push({event:"track",eventName:event_name,eventValue:event_value,eventAttrs:attrs})},function(o){if(Array.isArray(o._b)){for(var i=0;i<o._b.length;i++){var e=o._b[i];o[e[0]]&&"function"==typeof o[e[0]]&&o[e[0]].apply(o,e[1])}o._b=[]}}(obj)}(window.hr_metrics||{});

  (function() {
    hr_metrics.init({
      product: 'hackerrank',
      use_cookie: true,
      uid_cookie_key: 'hackerrank_mixpanel_token',
      uid_token_cookie_key: 'metrics_user_identifier',
      session_cookie_key: 'session_id',
      metrics_endpoint: 'https://metrics.hackerrank.com/metrics',
      enable_gtm: true
    });
  })();

  //tracking hrutm_ parameters
  $(window).on("load", function() {
    (function(){
      var sPageURL = window.location.search.substring(1);
      var sURLVariables = sPageURL.split('&');
      var trackingData;
      for(var i = 0; i < sURLVariables.length; i++) {
        var sParameterName = sURLVariables[i].split('=');
        if(sParameterName[0] == 'utm_source') {
          trackingData = decodeURIComponent(escape(sParameterName[1]));
          hr_metrics.batch_track(trackingData.event_name, trackingData)
        } else if (sParameterName[0] == 'ad-campaign' && sParameterName[1]=='Mkt1010415') {
          if(typeof HR !== "undefined" && HR !== null && (!HR.PREFETCH_DATA.profile || !HR.PREFETCH_DATA.profile.created_at)){
            document.cookie = "fb_ad_campaign_source="+sParameterName[1]+";path=/";
          }
        }
      }
    })();

    if(typeof HR !== "undefined" && HR !== null && HR.PREFETCH_DATA && HR.PREFETCH_DATA.profile &&  HR.PREFETCH_DATA.profile.created_at) {
      if($.cookie('fb_ad_campaign_source')) {
        window._fbq.push(['track', '6023409928156', {'value':'0.01','currency':'USD'}]);
        $.removeCookie('fb_ad_campaign_source', { path: '/' });
      }
    }
  });
</script>

  <script type="text/javascript">
    window.hr_metrics_extension_track = true;

      !function(obj){window.hr_metrics=obj,obj.externalService=function(event_type,event_value,attrs,service){(attrs=void 0!==attrs?attrs:{}).session_id=this.get_session_id(),service=void 0!==service?service:"mixpanel:heap",external_services=service.split(":")},obj.app_track=function(key,attrs){window.APP_METRICS=window.APP_METRICS||[],common_attrs={uid:$.cookie("hackerrank_mixpanel_token")},attrs=$.extend({},attrs,common_attrs),window.APP_METRICS.push({key:key,meta_data:attrs}),window.app_track_interval_id||(window.app_track_interval_id=window.setInterval(hr_metrics._send_app_track_data,5e3))},obj._send_app_track_data=function(){if(window.APP_METRICS&&window.APP_METRICS.constructor===Array&&!(window.APP_METRICS.length<=0)){var track_data={data:window.APP_METRICS};window.APP_METRICS=[];var metrics_endpoint="https://metrics.hackerrank.com/app_metrics";window.HR&&window.HR.development&&(metrics_endpoint="/app_metrics"),"function"==typeof moment&&"function"==typeof moment.tz&&(track_data.local_timezone=moment.tz.guess()),track_data.default_cdn_url=jsCookies.get("default_cdn_url"),track_data.document_referrer=document.referrer,$.ajax({type:"POST",url:metrics_endpoint,crossDomain:!0,xhrFields:{withCredentials:!0},beforeSend:function(){return!0},data:JSON.stringify(track_data),dataType:"json",contentType:"application/json"})}},obj.track_dwell_time=function(pathname,use_beacon){if(this._navigation_data&&this._navigation_data.page==pathname){var time_now=(new Date).getTime();this.batch_track("DwellTime",pathname,{attribute7:parseInt((time_now-(this._navigation_data.time||time_now))/1e3)},use_beacon)}},obj.set_navigation_data=function(pathname){this._navigation_data={page:pathname||document.location.pathname,time:(new Date).getTime()}},window.APP_METRIC_TRACKING_ENABLED&&"performance"in window&&"timing"in window.performance&&$(window).on("load",function(){setTimeout(function(){if(timing=window.performance.timing,obj={referring_url:window.location.pathname,fullLoadTime:timing.loadEventEnd-timing.navigationStart,loadTime:timing.loadEventEnd-timing.fetchStart,domReadyTime:timing.domComplete-timing.domInteractive,readyStart:timing.fetchStart-timing.navigationStart,redirectTime:timing.redirectEnd-timing.redirectStart,appcacheTime:timing.domainLookupStart-timing.fetchStart,unloadEventTime:timing.unloadEventEnd-timing.unloadEventStart,lookupDomainTime:timing.domainLookupEnd-timing.domainLookupStart,connectTime:timing.connectEnd-timing.connectStart,requestTime:timing.responseEnd-timing.requestStart,initDomTreeTime:timing.domInteractive-timing.responseEnd,loadEventTime:timing.loadEventEnd-timing.loadEventStart},"navigation"in window.performance&&"getEntries"in window.performance&&(obj.navigationType=window.performance.navigation.type,obj.navigationRedirectCount=window.performance.navigation.redirectCount,obj.fullLoadTime>8e3))try{var entries=window.performance.getEntries();entries[0].toJSON&&(obj.networkRequests=entries.map(function(e){return e.toJSON()}))}catch(e){}hr_metrics.app_track("page-load-metrics",obj)},1e3)}),$(window).on("load",function(){var _pathname=document.location.pathname,cdn_url_switched=jsCookies.get("cdn_url_switched");""!==cdn_url_switched&&jsCookies.destroy("cdn_url_switched"),hr_metrics.batch_track("PageLoad",_pathname+document.location.search,{attribute1:_pathname,attribute6:cdn_url_switched,cdn_url:jsCookies.get("cdn_url")})})}(window.hr_metrics||{}),"function"==typeof $&&window.hr_metrics_extension_track&&$(window).on("load",function(){var _pathname=document.location.pathname;hr_metrics.track_dwell_time&&(hr_metrics.track_dwell_time(_pathname),hr_metrics.set_navigation_data()),$(window).on("beforeunload",function(){var _pathname=document.location.pathname;hr_metrics.batch_track("PageClose",_pathname+document.location.search,{attribute2:_pathname},!0),hr_metrics.track_dwell_time&&hr_metrics.track_dwell_time(_pathname,!0),window.typingTimeout&&(window.clearTimeout(window.typingTimeout),window.triggerTypingEvent&&window.typingEventEnabled&&window.triggerTypingEvent()),hr_metrics.batch_track_record(!0)})});
  </script>

<!-- Load Facebook SDK for JavaScript -->
<script>
;(function(){
  // Function to have a list of functions to load on fbAsyncInit
  var toLoad = []
  window.fbReady = function(func){
    if( typeof func === 'function') {
      if( window.FB ) {
        func.call(window)
      } else {
        toLoad.push(func)
      }
    }
  }

  window.fbAsyncInit = function() {
    FB.init({
      appId      : '347499128655783',
      xfbml      : true,
      version    : 'v2.5',
      caption    : 'HackerRank.com',
    });

    // Execute all the fbAsyncInit functions
    toLoad.forEach(function(func){
      func.call(window)
    })
  };
})();
/*
$(window).on("load", function() {
  setTimeout(function() {
    (function(d, s, id){
       var js, fjs = d.getElementsByTagName(s)[0];
       if (d.getElementById(id)) {return;}
       js = d.createElement(s); js.id = id;
       js.src = "//connect.facebook.net/en_US/sdk.js";
       fjs.parentNode.insertBefore(js, fjs);
    }(document, 'script', 'facebook-jssdk'));
  }, window.extern_script_delay);
});
*/
</script>
<!-- Load Twitter SDK for JavaScript -->
<script>
window.twttr = (function() {
  t = window.twttr || {};
  if (typeof t.ready === 'undefined') {
    t._e = [];
    t.ready = function(f) {
      t._e.push(f);
    };
  }
  return t;
})();
$(window).on("load", function() {
  setTimeout(function() {
    (function(d, s, id){
       var js, fjs = d.getElementsByTagName(s)[0];
       if (d.getElementById(id)) {return;}
       js = d.createElement(s); js.id = id;
       js.src = "https://platform.twitter.com/widgets.js";
       fjs.parentNode.insertBefore(js, fjs);
    }(document, 'script', 'twitter-wjs'));
  }, window.extern_script_delay);
});
</script>

<script type="text/javascript">
    if (typeof($) == "function") {
        $(document).ready(function() {
            function we_are_hiring() {
                lines = [
                    "===============================================================================",
                    ",--.  ,--.              ,--.                 ,------.                 ,--.     ",
                    "|  '--'  | ,--,--. ,---.|  |,-. ,---. ,--.--.|  .--. ' ,--,--.,--,--, |  |,-.  ",
                    "|  .--.  |' ,-.  || .--'|     /| .-. :|  .--'|  '--'.'' ,-.  ||      \\|     /  ",
                    "|  |  |  |\\ '-'  |\\ `--.|  \\  \\\\   --.|  |   |  |\\  \\ \\ '-'  ||  ||  ||  \\  \\  ",
                    "`--'  `--' `--`--' `---'`--'`--'`----'`--'   `--' '--' `--`--'`--''--'`--'`--' ",
                    "===============================================================================",
                    "  You opened the console! Know some code, do you? Want to work for one of the  ",
                    "  best startups around? https://www.hackerrank.com/careers                     ",
                    "==============================================================================="
                ]
                for (i = 0; i < lines.length; i ++) {
                    console.log(lines[i]);
                }
            }
            setTimeout(we_are_hiring, 5000);
            if(window.trackJs) {
              trackJs.track("Page Loaded");
            }
        });
    }
</script>

<!-- Some Black Magic for Internet Explorer -->

<!--[if lt IE 10]>
<script src="https://hrcdn.net/hackerrank/assets/jquery-plugins/jQuery.XDomainRequest-bbf1203faae294b74f7077ea5bad499fabba38e298f8cd8cbd9fbdd8248c129b.js"></script>
<![endif]-->

<!--[if lt IE 9]>
<script src="https://cdnjs.cloudflare.com/ajax/libs/html5shiv/3.6/html5shiv.min.js" type="text/javascript"></script>
<![endif]-->

<!-- Chrome Frame for IE6 -->
<!--[if lt IE 7 ]>
 <script src="https://ajax.googleapis.com/ajax/libs/chrome-frame/1.0.2/CFInstall.min.js"></script><script>window.attachEvent("onload",function(){CFInstall.check({mode:"overlay"})})</script>
<![endif]-->

<!--[if lte IE 9]>
<script>
    IE_BROWSER = true
</script>
<![endif]-->

<!-- Track button clicks -->
<script type="text/javascript">
    $(document).on('click', 'a, button, input, select, i', null, function(e) {
        var src = e.currentTarget, $src = $(e.currentTarget);
        if ($src.attr('data-analytics')) {
            action = 'Click'; data = $src.attr('data-analytics');
        } else {
            return;
        }

            hr_metrics.batch_track(action, data, (function() {
                var params={};
                for (var _i=1; _i<=12; ++_i){
                    var _attr = 'data-attr'+_i;
                    if ($src.attr(_attr)){
                        params['attribute'+_i] = $src.attr(_attr);
                }}
                var attributes = src.attributes, attr_length = src.attributes.length;
                for (var i = 0; i < attr_length; i++){
                  var attribute = attributes[i];
                  if (attribute.name.indexOf('data-attr-') === 0){
                    param_name = attribute.name.substr('data-attr-'.length);
                    if (param_name.length > 0) {
                      params[param_name] = attribute.value;
                    }
                  }
                }
                return params;
            })());
        // google analytics
        _gaq.push(['_trackEvent', 'Events' , action, data])
    });

    $(document).on('AnalyticsEvent', function(e) {
        action = e.event_type || false
        data = e.event_name || false

        if (!action || !data)
          return

        params = {}
        params['attribute1'] = e.event_value || ""
        params['attribute7'] = e.integer_event_value

        if (window.HR && window.HR.current_page)
          params['attribute2'] = window.HR.current_page

        if (window.HR && window.HR.current_contest)
          params['attribute3'] = window.HR.current_contest.get('name')

            hr_metrics.batch_track(action, data, params);
        // google analytics
        _gaq.push(['_trackEvent', 'Events' , action, data])
    });
</script>


<!-- Google Tag Manager (noscript) #1 -->
<noscript><iframe src="https://www.googletagmanager.com/ns.html?id=GTM-5FXW96J"
height="0" width="0" style="display:none;visibility:hidden"></iframe></noscript>
<!-- End Google Tag Manager (noscript) #1 -->


</html>
