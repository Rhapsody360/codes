// Define an array of search queries
let cp = require("child_process");

const queries = [
    "https://www.bing.com/search?q=JavaScript+tutorial&qs=n&form=QBRE&sp=-1&lq=0&pq=javascript+tutorial&sc=11-19&sk=&cvid=869933EE8BB74477A5D2930C744F7997&ghsh=0&ghacc=0&ghpl=&adlt=strict&toWww=1&redig=522ADA97B9AA479AB0A7ADC99CB19E15",
    "https://www.bing.com/search?q=web+development+tools&cvid=1097f0d7dc1745619cf34be0a277d517&aqs=edge.0.0j46j0l7.1183j0j9&FORM=ANAB01&PC=U531&adlt=strict&toWww=1&redig=837D4EFAB30F4846BB7227A3015C6A1C",
    "best online courses",
    "coding bootcamps near me",
    "front-end frameworks",
    "React vs Angular",
    "CSS animation libraries",
    "web design trends",
    "UX best practices",
    "SEO tips and tricks",
    "digital marketing strategies",
    "growth hacking techniques",
    "social media analytics",
    "online collaboration tools",
    "project management software",
    "virtual team building activities",
    "remote work productivity",
    "work-life balance",
    "mental health resources",
    "mindfulness exercises",
    "healthy lifestyle habits",
    "vegan recipes",
    "home workout routines",
    "DIY home improvement",
    "gardening tips",
    "travel destinations",
    "budget travel hacks",
    "backpacking essentials",
    "solo travel safety",
    "language learning apps"
  ];
  
  // Define the base URL for Bing search queries
  const bingUrl = "https://www.bing.com/search?q=";
  
  // Open each search query in a new tab
  queries.forEach(query => {
    let browserstart = cp.execSync("start msedge "+bingUrl + encodeURIComponent(query));
  });