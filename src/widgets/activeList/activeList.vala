namespace philon {
	class activeList : Granite.Widgets.SourceList {
        private activeItem itm2;
        public activeList(){
            this.item_selected.connect((itm) =>{
				//this.dialog_openFile();
                activeItem itm2 = (philon.activeItem)itm;
                itm2.setActive();
    		});
        }

	}
}