using Gtk;
using Granite;
using WebKit;

namespace philon {
	class builderTab : Granite.Widgets.Tab {

		public builderList		builderList_i;

		public builderTab() {
            this.builderList_i = new builderList();

            this.page = this.builderList_i;
            this.label = "B";
		}
	}
}