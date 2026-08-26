import { ArrowUpRight, Mail } from "lucide-react";
import { GithubIcon, LinkedinIcon } from "./BrandIcons";
import { site } from "@/data/site";
import { Reveal } from "./Reveal";

const channels = [
  { icon: Mail, label: "Email", value: site.email, href: `mailto:${site.email}` },
  { icon: GithubIcon, label: "GitHub", value: "@mrpeacey", href: site.github },
  { icon: LinkedinIcon, label: "LinkedIn", value: "Connect", href: site.linkedin },
];

export function Contact() {
  return (
    <section
      id="contact"
      className="relative overflow-hidden border-t border-white/5 bg-surface/40 px-6 py-24"
    >
      <div
        aria-hidden="true"
        className="pointer-events-none absolute -bottom-40 left-1/2 size-[32rem] -translate-x-1/2 rounded-full bg-accent/15 blur-[120px]"
      />

      <div className="relative mx-auto max-w-6xl">
        <Reveal>
          <p className="font-mono text-xs uppercase tracking-widest text-accent-soft">
            Get in touch
          </p>
          <h2 className="mt-3 max-w-2xl text-3xl font-semibold tracking-tight text-foreground sm:text-4xl">
            Let&apos;s build something together
          </h2>
          <p className="mt-5 max-w-lg text-lg leading-relaxed text-muted">
            Open to internships, collaborations, and interesting problems. The
            fastest way to reach me is email.
          </p>
        </Reveal>

        <div className="mt-12 grid gap-4 sm:grid-cols-3">
          {channels.map(({ icon: Icon, label, value, href }, i) => (
            <Reveal key={label} delay={i * 0.08}>
              <a
                href={href}
                target={href.startsWith("http") ? "_blank" : undefined}
                rel={href.startsWith("http") ? "noopener noreferrer" : undefined}
                className="group flex items-center gap-4 rounded-2xl border border-white/[0.06] bg-background/60 p-5 backdrop-blur-sm transition-all duration-300 hover:border-accent/30 hover:bg-accent/5 focus-visible:outline-2 focus-visible:outline-offset-2 focus-visible:outline-accent-soft"
              >
                <span className="flex size-10 shrink-0 items-center justify-center rounded-xl border border-white/[0.06] bg-white/[0.03] text-accent-soft transition-colors group-hover:border-accent/30 group-hover:bg-accent/10">
                  <Icon className="size-[18px]" aria-hidden="true" />
                </span>
                <span className="min-w-0 flex-1">
                  <span className="block font-mono text-[11px] uppercase tracking-widest text-muted">
                    {label}
                  </span>
                  <span className="block truncate text-sm text-foreground">
                    {value}
                  </span>
                </span>
                <ArrowUpRight
                  className="size-4 shrink-0 text-muted/50 transition-all duration-200 group-hover:translate-x-0.5 group-hover:-translate-y-0.5 group-hover:text-accent-soft"
                  aria-hidden="true"
                />
              </a>
            </Reveal>
          ))}
        </div>
      </div>
    </section>
  );
}
