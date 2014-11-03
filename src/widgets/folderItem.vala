namespace philon {
	class folderItem : Granite.Widgets.SourceList.Item {
		private string path;
		private philonWindow window;
		private string data;
        private FileInfo info;

		public folderItem(philonWindow window, string name, string path){
			this.name = name;
			this.path = path;
			this.window = window;
			this.data = data;
            var file = GLib.File.new_for_path (path);
            FileInfo info = file.query_info(GLib.FileAttribute.STANDARD_CONTENT_TYPE + "," + GLib.FileAttribute.STANDARD_IS_BACKUP + "," + GLib.FileAttribute.STANDARD_IS_HIDDEN + "," + GLib.FileAttribute.STANDARD_DISPLAY_NAME + "," + GLib.FileAttribute.STANDARD_TYPE, FileQueryInfoFlags.NONE);
            this.icon = GLib.ContentType.get_icon(info.get_content_type());

			this.activated.connect(() => {
				this.setActive();
			});
		}
		public void setActive(){
			this.window.activeNotebook_i.activeList_t.activeList_i.root.add( new activeItem(this.window, this.name, this.path));
		}
	}
}