namespace philon {
	/* Uh. I know what you're thinking... */
	class folderFolder : Granite.Widgets.SourceList.ExpandableItem {
		private string path;
		private philonWindow window;
		private string data;

		public folderFolder(philonWindow window, string name, string path){
			this.name = name;
			this.path = path;
			this.window = window;
			this.data = data;

			var holder = new Granite.Widgets.SourceList.Item("Loading..");
			this.add(holder);

			this.toggled.connect(() => {
				this.setToggled();
			});
		}
		public void setToggled(){
			this.clear();
			docManager.openFolderFolder(this.path, this, this.window);
			this.window.folderList_i.refilter();
		}

	}
}