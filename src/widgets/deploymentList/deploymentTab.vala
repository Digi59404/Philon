using Gtk;
using Granite;
using WebKit;

namespace philon {
	class deploymentTab : Granite.Widgets.Tab {

		public deploymentList		deploymentList_i;

		public deploymentTab() {
            this.deploymentList_i = new deploymentList();

            this.page = this.deploymentList_i;
            this.label = "D";
		}
	}
}