export interface Project {
  title: string;
  description: string;
  tags: string[];
  href: string;
  year: string;
}

export interface SkillGroup {
  label: string;
  items: string[];
}

export const site = {
  name: "DiovNull",
  role: "Computer Science Student & Developer",
  tagline: "puzzles left unsolved",
  intro:
    "I build things with code — from low-level C++ data structures to modern web interfaces. Currently working through algorithms, systems programming, and everything in between.",
  email: "hello@example.com",
  github: "https://github.com/mrpeacey",
  linkedin: "#",
} as const;
