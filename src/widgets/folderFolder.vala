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

            var file = GLib.File.new_for_path (path);
            FileInfo info = file.query_info(GLib.FileAttribute.STANDARD_CONTENT_TYPE + "," + GLib.FileAttribute.STANDARD_IS_BACKUP + "," + GLib.FileAttribute.STANDARD_IS_HIDDEN + "," + GLib.FileAttribute.STANDARD_DISPLAY_NAME + "," + GLib.FileAttribute.STANDARD_TYPE, FileQueryInfoFlags.NONE);
            this.icon = GLib.ContentType.get_icon(info.get_content_type());

			var holder = new Granite.Widgets.SourceList.Item("Loading..");
			this.add(holder);

			this.toggled.connect(() => {
				this.setActive();
			});

            this.activated.connect(() => {
				this.setActive();
			});
		}
		public void setActive(){
			this.clear();
			docManager.openFolderFolder(this.path, this, this.window);
			this.window.folderList_i.refilter();
		}

	}
}