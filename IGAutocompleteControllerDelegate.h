

@protocol IGAutocompleteControllerDelegate <NSObject>
@optional
-(void)autocompleteController:(id)arg1 willShowTableView:(id)arg2;
-(void)autocompleteController:(id)arg1 willHideTableView:(id)arg2;
-(void)autocompleteControllerDidAutocomplete:(id)arg1;

@end

