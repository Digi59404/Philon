using Gtk;
using Granite;
using WebKit;

namespace philon {
	class activeNotebook : Granite.Widgets.DynamicNotebook {

		public activeTab 		activeList_t;
		public builderTab 		builderList_t;
		public deploymentTab 	deploymentList_t;

		public activeNotebook() {
			this.show_tabs = true;
			this.allow_drag = false;
			this.allow_new_window = false;
			this.tabs_closable = false;
			this.add_button_visible = false;
			this.force_left = true;

            this.activeList_t = new activeTab();
            this.insert_tab(this.activeList_t, -1);

            this.builderList_t = new builderTab();
            this.insert_tab(this.builderList_t, -1);

            this.deploymentList_t = new deploymentTab();
            this.insert_tab(this.deploymentList_t, -1);

		}
	}
}