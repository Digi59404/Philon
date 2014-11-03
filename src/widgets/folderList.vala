namespace philon {
	class folderList : Granite.Widgets.SourceList {
        public Granite.Widgets.SourceList.ExpandableItem projectList;

        public folderList(){
            projectList = new Granite.Widgets.SourceList.ExpandableItem("Loading...");
            projectList.collapsible = false;
            projectList.expanded = true;
            this.root.add(projectList);

            this.item_selected.connect((itm) =>{

    		});
        }

	}
}