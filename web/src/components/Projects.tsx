import { ExternalLink } from "lucide-react";
import { projects } from "@/data/projects";
import { Reveal } from "./Reveal";

export function Projects() {
  return (
    <section
      id="projects"
      className="border-t border-white/5 bg-surface/40 px-6 py-24"
    >
      <div className="mx-auto max-w-6xl">
        <Reveal>
          <p className="font-mono text-xs uppercase tracking-widest text-accent-soft">
            Selected Work
          </p>
          <h2 className="mt-3 text-3xl font-semibold tracking-tight text-foreground sm:text-4xl">
            Projects
          </h2>
        </Reveal>

        <div className="mt-12 grid gap-5 sm:grid-cols-2 lg:grid-cols-3">
          {projects.map((project, i) => (
            <Reveal key={project.title} delay={i * 0.08}>
              <a
                href={project.href}
                target="_blank"
                rel="noopener noreferrer"
                className="group relative flex h-full flex-col rounded-2xl border border-white/[0.06] bg-background/60 p-6 backdrop-blur-sm transition-all duration-300 hover:border-accent/30 hover:bg-accent/5 hover:shadow-lg hover:shadow-accent/5 focus-visible:outline-2 focus-visible:outline-offset-2 focus-visible:outline-accent-soft"
              >
                <div className="flex items-start justify-between gap-3">
                  <h3 className="text-base font-medium text-foreground transition-colors group-hover:text-accent-soft">
                    {project.title}
                  </h3>
                  <ExternalLink
                    className="size-4 shrink-0 text-muted/50 transition-all duration-200 group-hover:translate-x-0.5 group-hover:-translate-y-0.5 group-hover:text-accent-soft"
                    aria-hidden="true"
                  />
                </div>

                <p className="mt-3 text-sm leading-relaxed text-muted">
                  {project.description}
                </p>

                <div className="mt-auto flex flex-wrap gap-2 pt-4">
                  {project.tags.map((tag) => (
                    <span
                      key={tag}
                      className="inline-flex items-center rounded-md border border-white/[0.06] bg-white/[0.03] px-2.5 py-1 font-mono text-[11px] text-muted"
                    >
                      {tag}
                    </span>
                  ))}
                </div>
              </a>
            </Reveal>
          ))}
        </div>
      </div>
    </section>
  );
}
