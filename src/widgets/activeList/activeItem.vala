namespace philon {
	class activeItem : Granite.Widgets.SourceList.Item {

		private string path;
		private philonWindow window;
		private string data;

		public activeItem(philonWindow window, string name, string path){
			this.name = name;
			this.path = path;
			this.window = window;
			this.data = data;

			this.activated.connect(() => {
				this.setActive();
			});
		}

		public void setActive(){
			this.window.wbview.wbview.execute_script("docOpen('"+this.path+"');");
			this.window.wbview.wbview.execute_script("docOpen('"+this.path+"');");
		}

	}
}