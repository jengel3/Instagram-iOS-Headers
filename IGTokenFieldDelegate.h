

@protocol IGTokenFieldDelegate <NSObject>
@required
-(id)tokenFieldViewForTokenOverlay:(id)arg1;
-(void)tokenFieldWillFocusUser:(id)arg1;
-(void)tokenFieldDidBeginEditing:(id)arg1;
-(char)tokenFieldCanFinishEditing:(id)arg1;
-(void)tokenFieldDidRequestSearch:(id)arg1;
-(void)tokenField:(id)arg1 didChangeQuery:(id)arg2;
-(void)tokenField:(id)arg1 didDeleteToken:(id)arg2;
-(void)tokenFieldWillBeginEditing:(id)arg1;

@end

