namespace philon {
	class deploymentItem : Granite.Widgets.SourceList.Item {

		private string path;
		private philonWindow window;
		private string data;

		public deploymentItem(philonWindow window, string name, string path){
			this.name = name;
			this.path = path;
			this.window = window;
			this.data = data;

			this.activated.connect(() => {
				this.setActive();
			});
		}

		public void setActive(){

		}

	}
}