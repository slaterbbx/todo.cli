![Just TODO it CLI](gitBanner.png)

### WORK IN PROGRESS
Not yet functioning, still in the planning stages. Stay tuned.

# Just TODO.cli it
## CLI command line todo: list app

#### Work in progress CLI for a GUI project managment system thats integrated with Git and project files
- Simple CLI interface for a CLI / GUI todo list app ( cross team project managment )
- Possible plugins for monday.com or similar
- GUI version will be created in React / Electron ( pc / mac / linux ) and React Native for Android / ios devices.
- Static backend will be managed using a combination of files and git to upload lists / sync too ( local option )
- Project based todo lists piggy back off of Git
- Live backend database sync ( payed service ) for large project management with CI / CD integration options easily available

#### Important considerations
The goal is to create a CLI that integrates with a projects codebase to handle "todo" tasks that are put into projects code via direct input, or CLI. A GUI ( mobile and desktop ) will be created for higher level project managers / investers to pass down "tasks" that can get picked up / handed out to programming team members via GUI app or CLI. The codebase will sync up with a live database or run in local project only via git managment. Files are parsed, organized and managed automatically via custom syntax.