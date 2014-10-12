using Gtk;
using Granite;
using WebKit;

namespace philon {
	class activeTab : Granite.Widgets.Tab {

		public activeList		activeList_i;

		public activeTab() {
            this.activeList_i = new activeList();

            this.page = this.activeList_i;
            this.label = "F";

            //this.insert_tab(this.activeList_t, -1);

         //   return this;
		}
	}
}