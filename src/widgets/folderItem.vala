namespace philon {
	class folderItem : Granite.Widgets.SourceList.Item {
		private string path;
		private philonWindow window;
		private string data;

		public folderItem(philonWindow window, string name, string path){
			this.name = name;
			this.path = path;
			this.window = window;
			this.data = data;

			this.activated.connect(() => {
				this.setActive();
			});
		}
		public void setActive(){
			this.window.activeList_i.root.add( new activeItem(this.window, this.name, this.path));
		}
	}
}