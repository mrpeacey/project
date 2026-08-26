"use client";

import { ArrowUpRight } from "lucide-react";
import { BlackHoleHeroSection } from "@/components/ui/blackhole-hero-section";
import { GithubIcon } from "./BrandIcons";
import { useNarrow } from "@/hooks/useNarrow";
import { site } from "@/data/site";

export function Hero() {
  const narrow = useNarrow();

  return (
    <section className="relative min-h-[92svh] w-full md:min-h-[720px]">
      <BlackHoleHeroSection
        focus={narrow ? [0.5, 0.78] : [0.74, 0.44]}
        scrim={narrow ? "top" : "left"}
        scrimStrength={0.92}
        distance={24}
        elevation={narrow ? -7 : -5.5}
        fov={narrow ? 58 : 42}
        glow={narrow ? 0.85 : 1}
        steps={narrow ? 200 : 300}
        resolution={narrow ? 0.6 : 0.7}
        hotColor="#EEF0FF"
        midColor="#818CF8"
        coolColor="#3B2E8F"
      >
        <div className="flex h-full min-h-[92svh] items-start px-6 pt-24 sm:px-10 md:min-h-[720px] md:items-center md:pt-0 lg:px-20">
          <div className="max-w-[34rem]">
            <p className="inline-flex items-center gap-2 rounded-full border border-white/10 bg-white/5 px-3.5 py-1.5 font-mono text-xs text-white/70 backdrop-blur-md">
              <span className="size-1.5 rounded-full bg-emerald-400" />
              Available for opportunities
            </p>

            <h1 className="mt-8 text-[2.5rem] font-semibold leading-[1.05] tracking-tight text-white sm:text-6xl lg:text-[4.25rem]">
              {site.name}
              <span className="block bg-gradient-to-br from-accent-soft to-accent bg-clip-text text-transparent">
                {site.tagline}
              </span>
            </h1>

            <p className="mt-6 max-w-md text-[0.95rem] leading-relaxed text-white/60 md:mt-7">
              {site.intro}
            </p>

            <div className="mt-8 flex flex-wrap items-center gap-3 md:mt-10">
              <a
                href="#projects"
                className="group inline-flex h-12 items-center justify-center gap-2 rounded-xl bg-accent px-6 text-sm font-medium text-white shadow-lg shadow-accent/25 transition-all duration-200 ease-out hover:bg-accent-soft hover:shadow-accent/40 focus-visible:outline-2 focus-visible:outline-offset-2 focus-visible:outline-accent-soft"
              >
                View my work
                <ArrowUpRight
                  className="size-4 transition-transform duration-200 group-hover:translate-x-0.5 group-hover:-translate-y-0.5"
                  aria-hidden="true"
                />
              </a>
              <a
                href={site.github}
                target="_blank"
                rel="noopener noreferrer"
                className="inline-flex h-12 items-center justify-center gap-2 rounded-xl border border-white/15 bg-white/5 px-6 text-sm font-medium text-white backdrop-blur-md transition-all duration-200 ease-out hover:border-white/30 hover:bg-white/10 focus-visible:outline-2 focus-visible:outline-offset-2 focus-visible:outline-accent-soft"
              >
                <GithubIcon className="size-4" />
                GitHub
              </a>
            </div>
          </div>
        </div>
      </BlackHoleHeroSection>
    </section>
  );
}
