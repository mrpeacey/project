import { site } from "@/data/site";

export function Footer() {
  return (
    <footer className="border-t border-white/5 px-6 py-10">
      <div className="mx-auto flex max-w-6xl flex-col items-center justify-between gap-4 sm:flex-row">
        <p className="font-mono text-xs text-muted">
          © {new Date().getFullYear()} {site.name}
        </p>
        <p className="font-mono text-xs text-muted/60">
          Built with Next.js &amp; Tailwind CSS
        </p>
      </div>
    </footer>
  );
}
