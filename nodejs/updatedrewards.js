let cp = require("child_process");
const searchQueries = [
  "JavaScript tutorial",
  "How to learn React",
  "Node.js vs. Django",
  "Best web development tools",
  "Introduction to machine learning",
  "What is data science",
  "Top programming languages in 2023",
  "Web development trends in 2023",
  "How to create a website",
  "How to create a mobile app",
  "Introduction to iOS development",
  "Introduction to Android development",
  "How to use Git",
  "Best text editors for coding",
  "How to optimize website speed",
  "Web accessibility best practices",
  "How to design a user interface",
  "Introduction to UX design",
  "Benefits of responsive design",
  "How to create email marketing campaigns",
  "Social media marketing tips",
  "How to use Google Analytics",
  "SEO best practices",
  "How to use WordPress",
  "Benefits of content marketing",
  "How to create engaging video content",
  "Introduction to podcasting",
  "Public speaking tips",
  "How to build a personal brand",
  "Best tech careers"
];

function search(query) {
  const searchUrl = `https://www.bing.com/search?q=${encodeURIComponent(query)}`;
  let browserstart = cp.execSync("start msedge "+searchUrl, "_blank");
}

for (let i = 0; i < searchQueries.length; i++) {
  setTimeout(() => {
    search(searchQueries[i]);
  }, i * 7000); // 7 seconds delay
}