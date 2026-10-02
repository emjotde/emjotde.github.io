# emjotde.github.io

Personal website and technical blog for Marcin Junczys-Dowmunt, built with
[Astro](https://astro.build/).

## Local development

Use Node.js 22 or newer:

```console
npm install
npm run dev
```

The production build includes Astro's type and content checks:

```console
npm run build
```

## Content

- Blog posts: `src/content/blog/`
- Page templates: `src/pages/`
- Shared components and layout: `src/components/` and `src/layouts/`
- Site-wide design: `src/styles/global.css`
- Preserved publication PDFs and project archives: `public/`

Pushes to `master` deploy through `.github/workflows/deploy.yml`.
